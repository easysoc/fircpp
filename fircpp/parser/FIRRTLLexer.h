
// Generated from /home/itviewer/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


#include "../DenterHelper.h"


namespace fircpp {


class  FIRRTLLexer : public antlr4::Lexer {
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
    T__68 = 69, T__69 = 70, Key_circuit = 71, Key_module = 72, Key_extmodule = 73, 
    Key_parameter = 74, Key_input = 75, Key_output = 76, Key_UInt = 77, 
    Key_SInt = 78, Key_Clock = 79, Key_Analog = 80, Key_Fixed = 81, Key_flip = 82, 
    Key_wire = 83, Key_reg = 84, Key_with = 85, Key_mem = 86, Key_depth = 87, 
    Key_reader = 88, Key_writer = 89, Key_readwriter = 90, Key_inst = 91, 
    Key_of = 92, Key_node = 93, Key_is = 94, Key_invalid = 95, Key_when = 96, 
    Key_else = 97, Key_stop = 98, Key_printf = 99, Key_skip = 100, Key_old = 101, 
    Key_new = 102, Key_undefined = 103, Key_mux = 104, Key_validif = 105, 
    Key_cmem = 106, Key_smem = 107, Key_mport = 108, Key_infer = 109, Key_read = 110, 
    Key_write = 111, Key_rdwr = 112, UnsignedInt = 113, SignedInt = 114, 
    HexLit = 115, OctalLit = 116, BinaryLit = 117, DoubleLit = 118, StringLit = 119, 
    RawString = 120, FileInfo = 121, Id = 122, RelaxedId = 123, COMMENT = 124, 
    WHITESPACE = 125, NEWLINE = 126
  };

  FIRRTLLexer(antlr4::CharStream *input);
  ~FIRRTLLexer();


  std::unique_ptr<antlr4::Token> nextToken() override;
  DenterHelper *denter = new DenterHelper(static_cast<Lexer *>(this));

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace fircpp
