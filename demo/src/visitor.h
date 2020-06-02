#ifndef VISITOR_H
#define VISITOR_H

#include "FIRRTLBaseVisitor.h"
#include "FIRRTLParser.h"

namespace fircpp {

class Visitor : public FIRRTLBaseVisitor
{
public:
    Visitor(FIRRTLParser *parser);

    virtual antlrcpp::Any visitCircuit(FIRRTLParser::CircuitContext *ctx) override;
private:
    FIRRTLParser *parser;
};

}
#endif // VISITOR_H
