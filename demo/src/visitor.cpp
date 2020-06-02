#include "visitor.h"

using namespace fircpp;

Visitor::Visitor(FIRRTLParser *parser) :
    parser(parser)
{

}

antlrcpp::Any Visitor::visitCircuit(FIRRTLParser::CircuitContext *ctx)
{
    // The output of toStringTree() method is not good-looking:
    // COMMENT and WHITESPACE are filtered out, but NEWLINE is preserved. see FIRRTL.g4
    // it does not affect the internal tree structure
//    cout << ctx->toStringTree();

    std::cout << "\n" << ctx->toStringTree(parser) << std::endl;
    return true;
}
