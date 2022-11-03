
// Generated from /media/itviewer/linux/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.11.1

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
    WHITESPACE = 131, NEWLINE = 132
  };

  explicit FIRRTLLexer(antlr4::CharStream *input);

  ~FIRRTLLexer() override;


  std::unique_ptr<antlr4::Token> nextToken() override;
  DenterHelper *denter = new DenterHelper(static_cast<Lexer *>(this));


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace fircpp
