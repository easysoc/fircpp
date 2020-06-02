
// Generated from /home/itviewer/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.8


#include "FIRRTLListener.h"
#include "FIRRTLVisitor.h"

#include "FIRRTLParser.h"


using namespace antlrcpp;
using namespace fircpp;
using namespace antlr4;

FIRRTLParser::FIRRTLParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

FIRRTLParser::~FIRRTLParser() {
  delete _interpreter;
}

std::string FIRRTLParser::getGrammarFileName() const {
  return "FIRRTL.g4";
}

const std::vector<std::string>& FIRRTLParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& FIRRTLParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CircuitContext ------------------------------------------------------------------

FIRRTLParser::CircuitContext::CircuitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::CircuitContext::Key_circuit() {
  return getToken(FIRRTLParser::Key_circuit, 0);
}

FIRRTLParser::IdContext* FIRRTLParser::CircuitContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}

tree::TerminalNode* FIRRTLParser::CircuitContext::INDENT() {
  return getToken(FIRRTLParser::INDENT, 0);
}

tree::TerminalNode* FIRRTLParser::CircuitContext::DEDENT() {
  return getToken(FIRRTLParser::DEDENT, 0);
}

tree::TerminalNode* FIRRTLParser::CircuitContext::EOF() {
  return getToken(FIRRTLParser::EOF, 0);
}

FIRRTLParser::InfoContext* FIRRTLParser::CircuitContext::info() {
  return getRuleContext<FIRRTLParser::InfoContext>(0);
}

std::vector<FIRRTLParser::ModuleContext *> FIRRTLParser::CircuitContext::module() {
  return getRuleContexts<FIRRTLParser::ModuleContext>();
}

FIRRTLParser::ModuleContext* FIRRTLParser::CircuitContext::module(size_t i) {
  return getRuleContext<FIRRTLParser::ModuleContext>(i);
}


size_t FIRRTLParser::CircuitContext::getRuleIndex() const {
  return FIRRTLParser::RuleCircuit;
}

void FIRRTLParser::CircuitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCircuit(this);
}

void FIRRTLParser::CircuitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCircuit(this);
}


antlrcpp::Any FIRRTLParser::CircuitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitCircuit(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::CircuitContext* FIRRTLParser::circuit() {
  CircuitContext *_localctx = _tracker.createInstance<CircuitContext>(_ctx, getState());
  enterRule(_localctx, 0, FIRRTLParser::RuleCircuit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(FIRRTLParser::Key_circuit);
    setState(59);
    id();
    setState(60);
    match(FIRRTLParser::T__0);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FIRRTLParser::FileInfo) {
      setState(61);
      info();
    }
    setState(64);
    match(FIRRTLParser::INDENT);
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FIRRTLParser::Key_module

    || _la == FIRRTLParser::Key_extmodule) {
      setState(65);
      module();
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    match(FIRRTLParser::DEDENT);
    setState(72);
    match(FIRRTLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

FIRRTLParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::ModuleContext::Key_module() {
  return getToken(FIRRTLParser::Key_module, 0);
}

FIRRTLParser::IdContext* FIRRTLParser::ModuleContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}

tree::TerminalNode* FIRRTLParser::ModuleContext::INDENT() {
  return getToken(FIRRTLParser::INDENT, 0);
}

FIRRTLParser::ModuleBlockContext* FIRRTLParser::ModuleContext::moduleBlock() {
  return getRuleContext<FIRRTLParser::ModuleBlockContext>(0);
}

tree::TerminalNode* FIRRTLParser::ModuleContext::DEDENT() {
  return getToken(FIRRTLParser::DEDENT, 0);
}

FIRRTLParser::InfoContext* FIRRTLParser::ModuleContext::info() {
  return getRuleContext<FIRRTLParser::InfoContext>(0);
}

std::vector<FIRRTLParser::PortContext *> FIRRTLParser::ModuleContext::port() {
  return getRuleContexts<FIRRTLParser::PortContext>();
}

FIRRTLParser::PortContext* FIRRTLParser::ModuleContext::port(size_t i) {
  return getRuleContext<FIRRTLParser::PortContext>(i);
}

tree::TerminalNode* FIRRTLParser::ModuleContext::Key_extmodule() {
  return getToken(FIRRTLParser::Key_extmodule, 0);
}

FIRRTLParser::DefnameContext* FIRRTLParser::ModuleContext::defname() {
  return getRuleContext<FIRRTLParser::DefnameContext>(0);
}

std::vector<FIRRTLParser::ParameterContext *> FIRRTLParser::ModuleContext::parameter() {
  return getRuleContexts<FIRRTLParser::ParameterContext>();
}

FIRRTLParser::ParameterContext* FIRRTLParser::ModuleContext::parameter(size_t i) {
  return getRuleContext<FIRRTLParser::ParameterContext>(i);
}


size_t FIRRTLParser::ModuleContext::getRuleIndex() const {
  return FIRRTLParser::RuleModule;
}

void FIRRTLParser::ModuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModule(this);
}

void FIRRTLParser::ModuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModule(this);
}


antlrcpp::Any FIRRTLParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::ModuleContext* FIRRTLParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 2, FIRRTLParser::RuleModule);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Key_module: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        match(FIRRTLParser::Key_module);
        setState(75);
        id();
        setState(76);
        match(FIRRTLParser::T__0);
        setState(78);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::FileInfo) {
          setState(77);
          info();
        }
        setState(80);
        match(FIRRTLParser::INDENT);
        setState(84);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(81);
            port(); 
          }
          setState(86);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        }
        setState(87);
        moduleBlock();
        setState(88);
        match(FIRRTLParser::DEDENT);
        break;
      }

      case FIRRTLParser::Key_extmodule: {
        enterOuterAlt(_localctx, 2);
        setState(90);
        match(FIRRTLParser::Key_extmodule);
        setState(91);
        id();
        setState(92);
        match(FIRRTLParser::T__0);
        setState(94);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::FileInfo) {
          setState(93);
          info();
        }
        setState(96);
        match(FIRRTLParser::INDENT);
        setState(100);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FIRRTLParser::Key_input

        || _la == FIRRTLParser::Key_output) {
          setState(97);
          port();
          setState(102);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(104);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::T__11) {
          setState(103);
          defname();
        }
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FIRRTLParser::Key_parameter) {
          setState(106);
          parameter();
          setState(111);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(112);
        match(FIRRTLParser::DEDENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PortContext ------------------------------------------------------------------

FIRRTLParser::PortContext::PortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::DirContext* FIRRTLParser::PortContext::dir() {
  return getRuleContext<FIRRTLParser::DirContext>(0);
}

FIRRTLParser::IdContext* FIRRTLParser::PortContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}

FIRRTLParser::TypeContext* FIRRTLParser::PortContext::type() {
  return getRuleContext<FIRRTLParser::TypeContext>(0);
}

tree::TerminalNode* FIRRTLParser::PortContext::NEWLINE() {
  return getToken(FIRRTLParser::NEWLINE, 0);
}

FIRRTLParser::InfoContext* FIRRTLParser::PortContext::info() {
  return getRuleContext<FIRRTLParser::InfoContext>(0);
}


size_t FIRRTLParser::PortContext::getRuleIndex() const {
  return FIRRTLParser::RulePort;
}

void FIRRTLParser::PortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPort(this);
}

void FIRRTLParser::PortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPort(this);
}


antlrcpp::Any FIRRTLParser::PortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitPort(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::PortContext* FIRRTLParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 4, FIRRTLParser::RulePort);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    dir();
    setState(117);
    id();
    setState(118);
    match(FIRRTLParser::T__0);
    setState(119);
    type(0);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FIRRTLParser::FileInfo) {
      setState(120);
      info();
    }
    setState(123);
    match(FIRRTLParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirContext ------------------------------------------------------------------

FIRRTLParser::DirContext::DirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::DirContext::Key_input() {
  return getToken(FIRRTLParser::Key_input, 0);
}

tree::TerminalNode* FIRRTLParser::DirContext::Key_output() {
  return getToken(FIRRTLParser::Key_output, 0);
}


size_t FIRRTLParser::DirContext::getRuleIndex() const {
  return FIRRTLParser::RuleDir;
}

void FIRRTLParser::DirContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDir(this);
}

void FIRRTLParser::DirContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDir(this);
}


antlrcpp::Any FIRRTLParser::DirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitDir(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::DirContext* FIRRTLParser::dir() {
  DirContext *_localctx = _tracker.createInstance<DirContext>(_ctx, getState());
  enterRule(_localctx, 6, FIRRTLParser::RuleDir);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::Key_input

    || _la == FIRRTLParser::Key_output)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

FIRRTLParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::TypeContext::Key_UInt() {
  return getToken(FIRRTLParser::Key_UInt, 0);
}

std::vector<FIRRTLParser::IntLitContext *> FIRRTLParser::TypeContext::intLit() {
  return getRuleContexts<FIRRTLParser::IntLitContext>();
}

FIRRTLParser::IntLitContext* FIRRTLParser::TypeContext::intLit(size_t i) {
  return getRuleContext<FIRRTLParser::IntLitContext>(i);
}

tree::TerminalNode* FIRRTLParser::TypeContext::Key_SInt() {
  return getToken(FIRRTLParser::Key_SInt, 0);
}

tree::TerminalNode* FIRRTLParser::TypeContext::Key_Fixed() {
  return getToken(FIRRTLParser::Key_Fixed, 0);
}

FIRRTLParser::LowerBoundContext* FIRRTLParser::TypeContext::lowerBound() {
  return getRuleContext<FIRRTLParser::LowerBoundContext>(0);
}

std::vector<FIRRTLParser::BoundValueContext *> FIRRTLParser::TypeContext::boundValue() {
  return getRuleContexts<FIRRTLParser::BoundValueContext>();
}

FIRRTLParser::BoundValueContext* FIRRTLParser::TypeContext::boundValue(size_t i) {
  return getRuleContext<FIRRTLParser::BoundValueContext>(i);
}

FIRRTLParser::UpperBoundContext* FIRRTLParser::TypeContext::upperBound() {
  return getRuleContext<FIRRTLParser::UpperBoundContext>(0);
}

tree::TerminalNode* FIRRTLParser::TypeContext::Key_Clock() {
  return getToken(FIRRTLParser::Key_Clock, 0);
}

tree::TerminalNode* FIRRTLParser::TypeContext::Key_Analog() {
  return getToken(FIRRTLParser::Key_Analog, 0);
}

std::vector<FIRRTLParser::FieldContext *> FIRRTLParser::TypeContext::field() {
  return getRuleContexts<FIRRTLParser::FieldContext>();
}

FIRRTLParser::FieldContext* FIRRTLParser::TypeContext::field(size_t i) {
  return getRuleContext<FIRRTLParser::FieldContext>(i);
}

FIRRTLParser::TypeContext* FIRRTLParser::TypeContext::type() {
  return getRuleContext<FIRRTLParser::TypeContext>(0);
}


size_t FIRRTLParser::TypeContext::getRuleIndex() const {
  return FIRRTLParser::RuleType;
}

void FIRRTLParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void FIRRTLParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any FIRRTLParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}


FIRRTLParser::TypeContext* FIRRTLParser::type() {
   return type(0);
}

FIRRTLParser::TypeContext* FIRRTLParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  FIRRTLParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  FIRRTLParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, FIRRTLParser::RuleType, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Key_UInt: {
        setState(128);
        match(FIRRTLParser::Key_UInt);
        setState(133);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          setState(129);
          match(FIRRTLParser::T__1);
          setState(130);
          intLit();
          setState(131);
          match(FIRRTLParser::T__2);
          break;
        }

        }
        break;
      }

      case FIRRTLParser::Key_SInt: {
        setState(135);
        match(FIRRTLParser::Key_SInt);
        setState(140);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          setState(136);
          match(FIRRTLParser::T__1);
          setState(137);
          intLit();
          setState(138);
          match(FIRRTLParser::T__2);
          break;
        }

        }
        break;
      }

      case FIRRTLParser::Key_Fixed: {
        setState(142);
        match(FIRRTLParser::Key_Fixed);
        setState(147);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          setState(143);
          match(FIRRTLParser::T__1);
          setState(144);
          intLit();
          setState(145);
          match(FIRRTLParser::T__2);
          break;
        }

        }
        setState(155);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(149);
          match(FIRRTLParser::T__1);
          setState(150);
          match(FIRRTLParser::T__1);
          setState(151);
          intLit();
          setState(152);
          match(FIRRTLParser::T__2);
          setState(153);
          match(FIRRTLParser::T__2);
          break;
        }

        }
        break;
      }

      case FIRRTLParser::T__3: {
        setState(157);
        match(FIRRTLParser::T__3);
        setState(163);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          setState(158);
          lowerBound();
          setState(159);
          boundValue();
          setState(160);
          boundValue();
          setState(161);
          upperBound();
          break;
        }

        }
        setState(167);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(165);
          match(FIRRTLParser::T__4);
          setState(166);
          intLit();
          break;
        }

        }
        break;
      }

      case FIRRTLParser::Key_Clock: {
        setState(169);
        match(FIRRTLParser::Key_Clock);
        break;
      }

      case FIRRTLParser::T__5: {
        setState(170);
        match(FIRRTLParser::T__5);
        break;
      }

      case FIRRTLParser::T__6: {
        setState(171);
        match(FIRRTLParser::T__6);
        break;
      }

      case FIRRTLParser::Key_Analog: {
        setState(172);
        match(FIRRTLParser::Key_Analog);
        setState(177);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(173);
          match(FIRRTLParser::T__1);
          setState(174);
          intLit();
          setState(175);
          match(FIRRTLParser::T__2);
          break;
        }

        }
        break;
      }

      case FIRRTLParser::T__7: {
        setState(179);
        match(FIRRTLParser::T__7);
        setState(183);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FIRRTLParser::T__13 || ((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (FIRRTLParser::Key_circuit - 71))
          | (1ULL << (FIRRTLParser::Key_module - 71))
          | (1ULL << (FIRRTLParser::Key_extmodule - 71))
          | (1ULL << (FIRRTLParser::Key_parameter - 71))
          | (1ULL << (FIRRTLParser::Key_input - 71))
          | (1ULL << (FIRRTLParser::Key_output - 71))
          | (1ULL << (FIRRTLParser::Key_UInt - 71))
          | (1ULL << (FIRRTLParser::Key_SInt - 71))
          | (1ULL << (FIRRTLParser::Key_Clock - 71))
          | (1ULL << (FIRRTLParser::Key_Analog - 71))
          | (1ULL << (FIRRTLParser::Key_Fixed - 71))
          | (1ULL << (FIRRTLParser::Key_flip - 71))
          | (1ULL << (FIRRTLParser::Key_wire - 71))
          | (1ULL << (FIRRTLParser::Key_reg - 71))
          | (1ULL << (FIRRTLParser::Key_with - 71))
          | (1ULL << (FIRRTLParser::Key_mem - 71))
          | (1ULL << (FIRRTLParser::Key_depth - 71))
          | (1ULL << (FIRRTLParser::Key_reader - 71))
          | (1ULL << (FIRRTLParser::Key_writer - 71))
          | (1ULL << (FIRRTLParser::Key_readwriter - 71))
          | (1ULL << (FIRRTLParser::Key_inst - 71))
          | (1ULL << (FIRRTLParser::Key_of - 71))
          | (1ULL << (FIRRTLParser::Key_node - 71))
          | (1ULL << (FIRRTLParser::Key_is - 71))
          | (1ULL << (FIRRTLParser::Key_invalid - 71))
          | (1ULL << (FIRRTLParser::Key_when - 71))
          | (1ULL << (FIRRTLParser::Key_else - 71))
          | (1ULL << (FIRRTLParser::Key_stop - 71))
          | (1ULL << (FIRRTLParser::Key_printf - 71))
          | (1ULL << (FIRRTLParser::Key_skip - 71))
          | (1ULL << (FIRRTLParser::Key_old - 71))
          | (1ULL << (FIRRTLParser::Key_new - 71))
          | (1ULL << (FIRRTLParser::Key_undefined - 71))
          | (1ULL << (FIRRTLParser::Key_mux - 71))
          | (1ULL << (FIRRTLParser::Key_validif - 71))
          | (1ULL << (FIRRTLParser::Key_cmem - 71))
          | (1ULL << (FIRRTLParser::Key_smem - 71))
          | (1ULL << (FIRRTLParser::Key_mport - 71))
          | (1ULL << (FIRRTLParser::Key_infer - 71))
          | (1ULL << (FIRRTLParser::Key_read - 71))
          | (1ULL << (FIRRTLParser::Key_write - 71))
          | (1ULL << (FIRRTLParser::Key_rdwr - 71))
          | (1ULL << (FIRRTLParser::UnsignedInt - 71))
          | (1ULL << (FIRRTLParser::Id - 71))
          | (1ULL << (FIRRTLParser::RelaxedId - 71)))) != 0)) {
          setState(180);
          field();
          setState(185);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(186);
        match(FIRRTLParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleType);
        setState(189);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(190);
        match(FIRRTLParser::T__9);
        setState(191);
        intLit();
        setState(192);
        match(FIRRTLParser::T__10); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

FIRRTLParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::FieldIdContext* FIRRTLParser::FieldContext::fieldId() {
  return getRuleContext<FIRRTLParser::FieldIdContext>(0);
}

FIRRTLParser::TypeContext* FIRRTLParser::FieldContext::type() {
  return getRuleContext<FIRRTLParser::TypeContext>(0);
}

tree::TerminalNode* FIRRTLParser::FieldContext::Key_flip() {
  return getToken(FIRRTLParser::Key_flip, 0);
}


size_t FIRRTLParser::FieldContext::getRuleIndex() const {
  return FIRRTLParser::RuleField;
}

void FIRRTLParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void FIRRTLParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}


antlrcpp::Any FIRRTLParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::FieldContext* FIRRTLParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 10, FIRRTLParser::RuleField);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(199);
      match(FIRRTLParser::Key_flip);
      break;
    }

    }
    setState(202);
    fieldId();
    setState(203);
    match(FIRRTLParser::T__0);
    setState(204);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefnameContext ------------------------------------------------------------------

FIRRTLParser::DefnameContext::DefnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::IdContext* FIRRTLParser::DefnameContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}

tree::TerminalNode* FIRRTLParser::DefnameContext::NEWLINE() {
  return getToken(FIRRTLParser::NEWLINE, 0);
}


size_t FIRRTLParser::DefnameContext::getRuleIndex() const {
  return FIRRTLParser::RuleDefname;
}

void FIRRTLParser::DefnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefname(this);
}

void FIRRTLParser::DefnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefname(this);
}


antlrcpp::Any FIRRTLParser::DefnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitDefname(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::DefnameContext* FIRRTLParser::defname() {
  DefnameContext *_localctx = _tracker.createInstance<DefnameContext>(_ctx, getState());
  enterRule(_localctx, 12, FIRRTLParser::RuleDefname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(FIRRTLParser::T__11);
    setState(207);
    match(FIRRTLParser::T__12);
    setState(208);
    id();
    setState(209);
    match(FIRRTLParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

FIRRTLParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::ParameterContext::Key_parameter() {
  return getToken(FIRRTLParser::Key_parameter, 0);
}

FIRRTLParser::IdContext* FIRRTLParser::ParameterContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}

FIRRTLParser::IntLitContext* FIRRTLParser::ParameterContext::intLit() {
  return getRuleContext<FIRRTLParser::IntLitContext>(0);
}

tree::TerminalNode* FIRRTLParser::ParameterContext::NEWLINE() {
  return getToken(FIRRTLParser::NEWLINE, 0);
}

tree::TerminalNode* FIRRTLParser::ParameterContext::StringLit() {
  return getToken(FIRRTLParser::StringLit, 0);
}

tree::TerminalNode* FIRRTLParser::ParameterContext::DoubleLit() {
  return getToken(FIRRTLParser::DoubleLit, 0);
}

tree::TerminalNode* FIRRTLParser::ParameterContext::RawString() {
  return getToken(FIRRTLParser::RawString, 0);
}


size_t FIRRTLParser::ParameterContext::getRuleIndex() const {
  return FIRRTLParser::RuleParameter;
}

void FIRRTLParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void FIRRTLParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any FIRRTLParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::ParameterContext* FIRRTLParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, FIRRTLParser::RuleParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(235);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(211);
      match(FIRRTLParser::Key_parameter);
      setState(212);
      id();
      setState(213);
      match(FIRRTLParser::T__12);
      setState(214);
      intLit();
      setState(215);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(217);
      match(FIRRTLParser::Key_parameter);
      setState(218);
      id();
      setState(219);
      match(FIRRTLParser::T__12);
      setState(220);
      match(FIRRTLParser::StringLit);
      setState(221);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(223);
      match(FIRRTLParser::Key_parameter);
      setState(224);
      id();
      setState(225);
      match(FIRRTLParser::T__12);
      setState(226);
      match(FIRRTLParser::DoubleLit);
      setState(227);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(229);
      match(FIRRTLParser::Key_parameter);
      setState(230);
      id();
      setState(231);
      match(FIRRTLParser::T__12);
      setState(232);
      match(FIRRTLParser::RawString);
      setState(233);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleBlockContext ------------------------------------------------------------------

FIRRTLParser::ModuleBlockContext::ModuleBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FIRRTLParser::Simple_stmtContext *> FIRRTLParser::ModuleBlockContext::simple_stmt() {
  return getRuleContexts<FIRRTLParser::Simple_stmtContext>();
}

FIRRTLParser::Simple_stmtContext* FIRRTLParser::ModuleBlockContext::simple_stmt(size_t i) {
  return getRuleContext<FIRRTLParser::Simple_stmtContext>(i);
}


size_t FIRRTLParser::ModuleBlockContext::getRuleIndex() const {
  return FIRRTLParser::RuleModuleBlock;
}

void FIRRTLParser::ModuleBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleBlock(this);
}

void FIRRTLParser::ModuleBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleBlock(this);
}


antlrcpp::Any FIRRTLParser::ModuleBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitModuleBlock(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::ModuleBlockContext* FIRRTLParser::moduleBlock() {
  ModuleBlockContext *_localctx = _tracker.createInstance<ModuleBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, FIRRTLParser::RuleModuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FIRRTLParser::T__13)
      | (1ULL << FIRRTLParser::T__19)
      | (1ULL << FIRRTLParser::T__20)
      | (1ULL << FIRRTLParser::T__21)
      | (1ULL << FIRRTLParser::T__26)
      | (1ULL << FIRRTLParser::T__27)
      | (1ULL << FIRRTLParser::T__29)
      | (1ULL << FIRRTLParser::T__30)
      | (1ULL << FIRRTLParser::T__31)
      | (1ULL << FIRRTLParser::T__32)
      | (1ULL << FIRRTLParser::T__33)
      | (1ULL << FIRRTLParser::T__34)
      | (1ULL << FIRRTLParser::T__35)
      | (1ULL << FIRRTLParser::T__36)
      | (1ULL << FIRRTLParser::T__37)
      | (1ULL << FIRRTLParser::T__38)
      | (1ULL << FIRRTLParser::T__39)
      | (1ULL << FIRRTLParser::T__40)
      | (1ULL << FIRRTLParser::T__41)
      | (1ULL << FIRRTLParser::T__42)
      | (1ULL << FIRRTLParser::T__43)
      | (1ULL << FIRRTLParser::T__44)
      | (1ULL << FIRRTLParser::T__45)
      | (1ULL << FIRRTLParser::T__46)
      | (1ULL << FIRRTLParser::T__47)
      | (1ULL << FIRRTLParser::T__48)
      | (1ULL << FIRRTLParser::T__49)
      | (1ULL << FIRRTLParser::T__50)
      | (1ULL << FIRRTLParser::T__51)
      | (1ULL << FIRRTLParser::T__52)
      | (1ULL << FIRRTLParser::T__53)
      | (1ULL << FIRRTLParser::T__54)
      | (1ULL << FIRRTLParser::T__55)
      | (1ULL << FIRRTLParser::T__56)
      | (1ULL << FIRRTLParser::T__57)
      | (1ULL << FIRRTLParser::T__58)
      | (1ULL << FIRRTLParser::T__59)
      | (1ULL << FIRRTLParser::T__60)
      | (1ULL << FIRRTLParser::T__61)
      | (1ULL << FIRRTLParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (FIRRTLParser::T__63 - 64))
      | (1ULL << (FIRRTLParser::T__64 - 64))
      | (1ULL << (FIRRTLParser::T__65 - 64))
      | (1ULL << (FIRRTLParser::T__66 - 64))
      | (1ULL << (FIRRTLParser::T__67 - 64))
      | (1ULL << (FIRRTLParser::T__68 - 64))
      | (1ULL << (FIRRTLParser::T__69 - 64))
      | (1ULL << (FIRRTLParser::Key_circuit - 64))
      | (1ULL << (FIRRTLParser::Key_module - 64))
      | (1ULL << (FIRRTLParser::Key_extmodule - 64))
      | (1ULL << (FIRRTLParser::Key_parameter - 64))
      | (1ULL << (FIRRTLParser::Key_input - 64))
      | (1ULL << (FIRRTLParser::Key_output - 64))
      | (1ULL << (FIRRTLParser::Key_UInt - 64))
      | (1ULL << (FIRRTLParser::Key_SInt - 64))
      | (1ULL << (FIRRTLParser::Key_Clock - 64))
      | (1ULL << (FIRRTLParser::Key_Analog - 64))
      | (1ULL << (FIRRTLParser::Key_Fixed - 64))
      | (1ULL << (FIRRTLParser::Key_flip - 64))
      | (1ULL << (FIRRTLParser::Key_wire - 64))
      | (1ULL << (FIRRTLParser::Key_reg - 64))
      | (1ULL << (FIRRTLParser::Key_with - 64))
      | (1ULL << (FIRRTLParser::Key_mem - 64))
      | (1ULL << (FIRRTLParser::Key_depth - 64))
      | (1ULL << (FIRRTLParser::Key_reader - 64))
      | (1ULL << (FIRRTLParser::Key_writer - 64))
      | (1ULL << (FIRRTLParser::Key_readwriter - 64))
      | (1ULL << (FIRRTLParser::Key_inst - 64))
      | (1ULL << (FIRRTLParser::Key_of - 64))
      | (1ULL << (FIRRTLParser::Key_node - 64))
      | (1ULL << (FIRRTLParser::Key_is - 64))
      | (1ULL << (FIRRTLParser::Key_invalid - 64))
      | (1ULL << (FIRRTLParser::Key_when - 64))
      | (1ULL << (FIRRTLParser::Key_else - 64))
      | (1ULL << (FIRRTLParser::Key_stop - 64))
      | (1ULL << (FIRRTLParser::Key_printf - 64))
      | (1ULL << (FIRRTLParser::Key_skip - 64))
      | (1ULL << (FIRRTLParser::Key_old - 64))
      | (1ULL << (FIRRTLParser::Key_new - 64))
      | (1ULL << (FIRRTLParser::Key_undefined - 64))
      | (1ULL << (FIRRTLParser::Key_mux - 64))
      | (1ULL << (FIRRTLParser::Key_validif - 64))
      | (1ULL << (FIRRTLParser::Key_cmem - 64))
      | (1ULL << (FIRRTLParser::Key_smem - 64))
      | (1ULL << (FIRRTLParser::Key_mport - 64))
      | (1ULL << (FIRRTLParser::Key_infer - 64))
      | (1ULL << (FIRRTLParser::Key_read - 64))
      | (1ULL << (FIRRTLParser::Key_write - 64))
      | (1ULL << (FIRRTLParser::Key_rdwr - 64))
      | (1ULL << (FIRRTLParser::Id - 64))
      | (1ULL << (FIRRTLParser::NEWLINE - 64)))) != 0)) {
      setState(237);
      simple_stmt();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_reset0Context ------------------------------------------------------------------

FIRRTLParser::Simple_reset0Context::Simple_reset0Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FIRRTLParser::ExpContext *> FIRRTLParser::Simple_reset0Context::exp() {
  return getRuleContexts<FIRRTLParser::ExpContext>();
}

FIRRTLParser::ExpContext* FIRRTLParser::Simple_reset0Context::exp(size_t i) {
  return getRuleContext<FIRRTLParser::ExpContext>(i);
}


size_t FIRRTLParser::Simple_reset0Context::getRuleIndex() const {
  return FIRRTLParser::RuleSimple_reset0;
}

void FIRRTLParser::Simple_reset0Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_reset0(this);
}

void FIRRTLParser::Simple_reset0Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_reset0(this);
}


antlrcpp::Any FIRRTLParser::Simple_reset0Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSimple_reset0(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Simple_reset0Context* FIRRTLParser::simple_reset0() {
  Simple_reset0Context *_localctx = _tracker.createInstance<Simple_reset0Context>(_ctx, getState());
  enterRule(_localctx, 18, FIRRTLParser::RuleSimple_reset0);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(FIRRTLParser::T__13);
    setState(244);
    match(FIRRTLParser::T__14);
    setState(245);
    match(FIRRTLParser::T__15);
    setState(246);
    exp(0);
    setState(247);
    exp(0);
    setState(248);
    match(FIRRTLParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_resetContext ------------------------------------------------------------------

FIRRTLParser::Simple_resetContext::Simple_resetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::Simple_reset0Context* FIRRTLParser::Simple_resetContext::simple_reset0() {
  return getRuleContext<FIRRTLParser::Simple_reset0Context>(0);
}


size_t FIRRTLParser::Simple_resetContext::getRuleIndex() const {
  return FIRRTLParser::RuleSimple_reset;
}

void FIRRTLParser::Simple_resetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_reset(this);
}

void FIRRTLParser::Simple_resetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_reset(this);
}


antlrcpp::Any FIRRTLParser::Simple_resetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSimple_reset(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Simple_resetContext* FIRRTLParser::simple_reset() {
  Simple_resetContext *_localctx = _tracker.createInstance<Simple_resetContext>(_ctx, getState());
  enterRule(_localctx, 20, FIRRTLParser::RuleSimple_reset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(255);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(250);
        simple_reset0();
        break;
      }

      case FIRRTLParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(251);
        match(FIRRTLParser::T__15);
        setState(252);
        simple_reset0();
        setState(253);
        match(FIRRTLParser::T__16);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reset_blockContext ------------------------------------------------------------------

FIRRTLParser::Reset_blockContext::Reset_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::Reset_blockContext::INDENT() {
  return getToken(FIRRTLParser::INDENT, 0);
}

FIRRTLParser::Simple_resetContext* FIRRTLParser::Reset_blockContext::simple_reset() {
  return getRuleContext<FIRRTLParser::Simple_resetContext>(0);
}

tree::TerminalNode* FIRRTLParser::Reset_blockContext::DEDENT() {
  return getToken(FIRRTLParser::DEDENT, 0);
}

FIRRTLParser::InfoContext* FIRRTLParser::Reset_blockContext::info() {
  return getRuleContext<FIRRTLParser::InfoContext>(0);
}


size_t FIRRTLParser::Reset_blockContext::getRuleIndex() const {
  return FIRRTLParser::RuleReset_block;
}

void FIRRTLParser::Reset_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReset_block(this);
}

void FIRRTLParser::Reset_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReset_block(this);
}


antlrcpp::Any FIRRTLParser::Reset_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitReset_block(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Reset_blockContext* FIRRTLParser::reset_block() {
  Reset_blockContext *_localctx = _tracker.createInstance<Reset_blockContext>(_ctx, getState());
  enterRule(_localctx, 22, FIRRTLParser::RuleReset_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::INDENT: {
        enterOuterAlt(_localctx, 1);
        setState(257);
        match(FIRRTLParser::INDENT);
        setState(258);
        simple_reset();
        setState(260);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::FileInfo) {
          setState(259);
          info();
        }
        setState(262);
        match(FIRRTLParser::DEDENT);
        break;
      }

      case FIRRTLParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(264);
        match(FIRRTLParser::T__15);
        setState(265);
        simple_reset();
        setState(266);
        match(FIRRTLParser::T__16);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

FIRRTLParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_wire() {
  return getToken(FIRRTLParser::Key_wire, 0);
}

std::vector<FIRRTLParser::IdContext *> FIRRTLParser::StmtContext::id() {
  return getRuleContexts<FIRRTLParser::IdContext>();
}

FIRRTLParser::IdContext* FIRRTLParser::StmtContext::id(size_t i) {
  return getRuleContext<FIRRTLParser::IdContext>(i);
}

FIRRTLParser::TypeContext* FIRRTLParser::StmtContext::type() {
  return getRuleContext<FIRRTLParser::TypeContext>(0);
}

FIRRTLParser::InfoContext* FIRRTLParser::StmtContext::info() {
  return getRuleContext<FIRRTLParser::InfoContext>(0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_reg() {
  return getToken(FIRRTLParser::Key_reg, 0);
}

std::vector<FIRRTLParser::ExpContext *> FIRRTLParser::StmtContext::exp() {
  return getRuleContexts<FIRRTLParser::ExpContext>();
}

FIRRTLParser::ExpContext* FIRRTLParser::StmtContext::exp(size_t i) {
  return getRuleContext<FIRRTLParser::ExpContext>(i);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_with() {
  return getToken(FIRRTLParser::Key_with, 0);
}

FIRRTLParser::Reset_blockContext* FIRRTLParser::StmtContext::reset_block() {
  return getRuleContext<FIRRTLParser::Reset_blockContext>(0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_mem() {
  return getToken(FIRRTLParser::Key_mem, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::INDENT() {
  return getToken(FIRRTLParser::INDENT, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::DEDENT() {
  return getToken(FIRRTLParser::DEDENT, 0);
}

std::vector<FIRRTLParser::MemFieldContext *> FIRRTLParser::StmtContext::memField() {
  return getRuleContexts<FIRRTLParser::MemFieldContext>();
}

FIRRTLParser::MemFieldContext* FIRRTLParser::StmtContext::memField(size_t i) {
  return getRuleContext<FIRRTLParser::MemFieldContext>(i);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_cmem() {
  return getToken(FIRRTLParser::Key_cmem, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_smem() {
  return getToken(FIRRTLParser::Key_smem, 0);
}

FIRRTLParser::RuwContext* FIRRTLParser::StmtContext::ruw() {
  return getRuleContext<FIRRTLParser::RuwContext>(0);
}

FIRRTLParser::MdirContext* FIRRTLParser::StmtContext::mdir() {
  return getRuleContext<FIRRTLParser::MdirContext>(0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_mport() {
  return getToken(FIRRTLParser::Key_mport, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_inst() {
  return getToken(FIRRTLParser::Key_inst, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_of() {
  return getToken(FIRRTLParser::Key_of, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_node() {
  return getToken(FIRRTLParser::Key_node, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_is() {
  return getToken(FIRRTLParser::Key_is, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_invalid() {
  return getToken(FIRRTLParser::Key_invalid, 0);
}

FIRRTLParser::WhenContext* FIRRTLParser::StmtContext::when() {
  return getRuleContext<FIRRTLParser::WhenContext>(0);
}

FIRRTLParser::IntLitContext* FIRRTLParser::StmtContext::intLit() {
  return getRuleContext<FIRRTLParser::IntLitContext>(0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::StringLit() {
  return getToken(FIRRTLParser::StringLit, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_skip() {
  return getToken(FIRRTLParser::Key_skip, 0);
}


size_t FIRRTLParser::StmtContext::getRuleIndex() const {
  return FIRRTLParser::RuleStmt;
}

void FIRRTLParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void FIRRTLParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any FIRRTLParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::StmtContext* FIRRTLParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 24, FIRRTLParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(404);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(270);
      match(FIRRTLParser::Key_wire);
      setState(271);
      id();
      setState(272);
      match(FIRRTLParser::T__0);
      setState(273);
      type(0);
      setState(275);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(274);
        info();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(277);
      match(FIRRTLParser::Key_reg);
      setState(278);
      id();
      setState(279);
      match(FIRRTLParser::T__0);
      setState(280);
      type(0);
      setState(281);
      exp(0);
      setState(285);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
        setState(282);
        match(FIRRTLParser::Key_with);
        setState(283);
        match(FIRRTLParser::T__0);
        setState(284);
        reset_block();
        break;
      }

      }
      setState(288);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(287);
        info();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(290);
      match(FIRRTLParser::Key_mem);
      setState(291);
      id();
      setState(292);
      match(FIRRTLParser::T__0);
      setState(294);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(293);
        info();
      }
      setState(296);
      match(FIRRTLParser::INDENT);
      setState(300);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << FIRRTLParser::T__22)
        | (1ULL << FIRRTLParser::T__23)
        | (1ULL << FIRRTLParser::T__24)
        | (1ULL << FIRRTLParser::T__25))) != 0) || ((((_la - 87) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 87)) & ((1ULL << (FIRRTLParser::Key_depth - 87))
        | (1ULL << (FIRRTLParser::Key_reader - 87))
        | (1ULL << (FIRRTLParser::Key_writer - 87))
        | (1ULL << (FIRRTLParser::Key_readwriter - 87)))) != 0)) {
        setState(297);
        memField();
        setState(302);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(303);
      match(FIRRTLParser::DEDENT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(305);
      match(FIRRTLParser::Key_cmem);
      setState(306);
      id();
      setState(307);
      match(FIRRTLParser::T__0);
      setState(308);
      type(0);
      setState(310);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(309);
        info();
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(312);
      match(FIRRTLParser::Key_smem);
      setState(313);
      id();
      setState(314);
      match(FIRRTLParser::T__0);
      setState(315);
      type(0);
      setState(317);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(316);
        ruw();
        break;
      }

      }
      setState(320);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(319);
        info();
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(322);
      mdir();
      setState(323);
      match(FIRRTLParser::Key_mport);
      setState(324);
      id();
      setState(325);
      match(FIRRTLParser::T__12);
      setState(326);
      id();
      setState(327);
      match(FIRRTLParser::T__9);
      setState(328);
      exp(0);
      setState(329);
      match(FIRRTLParser::T__10);
      setState(330);
      exp(0);
      setState(332);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(331);
        info();
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(334);
      match(FIRRTLParser::Key_inst);
      setState(335);
      id();
      setState(336);
      match(FIRRTLParser::Key_of);
      setState(337);
      id();
      setState(339);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(338);
        info();
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(341);
      match(FIRRTLParser::Key_node);
      setState(342);
      id();
      setState(343);
      match(FIRRTLParser::T__12);
      setState(344);
      exp(0);
      setState(346);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(345);
        info();
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(348);
      exp(0);
      setState(349);
      match(FIRRTLParser::T__17);
      setState(350);
      exp(0);
      setState(352);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(351);
        info();
      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(354);
      exp(0);
      setState(355);
      match(FIRRTLParser::T__18);
      setState(356);
      exp(0);
      setState(358);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(357);
        info();
      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(360);
      exp(0);
      setState(361);
      match(FIRRTLParser::Key_is);
      setState(362);
      match(FIRRTLParser::Key_invalid);
      setState(364);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(363);
        info();
      }
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(366);
      when();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(367);
      match(FIRRTLParser::T__19);
      setState(368);
      exp(0);
      setState(369);
      exp(0);
      setState(370);
      intLit();
      setState(371);
      match(FIRRTLParser::T__16);
      setState(373);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(372);
        info();
      }
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(375);
      match(FIRRTLParser::T__20);
      setState(376);
      exp(0);
      setState(377);
      exp(0);
      setState(378);
      match(FIRRTLParser::StringLit);
      setState(382);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << FIRRTLParser::T__13)
        | (1ULL << FIRRTLParser::T__26)
        | (1ULL << FIRRTLParser::T__27)
        | (1ULL << FIRRTLParser::T__29)
        | (1ULL << FIRRTLParser::T__30)
        | (1ULL << FIRRTLParser::T__31)
        | (1ULL << FIRRTLParser::T__32)
        | (1ULL << FIRRTLParser::T__33)
        | (1ULL << FIRRTLParser::T__34)
        | (1ULL << FIRRTLParser::T__35)
        | (1ULL << FIRRTLParser::T__36)
        | (1ULL << FIRRTLParser::T__37)
        | (1ULL << FIRRTLParser::T__38)
        | (1ULL << FIRRTLParser::T__39)
        | (1ULL << FIRRTLParser::T__40)
        | (1ULL << FIRRTLParser::T__41)
        | (1ULL << FIRRTLParser::T__42)
        | (1ULL << FIRRTLParser::T__43)
        | (1ULL << FIRRTLParser::T__44)
        | (1ULL << FIRRTLParser::T__45)
        | (1ULL << FIRRTLParser::T__46)
        | (1ULL << FIRRTLParser::T__47)
        | (1ULL << FIRRTLParser::T__48)
        | (1ULL << FIRRTLParser::T__49)
        | (1ULL << FIRRTLParser::T__50)
        | (1ULL << FIRRTLParser::T__51)
        | (1ULL << FIRRTLParser::T__52)
        | (1ULL << FIRRTLParser::T__53)
        | (1ULL << FIRRTLParser::T__54)
        | (1ULL << FIRRTLParser::T__55)
        | (1ULL << FIRRTLParser::T__56)
        | (1ULL << FIRRTLParser::T__57)
        | (1ULL << FIRRTLParser::T__58)
        | (1ULL << FIRRTLParser::T__59)
        | (1ULL << FIRRTLParser::T__60)
        | (1ULL << FIRRTLParser::T__61)
        | (1ULL << FIRRTLParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (FIRRTLParser::T__63 - 64))
        | (1ULL << (FIRRTLParser::T__64 - 64))
        | (1ULL << (FIRRTLParser::T__65 - 64))
        | (1ULL << (FIRRTLParser::T__66 - 64))
        | (1ULL << (FIRRTLParser::T__67 - 64))
        | (1ULL << (FIRRTLParser::T__68 - 64))
        | (1ULL << (FIRRTLParser::T__69 - 64))
        | (1ULL << (FIRRTLParser::Key_circuit - 64))
        | (1ULL << (FIRRTLParser::Key_module - 64))
        | (1ULL << (FIRRTLParser::Key_extmodule - 64))
        | (1ULL << (FIRRTLParser::Key_parameter - 64))
        | (1ULL << (FIRRTLParser::Key_input - 64))
        | (1ULL << (FIRRTLParser::Key_output - 64))
        | (1ULL << (FIRRTLParser::Key_UInt - 64))
        | (1ULL << (FIRRTLParser::Key_SInt - 64))
        | (1ULL << (FIRRTLParser::Key_Clock - 64))
        | (1ULL << (FIRRTLParser::Key_Analog - 64))
        | (1ULL << (FIRRTLParser::Key_Fixed - 64))
        | (1ULL << (FIRRTLParser::Key_flip - 64))
        | (1ULL << (FIRRTLParser::Key_wire - 64))
        | (1ULL << (FIRRTLParser::Key_reg - 64))
        | (1ULL << (FIRRTLParser::Key_with - 64))
        | (1ULL << (FIRRTLParser::Key_mem - 64))
        | (1ULL << (FIRRTLParser::Key_depth - 64))
        | (1ULL << (FIRRTLParser::Key_reader - 64))
        | (1ULL << (FIRRTLParser::Key_writer - 64))
        | (1ULL << (FIRRTLParser::Key_readwriter - 64))
        | (1ULL << (FIRRTLParser::Key_inst - 64))
        | (1ULL << (FIRRTLParser::Key_of - 64))
        | (1ULL << (FIRRTLParser::Key_node - 64))
        | (1ULL << (FIRRTLParser::Key_is - 64))
        | (1ULL << (FIRRTLParser::Key_invalid - 64))
        | (1ULL << (FIRRTLParser::Key_when - 64))
        | (1ULL << (FIRRTLParser::Key_else - 64))
        | (1ULL << (FIRRTLParser::Key_stop - 64))
        | (1ULL << (FIRRTLParser::Key_printf - 64))
        | (1ULL << (FIRRTLParser::Key_skip - 64))
        | (1ULL << (FIRRTLParser::Key_old - 64))
        | (1ULL << (FIRRTLParser::Key_new - 64))
        | (1ULL << (FIRRTLParser::Key_undefined - 64))
        | (1ULL << (FIRRTLParser::Key_mux - 64))
        | (1ULL << (FIRRTLParser::Key_validif - 64))
        | (1ULL << (FIRRTLParser::Key_cmem - 64))
        | (1ULL << (FIRRTLParser::Key_smem - 64))
        | (1ULL << (FIRRTLParser::Key_mport - 64))
        | (1ULL << (FIRRTLParser::Key_infer - 64))
        | (1ULL << (FIRRTLParser::Key_read - 64))
        | (1ULL << (FIRRTLParser::Key_write - 64))
        | (1ULL << (FIRRTLParser::Key_rdwr - 64))
        | (1ULL << (FIRRTLParser::Id - 64)))) != 0)) {
        setState(379);
        exp(0);
        setState(384);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(385);
      match(FIRRTLParser::T__16);
      setState(387);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(386);
        info();
      }
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(389);
      match(FIRRTLParser::Key_skip);
      setState(391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(390);
        info();
      }
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(393);
      match(FIRRTLParser::T__21);
      setState(394);
      match(FIRRTLParser::T__15);
      setState(396); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(395);
        exp(0);
        setState(398); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << FIRRTLParser::T__13)
        | (1ULL << FIRRTLParser::T__26)
        | (1ULL << FIRRTLParser::T__27)
        | (1ULL << FIRRTLParser::T__29)
        | (1ULL << FIRRTLParser::T__30)
        | (1ULL << FIRRTLParser::T__31)
        | (1ULL << FIRRTLParser::T__32)
        | (1ULL << FIRRTLParser::T__33)
        | (1ULL << FIRRTLParser::T__34)
        | (1ULL << FIRRTLParser::T__35)
        | (1ULL << FIRRTLParser::T__36)
        | (1ULL << FIRRTLParser::T__37)
        | (1ULL << FIRRTLParser::T__38)
        | (1ULL << FIRRTLParser::T__39)
        | (1ULL << FIRRTLParser::T__40)
        | (1ULL << FIRRTLParser::T__41)
        | (1ULL << FIRRTLParser::T__42)
        | (1ULL << FIRRTLParser::T__43)
        | (1ULL << FIRRTLParser::T__44)
        | (1ULL << FIRRTLParser::T__45)
        | (1ULL << FIRRTLParser::T__46)
        | (1ULL << FIRRTLParser::T__47)
        | (1ULL << FIRRTLParser::T__48)
        | (1ULL << FIRRTLParser::T__49)
        | (1ULL << FIRRTLParser::T__50)
        | (1ULL << FIRRTLParser::T__51)
        | (1ULL << FIRRTLParser::T__52)
        | (1ULL << FIRRTLParser::T__53)
        | (1ULL << FIRRTLParser::T__54)
        | (1ULL << FIRRTLParser::T__55)
        | (1ULL << FIRRTLParser::T__56)
        | (1ULL << FIRRTLParser::T__57)
        | (1ULL << FIRRTLParser::T__58)
        | (1ULL << FIRRTLParser::T__59)
        | (1ULL << FIRRTLParser::T__60)
        | (1ULL << FIRRTLParser::T__61)
        | (1ULL << FIRRTLParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (FIRRTLParser::T__63 - 64))
        | (1ULL << (FIRRTLParser::T__64 - 64))
        | (1ULL << (FIRRTLParser::T__65 - 64))
        | (1ULL << (FIRRTLParser::T__66 - 64))
        | (1ULL << (FIRRTLParser::T__67 - 64))
        | (1ULL << (FIRRTLParser::T__68 - 64))
        | (1ULL << (FIRRTLParser::T__69 - 64))
        | (1ULL << (FIRRTLParser::Key_circuit - 64))
        | (1ULL << (FIRRTLParser::Key_module - 64))
        | (1ULL << (FIRRTLParser::Key_extmodule - 64))
        | (1ULL << (FIRRTLParser::Key_parameter - 64))
        | (1ULL << (FIRRTLParser::Key_input - 64))
        | (1ULL << (FIRRTLParser::Key_output - 64))
        | (1ULL << (FIRRTLParser::Key_UInt - 64))
        | (1ULL << (FIRRTLParser::Key_SInt - 64))
        | (1ULL << (FIRRTLParser::Key_Clock - 64))
        | (1ULL << (FIRRTLParser::Key_Analog - 64))
        | (1ULL << (FIRRTLParser::Key_Fixed - 64))
        | (1ULL << (FIRRTLParser::Key_flip - 64))
        | (1ULL << (FIRRTLParser::Key_wire - 64))
        | (1ULL << (FIRRTLParser::Key_reg - 64))
        | (1ULL << (FIRRTLParser::Key_with - 64))
        | (1ULL << (FIRRTLParser::Key_mem - 64))
        | (1ULL << (FIRRTLParser::Key_depth - 64))
        | (1ULL << (FIRRTLParser::Key_reader - 64))
        | (1ULL << (FIRRTLParser::Key_writer - 64))
        | (1ULL << (FIRRTLParser::Key_readwriter - 64))
        | (1ULL << (FIRRTLParser::Key_inst - 64))
        | (1ULL << (FIRRTLParser::Key_of - 64))
        | (1ULL << (FIRRTLParser::Key_node - 64))
        | (1ULL << (FIRRTLParser::Key_is - 64))
        | (1ULL << (FIRRTLParser::Key_invalid - 64))
        | (1ULL << (FIRRTLParser::Key_when - 64))
        | (1ULL << (FIRRTLParser::Key_else - 64))
        | (1ULL << (FIRRTLParser::Key_stop - 64))
        | (1ULL << (FIRRTLParser::Key_printf - 64))
        | (1ULL << (FIRRTLParser::Key_skip - 64))
        | (1ULL << (FIRRTLParser::Key_old - 64))
        | (1ULL << (FIRRTLParser::Key_new - 64))
        | (1ULL << (FIRRTLParser::Key_undefined - 64))
        | (1ULL << (FIRRTLParser::Key_mux - 64))
        | (1ULL << (FIRRTLParser::Key_validif - 64))
        | (1ULL << (FIRRTLParser::Key_cmem - 64))
        | (1ULL << (FIRRTLParser::Key_smem - 64))
        | (1ULL << (FIRRTLParser::Key_mport - 64))
        | (1ULL << (FIRRTLParser::Key_infer - 64))
        | (1ULL << (FIRRTLParser::Key_read - 64))
        | (1ULL << (FIRRTLParser::Key_write - 64))
        | (1ULL << (FIRRTLParser::Key_rdwr - 64))
        | (1ULL << (FIRRTLParser::Id - 64)))) != 0));
      setState(400);
      match(FIRRTLParser::T__16);
      setState(402);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(401);
        info();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemFieldContext ------------------------------------------------------------------

FIRRTLParser::MemFieldContext::MemFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::TypeContext* FIRRTLParser::MemFieldContext::type() {
  return getRuleContext<FIRRTLParser::TypeContext>(0);
}

tree::TerminalNode* FIRRTLParser::MemFieldContext::NEWLINE() {
  return getToken(FIRRTLParser::NEWLINE, 0);
}

tree::TerminalNode* FIRRTLParser::MemFieldContext::Key_depth() {
  return getToken(FIRRTLParser::Key_depth, 0);
}

FIRRTLParser::IntLitContext* FIRRTLParser::MemFieldContext::intLit() {
  return getRuleContext<FIRRTLParser::IntLitContext>(0);
}

FIRRTLParser::RuwContext* FIRRTLParser::MemFieldContext::ruw() {
  return getRuleContext<FIRRTLParser::RuwContext>(0);
}

tree::TerminalNode* FIRRTLParser::MemFieldContext::Key_reader() {
  return getToken(FIRRTLParser::Key_reader, 0);
}

std::vector<FIRRTLParser::IdContext *> FIRRTLParser::MemFieldContext::id() {
  return getRuleContexts<FIRRTLParser::IdContext>();
}

FIRRTLParser::IdContext* FIRRTLParser::MemFieldContext::id(size_t i) {
  return getRuleContext<FIRRTLParser::IdContext>(i);
}

tree::TerminalNode* FIRRTLParser::MemFieldContext::Key_writer() {
  return getToken(FIRRTLParser::Key_writer, 0);
}

tree::TerminalNode* FIRRTLParser::MemFieldContext::Key_readwriter() {
  return getToken(FIRRTLParser::Key_readwriter, 0);
}


size_t FIRRTLParser::MemFieldContext::getRuleIndex() const {
  return FIRRTLParser::RuleMemField;
}

void FIRRTLParser::MemFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemField(this);
}

void FIRRTLParser::MemFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemField(this);
}


antlrcpp::Any FIRRTLParser::MemFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitMemField(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::MemFieldContext* FIRRTLParser::memField() {
  MemFieldContext *_localctx = _tracker.createInstance<MemFieldContext>(_ctx, getState());
  enterRule(_localctx, 26, FIRRTLParser::RuleMemField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(458);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__22: {
        enterOuterAlt(_localctx, 1);
        setState(406);
        match(FIRRTLParser::T__22);
        setState(407);
        match(FIRRTLParser::T__14);
        setState(408);
        type(0);
        setState(409);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_depth: {
        enterOuterAlt(_localctx, 2);
        setState(411);
        match(FIRRTLParser::Key_depth);
        setState(412);
        match(FIRRTLParser::T__14);
        setState(413);
        intLit();
        setState(414);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::T__23: {
        enterOuterAlt(_localctx, 3);
        setState(416);
        match(FIRRTLParser::T__23);
        setState(417);
        match(FIRRTLParser::T__14);
        setState(418);
        intLit();
        setState(419);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::T__24: {
        enterOuterAlt(_localctx, 4);
        setState(421);
        match(FIRRTLParser::T__24);
        setState(422);
        match(FIRRTLParser::T__14);
        setState(423);
        intLit();
        setState(424);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::T__25: {
        enterOuterAlt(_localctx, 5);
        setState(426);
        match(FIRRTLParser::T__25);
        setState(427);
        match(FIRRTLParser::T__14);
        setState(428);
        ruw();
        setState(429);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_reader: {
        enterOuterAlt(_localctx, 6);
        setState(431);
        match(FIRRTLParser::Key_reader);
        setState(432);
        match(FIRRTLParser::T__14);
        setState(434); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(433);
          id();
          setState(436); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FIRRTLParser::T__13 || ((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (FIRRTLParser::Key_circuit - 71))
          | (1ULL << (FIRRTLParser::Key_module - 71))
          | (1ULL << (FIRRTLParser::Key_extmodule - 71))
          | (1ULL << (FIRRTLParser::Key_parameter - 71))
          | (1ULL << (FIRRTLParser::Key_input - 71))
          | (1ULL << (FIRRTLParser::Key_output - 71))
          | (1ULL << (FIRRTLParser::Key_UInt - 71))
          | (1ULL << (FIRRTLParser::Key_SInt - 71))
          | (1ULL << (FIRRTLParser::Key_Clock - 71))
          | (1ULL << (FIRRTLParser::Key_Analog - 71))
          | (1ULL << (FIRRTLParser::Key_Fixed - 71))
          | (1ULL << (FIRRTLParser::Key_flip - 71))
          | (1ULL << (FIRRTLParser::Key_wire - 71))
          | (1ULL << (FIRRTLParser::Key_reg - 71))
          | (1ULL << (FIRRTLParser::Key_with - 71))
          | (1ULL << (FIRRTLParser::Key_mem - 71))
          | (1ULL << (FIRRTLParser::Key_depth - 71))
          | (1ULL << (FIRRTLParser::Key_reader - 71))
          | (1ULL << (FIRRTLParser::Key_writer - 71))
          | (1ULL << (FIRRTLParser::Key_readwriter - 71))
          | (1ULL << (FIRRTLParser::Key_inst - 71))
          | (1ULL << (FIRRTLParser::Key_of - 71))
          | (1ULL << (FIRRTLParser::Key_node - 71))
          | (1ULL << (FIRRTLParser::Key_is - 71))
          | (1ULL << (FIRRTLParser::Key_invalid - 71))
          | (1ULL << (FIRRTLParser::Key_when - 71))
          | (1ULL << (FIRRTLParser::Key_else - 71))
          | (1ULL << (FIRRTLParser::Key_stop - 71))
          | (1ULL << (FIRRTLParser::Key_printf - 71))
          | (1ULL << (FIRRTLParser::Key_skip - 71))
          | (1ULL << (FIRRTLParser::Key_old - 71))
          | (1ULL << (FIRRTLParser::Key_new - 71))
          | (1ULL << (FIRRTLParser::Key_undefined - 71))
          | (1ULL << (FIRRTLParser::Key_mux - 71))
          | (1ULL << (FIRRTLParser::Key_validif - 71))
          | (1ULL << (FIRRTLParser::Key_cmem - 71))
          | (1ULL << (FIRRTLParser::Key_smem - 71))
          | (1ULL << (FIRRTLParser::Key_mport - 71))
          | (1ULL << (FIRRTLParser::Key_infer - 71))
          | (1ULL << (FIRRTLParser::Key_read - 71))
          | (1ULL << (FIRRTLParser::Key_write - 71))
          | (1ULL << (FIRRTLParser::Key_rdwr - 71))
          | (1ULL << (FIRRTLParser::Id - 71)))) != 0));
        setState(438);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_writer: {
        enterOuterAlt(_localctx, 7);
        setState(440);
        match(FIRRTLParser::Key_writer);
        setState(441);
        match(FIRRTLParser::T__14);
        setState(443); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(442);
          id();
          setState(445); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FIRRTLParser::T__13 || ((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (FIRRTLParser::Key_circuit - 71))
          | (1ULL << (FIRRTLParser::Key_module - 71))
          | (1ULL << (FIRRTLParser::Key_extmodule - 71))
          | (1ULL << (FIRRTLParser::Key_parameter - 71))
          | (1ULL << (FIRRTLParser::Key_input - 71))
          | (1ULL << (FIRRTLParser::Key_output - 71))
          | (1ULL << (FIRRTLParser::Key_UInt - 71))
          | (1ULL << (FIRRTLParser::Key_SInt - 71))
          | (1ULL << (FIRRTLParser::Key_Clock - 71))
          | (1ULL << (FIRRTLParser::Key_Analog - 71))
          | (1ULL << (FIRRTLParser::Key_Fixed - 71))
          | (1ULL << (FIRRTLParser::Key_flip - 71))
          | (1ULL << (FIRRTLParser::Key_wire - 71))
          | (1ULL << (FIRRTLParser::Key_reg - 71))
          | (1ULL << (FIRRTLParser::Key_with - 71))
          | (1ULL << (FIRRTLParser::Key_mem - 71))
          | (1ULL << (FIRRTLParser::Key_depth - 71))
          | (1ULL << (FIRRTLParser::Key_reader - 71))
          | (1ULL << (FIRRTLParser::Key_writer - 71))
          | (1ULL << (FIRRTLParser::Key_readwriter - 71))
          | (1ULL << (FIRRTLParser::Key_inst - 71))
          | (1ULL << (FIRRTLParser::Key_of - 71))
          | (1ULL << (FIRRTLParser::Key_node - 71))
          | (1ULL << (FIRRTLParser::Key_is - 71))
          | (1ULL << (FIRRTLParser::Key_invalid - 71))
          | (1ULL << (FIRRTLParser::Key_when - 71))
          | (1ULL << (FIRRTLParser::Key_else - 71))
          | (1ULL << (FIRRTLParser::Key_stop - 71))
          | (1ULL << (FIRRTLParser::Key_printf - 71))
          | (1ULL << (FIRRTLParser::Key_skip - 71))
          | (1ULL << (FIRRTLParser::Key_old - 71))
          | (1ULL << (FIRRTLParser::Key_new - 71))
          | (1ULL << (FIRRTLParser::Key_undefined - 71))
          | (1ULL << (FIRRTLParser::Key_mux - 71))
          | (1ULL << (FIRRTLParser::Key_validif - 71))
          | (1ULL << (FIRRTLParser::Key_cmem - 71))
          | (1ULL << (FIRRTLParser::Key_smem - 71))
          | (1ULL << (FIRRTLParser::Key_mport - 71))
          | (1ULL << (FIRRTLParser::Key_infer - 71))
          | (1ULL << (FIRRTLParser::Key_read - 71))
          | (1ULL << (FIRRTLParser::Key_write - 71))
          | (1ULL << (FIRRTLParser::Key_rdwr - 71))
          | (1ULL << (FIRRTLParser::Id - 71)))) != 0));
        setState(447);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_readwriter: {
        enterOuterAlt(_localctx, 8);
        setState(449);
        match(FIRRTLParser::Key_readwriter);
        setState(450);
        match(FIRRTLParser::T__14);
        setState(452); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(451);
          id();
          setState(454); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FIRRTLParser::T__13 || ((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (FIRRTLParser::Key_circuit - 71))
          | (1ULL << (FIRRTLParser::Key_module - 71))
          | (1ULL << (FIRRTLParser::Key_extmodule - 71))
          | (1ULL << (FIRRTLParser::Key_parameter - 71))
          | (1ULL << (FIRRTLParser::Key_input - 71))
          | (1ULL << (FIRRTLParser::Key_output - 71))
          | (1ULL << (FIRRTLParser::Key_UInt - 71))
          | (1ULL << (FIRRTLParser::Key_SInt - 71))
          | (1ULL << (FIRRTLParser::Key_Clock - 71))
          | (1ULL << (FIRRTLParser::Key_Analog - 71))
          | (1ULL << (FIRRTLParser::Key_Fixed - 71))
          | (1ULL << (FIRRTLParser::Key_flip - 71))
          | (1ULL << (FIRRTLParser::Key_wire - 71))
          | (1ULL << (FIRRTLParser::Key_reg - 71))
          | (1ULL << (FIRRTLParser::Key_with - 71))
          | (1ULL << (FIRRTLParser::Key_mem - 71))
          | (1ULL << (FIRRTLParser::Key_depth - 71))
          | (1ULL << (FIRRTLParser::Key_reader - 71))
          | (1ULL << (FIRRTLParser::Key_writer - 71))
          | (1ULL << (FIRRTLParser::Key_readwriter - 71))
          | (1ULL << (FIRRTLParser::Key_inst - 71))
          | (1ULL << (FIRRTLParser::Key_of - 71))
          | (1ULL << (FIRRTLParser::Key_node - 71))
          | (1ULL << (FIRRTLParser::Key_is - 71))
          | (1ULL << (FIRRTLParser::Key_invalid - 71))
          | (1ULL << (FIRRTLParser::Key_when - 71))
          | (1ULL << (FIRRTLParser::Key_else - 71))
          | (1ULL << (FIRRTLParser::Key_stop - 71))
          | (1ULL << (FIRRTLParser::Key_printf - 71))
          | (1ULL << (FIRRTLParser::Key_skip - 71))
          | (1ULL << (FIRRTLParser::Key_old - 71))
          | (1ULL << (FIRRTLParser::Key_new - 71))
          | (1ULL << (FIRRTLParser::Key_undefined - 71))
          | (1ULL << (FIRRTLParser::Key_mux - 71))
          | (1ULL << (FIRRTLParser::Key_validif - 71))
          | (1ULL << (FIRRTLParser::Key_cmem - 71))
          | (1ULL << (FIRRTLParser::Key_smem - 71))
          | (1ULL << (FIRRTLParser::Key_mport - 71))
          | (1ULL << (FIRRTLParser::Key_infer - 71))
          | (1ULL << (FIRRTLParser::Key_read - 71))
          | (1ULL << (FIRRTLParser::Key_write - 71))
          | (1ULL << (FIRRTLParser::Key_rdwr - 71))
          | (1ULL << (FIRRTLParser::Id - 71)))) != 0));
        setState(456);
        match(FIRRTLParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_stmtContext ------------------------------------------------------------------

FIRRTLParser::Simple_stmtContext::Simple_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::StmtContext* FIRRTLParser::Simple_stmtContext::stmt() {
  return getRuleContext<FIRRTLParser::StmtContext>(0);
}

tree::TerminalNode* FIRRTLParser::Simple_stmtContext::NEWLINE() {
  return getToken(FIRRTLParser::NEWLINE, 0);
}


size_t FIRRTLParser::Simple_stmtContext::getRuleIndex() const {
  return FIRRTLParser::RuleSimple_stmt;
}

void FIRRTLParser::Simple_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_stmt(this);
}

void FIRRTLParser::Simple_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_stmt(this);
}


antlrcpp::Any FIRRTLParser::Simple_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSimple_stmt(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Simple_stmtContext* FIRRTLParser::simple_stmt() {
  Simple_stmtContext *_localctx = _tracker.createInstance<Simple_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, FIRRTLParser::RuleSimple_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(462);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__13:
      case FIRRTLParser::T__19:
      case FIRRTLParser::T__20:
      case FIRRTLParser::T__21:
      case FIRRTLParser::T__26:
      case FIRRTLParser::T__27:
      case FIRRTLParser::T__29:
      case FIRRTLParser::T__30:
      case FIRRTLParser::T__31:
      case FIRRTLParser::T__32:
      case FIRRTLParser::T__33:
      case FIRRTLParser::T__34:
      case FIRRTLParser::T__35:
      case FIRRTLParser::T__36:
      case FIRRTLParser::T__37:
      case FIRRTLParser::T__38:
      case FIRRTLParser::T__39:
      case FIRRTLParser::T__40:
      case FIRRTLParser::T__41:
      case FIRRTLParser::T__42:
      case FIRRTLParser::T__43:
      case FIRRTLParser::T__44:
      case FIRRTLParser::T__45:
      case FIRRTLParser::T__46:
      case FIRRTLParser::T__47:
      case FIRRTLParser::T__48:
      case FIRRTLParser::T__49:
      case FIRRTLParser::T__50:
      case FIRRTLParser::T__51:
      case FIRRTLParser::T__52:
      case FIRRTLParser::T__53:
      case FIRRTLParser::T__54:
      case FIRRTLParser::T__55:
      case FIRRTLParser::T__56:
      case FIRRTLParser::T__57:
      case FIRRTLParser::T__58:
      case FIRRTLParser::T__59:
      case FIRRTLParser::T__60:
      case FIRRTLParser::T__61:
      case FIRRTLParser::T__62:
      case FIRRTLParser::T__63:
      case FIRRTLParser::T__64:
      case FIRRTLParser::T__65:
      case FIRRTLParser::T__66:
      case FIRRTLParser::T__67:
      case FIRRTLParser::T__68:
      case FIRRTLParser::T__69:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_flip:
      case FIRRTLParser::Key_wire:
      case FIRRTLParser::Key_reg:
      case FIRRTLParser::Key_with:
      case FIRRTLParser::Key_mem:
      case FIRRTLParser::Key_depth:
      case FIRRTLParser::Key_reader:
      case FIRRTLParser::Key_writer:
      case FIRRTLParser::Key_readwriter:
      case FIRRTLParser::Key_inst:
      case FIRRTLParser::Key_of:
      case FIRRTLParser::Key_node:
      case FIRRTLParser::Key_is:
      case FIRRTLParser::Key_invalid:
      case FIRRTLParser::Key_when:
      case FIRRTLParser::Key_else:
      case FIRRTLParser::Key_stop:
      case FIRRTLParser::Key_printf:
      case FIRRTLParser::Key_skip:
      case FIRRTLParser::Key_old:
      case FIRRTLParser::Key_new:
      case FIRRTLParser::Key_undefined:
      case FIRRTLParser::Key_mux:
      case FIRRTLParser::Key_validif:
      case FIRRTLParser::Key_cmem:
      case FIRRTLParser::Key_smem:
      case FIRRTLParser::Key_mport:
      case FIRRTLParser::Key_infer:
      case FIRRTLParser::Key_read:
      case FIRRTLParser::Key_write:
      case FIRRTLParser::Key_rdwr:
      case FIRRTLParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(460);
        stmt();
        break;
      }

      case FIRRTLParser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(461);
        match(FIRRTLParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuiteContext ------------------------------------------------------------------

FIRRTLParser::SuiteContext::SuiteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FIRRTLParser::Simple_stmtContext *> FIRRTLParser::SuiteContext::simple_stmt() {
  return getRuleContexts<FIRRTLParser::Simple_stmtContext>();
}

FIRRTLParser::Simple_stmtContext* FIRRTLParser::SuiteContext::simple_stmt(size_t i) {
  return getRuleContext<FIRRTLParser::Simple_stmtContext>(i);
}

tree::TerminalNode* FIRRTLParser::SuiteContext::INDENT() {
  return getToken(FIRRTLParser::INDENT, 0);
}

tree::TerminalNode* FIRRTLParser::SuiteContext::DEDENT() {
  return getToken(FIRRTLParser::DEDENT, 0);
}


size_t FIRRTLParser::SuiteContext::getRuleIndex() const {
  return FIRRTLParser::RuleSuite;
}

void FIRRTLParser::SuiteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuite(this);
}

void FIRRTLParser::SuiteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuite(this);
}


antlrcpp::Any FIRRTLParser::SuiteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSuite(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::SuiteContext* FIRRTLParser::suite() {
  SuiteContext *_localctx = _tracker.createInstance<SuiteContext>(_ctx, getState());
  enterRule(_localctx, 30, FIRRTLParser::RuleSuite);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(473);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__13:
      case FIRRTLParser::T__19:
      case FIRRTLParser::T__20:
      case FIRRTLParser::T__21:
      case FIRRTLParser::T__26:
      case FIRRTLParser::T__27:
      case FIRRTLParser::T__29:
      case FIRRTLParser::T__30:
      case FIRRTLParser::T__31:
      case FIRRTLParser::T__32:
      case FIRRTLParser::T__33:
      case FIRRTLParser::T__34:
      case FIRRTLParser::T__35:
      case FIRRTLParser::T__36:
      case FIRRTLParser::T__37:
      case FIRRTLParser::T__38:
      case FIRRTLParser::T__39:
      case FIRRTLParser::T__40:
      case FIRRTLParser::T__41:
      case FIRRTLParser::T__42:
      case FIRRTLParser::T__43:
      case FIRRTLParser::T__44:
      case FIRRTLParser::T__45:
      case FIRRTLParser::T__46:
      case FIRRTLParser::T__47:
      case FIRRTLParser::T__48:
      case FIRRTLParser::T__49:
      case FIRRTLParser::T__50:
      case FIRRTLParser::T__51:
      case FIRRTLParser::T__52:
      case FIRRTLParser::T__53:
      case FIRRTLParser::T__54:
      case FIRRTLParser::T__55:
      case FIRRTLParser::T__56:
      case FIRRTLParser::T__57:
      case FIRRTLParser::T__58:
      case FIRRTLParser::T__59:
      case FIRRTLParser::T__60:
      case FIRRTLParser::T__61:
      case FIRRTLParser::T__62:
      case FIRRTLParser::T__63:
      case FIRRTLParser::T__64:
      case FIRRTLParser::T__65:
      case FIRRTLParser::T__66:
      case FIRRTLParser::T__67:
      case FIRRTLParser::T__68:
      case FIRRTLParser::T__69:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_flip:
      case FIRRTLParser::Key_wire:
      case FIRRTLParser::Key_reg:
      case FIRRTLParser::Key_with:
      case FIRRTLParser::Key_mem:
      case FIRRTLParser::Key_depth:
      case FIRRTLParser::Key_reader:
      case FIRRTLParser::Key_writer:
      case FIRRTLParser::Key_readwriter:
      case FIRRTLParser::Key_inst:
      case FIRRTLParser::Key_of:
      case FIRRTLParser::Key_node:
      case FIRRTLParser::Key_is:
      case FIRRTLParser::Key_invalid:
      case FIRRTLParser::Key_when:
      case FIRRTLParser::Key_else:
      case FIRRTLParser::Key_stop:
      case FIRRTLParser::Key_printf:
      case FIRRTLParser::Key_skip:
      case FIRRTLParser::Key_old:
      case FIRRTLParser::Key_new:
      case FIRRTLParser::Key_undefined:
      case FIRRTLParser::Key_mux:
      case FIRRTLParser::Key_validif:
      case FIRRTLParser::Key_cmem:
      case FIRRTLParser::Key_smem:
      case FIRRTLParser::Key_mport:
      case FIRRTLParser::Key_infer:
      case FIRRTLParser::Key_read:
      case FIRRTLParser::Key_write:
      case FIRRTLParser::Key_rdwr:
      case FIRRTLParser::Id:
      case FIRRTLParser::NEWLINE: {
        enterOuterAlt(_localctx, 1);
        setState(464);
        simple_stmt();
        break;
      }

      case FIRRTLParser::INDENT: {
        enterOuterAlt(_localctx, 2);
        setState(465);
        match(FIRRTLParser::INDENT);
        setState(467); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(466);
          simple_stmt();
          setState(469); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FIRRTLParser::T__13)
          | (1ULL << FIRRTLParser::T__19)
          | (1ULL << FIRRTLParser::T__20)
          | (1ULL << FIRRTLParser::T__21)
          | (1ULL << FIRRTLParser::T__26)
          | (1ULL << FIRRTLParser::T__27)
          | (1ULL << FIRRTLParser::T__29)
          | (1ULL << FIRRTLParser::T__30)
          | (1ULL << FIRRTLParser::T__31)
          | (1ULL << FIRRTLParser::T__32)
          | (1ULL << FIRRTLParser::T__33)
          | (1ULL << FIRRTLParser::T__34)
          | (1ULL << FIRRTLParser::T__35)
          | (1ULL << FIRRTLParser::T__36)
          | (1ULL << FIRRTLParser::T__37)
          | (1ULL << FIRRTLParser::T__38)
          | (1ULL << FIRRTLParser::T__39)
          | (1ULL << FIRRTLParser::T__40)
          | (1ULL << FIRRTLParser::T__41)
          | (1ULL << FIRRTLParser::T__42)
          | (1ULL << FIRRTLParser::T__43)
          | (1ULL << FIRRTLParser::T__44)
          | (1ULL << FIRRTLParser::T__45)
          | (1ULL << FIRRTLParser::T__46)
          | (1ULL << FIRRTLParser::T__47)
          | (1ULL << FIRRTLParser::T__48)
          | (1ULL << FIRRTLParser::T__49)
          | (1ULL << FIRRTLParser::T__50)
          | (1ULL << FIRRTLParser::T__51)
          | (1ULL << FIRRTLParser::T__52)
          | (1ULL << FIRRTLParser::T__53)
          | (1ULL << FIRRTLParser::T__54)
          | (1ULL << FIRRTLParser::T__55)
          | (1ULL << FIRRTLParser::T__56)
          | (1ULL << FIRRTLParser::T__57)
          | (1ULL << FIRRTLParser::T__58)
          | (1ULL << FIRRTLParser::T__59)
          | (1ULL << FIRRTLParser::T__60)
          | (1ULL << FIRRTLParser::T__61)
          | (1ULL << FIRRTLParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (FIRRTLParser::T__63 - 64))
          | (1ULL << (FIRRTLParser::T__64 - 64))
          | (1ULL << (FIRRTLParser::T__65 - 64))
          | (1ULL << (FIRRTLParser::T__66 - 64))
          | (1ULL << (FIRRTLParser::T__67 - 64))
          | (1ULL << (FIRRTLParser::T__68 - 64))
          | (1ULL << (FIRRTLParser::T__69 - 64))
          | (1ULL << (FIRRTLParser::Key_circuit - 64))
          | (1ULL << (FIRRTLParser::Key_module - 64))
          | (1ULL << (FIRRTLParser::Key_extmodule - 64))
          | (1ULL << (FIRRTLParser::Key_parameter - 64))
          | (1ULL << (FIRRTLParser::Key_input - 64))
          | (1ULL << (FIRRTLParser::Key_output - 64))
          | (1ULL << (FIRRTLParser::Key_UInt - 64))
          | (1ULL << (FIRRTLParser::Key_SInt - 64))
          | (1ULL << (FIRRTLParser::Key_Clock - 64))
          | (1ULL << (FIRRTLParser::Key_Analog - 64))
          | (1ULL << (FIRRTLParser::Key_Fixed - 64))
          | (1ULL << (FIRRTLParser::Key_flip - 64))
          | (1ULL << (FIRRTLParser::Key_wire - 64))
          | (1ULL << (FIRRTLParser::Key_reg - 64))
          | (1ULL << (FIRRTLParser::Key_with - 64))
          | (1ULL << (FIRRTLParser::Key_mem - 64))
          | (1ULL << (FIRRTLParser::Key_depth - 64))
          | (1ULL << (FIRRTLParser::Key_reader - 64))
          | (1ULL << (FIRRTLParser::Key_writer - 64))
          | (1ULL << (FIRRTLParser::Key_readwriter - 64))
          | (1ULL << (FIRRTLParser::Key_inst - 64))
          | (1ULL << (FIRRTLParser::Key_of - 64))
          | (1ULL << (FIRRTLParser::Key_node - 64))
          | (1ULL << (FIRRTLParser::Key_is - 64))
          | (1ULL << (FIRRTLParser::Key_invalid - 64))
          | (1ULL << (FIRRTLParser::Key_when - 64))
          | (1ULL << (FIRRTLParser::Key_else - 64))
          | (1ULL << (FIRRTLParser::Key_stop - 64))
          | (1ULL << (FIRRTLParser::Key_printf - 64))
          | (1ULL << (FIRRTLParser::Key_skip - 64))
          | (1ULL << (FIRRTLParser::Key_old - 64))
          | (1ULL << (FIRRTLParser::Key_new - 64))
          | (1ULL << (FIRRTLParser::Key_undefined - 64))
          | (1ULL << (FIRRTLParser::Key_mux - 64))
          | (1ULL << (FIRRTLParser::Key_validif - 64))
          | (1ULL << (FIRRTLParser::Key_cmem - 64))
          | (1ULL << (FIRRTLParser::Key_smem - 64))
          | (1ULL << (FIRRTLParser::Key_mport - 64))
          | (1ULL << (FIRRTLParser::Key_infer - 64))
          | (1ULL << (FIRRTLParser::Key_read - 64))
          | (1ULL << (FIRRTLParser::Key_write - 64))
          | (1ULL << (FIRRTLParser::Key_rdwr - 64))
          | (1ULL << (FIRRTLParser::Id - 64))
          | (1ULL << (FIRRTLParser::NEWLINE - 64)))) != 0));
        setState(471);
        match(FIRRTLParser::DEDENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenContext ------------------------------------------------------------------

FIRRTLParser::WhenContext::WhenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::WhenContext::Key_when() {
  return getToken(FIRRTLParser::Key_when, 0);
}

FIRRTLParser::ExpContext* FIRRTLParser::WhenContext::exp() {
  return getRuleContext<FIRRTLParser::ExpContext>(0);
}

std::vector<FIRRTLParser::InfoContext *> FIRRTLParser::WhenContext::info() {
  return getRuleContexts<FIRRTLParser::InfoContext>();
}

FIRRTLParser::InfoContext* FIRRTLParser::WhenContext::info(size_t i) {
  return getRuleContext<FIRRTLParser::InfoContext>(i);
}

std::vector<FIRRTLParser::SuiteContext *> FIRRTLParser::WhenContext::suite() {
  return getRuleContexts<FIRRTLParser::SuiteContext>();
}

FIRRTLParser::SuiteContext* FIRRTLParser::WhenContext::suite(size_t i) {
  return getRuleContext<FIRRTLParser::SuiteContext>(i);
}

tree::TerminalNode* FIRRTLParser::WhenContext::Key_else() {
  return getToken(FIRRTLParser::Key_else, 0);
}

FIRRTLParser::WhenContext* FIRRTLParser::WhenContext::when() {
  return getRuleContext<FIRRTLParser::WhenContext>(0);
}


size_t FIRRTLParser::WhenContext::getRuleIndex() const {
  return FIRRTLParser::RuleWhen;
}

void FIRRTLParser::WhenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhen(this);
}

void FIRRTLParser::WhenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhen(this);
}


antlrcpp::Any FIRRTLParser::WhenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitWhen(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::WhenContext* FIRRTLParser::when() {
  WhenContext *_localctx = _tracker.createInstance<WhenContext>(_ctx, getState());
  enterRule(_localctx, 32, FIRRTLParser::RuleWhen);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    match(FIRRTLParser::Key_when);
    setState(476);
    exp(0);
    setState(477);
    match(FIRRTLParser::T__0);
    setState(479);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FIRRTLParser::FileInfo) {
      setState(478);
      info();
    }
    setState(482);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(481);
      suite();
      break;
    }

    }
    setState(495);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(484);
      match(FIRRTLParser::Key_else);
      setState(493);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case FIRRTLParser::Key_when: {
          setState(485);
          when();
          break;
        }

        case FIRRTLParser::T__0: {
          setState(486);
          match(FIRRTLParser::T__0);
          setState(488);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == FIRRTLParser::FileInfo) {
            setState(487);
            info();
          }
          setState(491);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
          case 1: {
            setState(490);
            suite();
            break;
          }

          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfoContext ------------------------------------------------------------------

FIRRTLParser::InfoContext::InfoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::InfoContext::FileInfo() {
  return getToken(FIRRTLParser::FileInfo, 0);
}


size_t FIRRTLParser::InfoContext::getRuleIndex() const {
  return FIRRTLParser::RuleInfo;
}

void FIRRTLParser::InfoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfo(this);
}

void FIRRTLParser::InfoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfo(this);
}


antlrcpp::Any FIRRTLParser::InfoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitInfo(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::InfoContext* FIRRTLParser::info() {
  InfoContext *_localctx = _tracker.createInstance<InfoContext>(_ctx, getState());
  enterRule(_localctx, 34, FIRRTLParser::RuleInfo);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(FIRRTLParser::FileInfo);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MdirContext ------------------------------------------------------------------

FIRRTLParser::MdirContext::MdirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::MdirContext::Key_infer() {
  return getToken(FIRRTLParser::Key_infer, 0);
}

tree::TerminalNode* FIRRTLParser::MdirContext::Key_read() {
  return getToken(FIRRTLParser::Key_read, 0);
}

tree::TerminalNode* FIRRTLParser::MdirContext::Key_write() {
  return getToken(FIRRTLParser::Key_write, 0);
}

tree::TerminalNode* FIRRTLParser::MdirContext::Key_rdwr() {
  return getToken(FIRRTLParser::Key_rdwr, 0);
}


size_t FIRRTLParser::MdirContext::getRuleIndex() const {
  return FIRRTLParser::RuleMdir;
}

void FIRRTLParser::MdirContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMdir(this);
}

void FIRRTLParser::MdirContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMdir(this);
}


antlrcpp::Any FIRRTLParser::MdirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitMdir(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::MdirContext* FIRRTLParser::mdir() {
  MdirContext *_localctx = _tracker.createInstance<MdirContext>(_ctx, getState());
  enterRule(_localctx, 36, FIRRTLParser::RuleMdir);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    _la = _input->LA(1);
    if (!(((((_la - 109) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 109)) & ((1ULL << (FIRRTLParser::Key_infer - 109))
      | (1ULL << (FIRRTLParser::Key_read - 109))
      | (1ULL << (FIRRTLParser::Key_write - 109))
      | (1ULL << (FIRRTLParser::Key_rdwr - 109)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuwContext ------------------------------------------------------------------

FIRRTLParser::RuwContext::RuwContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::RuwContext::Key_old() {
  return getToken(FIRRTLParser::Key_old, 0);
}

tree::TerminalNode* FIRRTLParser::RuwContext::Key_new() {
  return getToken(FIRRTLParser::Key_new, 0);
}

tree::TerminalNode* FIRRTLParser::RuwContext::Key_undefined() {
  return getToken(FIRRTLParser::Key_undefined, 0);
}


size_t FIRRTLParser::RuwContext::getRuleIndex() const {
  return FIRRTLParser::RuleRuw;
}

void FIRRTLParser::RuwContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuw(this);
}

void FIRRTLParser::RuwContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuw(this);
}


antlrcpp::Any FIRRTLParser::RuwContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitRuw(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::RuwContext* FIRRTLParser::ruw() {
  RuwContext *_localctx = _tracker.createInstance<RuwContext>(_ctx, getState());
  enterRule(_localctx, 38, FIRRTLParser::RuleRuw);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    _la = _input->LA(1);
    if (!(((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (FIRRTLParser::Key_old - 101))
      | (1ULL << (FIRRTLParser::Key_new - 101))
      | (1ULL << (FIRRTLParser::Key_undefined - 101)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

FIRRTLParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::ExpContext::Key_UInt() {
  return getToken(FIRRTLParser::Key_UInt, 0);
}

std::vector<FIRRTLParser::IntLitContext *> FIRRTLParser::ExpContext::intLit() {
  return getRuleContexts<FIRRTLParser::IntLitContext>();
}

FIRRTLParser::IntLitContext* FIRRTLParser::ExpContext::intLit(size_t i) {
  return getRuleContext<FIRRTLParser::IntLitContext>(i);
}

tree::TerminalNode* FIRRTLParser::ExpContext::Key_SInt() {
  return getToken(FIRRTLParser::Key_SInt, 0);
}

FIRRTLParser::IdContext* FIRRTLParser::ExpContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}

std::vector<FIRRTLParser::ExpContext *> FIRRTLParser::ExpContext::exp() {
  return getRuleContexts<FIRRTLParser::ExpContext>();
}

FIRRTLParser::ExpContext* FIRRTLParser::ExpContext::exp(size_t i) {
  return getRuleContext<FIRRTLParser::ExpContext>(i);
}

FIRRTLParser::PrimopContext* FIRRTLParser::ExpContext::primop() {
  return getRuleContext<FIRRTLParser::PrimopContext>(0);
}

FIRRTLParser::FieldIdContext* FIRRTLParser::ExpContext::fieldId() {
  return getRuleContext<FIRRTLParser::FieldIdContext>(0);
}

tree::TerminalNode* FIRRTLParser::ExpContext::DoubleLit() {
  return getToken(FIRRTLParser::DoubleLit, 0);
}


size_t FIRRTLParser::ExpContext::getRuleIndex() const {
  return FIRRTLParser::RuleExp;
}

void FIRRTLParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void FIRRTLParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


antlrcpp::Any FIRRTLParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}


FIRRTLParser::ExpContext* FIRRTLParser::exp() {
   return exp(0);
}

FIRRTLParser::ExpContext* FIRRTLParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  FIRRTLParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  FIRRTLParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, FIRRTLParser::RuleExp, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(553);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(504);
      match(FIRRTLParser::Key_UInt);
      setState(509);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__1) {
        setState(505);
        match(FIRRTLParser::T__1);
        setState(506);
        intLit();
        setState(507);
        match(FIRRTLParser::T__2);
      }
      setState(511);
      match(FIRRTLParser::T__15);
      setState(512);
      intLit();
      setState(513);
      match(FIRRTLParser::T__16);
      break;
    }

    case 2: {
      setState(515);
      match(FIRRTLParser::Key_SInt);
      setState(520);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__1) {
        setState(516);
        match(FIRRTLParser::T__1);
        setState(517);
        intLit();
        setState(518);
        match(FIRRTLParser::T__2);
      }
      setState(522);
      match(FIRRTLParser::T__15);
      setState(523);
      intLit();
      setState(524);
      match(FIRRTLParser::T__16);
      break;
    }

    case 3: {
      setState(526);
      id();
      break;
    }

    case 4: {
      setState(527);
      match(FIRRTLParser::T__26);
      setState(528);
      exp(0);
      setState(529);
      exp(0);
      setState(530);
      exp(0);
      setState(531);
      match(FIRRTLParser::T__16);
      break;
    }

    case 5: {
      setState(533);
      match(FIRRTLParser::T__27);
      setState(534);
      exp(0);
      setState(535);
      exp(0);
      setState(536);
      match(FIRRTLParser::T__16);
      break;
    }

    case 6: {
      setState(538);
      primop();
      setState(542);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << FIRRTLParser::T__13)
        | (1ULL << FIRRTLParser::T__26)
        | (1ULL << FIRRTLParser::T__27)
        | (1ULL << FIRRTLParser::T__29)
        | (1ULL << FIRRTLParser::T__30)
        | (1ULL << FIRRTLParser::T__31)
        | (1ULL << FIRRTLParser::T__32)
        | (1ULL << FIRRTLParser::T__33)
        | (1ULL << FIRRTLParser::T__34)
        | (1ULL << FIRRTLParser::T__35)
        | (1ULL << FIRRTLParser::T__36)
        | (1ULL << FIRRTLParser::T__37)
        | (1ULL << FIRRTLParser::T__38)
        | (1ULL << FIRRTLParser::T__39)
        | (1ULL << FIRRTLParser::T__40)
        | (1ULL << FIRRTLParser::T__41)
        | (1ULL << FIRRTLParser::T__42)
        | (1ULL << FIRRTLParser::T__43)
        | (1ULL << FIRRTLParser::T__44)
        | (1ULL << FIRRTLParser::T__45)
        | (1ULL << FIRRTLParser::T__46)
        | (1ULL << FIRRTLParser::T__47)
        | (1ULL << FIRRTLParser::T__48)
        | (1ULL << FIRRTLParser::T__49)
        | (1ULL << FIRRTLParser::T__50)
        | (1ULL << FIRRTLParser::T__51)
        | (1ULL << FIRRTLParser::T__52)
        | (1ULL << FIRRTLParser::T__53)
        | (1ULL << FIRRTLParser::T__54)
        | (1ULL << FIRRTLParser::T__55)
        | (1ULL << FIRRTLParser::T__56)
        | (1ULL << FIRRTLParser::T__57)
        | (1ULL << FIRRTLParser::T__58)
        | (1ULL << FIRRTLParser::T__59)
        | (1ULL << FIRRTLParser::T__60)
        | (1ULL << FIRRTLParser::T__61)
        | (1ULL << FIRRTLParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (FIRRTLParser::T__63 - 64))
        | (1ULL << (FIRRTLParser::T__64 - 64))
        | (1ULL << (FIRRTLParser::T__65 - 64))
        | (1ULL << (FIRRTLParser::T__66 - 64))
        | (1ULL << (FIRRTLParser::T__67 - 64))
        | (1ULL << (FIRRTLParser::T__68 - 64))
        | (1ULL << (FIRRTLParser::T__69 - 64))
        | (1ULL << (FIRRTLParser::Key_circuit - 64))
        | (1ULL << (FIRRTLParser::Key_module - 64))
        | (1ULL << (FIRRTLParser::Key_extmodule - 64))
        | (1ULL << (FIRRTLParser::Key_parameter - 64))
        | (1ULL << (FIRRTLParser::Key_input - 64))
        | (1ULL << (FIRRTLParser::Key_output - 64))
        | (1ULL << (FIRRTLParser::Key_UInt - 64))
        | (1ULL << (FIRRTLParser::Key_SInt - 64))
        | (1ULL << (FIRRTLParser::Key_Clock - 64))
        | (1ULL << (FIRRTLParser::Key_Analog - 64))
        | (1ULL << (FIRRTLParser::Key_Fixed - 64))
        | (1ULL << (FIRRTLParser::Key_flip - 64))
        | (1ULL << (FIRRTLParser::Key_wire - 64))
        | (1ULL << (FIRRTLParser::Key_reg - 64))
        | (1ULL << (FIRRTLParser::Key_with - 64))
        | (1ULL << (FIRRTLParser::Key_mem - 64))
        | (1ULL << (FIRRTLParser::Key_depth - 64))
        | (1ULL << (FIRRTLParser::Key_reader - 64))
        | (1ULL << (FIRRTLParser::Key_writer - 64))
        | (1ULL << (FIRRTLParser::Key_readwriter - 64))
        | (1ULL << (FIRRTLParser::Key_inst - 64))
        | (1ULL << (FIRRTLParser::Key_of - 64))
        | (1ULL << (FIRRTLParser::Key_node - 64))
        | (1ULL << (FIRRTLParser::Key_is - 64))
        | (1ULL << (FIRRTLParser::Key_invalid - 64))
        | (1ULL << (FIRRTLParser::Key_when - 64))
        | (1ULL << (FIRRTLParser::Key_else - 64))
        | (1ULL << (FIRRTLParser::Key_stop - 64))
        | (1ULL << (FIRRTLParser::Key_printf - 64))
        | (1ULL << (FIRRTLParser::Key_skip - 64))
        | (1ULL << (FIRRTLParser::Key_old - 64))
        | (1ULL << (FIRRTLParser::Key_new - 64))
        | (1ULL << (FIRRTLParser::Key_undefined - 64))
        | (1ULL << (FIRRTLParser::Key_mux - 64))
        | (1ULL << (FIRRTLParser::Key_validif - 64))
        | (1ULL << (FIRRTLParser::Key_cmem - 64))
        | (1ULL << (FIRRTLParser::Key_smem - 64))
        | (1ULL << (FIRRTLParser::Key_mport - 64))
        | (1ULL << (FIRRTLParser::Key_infer - 64))
        | (1ULL << (FIRRTLParser::Key_read - 64))
        | (1ULL << (FIRRTLParser::Key_write - 64))
        | (1ULL << (FIRRTLParser::Key_rdwr - 64))
        | (1ULL << (FIRRTLParser::Id - 64)))) != 0)) {
        setState(539);
        exp(0);
        setState(544);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(548);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 113) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 113)) & ((1ULL << (FIRRTLParser::UnsignedInt - 113))
        | (1ULL << (FIRRTLParser::SignedInt - 113))
        | (1ULL << (FIRRTLParser::HexLit - 113))
        | (1ULL << (FIRRTLParser::OctalLit - 113))
        | (1ULL << (FIRRTLParser::BinaryLit - 113)))) != 0)) {
        setState(545);
        intLit();
        setState(550);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(551);
      match(FIRRTLParser::T__16);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(573);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(571);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(555);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(556);
          match(FIRRTLParser::T__4);
          setState(557);
          fieldId();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(558);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(559);
          match(FIRRTLParser::T__4);
          setState(560);
          match(FIRRTLParser::DoubleLit);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(561);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(562);
          match(FIRRTLParser::T__9);
          setState(563);
          intLit();
          setState(564);
          match(FIRRTLParser::T__10);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(566);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(567);
          match(FIRRTLParser::T__9);
          setState(568);
          exp(0);
          setState(569);
          match(FIRRTLParser::T__10);
          break;
        }

        } 
      }
      setState(575);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

FIRRTLParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::IdContext::Id() {
  return getToken(FIRRTLParser::Id, 0);
}

FIRRTLParser::KeywordAsIdContext* FIRRTLParser::IdContext::keywordAsId() {
  return getRuleContext<FIRRTLParser::KeywordAsIdContext>(0);
}


size_t FIRRTLParser::IdContext::getRuleIndex() const {
  return FIRRTLParser::RuleId;
}

void FIRRTLParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}

void FIRRTLParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}


antlrcpp::Any FIRRTLParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::IdContext* FIRRTLParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 42, FIRRTLParser::RuleId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(578);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(576);
        match(FIRRTLParser::Id);
        break;
      }

      case FIRRTLParser::T__13:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_flip:
      case FIRRTLParser::Key_wire:
      case FIRRTLParser::Key_reg:
      case FIRRTLParser::Key_with:
      case FIRRTLParser::Key_mem:
      case FIRRTLParser::Key_depth:
      case FIRRTLParser::Key_reader:
      case FIRRTLParser::Key_writer:
      case FIRRTLParser::Key_readwriter:
      case FIRRTLParser::Key_inst:
      case FIRRTLParser::Key_of:
      case FIRRTLParser::Key_node:
      case FIRRTLParser::Key_is:
      case FIRRTLParser::Key_invalid:
      case FIRRTLParser::Key_when:
      case FIRRTLParser::Key_else:
      case FIRRTLParser::Key_stop:
      case FIRRTLParser::Key_printf:
      case FIRRTLParser::Key_skip:
      case FIRRTLParser::Key_old:
      case FIRRTLParser::Key_new:
      case FIRRTLParser::Key_undefined:
      case FIRRTLParser::Key_mux:
      case FIRRTLParser::Key_validif:
      case FIRRTLParser::Key_cmem:
      case FIRRTLParser::Key_smem:
      case FIRRTLParser::Key_mport:
      case FIRRTLParser::Key_infer:
      case FIRRTLParser::Key_read:
      case FIRRTLParser::Key_write:
      case FIRRTLParser::Key_rdwr: {
        enterOuterAlt(_localctx, 2);
        setState(577);
        keywordAsId();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldIdContext ------------------------------------------------------------------

FIRRTLParser::FieldIdContext::FieldIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::FieldIdContext::Id() {
  return getToken(FIRRTLParser::Id, 0);
}

tree::TerminalNode* FIRRTLParser::FieldIdContext::RelaxedId() {
  return getToken(FIRRTLParser::RelaxedId, 0);
}

tree::TerminalNode* FIRRTLParser::FieldIdContext::UnsignedInt() {
  return getToken(FIRRTLParser::UnsignedInt, 0);
}

FIRRTLParser::KeywordAsIdContext* FIRRTLParser::FieldIdContext::keywordAsId() {
  return getRuleContext<FIRRTLParser::KeywordAsIdContext>(0);
}


size_t FIRRTLParser::FieldIdContext::getRuleIndex() const {
  return FIRRTLParser::RuleFieldId;
}

void FIRRTLParser::FieldIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldId(this);
}

void FIRRTLParser::FieldIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldId(this);
}


antlrcpp::Any FIRRTLParser::FieldIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitFieldId(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::FieldIdContext* FIRRTLParser::fieldId() {
  FieldIdContext *_localctx = _tracker.createInstance<FieldIdContext>(_ctx, getState());
  enterRule(_localctx, 44, FIRRTLParser::RuleFieldId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(584);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(580);
        match(FIRRTLParser::Id);
        break;
      }

      case FIRRTLParser::RelaxedId: {
        enterOuterAlt(_localctx, 2);
        setState(581);
        match(FIRRTLParser::RelaxedId);
        break;
      }

      case FIRRTLParser::UnsignedInt: {
        enterOuterAlt(_localctx, 3);
        setState(582);
        match(FIRRTLParser::UnsignedInt);
        break;
      }

      case FIRRTLParser::T__13:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_flip:
      case FIRRTLParser::Key_wire:
      case FIRRTLParser::Key_reg:
      case FIRRTLParser::Key_with:
      case FIRRTLParser::Key_mem:
      case FIRRTLParser::Key_depth:
      case FIRRTLParser::Key_reader:
      case FIRRTLParser::Key_writer:
      case FIRRTLParser::Key_readwriter:
      case FIRRTLParser::Key_inst:
      case FIRRTLParser::Key_of:
      case FIRRTLParser::Key_node:
      case FIRRTLParser::Key_is:
      case FIRRTLParser::Key_invalid:
      case FIRRTLParser::Key_when:
      case FIRRTLParser::Key_else:
      case FIRRTLParser::Key_stop:
      case FIRRTLParser::Key_printf:
      case FIRRTLParser::Key_skip:
      case FIRRTLParser::Key_old:
      case FIRRTLParser::Key_new:
      case FIRRTLParser::Key_undefined:
      case FIRRTLParser::Key_mux:
      case FIRRTLParser::Key_validif:
      case FIRRTLParser::Key_cmem:
      case FIRRTLParser::Key_smem:
      case FIRRTLParser::Key_mport:
      case FIRRTLParser::Key_infer:
      case FIRRTLParser::Key_read:
      case FIRRTLParser::Key_write:
      case FIRRTLParser::Key_rdwr: {
        enterOuterAlt(_localctx, 4);
        setState(583);
        keywordAsId();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntLitContext ------------------------------------------------------------------

FIRRTLParser::IntLitContext::IntLitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::IntLitContext::UnsignedInt() {
  return getToken(FIRRTLParser::UnsignedInt, 0);
}

tree::TerminalNode* FIRRTLParser::IntLitContext::SignedInt() {
  return getToken(FIRRTLParser::SignedInt, 0);
}

tree::TerminalNode* FIRRTLParser::IntLitContext::HexLit() {
  return getToken(FIRRTLParser::HexLit, 0);
}

tree::TerminalNode* FIRRTLParser::IntLitContext::OctalLit() {
  return getToken(FIRRTLParser::OctalLit, 0);
}

tree::TerminalNode* FIRRTLParser::IntLitContext::BinaryLit() {
  return getToken(FIRRTLParser::BinaryLit, 0);
}


size_t FIRRTLParser::IntLitContext::getRuleIndex() const {
  return FIRRTLParser::RuleIntLit;
}

void FIRRTLParser::IntLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLit(this);
}

void FIRRTLParser::IntLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLit(this);
}


antlrcpp::Any FIRRTLParser::IntLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitIntLit(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::IntLitContext* FIRRTLParser::intLit() {
  IntLitContext *_localctx = _tracker.createInstance<IntLitContext>(_ctx, getState());
  enterRule(_localctx, 46, FIRRTLParser::RuleIntLit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    _la = _input->LA(1);
    if (!(((((_la - 113) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 113)) & ((1ULL << (FIRRTLParser::UnsignedInt - 113))
      | (1ULL << (FIRRTLParser::SignedInt - 113))
      | (1ULL << (FIRRTLParser::HexLit - 113))
      | (1ULL << (FIRRTLParser::OctalLit - 113))
      | (1ULL << (FIRRTLParser::BinaryLit - 113)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LowerBoundContext ------------------------------------------------------------------

FIRRTLParser::LowerBoundContext::LowerBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FIRRTLParser::LowerBoundContext::getRuleIndex() const {
  return FIRRTLParser::RuleLowerBound;
}

void FIRRTLParser::LowerBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLowerBound(this);
}

void FIRRTLParser::LowerBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLowerBound(this);
}


antlrcpp::Any FIRRTLParser::LowerBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitLowerBound(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::LowerBoundContext* FIRRTLParser::lowerBound() {
  LowerBoundContext *_localctx = _tracker.createInstance<LowerBoundContext>(_ctx, getState());
  enterRule(_localctx, 48, FIRRTLParser::RuleLowerBound);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__9

    || _la == FIRRTLParser::T__15)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpperBoundContext ------------------------------------------------------------------

FIRRTLParser::UpperBoundContext::UpperBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FIRRTLParser::UpperBoundContext::getRuleIndex() const {
  return FIRRTLParser::RuleUpperBound;
}

void FIRRTLParser::UpperBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpperBound(this);
}

void FIRRTLParser::UpperBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpperBound(this);
}


antlrcpp::Any FIRRTLParser::UpperBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitUpperBound(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::UpperBoundContext* FIRRTLParser::upperBound() {
  UpperBoundContext *_localctx = _tracker.createInstance<UpperBoundContext>(_ctx, getState());
  enterRule(_localctx, 50, FIRRTLParser::RuleUpperBound);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__10

    || _la == FIRRTLParser::T__16)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoundValueContext ------------------------------------------------------------------

FIRRTLParser::BoundValueContext::BoundValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::BoundValueContext::DoubleLit() {
  return getToken(FIRRTLParser::DoubleLit, 0);
}

tree::TerminalNode* FIRRTLParser::BoundValueContext::UnsignedInt() {
  return getToken(FIRRTLParser::UnsignedInt, 0);
}

tree::TerminalNode* FIRRTLParser::BoundValueContext::SignedInt() {
  return getToken(FIRRTLParser::SignedInt, 0);
}


size_t FIRRTLParser::BoundValueContext::getRuleIndex() const {
  return FIRRTLParser::RuleBoundValue;
}

void FIRRTLParser::BoundValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoundValue(this);
}

void FIRRTLParser::BoundValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoundValue(this);
}


antlrcpp::Any FIRRTLParser::BoundValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitBoundValue(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::BoundValueContext* FIRRTLParser::boundValue() {
  BoundValueContext *_localctx = _tracker.createInstance<BoundValueContext>(_ctx, getState());
  enterRule(_localctx, 52, FIRRTLParser::RuleBoundValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__28 || ((((_la - 113) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 113)) & ((1ULL << (FIRRTLParser::UnsignedInt - 113))
      | (1ULL << (FIRRTLParser::SignedInt - 113))
      | (1ULL << (FIRRTLParser::DoubleLit - 113)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordAsIdContext ------------------------------------------------------------------

FIRRTLParser::KeywordAsIdContext::KeywordAsIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_circuit() {
  return getToken(FIRRTLParser::Key_circuit, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_module() {
  return getToken(FIRRTLParser::Key_module, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_extmodule() {
  return getToken(FIRRTLParser::Key_extmodule, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_parameter() {
  return getToken(FIRRTLParser::Key_parameter, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_input() {
  return getToken(FIRRTLParser::Key_input, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_output() {
  return getToken(FIRRTLParser::Key_output, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_UInt() {
  return getToken(FIRRTLParser::Key_UInt, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_SInt() {
  return getToken(FIRRTLParser::Key_SInt, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_Clock() {
  return getToken(FIRRTLParser::Key_Clock, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_Analog() {
  return getToken(FIRRTLParser::Key_Analog, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_Fixed() {
  return getToken(FIRRTLParser::Key_Fixed, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_flip() {
  return getToken(FIRRTLParser::Key_flip, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_wire() {
  return getToken(FIRRTLParser::Key_wire, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_reg() {
  return getToken(FIRRTLParser::Key_reg, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_with() {
  return getToken(FIRRTLParser::Key_with, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_mem() {
  return getToken(FIRRTLParser::Key_mem, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_depth() {
  return getToken(FIRRTLParser::Key_depth, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_reader() {
  return getToken(FIRRTLParser::Key_reader, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_writer() {
  return getToken(FIRRTLParser::Key_writer, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_readwriter() {
  return getToken(FIRRTLParser::Key_readwriter, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_inst() {
  return getToken(FIRRTLParser::Key_inst, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_of() {
  return getToken(FIRRTLParser::Key_of, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_node() {
  return getToken(FIRRTLParser::Key_node, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_is() {
  return getToken(FIRRTLParser::Key_is, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_invalid() {
  return getToken(FIRRTLParser::Key_invalid, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_when() {
  return getToken(FIRRTLParser::Key_when, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_else() {
  return getToken(FIRRTLParser::Key_else, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_stop() {
  return getToken(FIRRTLParser::Key_stop, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_printf() {
  return getToken(FIRRTLParser::Key_printf, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_skip() {
  return getToken(FIRRTLParser::Key_skip, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_old() {
  return getToken(FIRRTLParser::Key_old, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_new() {
  return getToken(FIRRTLParser::Key_new, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_undefined() {
  return getToken(FIRRTLParser::Key_undefined, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_mux() {
  return getToken(FIRRTLParser::Key_mux, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_validif() {
  return getToken(FIRRTLParser::Key_validif, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_cmem() {
  return getToken(FIRRTLParser::Key_cmem, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_smem() {
  return getToken(FIRRTLParser::Key_smem, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_mport() {
  return getToken(FIRRTLParser::Key_mport, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_infer() {
  return getToken(FIRRTLParser::Key_infer, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_read() {
  return getToken(FIRRTLParser::Key_read, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_write() {
  return getToken(FIRRTLParser::Key_write, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_rdwr() {
  return getToken(FIRRTLParser::Key_rdwr, 0);
}


size_t FIRRTLParser::KeywordAsIdContext::getRuleIndex() const {
  return FIRRTLParser::RuleKeywordAsId;
}

void FIRRTLParser::KeywordAsIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeywordAsId(this);
}

void FIRRTLParser::KeywordAsIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeywordAsId(this);
}


antlrcpp::Any FIRRTLParser::KeywordAsIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitKeywordAsId(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::KeywordAsIdContext* FIRRTLParser::keywordAsId() {
  KeywordAsIdContext *_localctx = _tracker.createInstance<KeywordAsIdContext>(_ctx, getState());
  enterRule(_localctx, 54, FIRRTLParser::RuleKeywordAsId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__13 || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (FIRRTLParser::Key_circuit - 71))
      | (1ULL << (FIRRTLParser::Key_module - 71))
      | (1ULL << (FIRRTLParser::Key_extmodule - 71))
      | (1ULL << (FIRRTLParser::Key_parameter - 71))
      | (1ULL << (FIRRTLParser::Key_input - 71))
      | (1ULL << (FIRRTLParser::Key_output - 71))
      | (1ULL << (FIRRTLParser::Key_UInt - 71))
      | (1ULL << (FIRRTLParser::Key_SInt - 71))
      | (1ULL << (FIRRTLParser::Key_Clock - 71))
      | (1ULL << (FIRRTLParser::Key_Analog - 71))
      | (1ULL << (FIRRTLParser::Key_Fixed - 71))
      | (1ULL << (FIRRTLParser::Key_flip - 71))
      | (1ULL << (FIRRTLParser::Key_wire - 71))
      | (1ULL << (FIRRTLParser::Key_reg - 71))
      | (1ULL << (FIRRTLParser::Key_with - 71))
      | (1ULL << (FIRRTLParser::Key_mem - 71))
      | (1ULL << (FIRRTLParser::Key_depth - 71))
      | (1ULL << (FIRRTLParser::Key_reader - 71))
      | (1ULL << (FIRRTLParser::Key_writer - 71))
      | (1ULL << (FIRRTLParser::Key_readwriter - 71))
      | (1ULL << (FIRRTLParser::Key_inst - 71))
      | (1ULL << (FIRRTLParser::Key_of - 71))
      | (1ULL << (FIRRTLParser::Key_node - 71))
      | (1ULL << (FIRRTLParser::Key_is - 71))
      | (1ULL << (FIRRTLParser::Key_invalid - 71))
      | (1ULL << (FIRRTLParser::Key_when - 71))
      | (1ULL << (FIRRTLParser::Key_else - 71))
      | (1ULL << (FIRRTLParser::Key_stop - 71))
      | (1ULL << (FIRRTLParser::Key_printf - 71))
      | (1ULL << (FIRRTLParser::Key_skip - 71))
      | (1ULL << (FIRRTLParser::Key_old - 71))
      | (1ULL << (FIRRTLParser::Key_new - 71))
      | (1ULL << (FIRRTLParser::Key_undefined - 71))
      | (1ULL << (FIRRTLParser::Key_mux - 71))
      | (1ULL << (FIRRTLParser::Key_validif - 71))
      | (1ULL << (FIRRTLParser::Key_cmem - 71))
      | (1ULL << (FIRRTLParser::Key_smem - 71))
      | (1ULL << (FIRRTLParser::Key_mport - 71))
      | (1ULL << (FIRRTLParser::Key_infer - 71))
      | (1ULL << (FIRRTLParser::Key_read - 71))
      | (1ULL << (FIRRTLParser::Key_write - 71))
      | (1ULL << (FIRRTLParser::Key_rdwr - 71)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimopContext ------------------------------------------------------------------

FIRRTLParser::PrimopContext::PrimopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FIRRTLParser::PrimopContext::getRuleIndex() const {
  return FIRRTLParser::RulePrimop;
}

void FIRRTLParser::PrimopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimop(this);
}

void FIRRTLParser::PrimopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimop(this);
}


antlrcpp::Any FIRRTLParser::PrimopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitPrimop(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::PrimopContext* FIRRTLParser::primop() {
  PrimopContext *_localctx = _tracker.createInstance<PrimopContext>(_ctx, getState());
  enterRule(_localctx, 56, FIRRTLParser::RulePrimop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    _la = _input->LA(1);
    if (!(((((_la - 30) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 30)) & ((1ULL << (FIRRTLParser::T__29 - 30))
      | (1ULL << (FIRRTLParser::T__30 - 30))
      | (1ULL << (FIRRTLParser::T__31 - 30))
      | (1ULL << (FIRRTLParser::T__32 - 30))
      | (1ULL << (FIRRTLParser::T__33 - 30))
      | (1ULL << (FIRRTLParser::T__34 - 30))
      | (1ULL << (FIRRTLParser::T__35 - 30))
      | (1ULL << (FIRRTLParser::T__36 - 30))
      | (1ULL << (FIRRTLParser::T__37 - 30))
      | (1ULL << (FIRRTLParser::T__38 - 30))
      | (1ULL << (FIRRTLParser::T__39 - 30))
      | (1ULL << (FIRRTLParser::T__40 - 30))
      | (1ULL << (FIRRTLParser::T__41 - 30))
      | (1ULL << (FIRRTLParser::T__42 - 30))
      | (1ULL << (FIRRTLParser::T__43 - 30))
      | (1ULL << (FIRRTLParser::T__44 - 30))
      | (1ULL << (FIRRTLParser::T__45 - 30))
      | (1ULL << (FIRRTLParser::T__46 - 30))
      | (1ULL << (FIRRTLParser::T__47 - 30))
      | (1ULL << (FIRRTLParser::T__48 - 30))
      | (1ULL << (FIRRTLParser::T__49 - 30))
      | (1ULL << (FIRRTLParser::T__50 - 30))
      | (1ULL << (FIRRTLParser::T__51 - 30))
      | (1ULL << (FIRRTLParser::T__52 - 30))
      | (1ULL << (FIRRTLParser::T__53 - 30))
      | (1ULL << (FIRRTLParser::T__54 - 30))
      | (1ULL << (FIRRTLParser::T__55 - 30))
      | (1ULL << (FIRRTLParser::T__56 - 30))
      | (1ULL << (FIRRTLParser::T__57 - 30))
      | (1ULL << (FIRRTLParser::T__58 - 30))
      | (1ULL << (FIRRTLParser::T__59 - 30))
      | (1ULL << (FIRRTLParser::T__60 - 30))
      | (1ULL << (FIRRTLParser::T__61 - 30))
      | (1ULL << (FIRRTLParser::T__62 - 30))
      | (1ULL << (FIRRTLParser::T__63 - 30))
      | (1ULL << (FIRRTLParser::T__64 - 30))
      | (1ULL << (FIRRTLParser::T__65 - 30))
      | (1ULL << (FIRRTLParser::T__66 - 30))
      | (1ULL << (FIRRTLParser::T__67 - 30))
      | (1ULL << (FIRRTLParser::T__68 - 30))
      | (1ULL << (FIRRTLParser::T__69 - 30)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool FIRRTLParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return typeSempred(dynamic_cast<TypeContext *>(context), predicateIndex);
    case 20: return expSempred(dynamic_cast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool FIRRTLParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool FIRRTLParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> FIRRTLParser::_decisionToDFA;
atn::PredictionContextCache FIRRTLParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN FIRRTLParser::_atn;
std::vector<uint16_t> FIRRTLParser::_serializedATN;

std::vector<std::string> FIRRTLParser::_ruleNames = {
  "circuit", "module", "port", "dir", "type", "field", "defname", "parameter", 
  "moduleBlock", "simple_reset0", "simple_reset", "reset_block", "stmt", 
  "memField", "simple_stmt", "suite", "when", "info", "mdir", "ruw", "exp", 
  "id", "fieldId", "intLit", "lowerBound", "upperBound", "boundValue", "keywordAsId", 
  "primop"
};

std::vector<std::string> FIRRTLParser::_literalNames = {
  "", "':'", "'<'", "'>'", "'Interval'", "'.'", "'AsyncReset'", "'Reset'", 
  "'{'", "'}'", "'['", "']'", "'defname'", "'='", "'reset'", "'=>'", "'('", 
  "')'", "'<='", "'<-'", "'stop('", "'printf('", "'attach'", "'data-type'", 
  "'read-latency'", "'write-latency'", "'read-under-write'", "'mux('", "'validif('", 
  "'?'", "'add('", "'sub('", "'mul('", "'div('", "'rem('", "'lt('", "'leq('", 
  "'gt('", "'geq('", "'eq('", "'neq('", "'pad('", "'asUInt('", "'asAsyncReset('", 
  "'asSInt('", "'asClock('", "'asFixedPoint('", "'asInterval('", "'shl('", 
  "'shr('", "'dshl('", "'dshr('", "'cvt('", "'neg('", "'not('", "'and('", 
  "'or('", "'xor('", "'andr('", "'orr('", "'xorr('", "'cat('", "'bits('", 
  "'head('", "'tail('", "'incp('", "'decp('", "'setp('", "'wrap('", "'clip('", 
  "'squz('", "'circuit'", "'module'", "'extmodule'", "'parameter'", "'input'", 
  "'output'", "'UInt'", "'SInt'", "'Clock'", "'Analog'", "'Fixed'", "'flip'", 
  "'wire'", "'reg'", "'with'", "'mem'", "'depth'", "'reader'", "'writer'", 
  "'readwriter'", "'inst'", "'of'", "'node'", "'is'", "'invalid'", "'when'", 
  "'else'", "'stop'", "'printf'", "'skip'", "'old'", "'new'", "'undefined'", 
  "'mux'", "'validif'", "'cmem'", "'smem'", "'mport'", "'infer'", "'read'", 
  "'write'", "'rdwr'"
};

std::vector<std::string> FIRRTLParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Key_circuit", 
  "Key_module", "Key_extmodule", "Key_parameter", "Key_input", "Key_output", 
  "Key_UInt", "Key_SInt", "Key_Clock", "Key_Analog", "Key_Fixed", "Key_flip", 
  "Key_wire", "Key_reg", "Key_with", "Key_mem", "Key_depth", "Key_reader", 
  "Key_writer", "Key_readwriter", "Key_inst", "Key_of", "Key_node", "Key_is", 
  "Key_invalid", "Key_when", "Key_else", "Key_stop", "Key_printf", "Key_skip", 
  "Key_old", "Key_new", "Key_undefined", "Key_mux", "Key_validif", "Key_cmem", 
  "Key_smem", "Key_mport", "Key_infer", "Key_read", "Key_write", "Key_rdwr", 
  "UnsignedInt", "SignedInt", "HexLit", "OctalLit", "BinaryLit", "DoubleLit", 
  "StringLit", "RawString", "FileInfo", "Id", "RelaxedId", "COMMENT", "WHITESPACE", 
  "NEWLINE", "INDENT", "DEDENT"
};

dfa::Vocabulary FIRRTLParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> FIRRTLParser::_tokenNames;

FIRRTLParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x82, 0x259, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x41, 0xa, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x45, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x48, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x51, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x55, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x58, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x61, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x65, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x68, 0xb, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x6b, 0xa, 0x3, 0x3, 0x3, 0x7, 0x3, 0x6e, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x71, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x75, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
    0x7c, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x88, 0xa, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x8f, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x96, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x9e, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0xa6, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0xaa, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb4, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x7, 0x6, 0xb8, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xbb, 0xb, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0xbe, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0xc5, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xc8, 0xb, 0x6, 0x3, 
    0x7, 0x5, 0x7, 0xcb, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0xee, 0xa, 0x9, 0x3, 0xa, 0x7, 0xa, 0xf1, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0xf4, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x102, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x107, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x10f, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x116, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x120, 
    0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0x123, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x129, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 
    0x12d, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x130, 0xb, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x139, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x140, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0x143, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x14f, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x156, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x15d, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x163, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x169, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x16f, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x178, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x17f, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0x182, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x186, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x18a, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x6, 0xe, 0x18f, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x190, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x195, 0xa, 0xe, 0x5, 0xe, 0x197, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x6, 0xf, 0x1b5, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x1b6, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0x1be, 0xa, 0xf, 0xd, 
    0xf, 0xe, 0xf, 0x1bf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x6, 0xf, 0x1c7, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x1c8, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x1cd, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1d1, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x1d6, 0xa, 0x11, 
    0xd, 0x11, 0xe, 0x11, 0x1d7, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1dc, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1e2, 
    0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1e5, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1eb, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x1ee, 0xa, 0x12, 0x5, 0x12, 0x1f0, 0xa, 0x12, 0x5, 0x12, 0x1f2, 0xa, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 
    0x16, 0x200, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x20b, 
    0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 
    0x16, 0x21f, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x222, 0xb, 0x16, 0x3, 
    0x16, 0x7, 0x16, 0x225, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x228, 0xb, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x22c, 0xa, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x23e, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0x241, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x245, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x24b, 0xa, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x2, 0x4, 0xa, 0x2a, 0x1f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x2, 0xb, 0x3, 
    0x2, 0x4d, 0x4e, 0x3, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x67, 0x69, 0x3, 0x2, 
    0x73, 0x77, 0x4, 0x2, 0xc, 0xc, 0x12, 0x12, 0x4, 0x2, 0xd, 0xd, 0x13, 
    0x13, 0x5, 0x2, 0x1f, 0x1f, 0x73, 0x74, 0x78, 0x78, 0x4, 0x2, 0x10, 
    0x10, 0x49, 0x72, 0x3, 0x2, 0x20, 0x48, 0x2, 0x2a5, 0x2, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x74, 0x3, 0x2, 0x2, 0x2, 0x6, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x7f, 0x3, 0x2, 0x2, 0x2, 0xa, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0xe, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x10, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x14, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x101, 0x3, 0x2, 0x2, 0x2, 0x18, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x196, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1cc, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x22b, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x244, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x24a, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x24e, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x250, 0x3, 0x2, 0x2, 0x2, 0x36, 0x252, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x254, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x256, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x3d, 0x7, 0x49, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0x2c, 0x17, 0x2, 0x3e, 
    0x40, 0x7, 0x3, 0x2, 0x2, 0x3f, 0x41, 0x5, 0x24, 0x13, 0x2, 0x40, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x46, 0x7, 0x81, 0x2, 0x2, 0x43, 0x45, 0x5, 0x4, 
    0x3, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x49, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x4a, 0x7, 0x82, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x2, 0x2, 0x3, 0x4b, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x4a, 0x2, 0x2, 0x4d, 0x4e, 0x5, 
    0x2c, 0x17, 0x2, 0x4e, 0x50, 0x7, 0x3, 0x2, 0x2, 0x4f, 0x51, 0x5, 0x24, 
    0x13, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x56, 0x7, 0x81, 0x2, 0x2, 
    0x53, 0x55, 0x5, 0x6, 0x4, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x12, 0xa, 0x2, 0x5a, 0x5b, 0x7, 0x82, 
    0x2, 0x2, 0x5b, 0x75, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x4b, 0x2, 
    0x2, 0x5d, 0x5e, 0x5, 0x2c, 0x17, 0x2, 0x5e, 0x60, 0x7, 0x3, 0x2, 0x2, 
    0x5f, 0x61, 0x5, 0x24, 0x13, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x66, 
    0x7, 0x81, 0x2, 0x2, 0x63, 0x65, 0x5, 0x6, 0x4, 0x2, 0x64, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x5, 0xe, 0x8, 0x2, 
    0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x10, 0x9, 0x2, 0x6d, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x82, 0x2, 
    0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 0x74, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x75, 0x5, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x5, 0x8, 0x5, 0x2, 0x77, 0x78, 0x5, 0x2c, 0x17, 0x2, 0x78, 0x79, 
    0x7, 0x3, 0x2, 0x2, 0x79, 0x7b, 0x5, 0xa, 0x6, 0x2, 0x7a, 0x7c, 0x5, 
    0x24, 0x13, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x80, 0x2, 
    0x2, 0x7e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x9, 0x2, 0x2, 0x2, 
    0x80, 0x9, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x8, 0x6, 0x1, 0x2, 0x82, 
    0x87, 0x7, 0x4f, 0x2, 0x2, 0x83, 0x84, 0x7, 0x4, 0x2, 0x2, 0x84, 0x85, 
    0x5, 0x30, 0x19, 0x2, 0x85, 0x86, 0x7, 0x5, 0x2, 0x2, 0x86, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x83, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8e, 0x7, 0x50, 0x2, 
    0x2, 0x8a, 0x8b, 0x7, 0x4, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0x30, 0x19, 0x2, 
    0x8c, 0x8d, 0x7, 0x5, 0x2, 0x2, 0x8d, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x95, 0x7, 0x53, 0x2, 0x2, 0x91, 0x92, 0x7, 
    0x4, 0x2, 0x2, 0x92, 0x93, 0x5, 0x30, 0x19, 0x2, 0x93, 0x94, 0x7, 0x5, 
    0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x97, 0x98, 0x7, 0x4, 0x2, 0x2, 0x98, 0x99, 0x7, 0x4, 0x2, 0x2, 0x99, 
    0x9a, 0x5, 0x30, 0x19, 0x2, 0x9a, 0x9b, 0x7, 0x5, 0x2, 0x2, 0x9b, 0x9c, 
    0x7, 0x5, 0x2, 0x2, 0x9c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0xa5, 0x7, 0x6, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x32, 0x1a, 
    0x2, 0xa1, 0xa2, 0x5, 0x36, 0x1c, 0x2, 0xa2, 0xa3, 0x5, 0x36, 0x1c, 
    0x2, 0xa3, 0xa4, 0x5, 0x34, 0x1b, 0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x7, 0x2, 0x2, 0xa8, 0xaa, 
    0x5, 0x30, 0x19, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xab, 0xbe, 0x7, 0x51, 
    0x2, 0x2, 0xac, 0xbe, 0x7, 0x8, 0x2, 0x2, 0xad, 0xbe, 0x7, 0x9, 0x2, 
    0x2, 0xae, 0xb3, 0x7, 0x52, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x4, 0x2, 0x2, 
    0xb0, 0xb1, 0x5, 0x30, 0x19, 0x2, 0xb1, 0xb2, 0x7, 0x5, 0x2, 0x2, 0xb2, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb9, 0x7, 
    0xa, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0xc, 0x7, 0x2, 0xb7, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbe, 0x7, 0xb, 0x2, 0x2, 0xbd, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x89, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xac, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xae, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0xc, 0x3, 0x2, 0x2, 
    0xc0, 0xc1, 0x7, 0xc, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x30, 0x19, 0x2, 0xc2, 
    0xc3, 0x7, 0xd, 0x2, 0x2, 0xc3, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 0x7, 0x54, 0x2, 
    0x2, 0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x2e, 0x18, 0x2, 0xcd, 
    0xce, 0x7, 0x3, 0x2, 0x2, 0xce, 0xcf, 0x5, 0xa, 0x6, 0x2, 0xcf, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0xe, 0x2, 0x2, 0xd1, 0xd2, 0x7, 
    0xf, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x2c, 0x17, 0x2, 0xd3, 0xd4, 0x7, 0x80, 
    0x2, 0x2, 0xd4, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x4c, 0x2, 
    0x2, 0xd6, 0xd7, 0x5, 0x2c, 0x17, 0x2, 0xd7, 0xd8, 0x7, 0xf, 0x2, 0x2, 
    0xd8, 0xd9, 0x5, 0x30, 0x19, 0x2, 0xd9, 0xda, 0x7, 0x80, 0x2, 0x2, 0xda, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x4c, 0x2, 0x2, 0xdc, 0xdd, 
    0x5, 0x2c, 0x17, 0x2, 0xdd, 0xde, 0x7, 0xf, 0x2, 0x2, 0xde, 0xdf, 0x7, 
    0x79, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x80, 0x2, 0x2, 0xe0, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0xe2, 0x7, 0x4c, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x2c, 0x17, 
    0x2, 0xe3, 0xe4, 0x7, 0xf, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x78, 0x2, 0x2, 
    0xe5, 0xe6, 0x7, 0x80, 0x2, 0x2, 0xe6, 0xee, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe8, 0x7, 0x4c, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x2c, 0x17, 0x2, 0xe9, 0xea, 
    0x7, 0xf, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x7a, 0x2, 0x2, 0xeb, 0xec, 0x7, 
    0x80, 0x2, 0x2, 0xec, 0xee, 0x3, 0x2, 0x2, 0x2, 0xed, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xed, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xee, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf1, 0x5, 0x1e, 0x10, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 
    0x3, 0x2, 0x2, 0x2, 0xf3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x10, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x11, 
    0x2, 0x2, 0xf7, 0xf8, 0x7, 0x12, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x2a, 0x16, 
    0x2, 0xf9, 0xfa, 0x5, 0x2a, 0x16, 0x2, 0xfa, 0xfb, 0x7, 0x13, 0x2, 0x2, 
    0xfb, 0x15, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x102, 0x5, 0x14, 0xb, 0x2, 0xfd, 
    0xfe, 0x7, 0x12, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x14, 0xb, 0x2, 0xff, 0x100, 
    0x7, 0x13, 0x2, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0x101, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x102, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x104, 0x7, 0x81, 0x2, 0x2, 0x104, 0x106, 0x5, 
    0x16, 0xc, 0x2, 0x105, 0x107, 0x5, 0x24, 0x13, 0x2, 0x106, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x109, 0x7, 0x82, 0x2, 0x2, 0x109, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x12, 0x2, 0x2, 0x10b, 0x10c, 0x5, 
    0x16, 0xc, 0x2, 0x10c, 0x10d, 0x7, 0x13, 0x2, 0x2, 0x10d, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x10e, 0x103, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0x55, 
    0x2, 0x2, 0x111, 0x112, 0x5, 0x2c, 0x17, 0x2, 0x112, 0x113, 0x7, 0x3, 
    0x2, 0x2, 0x113, 0x115, 0x5, 0xa, 0x6, 0x2, 0x114, 0x116, 0x5, 0x24, 
    0x13, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x197, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 0x56, 
    0x2, 0x2, 0x118, 0x119, 0x5, 0x2c, 0x17, 0x2, 0x119, 0x11a, 0x7, 0x3, 
    0x2, 0x2, 0x11a, 0x11b, 0x5, 0xa, 0x6, 0x2, 0x11b, 0x11f, 0x5, 0x2a, 
    0x16, 0x2, 0x11c, 0x11d, 0x7, 0x57, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x3, 
    0x2, 0x2, 0x11e, 0x120, 0x5, 0x18, 0xd, 0x2, 0x11f, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x123, 0x5, 0x24, 0x13, 0x2, 0x122, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x125, 0x7, 0x58, 0x2, 0x2, 0x125, 0x126, 0x5, 0x2c, 
    0x17, 0x2, 0x126, 0x128, 0x7, 0x3, 0x2, 0x2, 0x127, 0x129, 0x5, 0x24, 
    0x13, 0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12e, 0x7, 0x81, 
    0x2, 0x2, 0x12b, 0x12d, 0x5, 0x1c, 0xf, 0x2, 0x12c, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0x82, 
    0x2, 0x2, 0x132, 0x197, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x6c, 
    0x2, 0x2, 0x134, 0x135, 0x5, 0x2c, 0x17, 0x2, 0x135, 0x136, 0x7, 0x3, 
    0x2, 0x2, 0x136, 0x138, 0x5, 0xa, 0x6, 0x2, 0x137, 0x139, 0x5, 0x24, 
    0x13, 0x2, 0x138, 0x137, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x197, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x6d, 
    0x2, 0x2, 0x13b, 0x13c, 0x5, 0x2c, 0x17, 0x2, 0x13c, 0x13d, 0x7, 0x3, 
    0x2, 0x2, 0x13d, 0x13f, 0x5, 0xa, 0x6, 0x2, 0x13e, 0x140, 0x5, 0x28, 
    0x15, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x140, 0x142, 0x3, 0x2, 0x2, 0x2, 0x141, 0x143, 0x5, 0x24, 
    0x13, 0x2, 0x142, 0x141, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x197, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x5, 0x26, 
    0x14, 0x2, 0x145, 0x146, 0x7, 0x6e, 0x2, 0x2, 0x146, 0x147, 0x5, 0x2c, 
    0x17, 0x2, 0x147, 0x148, 0x7, 0xf, 0x2, 0x2, 0x148, 0x149, 0x5, 0x2c, 
    0x17, 0x2, 0x149, 0x14a, 0x7, 0xc, 0x2, 0x2, 0x14a, 0x14b, 0x5, 0x2a, 
    0x16, 0x2, 0x14b, 0x14c, 0x7, 0xd, 0x2, 0x2, 0x14c, 0x14e, 0x5, 0x2a, 
    0x16, 0x2, 0x14d, 0x14f, 0x5, 0x24, 0x13, 0x2, 0x14e, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x151, 0x7, 0x5d, 0x2, 0x2, 0x151, 0x152, 0x5, 0x2c, 
    0x17, 0x2, 0x152, 0x153, 0x7, 0x5e, 0x2, 0x2, 0x153, 0x155, 0x5, 0x2c, 
    0x17, 0x2, 0x154, 0x156, 0x5, 0x24, 0x13, 0x2, 0x155, 0x154, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x157, 0x158, 0x7, 0x5f, 0x2, 0x2, 0x158, 0x159, 0x5, 0x2c, 
    0x17, 0x2, 0x159, 0x15a, 0x7, 0xf, 0x2, 0x2, 0x15a, 0x15c, 0x5, 0x2a, 
    0x16, 0x2, 0x15b, 0x15d, 0x5, 0x24, 0x13, 0x2, 0x15c, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15f, 0x5, 0x2a, 0x16, 0x2, 0x15f, 0x160, 0x7, 0x14, 
    0x2, 0x2, 0x160, 0x162, 0x5, 0x2a, 0x16, 0x2, 0x161, 0x163, 0x5, 0x24, 
    0x13, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x197, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x5, 0x2a, 
    0x16, 0x2, 0x165, 0x166, 0x7, 0x15, 0x2, 0x2, 0x166, 0x168, 0x5, 0x2a, 
    0x16, 0x2, 0x167, 0x169, 0x5, 0x24, 0x13, 0x2, 0x168, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x16b, 0x5, 0x2a, 0x16, 0x2, 0x16b, 0x16c, 0x7, 0x60, 
    0x2, 0x2, 0x16c, 0x16e, 0x7, 0x61, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0x24, 
    0x13, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x197, 0x3, 0x2, 0x2, 0x2, 0x170, 0x197, 0x5, 0x22, 
    0x12, 0x2, 0x171, 0x172, 0x7, 0x16, 0x2, 0x2, 0x172, 0x173, 0x5, 0x2a, 
    0x16, 0x2, 0x173, 0x174, 0x5, 0x2a, 0x16, 0x2, 0x174, 0x175, 0x5, 0x30, 
    0x19, 0x2, 0x175, 0x177, 0x7, 0x13, 0x2, 0x2, 0x176, 0x178, 0x5, 0x24, 
    0x13, 0x2, 0x177, 0x176, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 
    0x2, 0x2, 0x178, 0x197, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x17, 
    0x2, 0x2, 0x17a, 0x17b, 0x5, 0x2a, 0x16, 0x2, 0x17b, 0x17c, 0x5, 0x2a, 
    0x16, 0x2, 0x17c, 0x180, 0x7, 0x79, 0x2, 0x2, 0x17d, 0x17f, 0x5, 0x2a, 
    0x16, 0x2, 0x17e, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x182, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 
    0x2, 0x2, 0x181, 0x183, 0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x183, 0x185, 0x7, 0x13, 0x2, 0x2, 0x184, 0x186, 0x5, 0x24, 
    0x13, 0x2, 0x185, 0x184, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x197, 0x3, 0x2, 0x2, 0x2, 0x187, 0x189, 0x7, 0x66, 
    0x2, 0x2, 0x188, 0x18a, 0x5, 0x24, 0x13, 0x2, 0x189, 0x188, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x18b, 0x18c, 0x7, 0x18, 0x2, 0x2, 0x18c, 0x18e, 0x7, 0x12, 
    0x2, 0x2, 0x18d, 0x18f, 0x5, 0x2a, 0x16, 0x2, 0x18e, 0x18d, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 0x18e, 0x3, 0x2, 
    0x2, 0x2, 0x190, 0x191, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x194, 0x7, 0x13, 0x2, 0x2, 0x193, 0x195, 0x5, 0x24, 
    0x13, 0x2, 0x194, 0x193, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x197, 0x3, 0x2, 0x2, 0x2, 0x196, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x117, 0x3, 0x2, 0x2, 0x2, 0x196, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x133, 0x3, 0x2, 0x2, 0x2, 0x196, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x144, 0x3, 0x2, 0x2, 0x2, 0x196, 0x150, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x157, 0x3, 0x2, 0x2, 0x2, 0x196, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x164, 0x3, 0x2, 0x2, 0x2, 0x196, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x170, 0x3, 0x2, 0x2, 0x2, 0x196, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x179, 0x3, 0x2, 0x2, 0x2, 0x196, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x197, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x199, 0x7, 0x19, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x11, 0x2, 
    0x2, 0x19a, 0x19b, 0x5, 0xa, 0x6, 0x2, 0x19b, 0x19c, 0x7, 0x80, 0x2, 
    0x2, 0x19c, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x7, 0x59, 0x2, 
    0x2, 0x19e, 0x19f, 0x7, 0x11, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 0x30, 0x19, 
    0x2, 0x1a0, 0x1a1, 0x7, 0x80, 0x2, 0x2, 0x1a1, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a3, 0x7, 0x1a, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x11, 0x2, 
    0x2, 0x1a4, 0x1a5, 0x5, 0x30, 0x19, 0x2, 0x1a5, 0x1a6, 0x7, 0x80, 0x2, 
    0x2, 0x1a6, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x1b, 0x2, 
    0x2, 0x1a8, 0x1a9, 0x7, 0x11, 0x2, 0x2, 0x1a9, 0x1aa, 0x5, 0x30, 0x19, 
    0x2, 0x1aa, 0x1ab, 0x7, 0x80, 0x2, 0x2, 0x1ab, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1ac, 0x1ad, 0x7, 0x1c, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x11, 0x2, 
    0x2, 0x1ae, 0x1af, 0x5, 0x28, 0x15, 0x2, 0x1af, 0x1b0, 0x7, 0x80, 0x2, 
    0x2, 0x1b0, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x5a, 0x2, 
    0x2, 0x1b2, 0x1b4, 0x7, 0x11, 0x2, 0x2, 0x1b3, 0x1b5, 0x5, 0x2c, 0x17, 
    0x2, 0x1b4, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 
    0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 
    0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x80, 0x2, 
    0x2, 0x1b9, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x5b, 0x2, 
    0x2, 0x1bb, 0x1bd, 0x7, 0x11, 0x2, 0x2, 0x1bc, 0x1be, 0x5, 0x2c, 0x17, 
    0x2, 0x1bd, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0x80, 0x2, 
    0x2, 0x1c2, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x5c, 0x2, 
    0x2, 0x1c4, 0x1c6, 0x7, 0x11, 0x2, 0x2, 0x1c5, 0x1c7, 0x5, 0x2c, 0x17, 
    0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x7, 0x80, 0x2, 
    0x2, 0x1cb, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x198, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1a2, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1ac, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1ba, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x1d1, 0x5, 0x1a, 0xe, 0x2, 0x1cf, 0x1d1, 0x7, 0x80, 0x2, 0x2, 
    0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1dc, 0x5, 0x1e, 0x10, 0x2, 
    0x1d3, 0x1d5, 0x7, 0x81, 0x2, 0x2, 0x1d4, 0x1d6, 0x5, 0x1e, 0x10, 0x2, 
    0x1d5, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x82, 0x2, 0x2, 
    0x1da, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1db, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1dd, 
    0x1de, 0x7, 0x62, 0x2, 0x2, 0x1de, 0x1df, 0x5, 0x2a, 0x16, 0x2, 0x1df, 
    0x1e1, 0x7, 0x3, 0x2, 0x2, 0x1e0, 0x1e2, 0x5, 0x24, 0x13, 0x2, 0x1e1, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e2, 
    0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e5, 0x5, 0x20, 0x11, 0x2, 0x1e4, 
    0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 
    0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1ef, 0x7, 0x63, 0x2, 0x2, 0x1e7, 
    0x1f0, 0x5, 0x22, 0x12, 0x2, 0x1e8, 0x1ea, 0x7, 0x3, 0x2, 0x2, 0x1e9, 
    0x1eb, 0x5, 0x24, 0x13, 0x2, 0x1ea, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
    0x1ee, 0x5, 0x20, 0x11, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
    0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
    0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1f1, 
    0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 
    0x7, 0x7b, 0x2, 0x2, 0x1f4, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 
    0x9, 0x3, 0x2, 0x2, 0x1f6, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x9, 
    0x4, 0x2, 0x2, 0x1f8, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x8, 0x16, 
    0x1, 0x2, 0x1fa, 0x1ff, 0x7, 0x4f, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x4, 
    0x2, 0x2, 0x1fc, 0x1fd, 0x5, 0x30, 0x19, 0x2, 0x1fd, 0x1fe, 0x7, 0x5, 
    0x2, 0x2, 0x1fe, 0x200, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1ff, 0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 
    0x2, 0x2, 0x201, 0x202, 0x7, 0x12, 0x2, 0x2, 0x202, 0x203, 0x5, 0x30, 
    0x19, 0x2, 0x203, 0x204, 0x7, 0x13, 0x2, 0x2, 0x204, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x205, 0x20a, 0x7, 0x50, 0x2, 0x2, 0x206, 0x207, 0x7, 0x4, 
    0x2, 0x2, 0x207, 0x208, 0x5, 0x30, 0x19, 0x2, 0x208, 0x209, 0x7, 0x5, 
    0x2, 0x2, 0x209, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x20d, 0x7, 0x12, 0x2, 0x2, 0x20d, 0x20e, 0x5, 0x30, 
    0x19, 0x2, 0x20e, 0x20f, 0x7, 0x13, 0x2, 0x2, 0x20f, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x22c, 0x5, 0x2c, 0x17, 0x2, 0x211, 0x212, 0x7, 0x1d, 
    0x2, 0x2, 0x212, 0x213, 0x5, 0x2a, 0x16, 0x2, 0x213, 0x214, 0x5, 0x2a, 
    0x16, 0x2, 0x214, 0x215, 0x5, 0x2a, 0x16, 0x2, 0x215, 0x216, 0x7, 0x13, 
    0x2, 0x2, 0x216, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x7, 0x1e, 
    0x2, 0x2, 0x218, 0x219, 0x5, 0x2a, 0x16, 0x2, 0x219, 0x21a, 0x5, 0x2a, 
    0x16, 0x2, 0x21a, 0x21b, 0x7, 0x13, 0x2, 0x2, 0x21b, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x21c, 0x220, 0x5, 0x3a, 0x1e, 0x2, 0x21d, 0x21f, 0x5, 0x2a, 
    0x16, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x222, 0x3, 0x2, 
    0x2, 0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x226, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 
    0x2, 0x2, 0x223, 0x225, 0x5, 0x30, 0x19, 0x2, 0x224, 0x223, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x228, 0x3, 0x2, 0x2, 0x2, 0x226, 0x224, 0x3, 0x2, 
    0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 0x3, 0x2, 
    0x2, 0x2, 0x228, 0x226, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x13, 
    0x2, 0x2, 0x22a, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x22b, 0x205, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x210, 0x3, 0x2, 
    0x2, 0x2, 0x22b, 0x211, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x22b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x23f, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x22e, 0xc, 0x9, 0x2, 0x2, 0x22e, 0x22f, 0x7, 0x7, 
    0x2, 0x2, 0x22f, 0x23e, 0x5, 0x2e, 0x18, 0x2, 0x230, 0x231, 0xc, 0x8, 
    0x2, 0x2, 0x231, 0x232, 0x7, 0x7, 0x2, 0x2, 0x232, 0x23e, 0x7, 0x78, 
    0x2, 0x2, 0x233, 0x234, 0xc, 0x7, 0x2, 0x2, 0x234, 0x235, 0x7, 0xc, 
    0x2, 0x2, 0x235, 0x236, 0x5, 0x30, 0x19, 0x2, 0x236, 0x237, 0x7, 0xd, 
    0x2, 0x2, 0x237, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0xc, 0x6, 
    0x2, 0x2, 0x239, 0x23a, 0x7, 0xc, 0x2, 0x2, 0x23a, 0x23b, 0x5, 0x2a, 
    0x16, 0x2, 0x23b, 0x23c, 0x7, 0xd, 0x2, 0x2, 0x23c, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x230, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x233, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x238, 0x3, 0x2, 
    0x2, 0x2, 0x23e, 0x241, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x23d, 0x3, 0x2, 
    0x2, 0x2, 0x23f, 0x240, 0x3, 0x2, 0x2, 0x2, 0x240, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x242, 0x245, 0x7, 0x7c, 0x2, 
    0x2, 0x243, 0x245, 0x5, 0x38, 0x1d, 0x2, 0x244, 0x242, 0x3, 0x2, 0x2, 
    0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x246, 0x24b, 0x7, 0x7c, 0x2, 0x2, 0x247, 0x24b, 0x7, 0x7d, 0x2, 0x2, 
    0x248, 0x24b, 0x7, 0x73, 0x2, 0x2, 0x249, 0x24b, 0x5, 0x38, 0x1d, 0x2, 
    0x24a, 0x246, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x247, 0x3, 0x2, 0x2, 0x2, 
    0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x249, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x9, 0x5, 0x2, 0x2, 0x24d, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x9, 0x6, 0x2, 0x2, 0x24f, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x9, 0x7, 0x2, 0x2, 0x251, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x252, 0x253, 0x9, 0x8, 0x2, 0x2, 0x253, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x254, 0x255, 0x9, 0x9, 0x2, 0x2, 0x255, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x256, 0x257, 0x9, 0xa, 0x2, 0x2, 0x257, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x40, 0x46, 0x50, 0x56, 0x60, 0x66, 0x6a, 0x6f, 0x74, 0x7b, 0x87, 
    0x8e, 0x95, 0x9d, 0xa5, 0xa9, 0xb3, 0xb9, 0xbd, 0xc6, 0xca, 0xed, 0xf2, 
    0x101, 0x106, 0x10e, 0x115, 0x11f, 0x122, 0x128, 0x12e, 0x138, 0x13f, 
    0x142, 0x14e, 0x155, 0x15c, 0x162, 0x168, 0x16e, 0x177, 0x180, 0x185, 
    0x189, 0x190, 0x194, 0x196, 0x1b6, 0x1bf, 0x1c8, 0x1cc, 0x1d0, 0x1d7, 
    0x1db, 0x1e1, 0x1e4, 0x1ea, 0x1ed, 0x1ef, 0x1f1, 0x1ff, 0x20a, 0x220, 
    0x226, 0x22b, 0x23d, 0x23f, 0x244, 0x24a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

FIRRTLParser::Initializer FIRRTLParser::_init;
