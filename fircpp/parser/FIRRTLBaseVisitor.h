
// Generated from /home/itviewer/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.8

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

  virtual antlrcpp::Any visitCircuit(FIRRTLParser::CircuitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModule(FIRRTLParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPort(FIRRTLParser::PortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir(FIRRTLParser::DirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(FIRRTLParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(FIRRTLParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefname(FIRRTLParser::DefnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(FIRRTLParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleBlock(FIRRTLParser::ModuleBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_reset0(FIRRTLParser::Simple_reset0Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_reset(FIRRTLParser::Simple_resetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReset_block(FIRRTLParser::Reset_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(FIRRTLParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemField(FIRRTLParser::MemFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_stmt(FIRRTLParser::Simple_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuite(FIRRTLParser::SuiteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhen(FIRRTLParser::WhenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfo(FIRRTLParser::InfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMdir(FIRRTLParser::MdirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuw(FIRRTLParser::RuwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExp(FIRRTLParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(FIRRTLParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldId(FIRRTLParser::FieldIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntLit(FIRRTLParser::IntLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLowerBound(FIRRTLParser::LowerBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpperBound(FIRRTLParser::UpperBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoundValue(FIRRTLParser::BoundValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeywordAsId(FIRRTLParser::KeywordAsIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimop(FIRRTLParser::PrimopContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace fircpp
