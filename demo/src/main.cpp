
#include <iostream>

#include "antlr4-runtime.h"
#include "FIRRTLLexer.h"
#include "FIRRTLParser.h"

#include "visitor.h"

using namespace fircpp;
using namespace antlr4;

int main(int argc, char *argv[])
{
    if (argc == 1) {
        std::cout << "Please specify the firrtl file" << std::endl;
        return -1;
    }
    std::ifstream stream;
    std::string filename = argv[1];
    stream.open(filename);
    if( !stream )
    {
      std::cout << "Unable to open file: " << filename << std::endl;
      return -1;
    }

    ANTLRInputStream input(stream);
    FIRRTLLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

//    tokens.fill();
//    for (auto token : tokens.getTokens()) {
//        size_t type = token->getType();
//        std::string typeString = "";
//        if (type == FIRRTLParser::INDENT) {
//            typeString = " indent";
//        } else if(type == FIRRTLParser::DEDENT){
//            typeString = " dedent";
//        }

//        std::cout << token->toString() << typeString << std::endl;
////        std::cout << token->getText();
//    }

    FIRRTLParser parser(&tokens);

    // CircuitContext <- ParserRuleContext <- RuleContext <- ParseTree
    tree::ParseTree* tree = parser.circuit();

    Visitor visitor(&parser);

    Circuit *circuit = visitor.visit(tree);
    std::cout << circuit->serialize();

//    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    return 0;
}
