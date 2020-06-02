
// Generated from /home/itviewer/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "FIRRTLParser.h"


namespace fircpp {

/**
 * This interface defines an abstract listener for a parse tree produced by FIRRTLParser.
 */
class  FIRRTLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCircuit(FIRRTLParser::CircuitContext *ctx) = 0;
  virtual void exitCircuit(FIRRTLParser::CircuitContext *ctx) = 0;

  virtual void enterModule(FIRRTLParser::ModuleContext *ctx) = 0;
  virtual void exitModule(FIRRTLParser::ModuleContext *ctx) = 0;

  virtual void enterPort(FIRRTLParser::PortContext *ctx) = 0;
  virtual void exitPort(FIRRTLParser::PortContext *ctx) = 0;

  virtual void enterDir(FIRRTLParser::DirContext *ctx) = 0;
  virtual void exitDir(FIRRTLParser::DirContext *ctx) = 0;

  virtual void enterType(FIRRTLParser::TypeContext *ctx) = 0;
  virtual void exitType(FIRRTLParser::TypeContext *ctx) = 0;

  virtual void enterField(FIRRTLParser::FieldContext *ctx) = 0;
  virtual void exitField(FIRRTLParser::FieldContext *ctx) = 0;

  virtual void enterDefname(FIRRTLParser::DefnameContext *ctx) = 0;
  virtual void exitDefname(FIRRTLParser::DefnameContext *ctx) = 0;

  virtual void enterParameter(FIRRTLParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(FIRRTLParser::ParameterContext *ctx) = 0;

  virtual void enterModuleBlock(FIRRTLParser::ModuleBlockContext *ctx) = 0;
  virtual void exitModuleBlock(FIRRTLParser::ModuleBlockContext *ctx) = 0;

  virtual void enterSimple_reset0(FIRRTLParser::Simple_reset0Context *ctx) = 0;
  virtual void exitSimple_reset0(FIRRTLParser::Simple_reset0Context *ctx) = 0;

  virtual void enterSimple_reset(FIRRTLParser::Simple_resetContext *ctx) = 0;
  virtual void exitSimple_reset(FIRRTLParser::Simple_resetContext *ctx) = 0;

  virtual void enterReset_block(FIRRTLParser::Reset_blockContext *ctx) = 0;
  virtual void exitReset_block(FIRRTLParser::Reset_blockContext *ctx) = 0;

  virtual void enterStmt(FIRRTLParser::StmtContext *ctx) = 0;
  virtual void exitStmt(FIRRTLParser::StmtContext *ctx) = 0;

  virtual void enterMemField(FIRRTLParser::MemFieldContext *ctx) = 0;
  virtual void exitMemField(FIRRTLParser::MemFieldContext *ctx) = 0;

  virtual void enterSimple_stmt(FIRRTLParser::Simple_stmtContext *ctx) = 0;
  virtual void exitSimple_stmt(FIRRTLParser::Simple_stmtContext *ctx) = 0;

  virtual void enterSuite(FIRRTLParser::SuiteContext *ctx) = 0;
  virtual void exitSuite(FIRRTLParser::SuiteContext *ctx) = 0;

  virtual void enterWhen(FIRRTLParser::WhenContext *ctx) = 0;
  virtual void exitWhen(FIRRTLParser::WhenContext *ctx) = 0;

  virtual void enterInfo(FIRRTLParser::InfoContext *ctx) = 0;
  virtual void exitInfo(FIRRTLParser::InfoContext *ctx) = 0;

  virtual void enterMdir(FIRRTLParser::MdirContext *ctx) = 0;
  virtual void exitMdir(FIRRTLParser::MdirContext *ctx) = 0;

  virtual void enterRuw(FIRRTLParser::RuwContext *ctx) = 0;
  virtual void exitRuw(FIRRTLParser::RuwContext *ctx) = 0;

  virtual void enterExp(FIRRTLParser::ExpContext *ctx) = 0;
  virtual void exitExp(FIRRTLParser::ExpContext *ctx) = 0;

  virtual void enterId(FIRRTLParser::IdContext *ctx) = 0;
  virtual void exitId(FIRRTLParser::IdContext *ctx) = 0;

  virtual void enterFieldId(FIRRTLParser::FieldIdContext *ctx) = 0;
  virtual void exitFieldId(FIRRTLParser::FieldIdContext *ctx) = 0;

  virtual void enterIntLit(FIRRTLParser::IntLitContext *ctx) = 0;
  virtual void exitIntLit(FIRRTLParser::IntLitContext *ctx) = 0;

  virtual void enterLowerBound(FIRRTLParser::LowerBoundContext *ctx) = 0;
  virtual void exitLowerBound(FIRRTLParser::LowerBoundContext *ctx) = 0;

  virtual void enterUpperBound(FIRRTLParser::UpperBoundContext *ctx) = 0;
  virtual void exitUpperBound(FIRRTLParser::UpperBoundContext *ctx) = 0;

  virtual void enterBoundValue(FIRRTLParser::BoundValueContext *ctx) = 0;
  virtual void exitBoundValue(FIRRTLParser::BoundValueContext *ctx) = 0;

  virtual void enterKeywordAsId(FIRRTLParser::KeywordAsIdContext *ctx) = 0;
  virtual void exitKeywordAsId(FIRRTLParser::KeywordAsIdContext *ctx) = 0;

  virtual void enterPrimop(FIRRTLParser::PrimopContext *ctx) = 0;
  virtual void exitPrimop(FIRRTLParser::PrimopContext *ctx) = 0;


};

}  // namespace fircpp
