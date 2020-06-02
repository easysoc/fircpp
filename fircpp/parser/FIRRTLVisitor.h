
// Generated from /home/itviewer/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "FIRRTLParser.h"


namespace fircpp {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by FIRRTLParser.
 */
class  FIRRTLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by FIRRTLParser.
   */
    virtual antlrcpp::Any visitCircuit(FIRRTLParser::CircuitContext *context) = 0;

    virtual antlrcpp::Any visitModule(FIRRTLParser::ModuleContext *context) = 0;

    virtual antlrcpp::Any visitPort(FIRRTLParser::PortContext *context) = 0;

    virtual antlrcpp::Any visitDir(FIRRTLParser::DirContext *context) = 0;

    virtual antlrcpp::Any visitType(FIRRTLParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitField(FIRRTLParser::FieldContext *context) = 0;

    virtual antlrcpp::Any visitDefname(FIRRTLParser::DefnameContext *context) = 0;

    virtual antlrcpp::Any visitParameter(FIRRTLParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitModuleBlock(FIRRTLParser::ModuleBlockContext *context) = 0;

    virtual antlrcpp::Any visitSimple_reset0(FIRRTLParser::Simple_reset0Context *context) = 0;

    virtual antlrcpp::Any visitSimple_reset(FIRRTLParser::Simple_resetContext *context) = 0;

    virtual antlrcpp::Any visitReset_block(FIRRTLParser::Reset_blockContext *context) = 0;

    virtual antlrcpp::Any visitStmt(FIRRTLParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitMemField(FIRRTLParser::MemFieldContext *context) = 0;

    virtual antlrcpp::Any visitSimple_stmt(FIRRTLParser::Simple_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSuite(FIRRTLParser::SuiteContext *context) = 0;

    virtual antlrcpp::Any visitWhen(FIRRTLParser::WhenContext *context) = 0;

    virtual antlrcpp::Any visitInfo(FIRRTLParser::InfoContext *context) = 0;

    virtual antlrcpp::Any visitMdir(FIRRTLParser::MdirContext *context) = 0;

    virtual antlrcpp::Any visitRuw(FIRRTLParser::RuwContext *context) = 0;

    virtual antlrcpp::Any visitExp(FIRRTLParser::ExpContext *context) = 0;

    virtual antlrcpp::Any visitId(FIRRTLParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitFieldId(FIRRTLParser::FieldIdContext *context) = 0;

    virtual antlrcpp::Any visitIntLit(FIRRTLParser::IntLitContext *context) = 0;

    virtual antlrcpp::Any visitLowerBound(FIRRTLParser::LowerBoundContext *context) = 0;

    virtual antlrcpp::Any visitUpperBound(FIRRTLParser::UpperBoundContext *context) = 0;

    virtual antlrcpp::Any visitBoundValue(FIRRTLParser::BoundValueContext *context) = 0;

    virtual antlrcpp::Any visitKeywordAsId(FIRRTLParser::KeywordAsIdContext *context) = 0;

    virtual antlrcpp::Any visitPrimop(FIRRTLParser::PrimopContext *context) = 0;


};

}  // namespace fircpp
