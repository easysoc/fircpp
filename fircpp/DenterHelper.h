#ifndef DENTERHELPER_H
#define DENTERHELPER_H


#include "CommonToken.h"
#include "Token.h"
#include "Lexer.h"
#include <queue>

namespace fircpp {

using namespace antlr4;

class InjectedToken : public CommonToken {
//    std::string typeText;
public:
    InjectedToken(Token *oldToken/*, const std::string &tokenTypeStr*/);
};

class DenterHelper {
public:
    Lexer *lexer;
    std::queue<Token *> dentsBuffer;
    std::deque<int> indentations;

    // token type
    size_t nlToken, indentToken, dedentToken;
    bool reachedEof;

    DenterHelper(Lexer *lexer);

    // old token
    std::unique_ptr<Token> pullToken();
    // injected token
    std::unique_ptr<Token> nextToken();
private:
    void initIfFirstRun();
    Token * createToken(size_t tokenType, Token * copyFrom);
    Token * handleNewlineToken(Token * t);
    Token *unwindTo(int targetIndent, Token *copyFrom);
    Token *eofHandler(Token *t,Token *origin);
};

}
#endif // DENTERHELPER_H
