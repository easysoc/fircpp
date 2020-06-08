#include "parser/FIRRTLLexer.h"
#include "parser/FIRRTLParser.h"

using namespace fircpp;

DenterHelper::DenterHelper(Lexer * lexer) : lexer(lexer)
{
    nlToken     = FIRRTLLexer::NEWLINE;
    indentToken = FIRRTLParser::INDENT;
    dedentToken = FIRRTLParser::DEDENT;
}

std::unique_ptr<Token>
DenterHelper::pullToken()
{
    return lexer->Lexer::nextToken();
}

std::unique_ptr<Token>
DenterHelper::nextToken()
{
    initIfFirstRun();
    std::unique_ptr<Token> t;
    if (dentsBuffer.empty()) {
        t = pullToken();
    } else {
        t = std::unique_ptr<Token>(dentsBuffer.front());
        dentsBuffer.pop();
    }
    if (reachedEof) {
        return t;
    }

    //    std::string ttt = t->getText();
    //    std::cout << ttt;

    if (t->getType() == nlToken) {
        Token *nlToken = t.get();
        t.release();
        return std::unique_ptr<Token>(handleNewlineToken(nlToken));
    }
    return t;
}

void
DenterHelper::initIfFirstRun()
{
    if (indentations.empty()) {
        indentations.push_front(0);
        // First invocation. Look for the first non-NL. Enqueue it, and possibly an indentation if that non-NL
        // token doesn't start at char 0.
        std::unique_ptr<Token> firstRealToken;
        do {
            firstRealToken = pullToken();
        } while (firstRealToken->getType() == nlToken);

        if (firstRealToken->getCharPositionInLine() > 0) {
            indentations.push_front(firstRealToken->getCharPositionInLine());
            dentsBuffer.push(createToken(indentToken, firstRealToken.get()));
        }
        dentsBuffer.push(firstRealToken.get());
        firstRealToken.release();
    }
}

Token *
DenterHelper::createToken(size_t tokenType, Token * copyFrom)
{
    CommonToken * r = new CommonToken(copyFrom);
    r->setType(tokenType);
    return r;
}

Token *
DenterHelper::handleNewlineToken(Token * t)
{
    Token * origin = t;
    std::unique_ptr<Token> tt = pullToken();
    Token * nextNext = tt.get();

    tt.release();

    while (nextNext->getType() == nlToken) {
        t        = nextNext;
        origin = merge(origin,t);   // merge all newline
        tt       = pullToken();
        nextNext = tt.get();
        tt.release();
    }
    if (nextNext->getType() == Token::EOF) {
        return eofHandler(nextNext, origin);
    }
    // nextNext is now a non-NL token; we'll queue it up after any possible dents

    std::string nlText = t->getText();
    int indent         = nlText.length() - 1; // every NL has one \n char, so shorten the length to account for it
    if (indent > 0 && nlText.at(0) == '\r') {
        --indent; // If the NL also has a \r char, we should account for that as well
    }
    int prevIndent = indentations.front();
    Token * r;
    if (indent == prevIndent) {
        r = origin; // just a newline
    } else if (indent > prevIndent) {
        r = createToken(indentToken, origin);
        indentations.push_front(indent);
    } else {
        r = unwindTo(indent, origin);
    }
    dentsBuffer.push(nextNext);
    return r;
}

/**
 * Returns a DEDENT token, and also queues up additional DEDENTS as necessary.
 * @param targetIndent the "size" of the indentation (number of spaces) by the end
 * @param copyFrom the triggering token
 * @return a DEDENT token
 */
Token *
DenterHelper::unwindTo(int targetIndent, Token * copyFrom)
{
    //    assert dentsBuffer.isEmpty() : dentsBuffer;
    //    dentsBuffer.add(createToken(nlToken, copyFrom));
    // To make things easier, we'll queue up ALL of the dedents, and then pop off the first one.
    // For example, here's how some text is analyzed:
    //
    //  Text          :  Indentation  :  Action         : Indents Deque
    //  [ baseline ]  :  0            :  nothing        : [0]
    //  [   foo    ]  :  2            :  INDENT         : [0, 2]
    //  [    bar   ]  :  3            :  INDENT         : [0, 2, 3]
    //  [ baz      ]  :  0            :  DEDENT x2      : [0]

    while (true) {
        int prevIndent = indentations.front();
        indentations.pop_front();

        if (prevIndent == targetIndent) {
            break;
        }
        if (targetIndent > prevIndent) {
            // "weird" condition above
            indentations.push_front(prevIndent); // restore previous indentation, since we've indented from it
            dentsBuffer.push(createToken(indentToken, copyFrom));
            break;
        }
        dentsBuffer.push(createToken(dedentToken, copyFrom));
    }
    indentations.push_front(targetIndent);

    Token * t = dentsBuffer.front();
    dentsBuffer.pop();
    return t;
}

Token *
DenterHelper::eofHandler(Token * t, Token * origin)
{
    Token * r;

    // when we reach EOF, unwind all indentations. If there aren't any, insert a NL. This lets the grammar treat
    // un-indented expressions as just being NL-terminated, rather than NL|EOF.
    if (indentations.empty()) {
        r = createToken(nlToken, origin);
        dentsBuffer.push(t);
    } else {
        r = unwindTo(0, origin);
        dentsBuffer.push(t);
    }
    reachedEof = true;
    return r;
}

Token *DenterHelper::merge(Token *start, Token *end)
{
    CommonToken * r = new CommonToken(start);
    r->setText(start->getText() + end->getText());
//    r->setStopIndex(end->getStopIndex());
    return r;
}
