
// Generated from /home/itviewer/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "FIRRTLListener.h"


namespace fircpp {

/**
 * This class provides an empty implementation of FIRRTLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  FIRRTLBaseListener : public FIRRTLListener {
public:

  virtual void enterCircuit(FIRRTLParser::CircuitContext * /*ctx*/) override { }
  virtual void exitCircuit(FIRRTLParser::CircuitContext * /*ctx*/) override { }

  virtual void enterModule(FIRRTLParser::ModuleContext * /*ctx*/) override { }
  virtual void exitModule(FIRRTLParser::ModuleContext * /*ctx*/) override { }

  virtual void enterPort(FIRRTLParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(FIRRTLParser::PortContext * /*ctx*/) override { }

  virtual void enterDir(FIRRTLParser::DirContext * /*ctx*/) override { }
  virtual void exitDir(FIRRTLParser::DirContext * /*ctx*/) override { }

  virtual void enterType(FIRRTLParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(FIRRTLParser::TypeContext * /*ctx*/) override { }

  virtual void enterField(FIRRTLParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(FIRRTLParser::FieldContext * /*ctx*/) override { }

  virtual void enterDefname(FIRRTLParser::DefnameContext * /*ctx*/) override { }
  virtual void exitDefname(FIRRTLParser::DefnameContext * /*ctx*/) override { }

  virtual void enterParameter(FIRRTLParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(FIRRTLParser::ParameterContext * /*ctx*/) override { }

  virtual void enterModuleBlock(FIRRTLParser::ModuleBlockContext * /*ctx*/) override { }
  virtual void exitModuleBlock(FIRRTLParser::ModuleBlockContext * /*ctx*/) override { }

  virtual void enterSimple_reset0(FIRRTLParser::Simple_reset0Context * /*ctx*/) override { }
  virtual void exitSimple_reset0(FIRRTLParser::Simple_reset0Context * /*ctx*/) override { }

  virtual void enterSimple_reset(FIRRTLParser::Simple_resetContext * /*ctx*/) override { }
  virtual void exitSimple_reset(FIRRTLParser::Simple_resetContext * /*ctx*/) override { }

  virtual void enterReset_block(FIRRTLParser::Reset_blockContext * /*ctx*/) override { }
  virtual void exitReset_block(FIRRTLParser::Reset_blockContext * /*ctx*/) override { }

  virtual void enterStmt(FIRRTLParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(FIRRTLParser::StmtContext * /*ctx*/) override { }

  virtual void enterMemField(FIRRTLParser::MemFieldContext * /*ctx*/) override { }
  virtual void exitMemField(FIRRTLParser::MemFieldContext * /*ctx*/) override { }

  virtual void enterSimple_stmt(FIRRTLParser::Simple_stmtContext * /*ctx*/) override { }
  virtual void exitSimple_stmt(FIRRTLParser::Simple_stmtContext * /*ctx*/) override { }

  virtual void enterSuite(FIRRTLParser::SuiteContext * /*ctx*/) override { }
  virtual void exitSuite(FIRRTLParser::SuiteContext * /*ctx*/) override { }

  virtual void enterWhen(FIRRTLParser::WhenContext * /*ctx*/) override { }
  virtual void exitWhen(FIRRTLParser::WhenContext * /*ctx*/) override { }

  virtual void enterInfo(FIRRTLParser::InfoContext * /*ctx*/) override { }
  virtual void exitInfo(FIRRTLParser::InfoContext * /*ctx*/) override { }

  virtual void enterMdir(FIRRTLParser::MdirContext * /*ctx*/) override { }
  virtual void exitMdir(FIRRTLParser::MdirContext * /*ctx*/) override { }

  virtual void enterRuw(FIRRTLParser::RuwContext * /*ctx*/) override { }
  virtual void exitRuw(FIRRTLParser::RuwContext * /*ctx*/) override { }

  virtual void enterExp(FIRRTLParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(FIRRTLParser::ExpContext * /*ctx*/) override { }

  virtual void enterId(FIRRTLParser::IdContext * /*ctx*/) override { }
  virtual void exitId(FIRRTLParser::IdContext * /*ctx*/) override { }

  virtual void enterFieldId(FIRRTLParser::FieldIdContext * /*ctx*/) override { }
  virtual void exitFieldId(FIRRTLParser::FieldIdContext * /*ctx*/) override { }

  virtual void enterIntLit(FIRRTLParser::IntLitContext * /*ctx*/) override { }
  virtual void exitIntLit(FIRRTLParser::IntLitContext * /*ctx*/) override { }

  virtual void enterLowerBound(FIRRTLParser::LowerBoundContext * /*ctx*/) override { }
  virtual void exitLowerBound(FIRRTLParser::LowerBoundContext * /*ctx*/) override { }

  virtual void enterUpperBound(FIRRTLParser::UpperBoundContext * /*ctx*/) override { }
  virtual void exitUpperBound(FIRRTLParser::UpperBoundContext * /*ctx*/) override { }

  virtual void enterBoundValue(FIRRTLParser::BoundValueContext * /*ctx*/) override { }
  virtual void exitBoundValue(FIRRTLParser::BoundValueContext * /*ctx*/) override { }

  virtual void enterKeywordAsId(FIRRTLParser::KeywordAsIdContext * /*ctx*/) override { }
  virtual void exitKeywordAsId(FIRRTLParser::KeywordAsIdContext * /*ctx*/) override { }

  virtual void enterPrimop(FIRRTLParser::PrimopContext * /*ctx*/) override { }
  virtual void exitPrimop(FIRRTLParser::PrimopContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace fircpp
