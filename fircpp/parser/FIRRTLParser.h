
// Generated from /media/itviewer/linux/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace fircpp {


class  FIRRTLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, Key_circuit = 70, Key_module = 71, Key_extmodule = 72, Key_parameter = 73, 
    Key_input = 74, Key_output = 75, Key_UInt = 76, Key_SInt = 77, Key_Clock = 78, 
    Key_Reset = 79, Key_AsyncReset = 80, Key_Analog = 81, Key_Fixed = 82, 
    Key_Interval = 83, Key_flip = 84, Key_wire = 85, Key_reg = 86, Key_with = 87, 
    Key_mem = 88, Key_depth = 89, Key_reader = 90, Key_writer = 91, Key_readwriter = 92, 
    Key_inst = 93, Key_of = 94, Key_node = 95, Key_is = 96, Key_invalid = 97, 
    Key_when = 98, Key_else = 99, Key_stop = 100, Key_printf = 101, Key_skip = 102, 
    Key_old = 103, Key_new = 104, Key_undefined = 105, Key_mux = 106, Key_validif = 107, 
    Key_cmem = 108, Key_smem = 109, Key_mport = 110, Key_infer = 111, Key_read = 112, 
    Key_write = 113, Key_rdwr = 114, Key_attach = 115, Key_assert = 116, 
    Key_assume = 117, Key_cover = 118, UnsignedInt = 119, SignedInt = 120, 
    HexLit = 121, OctalLit = 122, BinaryLit = 123, DoubleLit = 124, StringLit = 125, 
    RawString = 126, FileInfo = 127, Id = 128, RelaxedId = 129, COMMENT = 130, 
    WHITESPACE = 131, NEWLINE = 132, INDENT = 133, DEDENT = 134
  };

  enum {
    RuleCircuit = 0, RuleModule = 1, RulePort = 2, RuleDir = 3, RuleType = 4, 
    RuleField = 5, RuleDefname = 6, RuleParameter = 7, RuleModuleBlock = 8, 
    RuleSimple_reset0 = 9, RuleSimple_reset = 10, RuleReset_block = 11, 
    RuleStmt = 12, RuleStmtName = 13, RuleMemField = 14, RuleSimple_stmt = 15, 
    RuleSuite = 16, RuleWhen = 17, RuleInfo = 18, RuleMdir = 19, RuleRuw = 20, 
    RuleExp = 21, RuleRef = 22, RuleSubref = 23, RuleId = 24, RuleFieldId = 25, 
    RuleIntLit = 26, RuleLowerBound = 27, RuleUpperBound = 28, RuleBoundValue = 29, 
    RuleKeywordAsId = 30, RulePrimop = 31
  };

  explicit FIRRTLParser(antlr4::TokenStream *input);

  FIRRTLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~FIRRTLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CircuitContext;
  class ModuleContext;
  class PortContext;
  class DirContext;
  class TypeContext;
  class FieldContext;
  class DefnameContext;
  class ParameterContext;
  class ModuleBlockContext;
  class Simple_reset0Context;
  class Simple_resetContext;
  class Reset_blockContext;
  class StmtContext;
  class StmtNameContext;
  class MemFieldContext;
  class Simple_stmtContext;
  class SuiteContext;
  class WhenContext;
  class InfoContext;
  class MdirContext;
  class RuwContext;
  class ExpContext;
  class RefContext;
  class SubrefContext;
  class IdContext;
  class FieldIdContext;
  class IntLitContext;
  class LowerBoundContext;
  class UpperBoundContext;
  class BoundValueContext;
  class KeywordAsIdContext;
  class PrimopContext; 

  class  CircuitContext : public antlr4::ParserRuleContext {
  public:
    CircuitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_circuit();
    IdContext *id();
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *DEDENT();
    antlr4::tree::TerminalNode *EOF();
    InfoContext *info();
    std::vector<ModuleContext *> module();
    ModuleContext* module(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CircuitContext* circuit();

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_module();
    IdContext *id();
    antlr4::tree::TerminalNode *INDENT();
    ModuleBlockContext *moduleBlock();
    antlr4::tree::TerminalNode *DEDENT();
    InfoContext *info();
    std::vector<PortContext *> port();
    PortContext* port(size_t i);
    antlr4::tree::TerminalNode *Key_extmodule();
    DefnameContext *defname();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirContext *dir();
    IdContext *id();
    TypeContext *type();
    antlr4::tree::TerminalNode *NEWLINE();
    InfoContext *info();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class  DirContext : public antlr4::ParserRuleContext {
  public:
    DirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_input();
    antlr4::tree::TerminalNode *Key_output();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirContext* dir();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_UInt();
    std::vector<IntLitContext *> intLit();
    IntLitContext* intLit(size_t i);
    antlr4::tree::TerminalNode *Key_SInt();
    antlr4::tree::TerminalNode *Key_Fixed();
    antlr4::tree::TerminalNode *Key_Interval();
    LowerBoundContext *lowerBound();
    std::vector<BoundValueContext *> boundValue();
    BoundValueContext* boundValue(size_t i);
    UpperBoundContext *upperBound();
    antlr4::tree::TerminalNode *Key_Clock();
    antlr4::tree::TerminalNode *Key_AsyncReset();
    antlr4::tree::TerminalNode *Key_Reset();
    antlr4::tree::TerminalNode *Key_Analog();
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();
  TypeContext* type(int precedence);
  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdContext *fieldId();
    TypeContext *type();
    antlr4::tree::TerminalNode *Key_flip();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  DefnameContext : public antlr4::ParserRuleContext {
  public:
    DefnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefnameContext* defname();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_parameter();
    IdContext *id();
    IntLitContext *intLit();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *StringLit();
    antlr4::tree::TerminalNode *DoubleLit();
    antlr4::tree::TerminalNode *RawString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  ModuleBlockContext : public antlr4::ParserRuleContext {
  public:
    ModuleBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_stmtContext *> simple_stmt();
    Simple_stmtContext* simple_stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleBlockContext* moduleBlock();

  class  Simple_reset0Context : public antlr4::ParserRuleContext {
  public:
    Simple_reset0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_reset0Context* simple_reset0();

  class  Simple_resetContext : public antlr4::ParserRuleContext {
  public:
    Simple_resetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_reset0Context *simple_reset0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_resetContext* simple_reset();

  class  Reset_blockContext : public antlr4::ParserRuleContext {
  public:
    Reset_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDENT();
    Simple_resetContext *simple_reset();
    antlr4::tree::TerminalNode *DEDENT();
    InfoContext *info();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_blockContext* reset_block();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_wire();
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    TypeContext *type();
    InfoContext *info();
    antlr4::tree::TerminalNode *Key_reg();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *Key_with();
    Reset_blockContext *reset_block();
    antlr4::tree::TerminalNode *Key_mem();
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *DEDENT();
    std::vector<MemFieldContext *> memField();
    MemFieldContext* memField(size_t i);
    antlr4::tree::TerminalNode *Key_cmem();
    antlr4::tree::TerminalNode *Key_smem();
    RuwContext *ruw();
    MdirContext *mdir();
    antlr4::tree::TerminalNode *Key_mport();
    antlr4::tree::TerminalNode *Key_inst();
    antlr4::tree::TerminalNode *Key_of();
    antlr4::tree::TerminalNode *Key_node();
    RefContext *ref();
    antlr4::tree::TerminalNode *Key_is();
    antlr4::tree::TerminalNode *Key_invalid();
    WhenContext *when();
    IntLitContext *intLit();
    StmtNameContext *stmtName();
    antlr4::tree::TerminalNode *StringLit();
    antlr4::tree::TerminalNode *Key_skip();
    antlr4::tree::TerminalNode *Key_attach();
    antlr4::tree::TerminalNode *Key_assert();
    antlr4::tree::TerminalNode *Key_assume();
    antlr4::tree::TerminalNode *Key_cover();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  StmtNameContext : public antlr4::ParserRuleContext {
  public:
    StmtNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtNameContext* stmtName();

  class  MemFieldContext : public antlr4::ParserRuleContext {
  public:
    MemFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *Key_depth();
    IntLitContext *intLit();
    RuwContext *ruw();
    antlr4::tree::TerminalNode *Key_reader();
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    antlr4::tree::TerminalNode *Key_writer();
    antlr4::tree::TerminalNode *Key_readwriter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemFieldContext* memField();

  class  Simple_stmtContext : public antlr4::ParserRuleContext {
  public:
    Simple_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_stmtContext* simple_stmt();

  class  SuiteContext : public antlr4::ParserRuleContext {
  public:
    SuiteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_stmtContext *> simple_stmt();
    Simple_stmtContext* simple_stmt(size_t i);
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *DEDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuiteContext* suite();

  class  WhenContext : public antlr4::ParserRuleContext {
  public:
    WhenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_when();
    ExpContext *exp();
    std::vector<InfoContext *> info();
    InfoContext* info(size_t i);
    std::vector<SuiteContext *> suite();
    SuiteContext* suite(size_t i);
    antlr4::tree::TerminalNode *Key_else();
    WhenContext *when();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenContext* when();

  class  InfoContext : public antlr4::ParserRuleContext {
  public:
    InfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FileInfo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InfoContext* info();

  class  MdirContext : public antlr4::ParserRuleContext {
  public:
    MdirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_infer();
    antlr4::tree::TerminalNode *Key_read();
    antlr4::tree::TerminalNode *Key_write();
    antlr4::tree::TerminalNode *Key_rdwr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MdirContext* mdir();

  class  RuwContext : public antlr4::ParserRuleContext {
  public:
    RuwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_old();
    antlr4::tree::TerminalNode *Key_new();
    antlr4::tree::TerminalNode *Key_undefined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuwContext* ruw();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_UInt();
    std::vector<IntLitContext *> intLit();
    IntLitContext* intLit(size_t i);
    antlr4::tree::TerminalNode *Key_SInt();
    RefContext *ref();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    PrimopContext *primop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpContext* exp();

  class  RefContext : public antlr4::ParserRuleContext {
  public:
    RefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    SubrefContext *subref();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefContext* ref();

  class  SubrefContext : public antlr4::ParserRuleContext {
  public:
    SubrefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdContext *fieldId();
    SubrefContext *subref();
    antlr4::tree::TerminalNode *DoubleLit();
    IntLitContext *intLit();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubrefContext* subref();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    KeywordAsIdContext *keywordAsId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdContext* id();

  class  FieldIdContext : public antlr4::ParserRuleContext {
  public:
    FieldIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *RelaxedId();
    antlr4::tree::TerminalNode *UnsignedInt();
    KeywordAsIdContext *keywordAsId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldIdContext* fieldId();

  class  IntLitContext : public antlr4::ParserRuleContext {
  public:
    IntLitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UnsignedInt();
    antlr4::tree::TerminalNode *SignedInt();
    antlr4::tree::TerminalNode *HexLit();
    antlr4::tree::TerminalNode *OctalLit();
    antlr4::tree::TerminalNode *BinaryLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntLitContext* intLit();

  class  LowerBoundContext : public antlr4::ParserRuleContext {
  public:
    LowerBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LowerBoundContext* lowerBound();

  class  UpperBoundContext : public antlr4::ParserRuleContext {
  public:
    UpperBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpperBoundContext* upperBound();

  class  BoundValueContext : public antlr4::ParserRuleContext {
  public:
    BoundValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleLit();
    antlr4::tree::TerminalNode *UnsignedInt();
    antlr4::tree::TerminalNode *SignedInt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoundValueContext* boundValue();

  class  KeywordAsIdContext : public antlr4::ParserRuleContext {
  public:
    KeywordAsIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Key_circuit();
    antlr4::tree::TerminalNode *Key_module();
    antlr4::tree::TerminalNode *Key_extmodule();
    antlr4::tree::TerminalNode *Key_parameter();
    antlr4::tree::TerminalNode *Key_input();
    antlr4::tree::TerminalNode *Key_output();
    antlr4::tree::TerminalNode *Key_UInt();
    antlr4::tree::TerminalNode *Key_SInt();
    antlr4::tree::TerminalNode *Key_Clock();
    antlr4::tree::TerminalNode *Key_Reset();
    antlr4::tree::TerminalNode *Key_AsyncReset();
    antlr4::tree::TerminalNode *Key_Analog();
    antlr4::tree::TerminalNode *Key_Fixed();
    antlr4::tree::TerminalNode *Key_Interval();
    antlr4::tree::TerminalNode *Key_flip();
    antlr4::tree::TerminalNode *Key_wire();
    antlr4::tree::TerminalNode *Key_reg();
    antlr4::tree::TerminalNode *Key_with();
    antlr4::tree::TerminalNode *Key_mem();
    antlr4::tree::TerminalNode *Key_depth();
    antlr4::tree::TerminalNode *Key_reader();
    antlr4::tree::TerminalNode *Key_writer();
    antlr4::tree::TerminalNode *Key_readwriter();
    antlr4::tree::TerminalNode *Key_inst();
    antlr4::tree::TerminalNode *Key_of();
    antlr4::tree::TerminalNode *Key_node();
    antlr4::tree::TerminalNode *Key_is();
    antlr4::tree::TerminalNode *Key_invalid();
    antlr4::tree::TerminalNode *Key_when();
    antlr4::tree::TerminalNode *Key_else();
    antlr4::tree::TerminalNode *Key_stop();
    antlr4::tree::TerminalNode *Key_printf();
    antlr4::tree::TerminalNode *Key_skip();
    antlr4::tree::TerminalNode *Key_old();
    antlr4::tree::TerminalNode *Key_new();
    antlr4::tree::TerminalNode *Key_undefined();
    antlr4::tree::TerminalNode *Key_mux();
    antlr4::tree::TerminalNode *Key_validif();
    antlr4::tree::TerminalNode *Key_cmem();
    antlr4::tree::TerminalNode *Key_smem();
    antlr4::tree::TerminalNode *Key_mport();
    antlr4::tree::TerminalNode *Key_infer();
    antlr4::tree::TerminalNode *Key_read();
    antlr4::tree::TerminalNode *Key_write();
    antlr4::tree::TerminalNode *Key_rdwr();
    antlr4::tree::TerminalNode *Key_attach();
    antlr4::tree::TerminalNode *Key_assert();
    antlr4::tree::TerminalNode *Key_assume();
    antlr4::tree::TerminalNode *Key_cover();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordAsIdContext* keywordAsId();

  class  PrimopContext : public antlr4::ParserRuleContext {
  public:
    PrimopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimopContext* primop();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool typeSempred(TypeContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace fircpp
