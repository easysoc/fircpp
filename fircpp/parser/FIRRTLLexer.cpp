
// Generated from /media/itviewer/linux/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.11.1


#include "FIRRTLLexer.h"


#include "../DenterHelper.h"


using namespace antlr4;

using namespace fircpp;


using namespace antlr4;

namespace {

struct FIRRTLLexerStaticData final {
  FIRRTLLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FIRRTLLexerStaticData(const FIRRTLLexerStaticData&) = delete;
  FIRRTLLexerStaticData(FIRRTLLexerStaticData&&) = delete;
  FIRRTLLexerStaticData& operator=(const FIRRTLLexerStaticData&) = delete;
  FIRRTLLexerStaticData& operator=(FIRRTLLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag firrtllexerLexerOnceFlag;
FIRRTLLexerStaticData *firrtllexerLexerStaticData = nullptr;

void firrtllexerLexerInitialize() {
  assert(firrtllexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<FIRRTLLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "T__34", "T__35", "T__36", "T__37", "T__38", "T__39", "T__40", 
      "T__41", "T__42", "T__43", "T__44", "T__45", "T__46", "T__47", "T__48", 
      "T__49", "T__50", "T__51", "T__52", "T__53", "T__54", "T__55", "T__56", 
      "T__57", "T__58", "T__59", "T__60", "T__61", "T__62", "T__63", "T__64", 
      "T__65", "T__66", "T__67", "T__68", "Key_circuit", "Key_module", "Key_extmodule", 
      "Key_parameter", "Key_input", "Key_output", "Key_UInt", "Key_SInt", 
      "Key_Clock", "Key_Reset", "Key_AsyncReset", "Key_Analog", "Key_Fixed", 
      "Key_Interval", "Key_flip", "Key_wire", "Key_reg", "Key_with", "Key_mem", 
      "Key_depth", "Key_reader", "Key_writer", "Key_readwriter", "Key_inst", 
      "Key_of", "Key_node", "Key_is", "Key_invalid", "Key_when", "Key_else", 
      "Key_stop", "Key_printf", "Key_skip", "Key_old", "Key_new", "Key_undefined", 
      "Key_mux", "Key_validif", "Key_cmem", "Key_smem", "Key_mport", "Key_infer", 
      "Key_read", "Key_write", "Key_rdwr", "Key_attach", "Key_assert", "Key_assume", 
      "Key_cover", "UnsignedInt", "SignedInt", "PosInt", "HexLit", "OctalLit", 
      "BinaryLit", "DoubleLit", "Digit", "HexDigit", "OctalDigit", "BinaryDigit", 
      "StringLit", "RawString", "UnquotedString", "FileInfo", "Id", "RelaxedId", 
      "LegalIdChar", "LegalStartChar", "COMMENT", "WHITESPACE", "NEWLINE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "':'", "'<'", "'>'", "'.'", "'{'", "'}'", "'['", "']'", "'defname'", 
      "'='", "'reset'", "'=>'", "'('", "')'", "'<='", "'<-'", "'stop('", 
      "'printf('", "'data-type'", "'read-latency'", "'write-latency'", "'read-under-write'", 
      "'mux('", "'validif('", "'\\u003F'", "'add('", "'sub('", "'mul('", 
      "'div('", "'rem('", "'lt('", "'leq('", "'gt('", "'geq('", "'eq('", 
      "'neq('", "'pad('", "'asUInt('", "'asAsyncReset('", "'asSInt('", "'asClock('", 
      "'asFixedPoint('", "'asInterval('", "'shl('", "'shr('", "'dshl('", 
      "'dshr('", "'cvt('", "'neg('", "'not('", "'and('", "'or('", "'xor('", 
      "'andr('", "'orr('", "'xorr('", "'cat('", "'bits('", "'head('", "'tail('", 
      "'incp('", "'decp('", "'setp('", "'wrap('", "'clip('", "'squz('", 
      "'addw('", "'subw('", "'dshlw('", "'circuit'", "'module'", "'extmodule'", 
      "'parameter'", "'input'", "'output'", "'UInt'", "'SInt'", "'Clock'", 
      "'Reset'", "'AsyncReset'", "'Analog'", "'Fixed'", "'Interval'", "'flip'", 
      "'wire'", "'reg'", "'with'", "'mem'", "'depth'", "'reader'", "'writer'", 
      "'readwriter'", "'inst'", "'of'", "'node'", "'is'", "'invalid'", "'when'", 
      "'else'", "'stop'", "'printf'", "'skip'", "'old'", "'new'", "'undefined'", 
      "'mux'", "'validif'", "'cmem'", "'smem'", "'mport'", "'infer'", "'read'", 
      "'write'", "'rdwr'", "'attach'", "'assert'", "'assume'", "'cover'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "Key_circuit", "Key_module", "Key_extmodule", "Key_parameter", 
      "Key_input", "Key_output", "Key_UInt", "Key_SInt", "Key_Clock", "Key_Reset", 
      "Key_AsyncReset", "Key_Analog", "Key_Fixed", "Key_Interval", "Key_flip", 
      "Key_wire", "Key_reg", "Key_with", "Key_mem", "Key_depth", "Key_reader", 
      "Key_writer", "Key_readwriter", "Key_inst", "Key_of", "Key_node", 
      "Key_is", "Key_invalid", "Key_when", "Key_else", "Key_stop", "Key_printf", 
      "Key_skip", "Key_old", "Key_new", "Key_undefined", "Key_mux", "Key_validif", 
      "Key_cmem", "Key_smem", "Key_mport", "Key_infer", "Key_read", "Key_write", 
      "Key_rdwr", "Key_attach", "Key_assert", "Key_assume", "Key_cover", 
      "UnsignedInt", "SignedInt", "HexLit", "OctalLit", "BinaryLit", "DoubleLit", 
      "StringLit", "RawString", "FileInfo", "Id", "RelaxedId", "COMMENT", 
      "WHITESPACE", "NEWLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,132,1148,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,
  	7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,
  	14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,
  	21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,
  	28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,
  	35,7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,
  	42,7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,
  	49,7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,
  	56,7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,
  	63,7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,
  	70,7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,
  	77,7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,
  	84,7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,
  	91,7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,
  	98,7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,2,119,7,119,2,120,7,120,2,121,7,121,2,122,
  	7,122,2,123,7,123,2,124,7,124,2,125,7,125,2,126,7,126,2,127,7,127,2,128,
  	7,128,2,129,7,129,2,130,7,130,2,131,7,131,2,132,7,132,2,133,7,133,2,134,
  	7,134,2,135,7,135,2,136,7,136,2,137,7,137,2,138,7,138,2,139,7,139,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,25,
  	1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,28,1,28,
  	1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,1,31,
  	1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,34,1,34,
  	1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,37,1,37,
  	1,37,1,37,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,
  	1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,42,
  	1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,44,1,44,
  	1,44,1,44,1,44,1,45,1,45,1,45,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,46,
  	1,46,1,47,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,48,1,49,1,49,1,49,
  	1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,51,1,52,1,52,1,52,
  	1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,53,1,54,1,54,1,54,1,54,1,54,1,55,
  	1,55,1,55,1,55,1,55,1,55,1,56,1,56,1,56,1,56,1,56,1,57,1,57,1,57,1,57,
  	1,57,1,57,1,58,1,58,1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,59,1,59,1,59,
  	1,60,1,60,1,60,1,60,1,60,1,60,1,61,1,61,1,61,1,61,1,61,1,61,1,62,1,62,
  	1,62,1,62,1,62,1,62,1,63,1,63,1,63,1,63,1,63,1,63,1,64,1,64,1,64,1,64,
  	1,64,1,64,1,65,1,65,1,65,1,65,1,65,1,65,1,66,1,66,1,66,1,66,1,66,1,66,
  	1,67,1,67,1,67,1,67,1,67,1,67,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,69,
  	1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,70,1,70,1,70,1,70,1,70,1,70,1,70,
  	1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,72,1,72,1,72,1,72,
  	1,72,1,72,1,72,1,72,1,72,1,72,1,73,1,73,1,73,1,73,1,73,1,73,1,74,1,74,
  	1,74,1,74,1,74,1,74,1,74,1,75,1,75,1,75,1,75,1,75,1,76,1,76,1,76,1,76,
  	1,76,1,77,1,77,1,77,1,77,1,77,1,77,1,78,1,78,1,78,1,78,1,78,1,78,1,79,
  	1,79,1,79,1,79,1,79,1,79,1,79,1,79,1,79,1,79,1,79,1,80,1,80,1,80,1,80,
  	1,80,1,80,1,80,1,81,1,81,1,81,1,81,1,81,1,81,1,82,1,82,1,82,1,82,1,82,
  	1,82,1,82,1,82,1,82,1,83,1,83,1,83,1,83,1,83,1,84,1,84,1,84,1,84,1,84,
  	1,85,1,85,1,85,1,85,1,86,1,86,1,86,1,86,1,86,1,87,1,87,1,87,1,87,1,88,
  	1,88,1,88,1,88,1,88,1,88,1,89,1,89,1,89,1,89,1,89,1,89,1,89,1,90,1,90,
  	1,90,1,90,1,90,1,90,1,90,1,91,1,91,1,91,1,91,1,91,1,91,1,91,1,91,1,91,
  	1,91,1,91,1,92,1,92,1,92,1,92,1,92,1,93,1,93,1,93,1,94,1,94,1,94,1,94,
  	1,94,1,95,1,95,1,95,1,96,1,96,1,96,1,96,1,96,1,96,1,96,1,96,1,97,1,97,
  	1,97,1,97,1,97,1,98,1,98,1,98,1,98,1,98,1,99,1,99,1,99,1,99,1,99,1,100,
  	1,100,1,100,1,100,1,100,1,100,1,100,1,101,1,101,1,101,1,101,1,101,1,102,
  	1,102,1,102,1,102,1,103,1,103,1,103,1,103,1,104,1,104,1,104,1,104,1,104,
  	1,104,1,104,1,104,1,104,1,104,1,105,1,105,1,105,1,105,1,106,1,106,1,106,
  	1,106,1,106,1,106,1,106,1,106,1,107,1,107,1,107,1,107,1,107,1,108,1,108,
  	1,108,1,108,1,108,1,109,1,109,1,109,1,109,1,109,1,109,1,110,1,110,1,110,
  	1,110,1,110,1,110,1,111,1,111,1,111,1,111,1,111,1,112,1,112,1,112,1,112,
  	1,112,1,112,1,113,1,113,1,113,1,113,1,113,1,114,1,114,1,114,1,114,1,114,
  	1,114,1,114,1,115,1,115,1,115,1,115,1,115,1,115,1,115,1,116,1,116,1,116,
  	1,116,1,116,1,116,1,116,1,117,1,117,1,117,1,117,1,117,1,117,1,118,1,118,
  	3,118,984,8,118,1,119,1,119,1,119,1,120,1,120,5,120,991,8,120,10,120,
  	12,120,994,9,120,1,121,1,121,1,121,3,121,999,8,121,1,121,4,121,1002,8,
  	121,11,121,12,121,1003,1,121,1,121,1,122,1,122,1,122,3,122,1011,8,122,
  	1,122,4,122,1014,8,122,11,122,12,122,1015,1,122,1,122,1,123,1,123,1,123,
  	3,123,1023,8,123,1,123,4,123,1026,8,123,11,123,12,123,1027,1,123,1,123,
  	1,124,3,124,1033,8,124,1,124,4,124,1036,8,124,11,124,12,124,1037,1,124,
  	1,124,4,124,1042,8,124,11,124,12,124,1043,1,124,1,124,3,124,1048,8,124,
  	1,124,4,124,1051,8,124,11,124,12,124,1052,3,124,1055,8,124,1,125,1,125,
  	1,126,1,126,1,127,1,127,1,128,1,128,1,129,1,129,3,129,1067,8,129,1,129,
  	1,129,1,130,1,130,3,130,1073,8,130,1,130,1,130,1,131,1,131,1,131,1,131,
  	1,131,4,131,1082,8,131,11,131,12,131,1083,1,132,1,132,1,132,1,132,1,132,
  	1,132,5,132,1092,8,132,10,132,12,132,1095,9,132,1,132,1,132,1,133,1,133,
  	5,133,1101,8,133,10,133,12,133,1104,9,133,1,134,4,134,1107,8,134,11,134,
  	12,134,1108,1,135,1,135,1,135,3,135,1114,8,135,1,136,1,136,1,137,1,137,
  	5,137,1120,8,137,10,137,12,137,1123,9,137,1,137,4,137,1126,8,137,11,137,
  	12,137,1127,1,137,1,137,1,138,4,138,1133,8,138,11,138,12,138,1134,1,138,
  	1,138,1,139,3,139,1140,8,139,1,139,1,139,5,139,1144,8,139,10,139,12,139,
  	1147,9,139,3,1083,1093,1121,0,140,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,
  	41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,
  	32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,
  	87,44,89,45,91,46,93,47,95,48,97,49,99,50,101,51,103,52,105,53,107,54,
  	109,55,111,56,113,57,115,58,117,59,119,60,121,61,123,62,125,63,127,64,
  	129,65,131,66,133,67,135,68,137,69,139,70,141,71,143,72,145,73,147,74,
  	149,75,151,76,153,77,155,78,157,79,159,80,161,81,163,82,165,83,167,84,
  	169,85,171,86,173,87,175,88,177,89,179,90,181,91,183,92,185,93,187,94,
  	189,95,191,96,193,97,195,98,197,99,199,100,201,101,203,102,205,103,207,
  	104,209,105,211,106,213,107,215,108,217,109,219,110,221,111,223,112,225,
  	113,227,114,229,115,231,116,233,117,235,118,237,119,239,120,241,0,243,
  	121,245,122,247,123,249,124,251,0,253,0,255,0,257,0,259,125,261,126,263,
  	0,265,127,267,128,269,129,271,0,273,0,275,130,277,131,279,132,1,0,9,2,
  	0,43,43,45,45,1,0,49,57,1,0,48,57,3,0,48,57,65,70,97,102,1,0,48,55,1,
  	0,48,49,2,0,10,10,13,13,3,0,65,90,95,95,97,122,3,0,9,9,32,32,44,44,1169,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,
  	1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,
  	0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,
  	0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,
  	1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,
  	1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,
  	1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,127,
  	1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,137,
  	1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,147,
  	1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,157,
  	1,0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,167,
  	1,0,0,0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,0,177,
  	1,0,0,0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,0,187,
  	1,0,0,0,0,189,1,0,0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,0,197,
  	1,0,0,0,0,199,1,0,0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,0,207,
  	1,0,0,0,0,209,1,0,0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,215,1,0,0,0,0,217,
  	1,0,0,0,0,219,1,0,0,0,0,221,1,0,0,0,0,223,1,0,0,0,0,225,1,0,0,0,0,227,
  	1,0,0,0,0,229,1,0,0,0,0,231,1,0,0,0,0,233,1,0,0,0,0,235,1,0,0,0,0,237,
  	1,0,0,0,0,239,1,0,0,0,0,243,1,0,0,0,0,245,1,0,0,0,0,247,1,0,0,0,0,249,
  	1,0,0,0,0,259,1,0,0,0,0,261,1,0,0,0,0,265,1,0,0,0,0,267,1,0,0,0,0,269,
  	1,0,0,0,0,275,1,0,0,0,0,277,1,0,0,0,0,279,1,0,0,0,1,281,1,0,0,0,3,283,
  	1,0,0,0,5,285,1,0,0,0,7,287,1,0,0,0,9,289,1,0,0,0,11,291,1,0,0,0,13,293,
  	1,0,0,0,15,295,1,0,0,0,17,297,1,0,0,0,19,305,1,0,0,0,21,307,1,0,0,0,23,
  	313,1,0,0,0,25,316,1,0,0,0,27,318,1,0,0,0,29,320,1,0,0,0,31,323,1,0,0,
  	0,33,326,1,0,0,0,35,332,1,0,0,0,37,340,1,0,0,0,39,350,1,0,0,0,41,363,
  	1,0,0,0,43,377,1,0,0,0,45,394,1,0,0,0,47,399,1,0,0,0,49,408,1,0,0,0,51,
  	410,1,0,0,0,53,415,1,0,0,0,55,420,1,0,0,0,57,425,1,0,0,0,59,430,1,0,0,
  	0,61,435,1,0,0,0,63,439,1,0,0,0,65,444,1,0,0,0,67,448,1,0,0,0,69,453,
  	1,0,0,0,71,457,1,0,0,0,73,462,1,0,0,0,75,467,1,0,0,0,77,475,1,0,0,0,79,
  	489,1,0,0,0,81,497,1,0,0,0,83,506,1,0,0,0,85,520,1,0,0,0,87,532,1,0,0,
  	0,89,537,1,0,0,0,91,542,1,0,0,0,93,548,1,0,0,0,95,554,1,0,0,0,97,559,
  	1,0,0,0,99,564,1,0,0,0,101,569,1,0,0,0,103,574,1,0,0,0,105,578,1,0,0,
  	0,107,583,1,0,0,0,109,589,1,0,0,0,111,594,1,0,0,0,113,600,1,0,0,0,115,
  	605,1,0,0,0,117,611,1,0,0,0,119,617,1,0,0,0,121,623,1,0,0,0,123,629,1,
  	0,0,0,125,635,1,0,0,0,127,641,1,0,0,0,129,647,1,0,0,0,131,653,1,0,0,0,
  	133,659,1,0,0,0,135,665,1,0,0,0,137,671,1,0,0,0,139,678,1,0,0,0,141,686,
  	1,0,0,0,143,693,1,0,0,0,145,703,1,0,0,0,147,713,1,0,0,0,149,719,1,0,0,
  	0,151,726,1,0,0,0,153,731,1,0,0,0,155,736,1,0,0,0,157,742,1,0,0,0,159,
  	748,1,0,0,0,161,759,1,0,0,0,163,766,1,0,0,0,165,772,1,0,0,0,167,781,1,
  	0,0,0,169,786,1,0,0,0,171,791,1,0,0,0,173,795,1,0,0,0,175,800,1,0,0,0,
  	177,804,1,0,0,0,179,810,1,0,0,0,181,817,1,0,0,0,183,824,1,0,0,0,185,835,
  	1,0,0,0,187,840,1,0,0,0,189,843,1,0,0,0,191,848,1,0,0,0,193,851,1,0,0,
  	0,195,859,1,0,0,0,197,864,1,0,0,0,199,869,1,0,0,0,201,874,1,0,0,0,203,
  	881,1,0,0,0,205,886,1,0,0,0,207,890,1,0,0,0,209,894,1,0,0,0,211,904,1,
  	0,0,0,213,908,1,0,0,0,215,916,1,0,0,0,217,921,1,0,0,0,219,926,1,0,0,0,
  	221,932,1,0,0,0,223,938,1,0,0,0,225,943,1,0,0,0,227,949,1,0,0,0,229,954,
  	1,0,0,0,231,961,1,0,0,0,233,968,1,0,0,0,235,975,1,0,0,0,237,983,1,0,0,
  	0,239,985,1,0,0,0,241,988,1,0,0,0,243,995,1,0,0,0,245,1007,1,0,0,0,247,
  	1019,1,0,0,0,249,1032,1,0,0,0,251,1056,1,0,0,0,253,1058,1,0,0,0,255,1060,
  	1,0,0,0,257,1062,1,0,0,0,259,1064,1,0,0,0,261,1070,1,0,0,0,263,1081,1,
  	0,0,0,265,1085,1,0,0,0,267,1098,1,0,0,0,269,1106,1,0,0,0,271,1113,1,0,
  	0,0,273,1115,1,0,0,0,275,1117,1,0,0,0,277,1132,1,0,0,0,279,1139,1,0,0,
  	0,281,282,5,58,0,0,282,2,1,0,0,0,283,284,5,60,0,0,284,4,1,0,0,0,285,286,
  	5,62,0,0,286,6,1,0,0,0,287,288,5,46,0,0,288,8,1,0,0,0,289,290,5,123,0,
  	0,290,10,1,0,0,0,291,292,5,125,0,0,292,12,1,0,0,0,293,294,5,91,0,0,294,
  	14,1,0,0,0,295,296,5,93,0,0,296,16,1,0,0,0,297,298,5,100,0,0,298,299,
  	5,101,0,0,299,300,5,102,0,0,300,301,5,110,0,0,301,302,5,97,0,0,302,303,
  	5,109,0,0,303,304,5,101,0,0,304,18,1,0,0,0,305,306,5,61,0,0,306,20,1,
  	0,0,0,307,308,5,114,0,0,308,309,5,101,0,0,309,310,5,115,0,0,310,311,5,
  	101,0,0,311,312,5,116,0,0,312,22,1,0,0,0,313,314,5,61,0,0,314,315,5,62,
  	0,0,315,24,1,0,0,0,316,317,5,40,0,0,317,26,1,0,0,0,318,319,5,41,0,0,319,
  	28,1,0,0,0,320,321,5,60,0,0,321,322,5,61,0,0,322,30,1,0,0,0,323,324,5,
  	60,0,0,324,325,5,45,0,0,325,32,1,0,0,0,326,327,5,115,0,0,327,328,5,116,
  	0,0,328,329,5,111,0,0,329,330,5,112,0,0,330,331,5,40,0,0,331,34,1,0,0,
  	0,332,333,5,112,0,0,333,334,5,114,0,0,334,335,5,105,0,0,335,336,5,110,
  	0,0,336,337,5,116,0,0,337,338,5,102,0,0,338,339,5,40,0,0,339,36,1,0,0,
  	0,340,341,5,100,0,0,341,342,5,97,0,0,342,343,5,116,0,0,343,344,5,97,0,
  	0,344,345,5,45,0,0,345,346,5,116,0,0,346,347,5,121,0,0,347,348,5,112,
  	0,0,348,349,5,101,0,0,349,38,1,0,0,0,350,351,5,114,0,0,351,352,5,101,
  	0,0,352,353,5,97,0,0,353,354,5,100,0,0,354,355,5,45,0,0,355,356,5,108,
  	0,0,356,357,5,97,0,0,357,358,5,116,0,0,358,359,5,101,0,0,359,360,5,110,
  	0,0,360,361,5,99,0,0,361,362,5,121,0,0,362,40,1,0,0,0,363,364,5,119,0,
  	0,364,365,5,114,0,0,365,366,5,105,0,0,366,367,5,116,0,0,367,368,5,101,
  	0,0,368,369,5,45,0,0,369,370,5,108,0,0,370,371,5,97,0,0,371,372,5,116,
  	0,0,372,373,5,101,0,0,373,374,5,110,0,0,374,375,5,99,0,0,375,376,5,121,
  	0,0,376,42,1,0,0,0,377,378,5,114,0,0,378,379,5,101,0,0,379,380,5,97,0,
  	0,380,381,5,100,0,0,381,382,5,45,0,0,382,383,5,117,0,0,383,384,5,110,
  	0,0,384,385,5,100,0,0,385,386,5,101,0,0,386,387,5,114,0,0,387,388,5,45,
  	0,0,388,389,5,119,0,0,389,390,5,114,0,0,390,391,5,105,0,0,391,392,5,116,
  	0,0,392,393,5,101,0,0,393,44,1,0,0,0,394,395,5,109,0,0,395,396,5,117,
  	0,0,396,397,5,120,0,0,397,398,5,40,0,0,398,46,1,0,0,0,399,400,5,118,0,
  	0,400,401,5,97,0,0,401,402,5,108,0,0,402,403,5,105,0,0,403,404,5,100,
  	0,0,404,405,5,105,0,0,405,406,5,102,0,0,406,407,5,40,0,0,407,48,1,0,0,
  	0,408,409,5,63,0,0,409,50,1,0,0,0,410,411,5,97,0,0,411,412,5,100,0,0,
  	412,413,5,100,0,0,413,414,5,40,0,0,414,52,1,0,0,0,415,416,5,115,0,0,416,
  	417,5,117,0,0,417,418,5,98,0,0,418,419,5,40,0,0,419,54,1,0,0,0,420,421,
  	5,109,0,0,421,422,5,117,0,0,422,423,5,108,0,0,423,424,5,40,0,0,424,56,
  	1,0,0,0,425,426,5,100,0,0,426,427,5,105,0,0,427,428,5,118,0,0,428,429,
  	5,40,0,0,429,58,1,0,0,0,430,431,5,114,0,0,431,432,5,101,0,0,432,433,5,
  	109,0,0,433,434,5,40,0,0,434,60,1,0,0,0,435,436,5,108,0,0,436,437,5,116,
  	0,0,437,438,5,40,0,0,438,62,1,0,0,0,439,440,5,108,0,0,440,441,5,101,0,
  	0,441,442,5,113,0,0,442,443,5,40,0,0,443,64,1,0,0,0,444,445,5,103,0,0,
  	445,446,5,116,0,0,446,447,5,40,0,0,447,66,1,0,0,0,448,449,5,103,0,0,449,
  	450,5,101,0,0,450,451,5,113,0,0,451,452,5,40,0,0,452,68,1,0,0,0,453,454,
  	5,101,0,0,454,455,5,113,0,0,455,456,5,40,0,0,456,70,1,0,0,0,457,458,5,
  	110,0,0,458,459,5,101,0,0,459,460,5,113,0,0,460,461,5,40,0,0,461,72,1,
  	0,0,0,462,463,5,112,0,0,463,464,5,97,0,0,464,465,5,100,0,0,465,466,5,
  	40,0,0,466,74,1,0,0,0,467,468,5,97,0,0,468,469,5,115,0,0,469,470,5,85,
  	0,0,470,471,5,73,0,0,471,472,5,110,0,0,472,473,5,116,0,0,473,474,5,40,
  	0,0,474,76,1,0,0,0,475,476,5,97,0,0,476,477,5,115,0,0,477,478,5,65,0,
  	0,478,479,5,115,0,0,479,480,5,121,0,0,480,481,5,110,0,0,481,482,5,99,
  	0,0,482,483,5,82,0,0,483,484,5,101,0,0,484,485,5,115,0,0,485,486,5,101,
  	0,0,486,487,5,116,0,0,487,488,5,40,0,0,488,78,1,0,0,0,489,490,5,97,0,
  	0,490,491,5,115,0,0,491,492,5,83,0,0,492,493,5,73,0,0,493,494,5,110,0,
  	0,494,495,5,116,0,0,495,496,5,40,0,0,496,80,1,0,0,0,497,498,5,97,0,0,
  	498,499,5,115,0,0,499,500,5,67,0,0,500,501,5,108,0,0,501,502,5,111,0,
  	0,502,503,5,99,0,0,503,504,5,107,0,0,504,505,5,40,0,0,505,82,1,0,0,0,
  	506,507,5,97,0,0,507,508,5,115,0,0,508,509,5,70,0,0,509,510,5,105,0,0,
  	510,511,5,120,0,0,511,512,5,101,0,0,512,513,5,100,0,0,513,514,5,80,0,
  	0,514,515,5,111,0,0,515,516,5,105,0,0,516,517,5,110,0,0,517,518,5,116,
  	0,0,518,519,5,40,0,0,519,84,1,0,0,0,520,521,5,97,0,0,521,522,5,115,0,
  	0,522,523,5,73,0,0,523,524,5,110,0,0,524,525,5,116,0,0,525,526,5,101,
  	0,0,526,527,5,114,0,0,527,528,5,118,0,0,528,529,5,97,0,0,529,530,5,108,
  	0,0,530,531,5,40,0,0,531,86,1,0,0,0,532,533,5,115,0,0,533,534,5,104,0,
  	0,534,535,5,108,0,0,535,536,5,40,0,0,536,88,1,0,0,0,537,538,5,115,0,0,
  	538,539,5,104,0,0,539,540,5,114,0,0,540,541,5,40,0,0,541,90,1,0,0,0,542,
  	543,5,100,0,0,543,544,5,115,0,0,544,545,5,104,0,0,545,546,5,108,0,0,546,
  	547,5,40,0,0,547,92,1,0,0,0,548,549,5,100,0,0,549,550,5,115,0,0,550,551,
  	5,104,0,0,551,552,5,114,0,0,552,553,5,40,0,0,553,94,1,0,0,0,554,555,5,
  	99,0,0,555,556,5,118,0,0,556,557,5,116,0,0,557,558,5,40,0,0,558,96,1,
  	0,0,0,559,560,5,110,0,0,560,561,5,101,0,0,561,562,5,103,0,0,562,563,5,
  	40,0,0,563,98,1,0,0,0,564,565,5,110,0,0,565,566,5,111,0,0,566,567,5,116,
  	0,0,567,568,5,40,0,0,568,100,1,0,0,0,569,570,5,97,0,0,570,571,5,110,0,
  	0,571,572,5,100,0,0,572,573,5,40,0,0,573,102,1,0,0,0,574,575,5,111,0,
  	0,575,576,5,114,0,0,576,577,5,40,0,0,577,104,1,0,0,0,578,579,5,120,0,
  	0,579,580,5,111,0,0,580,581,5,114,0,0,581,582,5,40,0,0,582,106,1,0,0,
  	0,583,584,5,97,0,0,584,585,5,110,0,0,585,586,5,100,0,0,586,587,5,114,
  	0,0,587,588,5,40,0,0,588,108,1,0,0,0,589,590,5,111,0,0,590,591,5,114,
  	0,0,591,592,5,114,0,0,592,593,5,40,0,0,593,110,1,0,0,0,594,595,5,120,
  	0,0,595,596,5,111,0,0,596,597,5,114,0,0,597,598,5,114,0,0,598,599,5,40,
  	0,0,599,112,1,0,0,0,600,601,5,99,0,0,601,602,5,97,0,0,602,603,5,116,0,
  	0,603,604,5,40,0,0,604,114,1,0,0,0,605,606,5,98,0,0,606,607,5,105,0,0,
  	607,608,5,116,0,0,608,609,5,115,0,0,609,610,5,40,0,0,610,116,1,0,0,0,
  	611,612,5,104,0,0,612,613,5,101,0,0,613,614,5,97,0,0,614,615,5,100,0,
  	0,615,616,5,40,0,0,616,118,1,0,0,0,617,618,5,116,0,0,618,619,5,97,0,0,
  	619,620,5,105,0,0,620,621,5,108,0,0,621,622,5,40,0,0,622,120,1,0,0,0,
  	623,624,5,105,0,0,624,625,5,110,0,0,625,626,5,99,0,0,626,627,5,112,0,
  	0,627,628,5,40,0,0,628,122,1,0,0,0,629,630,5,100,0,0,630,631,5,101,0,
  	0,631,632,5,99,0,0,632,633,5,112,0,0,633,634,5,40,0,0,634,124,1,0,0,0,
  	635,636,5,115,0,0,636,637,5,101,0,0,637,638,5,116,0,0,638,639,5,112,0,
  	0,639,640,5,40,0,0,640,126,1,0,0,0,641,642,5,119,0,0,642,643,5,114,0,
  	0,643,644,5,97,0,0,644,645,5,112,0,0,645,646,5,40,0,0,646,128,1,0,0,0,
  	647,648,5,99,0,0,648,649,5,108,0,0,649,650,5,105,0,0,650,651,5,112,0,
  	0,651,652,5,40,0,0,652,130,1,0,0,0,653,654,5,115,0,0,654,655,5,113,0,
  	0,655,656,5,117,0,0,656,657,5,122,0,0,657,658,5,40,0,0,658,132,1,0,0,
  	0,659,660,5,97,0,0,660,661,5,100,0,0,661,662,5,100,0,0,662,663,5,119,
  	0,0,663,664,5,40,0,0,664,134,1,0,0,0,665,666,5,115,0,0,666,667,5,117,
  	0,0,667,668,5,98,0,0,668,669,5,119,0,0,669,670,5,40,0,0,670,136,1,0,0,
  	0,671,672,5,100,0,0,672,673,5,115,0,0,673,674,5,104,0,0,674,675,5,108,
  	0,0,675,676,5,119,0,0,676,677,5,40,0,0,677,138,1,0,0,0,678,679,5,99,0,
  	0,679,680,5,105,0,0,680,681,5,114,0,0,681,682,5,99,0,0,682,683,5,117,
  	0,0,683,684,5,105,0,0,684,685,5,116,0,0,685,140,1,0,0,0,686,687,5,109,
  	0,0,687,688,5,111,0,0,688,689,5,100,0,0,689,690,5,117,0,0,690,691,5,108,
  	0,0,691,692,5,101,0,0,692,142,1,0,0,0,693,694,5,101,0,0,694,695,5,120,
  	0,0,695,696,5,116,0,0,696,697,5,109,0,0,697,698,5,111,0,0,698,699,5,100,
  	0,0,699,700,5,117,0,0,700,701,5,108,0,0,701,702,5,101,0,0,702,144,1,0,
  	0,0,703,704,5,112,0,0,704,705,5,97,0,0,705,706,5,114,0,0,706,707,5,97,
  	0,0,707,708,5,109,0,0,708,709,5,101,0,0,709,710,5,116,0,0,710,711,5,101,
  	0,0,711,712,5,114,0,0,712,146,1,0,0,0,713,714,5,105,0,0,714,715,5,110,
  	0,0,715,716,5,112,0,0,716,717,5,117,0,0,717,718,5,116,0,0,718,148,1,0,
  	0,0,719,720,5,111,0,0,720,721,5,117,0,0,721,722,5,116,0,0,722,723,5,112,
  	0,0,723,724,5,117,0,0,724,725,5,116,0,0,725,150,1,0,0,0,726,727,5,85,
  	0,0,727,728,5,73,0,0,728,729,5,110,0,0,729,730,5,116,0,0,730,152,1,0,
  	0,0,731,732,5,83,0,0,732,733,5,73,0,0,733,734,5,110,0,0,734,735,5,116,
  	0,0,735,154,1,0,0,0,736,737,5,67,0,0,737,738,5,108,0,0,738,739,5,111,
  	0,0,739,740,5,99,0,0,740,741,5,107,0,0,741,156,1,0,0,0,742,743,5,82,0,
  	0,743,744,5,101,0,0,744,745,5,115,0,0,745,746,5,101,0,0,746,747,5,116,
  	0,0,747,158,1,0,0,0,748,749,5,65,0,0,749,750,5,115,0,0,750,751,5,121,
  	0,0,751,752,5,110,0,0,752,753,5,99,0,0,753,754,5,82,0,0,754,755,5,101,
  	0,0,755,756,5,115,0,0,756,757,5,101,0,0,757,758,5,116,0,0,758,160,1,0,
  	0,0,759,760,5,65,0,0,760,761,5,110,0,0,761,762,5,97,0,0,762,763,5,108,
  	0,0,763,764,5,111,0,0,764,765,5,103,0,0,765,162,1,0,0,0,766,767,5,70,
  	0,0,767,768,5,105,0,0,768,769,5,120,0,0,769,770,5,101,0,0,770,771,5,100,
  	0,0,771,164,1,0,0,0,772,773,5,73,0,0,773,774,5,110,0,0,774,775,5,116,
  	0,0,775,776,5,101,0,0,776,777,5,114,0,0,777,778,5,118,0,0,778,779,5,97,
  	0,0,779,780,5,108,0,0,780,166,1,0,0,0,781,782,5,102,0,0,782,783,5,108,
  	0,0,783,784,5,105,0,0,784,785,5,112,0,0,785,168,1,0,0,0,786,787,5,119,
  	0,0,787,788,5,105,0,0,788,789,5,114,0,0,789,790,5,101,0,0,790,170,1,0,
  	0,0,791,792,5,114,0,0,792,793,5,101,0,0,793,794,5,103,0,0,794,172,1,0,
  	0,0,795,796,5,119,0,0,796,797,5,105,0,0,797,798,5,116,0,0,798,799,5,104,
  	0,0,799,174,1,0,0,0,800,801,5,109,0,0,801,802,5,101,0,0,802,803,5,109,
  	0,0,803,176,1,0,0,0,804,805,5,100,0,0,805,806,5,101,0,0,806,807,5,112,
  	0,0,807,808,5,116,0,0,808,809,5,104,0,0,809,178,1,0,0,0,810,811,5,114,
  	0,0,811,812,5,101,0,0,812,813,5,97,0,0,813,814,5,100,0,0,814,815,5,101,
  	0,0,815,816,5,114,0,0,816,180,1,0,0,0,817,818,5,119,0,0,818,819,5,114,
  	0,0,819,820,5,105,0,0,820,821,5,116,0,0,821,822,5,101,0,0,822,823,5,114,
  	0,0,823,182,1,0,0,0,824,825,5,114,0,0,825,826,5,101,0,0,826,827,5,97,
  	0,0,827,828,5,100,0,0,828,829,5,119,0,0,829,830,5,114,0,0,830,831,5,105,
  	0,0,831,832,5,116,0,0,832,833,5,101,0,0,833,834,5,114,0,0,834,184,1,0,
  	0,0,835,836,5,105,0,0,836,837,5,110,0,0,837,838,5,115,0,0,838,839,5,116,
  	0,0,839,186,1,0,0,0,840,841,5,111,0,0,841,842,5,102,0,0,842,188,1,0,0,
  	0,843,844,5,110,0,0,844,845,5,111,0,0,845,846,5,100,0,0,846,847,5,101,
  	0,0,847,190,1,0,0,0,848,849,5,105,0,0,849,850,5,115,0,0,850,192,1,0,0,
  	0,851,852,5,105,0,0,852,853,5,110,0,0,853,854,5,118,0,0,854,855,5,97,
  	0,0,855,856,5,108,0,0,856,857,5,105,0,0,857,858,5,100,0,0,858,194,1,0,
  	0,0,859,860,5,119,0,0,860,861,5,104,0,0,861,862,5,101,0,0,862,863,5,110,
  	0,0,863,196,1,0,0,0,864,865,5,101,0,0,865,866,5,108,0,0,866,867,5,115,
  	0,0,867,868,5,101,0,0,868,198,1,0,0,0,869,870,5,115,0,0,870,871,5,116,
  	0,0,871,872,5,111,0,0,872,873,5,112,0,0,873,200,1,0,0,0,874,875,5,112,
  	0,0,875,876,5,114,0,0,876,877,5,105,0,0,877,878,5,110,0,0,878,879,5,116,
  	0,0,879,880,5,102,0,0,880,202,1,0,0,0,881,882,5,115,0,0,882,883,5,107,
  	0,0,883,884,5,105,0,0,884,885,5,112,0,0,885,204,1,0,0,0,886,887,5,111,
  	0,0,887,888,5,108,0,0,888,889,5,100,0,0,889,206,1,0,0,0,890,891,5,110,
  	0,0,891,892,5,101,0,0,892,893,5,119,0,0,893,208,1,0,0,0,894,895,5,117,
  	0,0,895,896,5,110,0,0,896,897,5,100,0,0,897,898,5,101,0,0,898,899,5,102,
  	0,0,899,900,5,105,0,0,900,901,5,110,0,0,901,902,5,101,0,0,902,903,5,100,
  	0,0,903,210,1,0,0,0,904,905,5,109,0,0,905,906,5,117,0,0,906,907,5,120,
  	0,0,907,212,1,0,0,0,908,909,5,118,0,0,909,910,5,97,0,0,910,911,5,108,
  	0,0,911,912,5,105,0,0,912,913,5,100,0,0,913,914,5,105,0,0,914,915,5,102,
  	0,0,915,214,1,0,0,0,916,917,5,99,0,0,917,918,5,109,0,0,918,919,5,101,
  	0,0,919,920,5,109,0,0,920,216,1,0,0,0,921,922,5,115,0,0,922,923,5,109,
  	0,0,923,924,5,101,0,0,924,925,5,109,0,0,925,218,1,0,0,0,926,927,5,109,
  	0,0,927,928,5,112,0,0,928,929,5,111,0,0,929,930,5,114,0,0,930,931,5,116,
  	0,0,931,220,1,0,0,0,932,933,5,105,0,0,933,934,5,110,0,0,934,935,5,102,
  	0,0,935,936,5,101,0,0,936,937,5,114,0,0,937,222,1,0,0,0,938,939,5,114,
  	0,0,939,940,5,101,0,0,940,941,5,97,0,0,941,942,5,100,0,0,942,224,1,0,
  	0,0,943,944,5,119,0,0,944,945,5,114,0,0,945,946,5,105,0,0,946,947,5,116,
  	0,0,947,948,5,101,0,0,948,226,1,0,0,0,949,950,5,114,0,0,950,951,5,100,
  	0,0,951,952,5,119,0,0,952,953,5,114,0,0,953,228,1,0,0,0,954,955,5,97,
  	0,0,955,956,5,116,0,0,956,957,5,116,0,0,957,958,5,97,0,0,958,959,5,99,
  	0,0,959,960,5,104,0,0,960,230,1,0,0,0,961,962,5,97,0,0,962,963,5,115,
  	0,0,963,964,5,115,0,0,964,965,5,101,0,0,965,966,5,114,0,0,966,967,5,116,
  	0,0,967,232,1,0,0,0,968,969,5,97,0,0,969,970,5,115,0,0,970,971,5,115,
  	0,0,971,972,5,117,0,0,972,973,5,109,0,0,973,974,5,101,0,0,974,234,1,0,
  	0,0,975,976,5,99,0,0,976,977,5,111,0,0,977,978,5,118,0,0,978,979,5,101,
  	0,0,979,980,5,114,0,0,980,236,1,0,0,0,981,984,5,48,0,0,982,984,3,241,
  	120,0,983,981,1,0,0,0,983,982,1,0,0,0,984,238,1,0,0,0,985,986,7,0,0,0,
  	986,987,3,241,120,0,987,240,1,0,0,0,988,992,7,1,0,0,989,991,3,251,125,
  	0,990,989,1,0,0,0,991,994,1,0,0,0,992,990,1,0,0,0,992,993,1,0,0,0,993,
  	242,1,0,0,0,994,992,1,0,0,0,995,996,5,34,0,0,996,998,5,104,0,0,997,999,
  	7,0,0,0,998,997,1,0,0,0,998,999,1,0,0,0,999,1001,1,0,0,0,1000,1002,3,
  	253,126,0,1001,1000,1,0,0,0,1002,1003,1,0,0,0,1003,1001,1,0,0,0,1003,
  	1004,1,0,0,0,1004,1005,1,0,0,0,1005,1006,5,34,0,0,1006,244,1,0,0,0,1007,
  	1008,5,34,0,0,1008,1010,5,111,0,0,1009,1011,7,0,0,0,1010,1009,1,0,0,0,
  	1010,1011,1,0,0,0,1011,1013,1,0,0,0,1012,1014,3,255,127,0,1013,1012,1,
  	0,0,0,1014,1015,1,0,0,0,1015,1013,1,0,0,0,1015,1016,1,0,0,0,1016,1017,
  	1,0,0,0,1017,1018,5,34,0,0,1018,246,1,0,0,0,1019,1020,5,34,0,0,1020,1022,
  	5,98,0,0,1021,1023,7,0,0,0,1022,1021,1,0,0,0,1022,1023,1,0,0,0,1023,1025,
  	1,0,0,0,1024,1026,3,257,128,0,1025,1024,1,0,0,0,1026,1027,1,0,0,0,1027,
  	1025,1,0,0,0,1027,1028,1,0,0,0,1028,1029,1,0,0,0,1029,1030,5,34,0,0,1030,
  	248,1,0,0,0,1031,1033,7,0,0,0,1032,1031,1,0,0,0,1032,1033,1,0,0,0,1033,
  	1035,1,0,0,0,1034,1036,3,251,125,0,1035,1034,1,0,0,0,1036,1037,1,0,0,
  	0,1037,1035,1,0,0,0,1037,1038,1,0,0,0,1038,1039,1,0,0,0,1039,1041,5,46,
  	0,0,1040,1042,3,251,125,0,1041,1040,1,0,0,0,1042,1043,1,0,0,0,1043,1041,
  	1,0,0,0,1043,1044,1,0,0,0,1044,1054,1,0,0,0,1045,1047,5,69,0,0,1046,1048,
  	7,0,0,0,1047,1046,1,0,0,0,1047,1048,1,0,0,0,1048,1050,1,0,0,0,1049,1051,
  	3,251,125,0,1050,1049,1,0,0,0,1051,1052,1,0,0,0,1052,1050,1,0,0,0,1052,
  	1053,1,0,0,0,1053,1055,1,0,0,0,1054,1045,1,0,0,0,1054,1055,1,0,0,0,1055,
  	250,1,0,0,0,1056,1057,7,2,0,0,1057,252,1,0,0,0,1058,1059,7,3,0,0,1059,
  	254,1,0,0,0,1060,1061,7,4,0,0,1061,256,1,0,0,0,1062,1063,7,5,0,0,1063,
  	258,1,0,0,0,1064,1066,5,34,0,0,1065,1067,3,263,131,0,1066,1065,1,0,0,
  	0,1066,1067,1,0,0,0,1067,1068,1,0,0,0,1068,1069,5,34,0,0,1069,260,1,0,
  	0,0,1070,1072,5,39,0,0,1071,1073,3,263,131,0,1072,1071,1,0,0,0,1072,1073,
  	1,0,0,0,1073,1074,1,0,0,0,1074,1075,5,39,0,0,1075,262,1,0,0,0,1076,1077,
  	5,92,0,0,1077,1082,5,39,0,0,1078,1079,5,92,0,0,1079,1082,5,34,0,0,1080,
  	1082,8,6,0,0,1081,1076,1,0,0,0,1081,1078,1,0,0,0,1081,1080,1,0,0,0,1082,
  	1083,1,0,0,0,1083,1084,1,0,0,0,1083,1081,1,0,0,0,1084,264,1,0,0,0,1085,
  	1086,5,64,0,0,1086,1087,5,91,0,0,1087,1093,1,0,0,0,1088,1089,5,92,0,0,
  	1089,1092,5,93,0,0,1090,1092,9,0,0,0,1091,1088,1,0,0,0,1091,1090,1,0,
  	0,0,1092,1095,1,0,0,0,1093,1094,1,0,0,0,1093,1091,1,0,0,0,1094,1096,1,
  	0,0,0,1095,1093,1,0,0,0,1096,1097,5,93,0,0,1097,266,1,0,0,0,1098,1102,
  	3,273,136,0,1099,1101,3,271,135,0,1100,1099,1,0,0,0,1101,1104,1,0,0,0,
  	1102,1100,1,0,0,0,1102,1103,1,0,0,0,1103,268,1,0,0,0,1104,1102,1,0,0,
  	0,1105,1107,3,271,135,0,1106,1105,1,0,0,0,1107,1108,1,0,0,0,1108,1106,
  	1,0,0,0,1108,1109,1,0,0,0,1109,270,1,0,0,0,1110,1114,3,273,136,0,1111,
  	1114,3,251,125,0,1112,1114,5,36,0,0,1113,1110,1,0,0,0,1113,1111,1,0,0,
  	0,1113,1112,1,0,0,0,1114,272,1,0,0,0,1115,1116,7,7,0,0,1116,274,1,0,0,
  	0,1117,1121,5,59,0,0,1118,1120,9,0,0,0,1119,1118,1,0,0,0,1120,1123,1,
  	0,0,0,1121,1122,1,0,0,0,1121,1119,1,0,0,0,1122,1125,1,0,0,0,1123,1121,
  	1,0,0,0,1124,1126,5,10,0,0,1125,1124,1,0,0,0,1126,1127,1,0,0,0,1127,1125,
  	1,0,0,0,1127,1128,1,0,0,0,1128,1129,1,0,0,0,1129,1130,6,137,0,0,1130,
  	276,1,0,0,0,1131,1133,7,8,0,0,1132,1131,1,0,0,0,1133,1134,1,0,0,0,1134,
  	1132,1,0,0,0,1134,1135,1,0,0,0,1135,1136,1,0,0,0,1136,1137,6,138,0,0,
  	1137,278,1,0,0,0,1138,1140,5,13,0,0,1139,1138,1,0,0,0,1139,1140,1,0,0,
  	0,1140,1141,1,0,0,0,1141,1145,5,10,0,0,1142,1144,5,32,0,0,1143,1142,1,
  	0,0,0,1144,1147,1,0,0,0,1145,1143,1,0,0,0,1145,1146,1,0,0,0,1146,280,
  	1,0,0,0,1147,1145,1,0,0,0,29,0,983,992,998,1003,1010,1015,1022,1027,1032,
  	1037,1043,1047,1052,1054,1066,1072,1081,1083,1091,1093,1102,1108,1113,
  	1121,1127,1134,1139,1145,1,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  firrtllexerLexerStaticData = staticData.release();
}

}

FIRRTLLexer::FIRRTLLexer(CharStream *input) : Lexer(input) {
  FIRRTLLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *firrtllexerLexerStaticData->atn, firrtllexerLexerStaticData->decisionToDFA, firrtllexerLexerStaticData->sharedContextCache);
}

FIRRTLLexer::~FIRRTLLexer() {
  delete _interpreter;
}

std::string FIRRTLLexer::getGrammarFileName() const {
  return "FIRRTL.g4";
}

const std::vector<std::string>& FIRRTLLexer::getRuleNames() const {
  return firrtllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& FIRRTLLexer::getChannelNames() const {
  return firrtllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& FIRRTLLexer::getModeNames() const {
  return firrtllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& FIRRTLLexer::getVocabulary() const {
  return firrtllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView FIRRTLLexer::getSerializedATN() const {
  return firrtllexerLexerStaticData->serializedATN;
}

const atn::ATN& FIRRTLLexer::getATN() const {
  return *firrtllexerLexerStaticData->atn;
}


std::unique_ptr<Token> FIRRTLLexer::nextToken()
{
    return denter->nextToken();
}




void FIRRTLLexer::initialize() {
  ::antlr4::internal::call_once(firrtllexerLexerOnceFlag, firrtllexerLexerInitialize);
}
