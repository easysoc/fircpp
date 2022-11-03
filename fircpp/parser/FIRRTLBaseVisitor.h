
// Generated from /media/itviewer/linux/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "FIRRTLVisitor.h"


namespace fircpp {

/**
 * This class provides an empty implementation of FIRRTLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  FIRRTLBaseVisitor : public FIRRTLVisitor {
public:

  virtual std::any visitCircuit(FIRRTLParser::CircuitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule(FIRRTLParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPort(FIRRTLParser::PortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDir(FIRRTLParser::DirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(FIRRTLParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField(FIRRTLParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefname(FIRRTLParser::DefnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(FIRRTLParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleBlock(FIRRTLParser::ModuleBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_reset0(FIRRTLParser::Simple_reset0Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_reset(FIRRTLParser::Simple_resetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReset_block(FIRRTLParser::Reset_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(FIRRTLParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtName(FIRRTLParser::StmtNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemField(FIRRTLParser::MemFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_stmt(FIRRTLParser::Simple_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuite(FIRRTLParser::SuiteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhen(FIRRTLParser::WhenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInfo(FIRRTLParser::InfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMdir(FIRRTLParser::MdirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRuw(FIRRTLParser::RuwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(FIRRTLParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRef(FIRRTLParser::RefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubref(FIRRTLParser::SubrefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(FIRRTLParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldId(FIRRTLParser::FieldIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntLit(FIRRTLParser::IntLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLowerBound(FIRRTLParser::LowerBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpperBound(FIRRTLParser::UpperBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoundValue(FIRRTLParser::BoundValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeywordAsId(FIRRTLParser::KeywordAsIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimop(FIRRTLParser::PrimopContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace fircpp
