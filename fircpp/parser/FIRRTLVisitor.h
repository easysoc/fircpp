
// Generated from /media/itviewer/linux/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.11.1

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
    virtual std::any visitCircuit(FIRRTLParser::CircuitContext *context) = 0;

    virtual std::any visitModule(FIRRTLParser::ModuleContext *context) = 0;

    virtual std::any visitPort(FIRRTLParser::PortContext *context) = 0;

    virtual std::any visitDir(FIRRTLParser::DirContext *context) = 0;

    virtual std::any visitType(FIRRTLParser::TypeContext *context) = 0;

    virtual std::any visitField(FIRRTLParser::FieldContext *context) = 0;

    virtual std::any visitDefname(FIRRTLParser::DefnameContext *context) = 0;

    virtual std::any visitParameter(FIRRTLParser::ParameterContext *context) = 0;

    virtual std::any visitModuleBlock(FIRRTLParser::ModuleBlockContext *context) = 0;

    virtual std::any visitSimple_reset0(FIRRTLParser::Simple_reset0Context *context) = 0;

    virtual std::any visitSimple_reset(FIRRTLParser::Simple_resetContext *context) = 0;

    virtual std::any visitReset_block(FIRRTLParser::Reset_blockContext *context) = 0;

    virtual std::any visitStmt(FIRRTLParser::StmtContext *context) = 0;

    virtual std::any visitStmtName(FIRRTLParser::StmtNameContext *context) = 0;

    virtual std::any visitMemField(FIRRTLParser::MemFieldContext *context) = 0;

    virtual std::any visitSimple_stmt(FIRRTLParser::Simple_stmtContext *context) = 0;

    virtual std::any visitSuite(FIRRTLParser::SuiteContext *context) = 0;

    virtual std::any visitWhen(FIRRTLParser::WhenContext *context) = 0;

    virtual std::any visitInfo(FIRRTLParser::InfoContext *context) = 0;

    virtual std::any visitMdir(FIRRTLParser::MdirContext *context) = 0;

    virtual std::any visitRuw(FIRRTLParser::RuwContext *context) = 0;

    virtual std::any visitExp(FIRRTLParser::ExpContext *context) = 0;

    virtual std::any visitRef(FIRRTLParser::RefContext *context) = 0;

    virtual std::any visitSubref(FIRRTLParser::SubrefContext *context) = 0;

    virtual std::any visitId(FIRRTLParser::IdContext *context) = 0;

    virtual std::any visitFieldId(FIRRTLParser::FieldIdContext *context) = 0;

    virtual std::any visitIntLit(FIRRTLParser::IntLitContext *context) = 0;

    virtual std::any visitLowerBound(FIRRTLParser::LowerBoundContext *context) = 0;

    virtual std::any visitUpperBound(FIRRTLParser::UpperBoundContext *context) = 0;

    virtual std::any visitBoundValue(FIRRTLParser::BoundValueContext *context) = 0;

    virtual std::any visitKeywordAsId(FIRRTLParser::KeywordAsIdContext *context) = 0;

    virtual std::any visitPrimop(FIRRTLParser::PrimopContext *context) = 0;


};

}  // namespace fircpp
