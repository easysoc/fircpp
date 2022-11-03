
// Generated from /media/itviewer/linux/compiled/fircpp/fircpp/FIRRTL.g4 by ANTLR 4.11.1


#include "FIRRTLListener.h"
#include "FIRRTLVisitor.h"

#include "FIRRTLParser.h"


using namespace antlrcpp;
using namespace fircpp;

using namespace antlr4;

namespace {

struct FIRRTLParserStaticData final {
  FIRRTLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FIRRTLParserStaticData(const FIRRTLParserStaticData&) = delete;
  FIRRTLParserStaticData(FIRRTLParserStaticData&&) = delete;
  FIRRTLParserStaticData& operator=(const FIRRTLParserStaticData&) = delete;
  FIRRTLParserStaticData& operator=(FIRRTLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag firrtlParserOnceFlag;
FIRRTLParserStaticData *firrtlParserStaticData = nullptr;

void firrtlParserInitialize() {
  assert(firrtlParserStaticData == nullptr);
  auto staticData = std::make_unique<FIRRTLParserStaticData>(
    std::vector<std::string>{
      "circuit", "module", "port", "dir", "type", "field", "defname", "parameter", 
      "moduleBlock", "simple_reset0", "simple_reset", "reset_block", "stmt", 
      "stmtName", "memField", "simple_stmt", "suite", "when", "info", "mdir", 
      "ruw", "exp", "ref", "subref", "id", "fieldId", "intLit", "lowerBound", 
      "upperBound", "boundValue", "keywordAsId", "primop"
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
      "WHITESPACE", "NEWLINE", "INDENT", "DEDENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,134,656,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,3,0,69,8,0,1,0,1,0,5,
  	0,73,8,0,10,0,12,0,76,9,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,85,8,1,1,1,
  	1,1,5,1,89,8,1,10,1,12,1,92,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,101,8,
  	1,1,1,1,1,5,1,105,8,1,10,1,12,1,108,9,1,1,1,3,1,111,8,1,1,1,5,1,114,8,
  	1,10,1,12,1,117,9,1,1,1,1,1,3,1,121,8,1,1,2,1,2,1,2,1,2,1,2,3,2,128,8,
  	2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,140,8,4,1,4,1,4,1,4,1,4,
  	1,4,3,4,147,8,4,1,4,1,4,1,4,1,4,1,4,3,4,154,8,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,3,4,162,8,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,170,8,4,1,4,1,4,3,4,174,8,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,184,8,4,1,4,1,4,5,4,188,8,4,10,4,
  	12,4,191,9,4,1,4,3,4,194,8,4,1,4,1,4,1,4,1,4,1,4,5,4,201,8,4,10,4,12,
  	4,204,9,4,1,5,3,5,207,8,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,3,7,242,8,7,1,8,5,8,245,8,8,10,8,12,8,248,9,8,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,3,10,262,8,10,1,11,1,11,
  	1,11,3,11,267,8,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,275,8,11,1,12,1,
  	12,1,12,1,12,1,12,3,12,282,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,3,12,292,8,12,1,12,3,12,295,8,12,1,12,1,12,1,12,1,12,3,12,301,8,12,
  	1,12,1,12,5,12,305,8,12,10,12,12,12,308,9,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,3,12,317,8,12,1,12,1,12,1,12,1,12,1,12,3,12,324,8,12,1,12,3,
  	12,327,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,339,
  	8,12,1,12,1,12,1,12,1,12,1,12,3,12,346,8,12,1,12,1,12,1,12,1,12,1,12,
  	3,12,353,8,12,1,12,1,12,1,12,1,12,3,12,359,8,12,1,12,1,12,1,12,1,12,3,
  	12,365,8,12,1,12,1,12,1,12,1,12,3,12,371,8,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,3,12,380,8,12,1,12,3,12,383,8,12,1,12,1,12,1,12,1,12,1,12,5,
  	12,390,8,12,10,12,12,12,393,9,12,1,12,1,12,3,12,397,8,12,1,12,3,12,400,
  	8,12,1,12,1,12,3,12,404,8,12,1,12,1,12,1,12,4,12,409,8,12,11,12,12,12,
  	410,1,12,1,12,3,12,415,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,
  	12,425,8,12,1,12,3,12,428,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	3,12,438,8,12,1,12,3,12,441,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,3,12,451,8,12,1,12,3,12,454,8,12,3,12,456,8,12,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,4,14,
  	489,8,14,11,14,12,14,490,1,14,1,14,1,14,1,14,1,14,4,14,498,8,14,11,14,
  	12,14,499,1,14,1,14,1,14,1,14,1,14,4,14,507,8,14,11,14,12,14,508,1,14,
  	1,14,3,14,513,8,14,1,15,1,15,3,15,517,8,15,1,16,1,16,1,16,4,16,522,8,
  	16,11,16,12,16,523,1,16,1,16,3,16,528,8,16,1,17,1,17,1,17,1,17,3,17,534,
  	8,17,1,17,3,17,537,8,17,1,17,1,17,1,17,1,17,3,17,543,8,17,1,17,3,17,546,
  	8,17,3,17,548,8,17,3,17,550,8,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,
  	21,1,21,1,21,1,21,3,21,563,8,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,3,21,574,8,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,594,8,21,10,21,12,21,
  	597,9,21,1,21,5,21,600,8,21,10,21,12,21,603,9,21,1,21,1,21,3,21,607,8,
  	21,1,22,1,22,3,22,611,8,22,1,23,1,23,1,23,3,23,616,8,23,1,23,1,23,1,23,
  	3,23,621,8,23,1,23,1,23,1,23,3,23,626,8,23,1,23,1,23,3,23,630,8,23,3,
  	23,632,8,23,1,24,1,24,3,24,636,8,24,1,25,1,25,1,25,1,25,3,25,642,8,25,
  	1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,31,0,1,
  	8,32,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,0,9,1,0,74,75,1,0,111,114,1,0,103,105,1,0,
  	119,123,2,0,7,7,13,13,2,0,8,8,14,14,3,0,25,25,119,120,124,124,2,0,11,
  	11,70,118,1,0,26,69,743,0,64,1,0,0,0,2,120,1,0,0,0,4,122,1,0,0,0,6,131,
  	1,0,0,0,8,193,1,0,0,0,10,206,1,0,0,0,12,212,1,0,0,0,14,241,1,0,0,0,16,
  	246,1,0,0,0,18,249,1,0,0,0,20,261,1,0,0,0,22,274,1,0,0,0,24,455,1,0,0,
  	0,26,457,1,0,0,0,28,512,1,0,0,0,30,516,1,0,0,0,32,527,1,0,0,0,34,529,
  	1,0,0,0,36,551,1,0,0,0,38,553,1,0,0,0,40,555,1,0,0,0,42,606,1,0,0,0,44,
  	608,1,0,0,0,46,631,1,0,0,0,48,635,1,0,0,0,50,641,1,0,0,0,52,643,1,0,0,
  	0,54,645,1,0,0,0,56,647,1,0,0,0,58,649,1,0,0,0,60,651,1,0,0,0,62,653,
  	1,0,0,0,64,65,5,70,0,0,65,66,3,48,24,0,66,68,5,1,0,0,67,69,3,36,18,0,
  	68,67,1,0,0,0,68,69,1,0,0,0,69,70,1,0,0,0,70,74,5,133,0,0,71,73,3,2,1,
  	0,72,71,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,77,1,0,0,
  	0,76,74,1,0,0,0,77,78,5,134,0,0,78,79,5,0,0,1,79,1,1,0,0,0,80,81,5,71,
  	0,0,81,82,3,48,24,0,82,84,5,1,0,0,83,85,3,36,18,0,84,83,1,0,0,0,84,85,
  	1,0,0,0,85,86,1,0,0,0,86,90,5,133,0,0,87,89,3,4,2,0,88,87,1,0,0,0,89,
  	92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,90,1,0,0,0,93,
  	94,3,16,8,0,94,95,5,134,0,0,95,121,1,0,0,0,96,97,5,72,0,0,97,98,3,48,
  	24,0,98,100,5,1,0,0,99,101,3,36,18,0,100,99,1,0,0,0,100,101,1,0,0,0,101,
  	102,1,0,0,0,102,106,5,133,0,0,103,105,3,4,2,0,104,103,1,0,0,0,105,108,
  	1,0,0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,
  	0,109,111,3,12,6,0,110,109,1,0,0,0,110,111,1,0,0,0,111,115,1,0,0,0,112,
  	114,3,14,7,0,113,112,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,
  	1,0,0,0,116,118,1,0,0,0,117,115,1,0,0,0,118,119,5,134,0,0,119,121,1,0,
  	0,0,120,80,1,0,0,0,120,96,1,0,0,0,121,3,1,0,0,0,122,123,3,6,3,0,123,124,
  	3,48,24,0,124,125,5,1,0,0,125,127,3,8,4,0,126,128,3,36,18,0,127,126,1,
  	0,0,0,127,128,1,0,0,0,128,129,1,0,0,0,129,130,5,132,0,0,130,5,1,0,0,0,
  	131,132,7,0,0,0,132,7,1,0,0,0,133,134,6,4,-1,0,134,139,5,76,0,0,135,136,
  	5,2,0,0,136,137,3,52,26,0,137,138,5,3,0,0,138,140,1,0,0,0,139,135,1,0,
  	0,0,139,140,1,0,0,0,140,194,1,0,0,0,141,146,5,77,0,0,142,143,5,2,0,0,
  	143,144,3,52,26,0,144,145,5,3,0,0,145,147,1,0,0,0,146,142,1,0,0,0,146,
  	147,1,0,0,0,147,194,1,0,0,0,148,153,5,82,0,0,149,150,5,2,0,0,150,151,
  	3,52,26,0,151,152,5,3,0,0,152,154,1,0,0,0,153,149,1,0,0,0,153,154,1,0,
  	0,0,154,161,1,0,0,0,155,156,5,2,0,0,156,157,5,2,0,0,157,158,3,52,26,0,
  	158,159,5,3,0,0,159,160,5,3,0,0,160,162,1,0,0,0,161,155,1,0,0,0,161,162,
  	1,0,0,0,162,194,1,0,0,0,163,169,5,83,0,0,164,165,3,54,27,0,165,166,3,
  	58,29,0,166,167,3,58,29,0,167,168,3,56,28,0,168,170,1,0,0,0,169,164,1,
  	0,0,0,169,170,1,0,0,0,170,173,1,0,0,0,171,172,5,4,0,0,172,174,3,52,26,
  	0,173,171,1,0,0,0,173,174,1,0,0,0,174,194,1,0,0,0,175,194,5,78,0,0,176,
  	194,5,80,0,0,177,194,5,79,0,0,178,183,5,81,0,0,179,180,5,2,0,0,180,181,
  	3,52,26,0,181,182,5,3,0,0,182,184,1,0,0,0,183,179,1,0,0,0,183,184,1,0,
  	0,0,184,194,1,0,0,0,185,189,5,5,0,0,186,188,3,10,5,0,187,186,1,0,0,0,
  	188,191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,192,1,0,0,0,191,189,
  	1,0,0,0,192,194,5,6,0,0,193,133,1,0,0,0,193,141,1,0,0,0,193,148,1,0,0,
  	0,193,163,1,0,0,0,193,175,1,0,0,0,193,176,1,0,0,0,193,177,1,0,0,0,193,
  	178,1,0,0,0,193,185,1,0,0,0,194,202,1,0,0,0,195,196,10,1,0,0,196,197,
  	5,7,0,0,197,198,3,52,26,0,198,199,5,8,0,0,199,201,1,0,0,0,200,195,1,0,
  	0,0,201,204,1,0,0,0,202,200,1,0,0,0,202,203,1,0,0,0,203,9,1,0,0,0,204,
  	202,1,0,0,0,205,207,5,84,0,0,206,205,1,0,0,0,206,207,1,0,0,0,207,208,
  	1,0,0,0,208,209,3,50,25,0,209,210,5,1,0,0,210,211,3,8,4,0,211,11,1,0,
  	0,0,212,213,5,9,0,0,213,214,5,10,0,0,214,215,3,48,24,0,215,216,5,132,
  	0,0,216,13,1,0,0,0,217,218,5,73,0,0,218,219,3,48,24,0,219,220,5,10,0,
  	0,220,221,3,52,26,0,221,222,5,132,0,0,222,242,1,0,0,0,223,224,5,73,0,
  	0,224,225,3,48,24,0,225,226,5,10,0,0,226,227,5,125,0,0,227,228,5,132,
  	0,0,228,242,1,0,0,0,229,230,5,73,0,0,230,231,3,48,24,0,231,232,5,10,0,
  	0,232,233,5,124,0,0,233,234,5,132,0,0,234,242,1,0,0,0,235,236,5,73,0,
  	0,236,237,3,48,24,0,237,238,5,10,0,0,238,239,5,126,0,0,239,240,5,132,
  	0,0,240,242,1,0,0,0,241,217,1,0,0,0,241,223,1,0,0,0,241,229,1,0,0,0,241,
  	235,1,0,0,0,242,15,1,0,0,0,243,245,3,30,15,0,244,243,1,0,0,0,245,248,
  	1,0,0,0,246,244,1,0,0,0,246,247,1,0,0,0,247,17,1,0,0,0,248,246,1,0,0,
  	0,249,250,5,11,0,0,250,251,5,12,0,0,251,252,5,13,0,0,252,253,3,42,21,
  	0,253,254,3,42,21,0,254,255,5,14,0,0,255,19,1,0,0,0,256,262,3,18,9,0,
  	257,258,5,13,0,0,258,259,3,18,9,0,259,260,5,14,0,0,260,262,1,0,0,0,261,
  	256,1,0,0,0,261,257,1,0,0,0,262,21,1,0,0,0,263,264,5,133,0,0,264,266,
  	3,20,10,0,265,267,3,36,18,0,266,265,1,0,0,0,266,267,1,0,0,0,267,268,1,
  	0,0,0,268,269,5,134,0,0,269,275,1,0,0,0,270,271,5,13,0,0,271,272,3,20,
  	10,0,272,273,5,14,0,0,273,275,1,0,0,0,274,263,1,0,0,0,274,270,1,0,0,0,
  	275,23,1,0,0,0,276,277,5,85,0,0,277,278,3,48,24,0,278,279,5,1,0,0,279,
  	281,3,8,4,0,280,282,3,36,18,0,281,280,1,0,0,0,281,282,1,0,0,0,282,456,
  	1,0,0,0,283,284,5,86,0,0,284,285,3,48,24,0,285,286,5,1,0,0,286,287,3,
  	8,4,0,287,291,3,42,21,0,288,289,5,87,0,0,289,290,5,1,0,0,290,292,3,22,
  	11,0,291,288,1,0,0,0,291,292,1,0,0,0,292,294,1,0,0,0,293,295,3,36,18,
  	0,294,293,1,0,0,0,294,295,1,0,0,0,295,456,1,0,0,0,296,297,5,88,0,0,297,
  	298,3,48,24,0,298,300,5,1,0,0,299,301,3,36,18,0,300,299,1,0,0,0,300,301,
  	1,0,0,0,301,302,1,0,0,0,302,306,5,133,0,0,303,305,3,28,14,0,304,303,1,
  	0,0,0,305,308,1,0,0,0,306,304,1,0,0,0,306,307,1,0,0,0,307,309,1,0,0,0,
  	308,306,1,0,0,0,309,310,5,134,0,0,310,456,1,0,0,0,311,312,5,108,0,0,312,
  	313,3,48,24,0,313,314,5,1,0,0,314,316,3,8,4,0,315,317,3,36,18,0,316,315,
  	1,0,0,0,316,317,1,0,0,0,317,456,1,0,0,0,318,319,5,109,0,0,319,320,3,48,
  	24,0,320,321,5,1,0,0,321,323,3,8,4,0,322,324,3,40,20,0,323,322,1,0,0,
  	0,323,324,1,0,0,0,324,326,1,0,0,0,325,327,3,36,18,0,326,325,1,0,0,0,326,
  	327,1,0,0,0,327,456,1,0,0,0,328,329,3,38,19,0,329,330,5,110,0,0,330,331,
  	3,48,24,0,331,332,5,10,0,0,332,333,3,48,24,0,333,334,5,7,0,0,334,335,
  	3,42,21,0,335,336,5,8,0,0,336,338,3,42,21,0,337,339,3,36,18,0,338,337,
  	1,0,0,0,338,339,1,0,0,0,339,456,1,0,0,0,340,341,5,93,0,0,341,342,3,48,
  	24,0,342,343,5,94,0,0,343,345,3,48,24,0,344,346,3,36,18,0,345,344,1,0,
  	0,0,345,346,1,0,0,0,346,456,1,0,0,0,347,348,5,95,0,0,348,349,3,48,24,
  	0,349,350,5,10,0,0,350,352,3,42,21,0,351,353,3,36,18,0,352,351,1,0,0,
  	0,352,353,1,0,0,0,353,456,1,0,0,0,354,355,3,44,22,0,355,356,5,15,0,0,
  	356,358,3,42,21,0,357,359,3,36,18,0,358,357,1,0,0,0,358,359,1,0,0,0,359,
  	456,1,0,0,0,360,361,3,44,22,0,361,362,5,16,0,0,362,364,3,42,21,0,363,
  	365,3,36,18,0,364,363,1,0,0,0,364,365,1,0,0,0,365,456,1,0,0,0,366,367,
  	3,44,22,0,367,368,5,96,0,0,368,370,5,97,0,0,369,371,3,36,18,0,370,369,
  	1,0,0,0,370,371,1,0,0,0,371,456,1,0,0,0,372,456,3,34,17,0,373,374,5,17,
  	0,0,374,375,3,42,21,0,375,376,3,42,21,0,376,377,3,52,26,0,377,379,5,14,
  	0,0,378,380,3,26,13,0,379,378,1,0,0,0,379,380,1,0,0,0,380,382,1,0,0,0,
  	381,383,3,36,18,0,382,381,1,0,0,0,382,383,1,0,0,0,383,456,1,0,0,0,384,
  	385,5,18,0,0,385,386,3,42,21,0,386,387,3,42,21,0,387,391,5,125,0,0,388,
  	390,3,42,21,0,389,388,1,0,0,0,390,393,1,0,0,0,391,389,1,0,0,0,391,392,
  	1,0,0,0,392,394,1,0,0,0,393,391,1,0,0,0,394,396,5,14,0,0,395,397,3,26,
  	13,0,396,395,1,0,0,0,396,397,1,0,0,0,397,399,1,0,0,0,398,400,3,36,18,
  	0,399,398,1,0,0,0,399,400,1,0,0,0,400,456,1,0,0,0,401,403,5,102,0,0,402,
  	404,3,36,18,0,403,402,1,0,0,0,403,404,1,0,0,0,404,456,1,0,0,0,405,406,
  	5,115,0,0,406,408,5,13,0,0,407,409,3,42,21,0,408,407,1,0,0,0,409,410,
  	1,0,0,0,410,408,1,0,0,0,410,411,1,0,0,0,411,412,1,0,0,0,412,414,5,14,
  	0,0,413,415,3,36,18,0,414,413,1,0,0,0,414,415,1,0,0,0,415,456,1,0,0,0,
  	416,417,5,116,0,0,417,418,5,13,0,0,418,419,3,42,21,0,419,420,3,42,21,
  	0,420,421,3,42,21,0,421,422,5,125,0,0,422,424,5,14,0,0,423,425,3,26,13,
  	0,424,423,1,0,0,0,424,425,1,0,0,0,425,427,1,0,0,0,426,428,3,36,18,0,427,
  	426,1,0,0,0,427,428,1,0,0,0,428,456,1,0,0,0,429,430,5,117,0,0,430,431,
  	5,13,0,0,431,432,3,42,21,0,432,433,3,42,21,0,433,434,3,42,21,0,434,435,
  	5,125,0,0,435,437,5,14,0,0,436,438,3,26,13,0,437,436,1,0,0,0,437,438,
  	1,0,0,0,438,440,1,0,0,0,439,441,3,36,18,0,440,439,1,0,0,0,440,441,1,0,
  	0,0,441,456,1,0,0,0,442,443,5,118,0,0,443,444,5,13,0,0,444,445,3,42,21,
  	0,445,446,3,42,21,0,446,447,3,42,21,0,447,448,5,125,0,0,448,450,5,14,
  	0,0,449,451,3,26,13,0,450,449,1,0,0,0,450,451,1,0,0,0,451,453,1,0,0,0,
  	452,454,3,36,18,0,453,452,1,0,0,0,453,454,1,0,0,0,454,456,1,0,0,0,455,
  	276,1,0,0,0,455,283,1,0,0,0,455,296,1,0,0,0,455,311,1,0,0,0,455,318,1,
  	0,0,0,455,328,1,0,0,0,455,340,1,0,0,0,455,347,1,0,0,0,455,354,1,0,0,0,
  	455,360,1,0,0,0,455,366,1,0,0,0,455,372,1,0,0,0,455,373,1,0,0,0,455,384,
  	1,0,0,0,455,401,1,0,0,0,455,405,1,0,0,0,455,416,1,0,0,0,455,429,1,0,0,
  	0,455,442,1,0,0,0,456,25,1,0,0,0,457,458,5,1,0,0,458,459,3,48,24,0,459,
  	27,1,0,0,0,460,461,5,19,0,0,461,462,5,12,0,0,462,463,3,8,4,0,463,464,
  	5,132,0,0,464,513,1,0,0,0,465,466,5,89,0,0,466,467,5,12,0,0,467,468,3,
  	52,26,0,468,469,5,132,0,0,469,513,1,0,0,0,470,471,5,20,0,0,471,472,5,
  	12,0,0,472,473,3,52,26,0,473,474,5,132,0,0,474,513,1,0,0,0,475,476,5,
  	21,0,0,476,477,5,12,0,0,477,478,3,52,26,0,478,479,5,132,0,0,479,513,1,
  	0,0,0,480,481,5,22,0,0,481,482,5,12,0,0,482,483,3,40,20,0,483,484,5,132,
  	0,0,484,513,1,0,0,0,485,486,5,90,0,0,486,488,5,12,0,0,487,489,3,48,24,
  	0,488,487,1,0,0,0,489,490,1,0,0,0,490,488,1,0,0,0,490,491,1,0,0,0,491,
  	492,1,0,0,0,492,493,5,132,0,0,493,513,1,0,0,0,494,495,5,91,0,0,495,497,
  	5,12,0,0,496,498,3,48,24,0,497,496,1,0,0,0,498,499,1,0,0,0,499,497,1,
  	0,0,0,499,500,1,0,0,0,500,501,1,0,0,0,501,502,5,132,0,0,502,513,1,0,0,
  	0,503,504,5,92,0,0,504,506,5,12,0,0,505,507,3,48,24,0,506,505,1,0,0,0,
  	507,508,1,0,0,0,508,506,1,0,0,0,508,509,1,0,0,0,509,510,1,0,0,0,510,511,
  	5,132,0,0,511,513,1,0,0,0,512,460,1,0,0,0,512,465,1,0,0,0,512,470,1,0,
  	0,0,512,475,1,0,0,0,512,480,1,0,0,0,512,485,1,0,0,0,512,494,1,0,0,0,512,
  	503,1,0,0,0,513,29,1,0,0,0,514,517,3,24,12,0,515,517,5,132,0,0,516,514,
  	1,0,0,0,516,515,1,0,0,0,517,31,1,0,0,0,518,528,3,30,15,0,519,521,5,133,
  	0,0,520,522,3,30,15,0,521,520,1,0,0,0,522,523,1,0,0,0,523,521,1,0,0,0,
  	523,524,1,0,0,0,524,525,1,0,0,0,525,526,5,134,0,0,526,528,1,0,0,0,527,
  	518,1,0,0,0,527,519,1,0,0,0,528,33,1,0,0,0,529,530,5,98,0,0,530,531,3,
  	42,21,0,531,533,5,1,0,0,532,534,3,36,18,0,533,532,1,0,0,0,533,534,1,0,
  	0,0,534,536,1,0,0,0,535,537,3,32,16,0,536,535,1,0,0,0,536,537,1,0,0,0,
  	537,549,1,0,0,0,538,547,5,99,0,0,539,548,3,34,17,0,540,542,5,1,0,0,541,
  	543,3,36,18,0,542,541,1,0,0,0,542,543,1,0,0,0,543,545,1,0,0,0,544,546,
  	3,32,16,0,545,544,1,0,0,0,545,546,1,0,0,0,546,548,1,0,0,0,547,539,1,0,
  	0,0,547,540,1,0,0,0,548,550,1,0,0,0,549,538,1,0,0,0,549,550,1,0,0,0,550,
  	35,1,0,0,0,551,552,5,127,0,0,552,37,1,0,0,0,553,554,7,1,0,0,554,39,1,
  	0,0,0,555,556,7,2,0,0,556,41,1,0,0,0,557,562,5,76,0,0,558,559,5,2,0,0,
  	559,560,3,52,26,0,560,561,5,3,0,0,561,563,1,0,0,0,562,558,1,0,0,0,562,
  	563,1,0,0,0,563,564,1,0,0,0,564,565,5,13,0,0,565,566,3,52,26,0,566,567,
  	5,14,0,0,567,607,1,0,0,0,568,573,5,77,0,0,569,570,5,2,0,0,570,571,3,52,
  	26,0,571,572,5,3,0,0,572,574,1,0,0,0,573,569,1,0,0,0,573,574,1,0,0,0,
  	574,575,1,0,0,0,575,576,5,13,0,0,576,577,3,52,26,0,577,578,5,14,0,0,578,
  	607,1,0,0,0,579,607,3,44,22,0,580,581,5,23,0,0,581,582,3,42,21,0,582,
  	583,3,42,21,0,583,584,3,42,21,0,584,585,5,14,0,0,585,607,1,0,0,0,586,
  	587,5,24,0,0,587,588,3,42,21,0,588,589,3,42,21,0,589,590,5,14,0,0,590,
  	607,1,0,0,0,591,595,3,62,31,0,592,594,3,42,21,0,593,592,1,0,0,0,594,597,
  	1,0,0,0,595,593,1,0,0,0,595,596,1,0,0,0,596,601,1,0,0,0,597,595,1,0,0,
  	0,598,600,3,52,26,0,599,598,1,0,0,0,600,603,1,0,0,0,601,599,1,0,0,0,601,
  	602,1,0,0,0,602,604,1,0,0,0,603,601,1,0,0,0,604,605,5,14,0,0,605,607,
  	1,0,0,0,606,557,1,0,0,0,606,568,1,0,0,0,606,579,1,0,0,0,606,580,1,0,0,
  	0,606,586,1,0,0,0,606,591,1,0,0,0,607,43,1,0,0,0,608,610,3,48,24,0,609,
  	611,3,46,23,0,610,609,1,0,0,0,610,611,1,0,0,0,611,45,1,0,0,0,612,613,
  	5,4,0,0,613,615,3,50,25,0,614,616,3,46,23,0,615,614,1,0,0,0,615,616,1,
  	0,0,0,616,632,1,0,0,0,617,618,5,4,0,0,618,620,5,124,0,0,619,621,3,46,
  	23,0,620,619,1,0,0,0,620,621,1,0,0,0,621,632,1,0,0,0,622,625,5,7,0,0,
  	623,626,3,52,26,0,624,626,3,42,21,0,625,623,1,0,0,0,625,624,1,0,0,0,626,
  	627,1,0,0,0,627,629,5,8,0,0,628,630,3,46,23,0,629,628,1,0,0,0,629,630,
  	1,0,0,0,630,632,1,0,0,0,631,612,1,0,0,0,631,617,1,0,0,0,631,622,1,0,0,
  	0,632,47,1,0,0,0,633,636,5,128,0,0,634,636,3,60,30,0,635,633,1,0,0,0,
  	635,634,1,0,0,0,636,49,1,0,0,0,637,642,5,128,0,0,638,642,5,129,0,0,639,
  	642,5,119,0,0,640,642,3,60,30,0,641,637,1,0,0,0,641,638,1,0,0,0,641,639,
  	1,0,0,0,641,640,1,0,0,0,642,51,1,0,0,0,643,644,7,3,0,0,644,53,1,0,0,0,
  	645,646,7,4,0,0,646,55,1,0,0,0,647,648,7,5,0,0,648,57,1,0,0,0,649,650,
  	7,6,0,0,650,59,1,0,0,0,651,652,7,7,0,0,652,61,1,0,0,0,653,654,7,8,0,0,
  	654,63,1,0,0,0,81,68,74,84,90,100,106,110,115,120,127,139,146,153,161,
  	169,173,183,189,193,202,206,241,246,261,266,274,281,291,294,300,306,316,
  	323,326,338,345,352,358,364,370,379,382,391,396,399,403,410,414,424,427,
  	437,440,450,453,455,490,499,508,512,516,523,527,533,536,542,545,547,549,
  	562,573,595,601,606,610,615,620,625,629,631,635,641
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  firrtlParserStaticData = staticData.release();
}

}

FIRRTLParser::FIRRTLParser(TokenStream *input) : FIRRTLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

FIRRTLParser::FIRRTLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  FIRRTLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *firrtlParserStaticData->atn, firrtlParserStaticData->decisionToDFA, firrtlParserStaticData->sharedContextCache, options);
}

FIRRTLParser::~FIRRTLParser() {
  delete _interpreter;
}

const atn::ATN& FIRRTLParser::getATN() const {
  return *firrtlParserStaticData->atn;
}

std::string FIRRTLParser::getGrammarFileName() const {
  return "FIRRTL.g4";
}

const std::vector<std::string>& FIRRTLParser::getRuleNames() const {
  return firrtlParserStaticData->ruleNames;
}

const dfa::Vocabulary& FIRRTLParser::getVocabulary() const {
  return firrtlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView FIRRTLParser::getSerializedATN() const {
  return firrtlParserStaticData->serializedATN;
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


std::any FIRRTLParser::CircuitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitCircuit(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::CircuitContext* FIRRTLParser::circuit() {
  CircuitContext *_localctx = _tracker.createInstance<CircuitContext>(_ctx, getState());
  enterRule(_localctx, 0, FIRRTLParser::RuleCircuit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(FIRRTLParser::Key_circuit);
    setState(65);
    id();
    setState(66);
    match(FIRRTLParser::T__0);
    setState(68);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FIRRTLParser::FileInfo) {
      setState(67);
      info();
    }
    setState(70);
    match(FIRRTLParser::INDENT);
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FIRRTLParser::Key_module

    || _la == FIRRTLParser::Key_extmodule) {
      setState(71);
      module();
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
    match(FIRRTLParser::DEDENT);
    setState(78);
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


std::any FIRRTLParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::ModuleContext* FIRRTLParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 2, FIRRTLParser::RuleModule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Key_module: {
        enterOuterAlt(_localctx, 1);
        setState(80);
        match(FIRRTLParser::Key_module);
        setState(81);
        id();
        setState(82);
        match(FIRRTLParser::T__0);
        setState(84);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::FileInfo) {
          setState(83);
          info();
        }
        setState(86);
        match(FIRRTLParser::INDENT);
        setState(90);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(87);
            port(); 
          }
          setState(92);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        }
        setState(93);
        moduleBlock();
        setState(94);
        match(FIRRTLParser::DEDENT);
        break;
      }

      case FIRRTLParser::Key_extmodule: {
        enterOuterAlt(_localctx, 2);
        setState(96);
        match(FIRRTLParser::Key_extmodule);
        setState(97);
        id();
        setState(98);
        match(FIRRTLParser::T__0);
        setState(100);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::FileInfo) {
          setState(99);
          info();
        }
        setState(102);
        match(FIRRTLParser::INDENT);
        setState(106);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FIRRTLParser::Key_input

        || _la == FIRRTLParser::Key_output) {
          setState(103);
          port();
          setState(108);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(110);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::T__8) {
          setState(109);
          defname();
        }
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FIRRTLParser::Key_parameter) {
          setState(112);
          parameter();
          setState(117);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(118);
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


std::any FIRRTLParser::PortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitPort(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::PortContext* FIRRTLParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 4, FIRRTLParser::RulePort);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    dir();
    setState(123);
    id();
    setState(124);
    match(FIRRTLParser::T__0);
    setState(125);
    type(0);
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FIRRTLParser::FileInfo) {
      setState(126);
      info();
    }
    setState(129);
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


std::any FIRRTLParser::DirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitDir(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::DirContext* FIRRTLParser::dir() {
  DirContext *_localctx = _tracker.createInstance<DirContext>(_ctx, getState());
  enterRule(_localctx, 6, FIRRTLParser::RuleDir);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
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

tree::TerminalNode* FIRRTLParser::TypeContext::Key_Interval() {
  return getToken(FIRRTLParser::Key_Interval, 0);
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

tree::TerminalNode* FIRRTLParser::TypeContext::Key_AsyncReset() {
  return getToken(FIRRTLParser::Key_AsyncReset, 0);
}

tree::TerminalNode* FIRRTLParser::TypeContext::Key_Reset() {
  return getToken(FIRRTLParser::Key_Reset, 0);
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


std::any FIRRTLParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(193);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Key_UInt: {
        setState(134);
        match(FIRRTLParser::Key_UInt);
        setState(139);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          setState(135);
          match(FIRRTLParser::T__1);
          setState(136);
          intLit();
          setState(137);
          match(FIRRTLParser::T__2);
          break;
        }

        default:
          break;
        }
        break;
      }

      case FIRRTLParser::Key_SInt: {
        setState(141);
        match(FIRRTLParser::Key_SInt);
        setState(146);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          setState(142);
          match(FIRRTLParser::T__1);
          setState(143);
          intLit();
          setState(144);
          match(FIRRTLParser::T__2);
          break;
        }

        default:
          break;
        }
        break;
      }

      case FIRRTLParser::Key_Fixed: {
        setState(148);
        match(FIRRTLParser::Key_Fixed);
        setState(153);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          setState(149);
          match(FIRRTLParser::T__1);
          setState(150);
          intLit();
          setState(151);
          match(FIRRTLParser::T__2);
          break;
        }

        default:
          break;
        }
        setState(161);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(155);
          match(FIRRTLParser::T__1);
          setState(156);
          match(FIRRTLParser::T__1);
          setState(157);
          intLit();
          setState(158);
          match(FIRRTLParser::T__2);
          setState(159);
          match(FIRRTLParser::T__2);
          break;
        }

        default:
          break;
        }
        break;
      }

      case FIRRTLParser::Key_Interval: {
        setState(163);
        match(FIRRTLParser::Key_Interval);
        setState(169);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          setState(164);
          lowerBound();
          setState(165);
          boundValue();
          setState(166);
          boundValue();
          setState(167);
          upperBound();
          break;
        }

        default:
          break;
        }
        setState(173);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(171);
          match(FIRRTLParser::T__3);
          setState(172);
          intLit();
          break;
        }

        default:
          break;
        }
        break;
      }

      case FIRRTLParser::Key_Clock: {
        setState(175);
        match(FIRRTLParser::Key_Clock);
        break;
      }

      case FIRRTLParser::Key_AsyncReset: {
        setState(176);
        match(FIRRTLParser::Key_AsyncReset);
        break;
      }

      case FIRRTLParser::Key_Reset: {
        setState(177);
        match(FIRRTLParser::Key_Reset);
        break;
      }

      case FIRRTLParser::Key_Analog: {
        setState(178);
        match(FIRRTLParser::Key_Analog);
        setState(183);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(179);
          match(FIRRTLParser::T__1);
          setState(180);
          intLit();
          setState(181);
          match(FIRRTLParser::T__2);
          break;
        }

        default:
          break;
        }
        break;
      }

      case FIRRTLParser::T__4: {
        setState(185);
        match(FIRRTLParser::T__4);
        setState(189);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FIRRTLParser::T__10 || (((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & 865817028361977855) != 0) {
          setState(186);
          field();
          setState(191);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(192);
        match(FIRRTLParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(202);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleType);
        setState(195);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(196);
        match(FIRRTLParser::T__6);
        setState(197);
        intLit();
        setState(198);
        match(FIRRTLParser::T__7); 
      }
      setState(204);
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


std::any FIRRTLParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::FieldContext* FIRRTLParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 10, FIRRTLParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(205);
      match(FIRRTLParser::Key_flip);
      break;
    }

    default:
      break;
    }
    setState(208);
    fieldId();
    setState(209);
    match(FIRRTLParser::T__0);
    setState(210);
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


std::any FIRRTLParser::DefnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitDefname(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::DefnameContext* FIRRTLParser::defname() {
  DefnameContext *_localctx = _tracker.createInstance<DefnameContext>(_ctx, getState());
  enterRule(_localctx, 12, FIRRTLParser::RuleDefname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(FIRRTLParser::T__8);
    setState(213);
    match(FIRRTLParser::T__9);
    setState(214);
    id();
    setState(215);
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


std::any FIRRTLParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::ParameterContext* FIRRTLParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, FIRRTLParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(241);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(217);
      match(FIRRTLParser::Key_parameter);
      setState(218);
      id();
      setState(219);
      match(FIRRTLParser::T__9);
      setState(220);
      intLit();
      setState(221);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(223);
      match(FIRRTLParser::Key_parameter);
      setState(224);
      id();
      setState(225);
      match(FIRRTLParser::T__9);
      setState(226);
      match(FIRRTLParser::StringLit);
      setState(227);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(229);
      match(FIRRTLParser::Key_parameter);
      setState(230);
      id();
      setState(231);
      match(FIRRTLParser::T__9);
      setState(232);
      match(FIRRTLParser::DoubleLit);
      setState(233);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(235);
      match(FIRRTLParser::Key_parameter);
      setState(236);
      id();
      setState(237);
      match(FIRRTLParser::T__9);
      setState(238);
      match(FIRRTLParser::RawString);
      setState(239);
      match(FIRRTLParser::NEWLINE);
      break;
    }

    default:
      break;
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


std::any FIRRTLParser::ModuleBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitModuleBlock(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::ModuleBlockContext* FIRRTLParser::moduleBlock() {
  ModuleBlockContext *_localctx = _tracker.createInstance<ModuleBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, FIRRTLParser::RuleModuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 395264) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 4900479344532520959) != 0) {
      setState(243);
      simple_stmt();
      setState(248);
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


std::any FIRRTLParser::Simple_reset0Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSimple_reset0(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Simple_reset0Context* FIRRTLParser::simple_reset0() {
  Simple_reset0Context *_localctx = _tracker.createInstance<Simple_reset0Context>(_ctx, getState());
  enterRule(_localctx, 18, FIRRTLParser::RuleSimple_reset0);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(FIRRTLParser::T__10);
    setState(250);
    match(FIRRTLParser::T__11);
    setState(251);
    match(FIRRTLParser::T__12);
    setState(252);
    exp();
    setState(253);
    exp();
    setState(254);
    match(FIRRTLParser::T__13);
   
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


std::any FIRRTLParser::Simple_resetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSimple_reset(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Simple_resetContext* FIRRTLParser::simple_reset() {
  Simple_resetContext *_localctx = _tracker.createInstance<Simple_resetContext>(_ctx, getState());
  enterRule(_localctx, 20, FIRRTLParser::RuleSimple_reset);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__10: {
        enterOuterAlt(_localctx, 1);
        setState(256);
        simple_reset0();
        break;
      }

      case FIRRTLParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(257);
        match(FIRRTLParser::T__12);
        setState(258);
        simple_reset0();
        setState(259);
        match(FIRRTLParser::T__13);
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


std::any FIRRTLParser::Reset_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitReset_block(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Reset_blockContext* FIRRTLParser::reset_block() {
  Reset_blockContext *_localctx = _tracker.createInstance<Reset_blockContext>(_ctx, getState());
  enterRule(_localctx, 22, FIRRTLParser::RuleReset_block);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(274);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::INDENT: {
        enterOuterAlt(_localctx, 1);
        setState(263);
        match(FIRRTLParser::INDENT);
        setState(264);
        simple_reset();
        setState(266);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FIRRTLParser::FileInfo) {
          setState(265);
          info();
        }
        setState(268);
        match(FIRRTLParser::DEDENT);
        break;
      }

      case FIRRTLParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(270);
        match(FIRRTLParser::T__12);
        setState(271);
        simple_reset();
        setState(272);
        match(FIRRTLParser::T__13);
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

FIRRTLParser::RefContext* FIRRTLParser::StmtContext::ref() {
  return getRuleContext<FIRRTLParser::RefContext>(0);
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

FIRRTLParser::StmtNameContext* FIRRTLParser::StmtContext::stmtName() {
  return getRuleContext<FIRRTLParser::StmtNameContext>(0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::StringLit() {
  return getToken(FIRRTLParser::StringLit, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_skip() {
  return getToken(FIRRTLParser::Key_skip, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_attach() {
  return getToken(FIRRTLParser::Key_attach, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_assert() {
  return getToken(FIRRTLParser::Key_assert, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_assume() {
  return getToken(FIRRTLParser::Key_assume, 0);
}

tree::TerminalNode* FIRRTLParser::StmtContext::Key_cover() {
  return getToken(FIRRTLParser::Key_cover, 0);
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


std::any FIRRTLParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::StmtContext* FIRRTLParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 24, FIRRTLParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(455);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      match(FIRRTLParser::Key_wire);
      setState(277);
      id();
      setState(278);
      match(FIRRTLParser::T__0);
      setState(279);
      type(0);
      setState(281);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(280);
        info();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(283);
      match(FIRRTLParser::Key_reg);
      setState(284);
      id();
      setState(285);
      match(FIRRTLParser::T__0);
      setState(286);
      type(0);
      setState(287);
      exp();
      setState(291);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
        setState(288);
        match(FIRRTLParser::Key_with);
        setState(289);
        match(FIRRTLParser::T__0);
        setState(290);
        reset_block();
        break;
      }

      default:
        break;
      }
      setState(294);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(293);
        info();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(296);
      match(FIRRTLParser::Key_mem);
      setState(297);
      id();
      setState(298);
      match(FIRRTLParser::T__0);
      setState(300);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(299);
        info();
      }
      setState(302);
      match(FIRRTLParser::INDENT);
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 7864320) != 0 || (((_la - 89) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 89)) & 15) != 0) {
        setState(303);
        memField();
        setState(308);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(309);
      match(FIRRTLParser::DEDENT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(311);
      match(FIRRTLParser::Key_cmem);
      setState(312);
      id();
      setState(313);
      match(FIRRTLParser::T__0);
      setState(314);
      type(0);
      setState(316);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(315);
        info();
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(318);
      match(FIRRTLParser::Key_smem);
      setState(319);
      id();
      setState(320);
      match(FIRRTLParser::T__0);
      setState(321);
      type(0);
      setState(323);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(322);
        ruw();
        break;
      }

      default:
        break;
      }
      setState(326);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(325);
        info();
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(328);
      mdir();
      setState(329);
      match(FIRRTLParser::Key_mport);
      setState(330);
      id();
      setState(331);
      match(FIRRTLParser::T__9);
      setState(332);
      id();
      setState(333);
      match(FIRRTLParser::T__6);
      setState(334);
      exp();
      setState(335);
      match(FIRRTLParser::T__7);
      setState(336);
      exp();
      setState(338);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(337);
        info();
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(340);
      match(FIRRTLParser::Key_inst);
      setState(341);
      id();
      setState(342);
      match(FIRRTLParser::Key_of);
      setState(343);
      id();
      setState(345);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(344);
        info();
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(347);
      match(FIRRTLParser::Key_node);
      setState(348);
      id();
      setState(349);
      match(FIRRTLParser::T__9);
      setState(350);
      exp();
      setState(352);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(351);
        info();
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(354);
      ref();
      setState(355);
      match(FIRRTLParser::T__14);
      setState(356);
      exp();
      setState(358);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(357);
        info();
      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(360);
      ref();
      setState(361);
      match(FIRRTLParser::T__15);
      setState(362);
      exp();
      setState(364);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(363);
        info();
      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(366);
      ref();
      setState(367);
      match(FIRRTLParser::Key_is);
      setState(368);
      match(FIRRTLParser::Key_invalid);
      setState(370);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(369);
        info();
      }
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(372);
      when();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(373);
      match(FIRRTLParser::T__16);
      setState(374);
      exp();
      setState(375);
      exp();
      setState(376);
      intLit();
      setState(377);
      match(FIRRTLParser::T__13);
      setState(379);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__0) {
        setState(378);
        stmtName();
      }
      setState(382);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(381);
        info();
      }
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(384);
      match(FIRRTLParser::T__17);
      setState(385);
      exp();
      setState(386);
      exp();
      setState(387);
      match(FIRRTLParser::StringLit);
      setState(391);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la - 11) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 11)) & -20479) != 0 || (((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & 9024791440785407) != 0) {
        setState(388);
        exp();
        setState(393);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(394);
      match(FIRRTLParser::T__13);
      setState(396);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__0) {
        setState(395);
        stmtName();
      }
      setState(399);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(398);
        info();
      }
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(401);
      match(FIRRTLParser::Key_skip);
      setState(403);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(402);
        info();
      }
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(405);
      match(FIRRTLParser::Key_attach);
      setState(406);
      match(FIRRTLParser::T__12);
      setState(408); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(407);
        exp();
        setState(410); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la - 11) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 11)) & -20479) != 0 || (((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & 9024791440785407) != 0);
      setState(412);
      match(FIRRTLParser::T__13);
      setState(414);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(413);
        info();
      }
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(416);
      match(FIRRTLParser::Key_assert);
      setState(417);
      match(FIRRTLParser::T__12);
      setState(418);
      exp();
      setState(419);
      exp();
      setState(420);
      exp();
      setState(421);
      match(FIRRTLParser::StringLit);
      setState(422);
      match(FIRRTLParser::T__13);
      setState(424);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__0) {
        setState(423);
        stmtName();
      }
      setState(427);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(426);
        info();
      }
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(429);
      match(FIRRTLParser::Key_assume);
      setState(430);
      match(FIRRTLParser::T__12);
      setState(431);
      exp();
      setState(432);
      exp();
      setState(433);
      exp();
      setState(434);
      match(FIRRTLParser::StringLit);
      setState(435);
      match(FIRRTLParser::T__13);
      setState(437);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__0) {
        setState(436);
        stmtName();
      }
      setState(440);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(439);
        info();
      }
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(442);
      match(FIRRTLParser::Key_cover);
      setState(443);
      match(FIRRTLParser::T__12);
      setState(444);
      exp();
      setState(445);
      exp();
      setState(446);
      exp();
      setState(447);
      match(FIRRTLParser::StringLit);
      setState(448);
      match(FIRRTLParser::T__13);
      setState(450);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__0) {
        setState(449);
        stmtName();
      }
      setState(453);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::FileInfo) {
        setState(452);
        info();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtNameContext ------------------------------------------------------------------

FIRRTLParser::StmtNameContext::StmtNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::IdContext* FIRRTLParser::StmtNameContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}


size_t FIRRTLParser::StmtNameContext::getRuleIndex() const {
  return FIRRTLParser::RuleStmtName;
}

void FIRRTLParser::StmtNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmtName(this);
}

void FIRRTLParser::StmtNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmtName(this);
}


std::any FIRRTLParser::StmtNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitStmtName(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::StmtNameContext* FIRRTLParser::stmtName() {
  StmtNameContext *_localctx = _tracker.createInstance<StmtNameContext>(_ctx, getState());
  enterRule(_localctx, 26, FIRRTLParser::RuleStmtName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(FIRRTLParser::T__0);
    setState(458);
    id();
   
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


std::any FIRRTLParser::MemFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitMemField(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::MemFieldContext* FIRRTLParser::memField() {
  MemFieldContext *_localctx = _tracker.createInstance<MemFieldContext>(_ctx, getState());
  enterRule(_localctx, 28, FIRRTLParser::RuleMemField);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(512);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(460);
        match(FIRRTLParser::T__18);
        setState(461);
        match(FIRRTLParser::T__11);
        setState(462);
        type(0);
        setState(463);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_depth: {
        enterOuterAlt(_localctx, 2);
        setState(465);
        match(FIRRTLParser::Key_depth);
        setState(466);
        match(FIRRTLParser::T__11);
        setState(467);
        intLit();
        setState(468);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::T__19: {
        enterOuterAlt(_localctx, 3);
        setState(470);
        match(FIRRTLParser::T__19);
        setState(471);
        match(FIRRTLParser::T__11);
        setState(472);
        intLit();
        setState(473);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::T__20: {
        enterOuterAlt(_localctx, 4);
        setState(475);
        match(FIRRTLParser::T__20);
        setState(476);
        match(FIRRTLParser::T__11);
        setState(477);
        intLit();
        setState(478);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::T__21: {
        enterOuterAlt(_localctx, 5);
        setState(480);
        match(FIRRTLParser::T__21);
        setState(481);
        match(FIRRTLParser::T__11);
        setState(482);
        ruw();
        setState(483);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_reader: {
        enterOuterAlt(_localctx, 6);
        setState(485);
        match(FIRRTLParser::Key_reader);
        setState(486);
        match(FIRRTLParser::T__11);
        setState(488); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(487);
          id();
          setState(490); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FIRRTLParser::T__10 || (((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & 288793326105133055) != 0);
        setState(492);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_writer: {
        enterOuterAlt(_localctx, 7);
        setState(494);
        match(FIRRTLParser::Key_writer);
        setState(495);
        match(FIRRTLParser::T__11);
        setState(497); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(496);
          id();
          setState(499); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FIRRTLParser::T__10 || (((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & 288793326105133055) != 0);
        setState(501);
        match(FIRRTLParser::NEWLINE);
        break;
      }

      case FIRRTLParser::Key_readwriter: {
        enterOuterAlt(_localctx, 8);
        setState(503);
        match(FIRRTLParser::Key_readwriter);
        setState(504);
        match(FIRRTLParser::T__11);
        setState(506); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(505);
          id();
          setState(508); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FIRRTLParser::T__10 || (((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & 288793326105133055) != 0);
        setState(510);
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


std::any FIRRTLParser::Simple_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSimple_stmt(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::Simple_stmtContext* FIRRTLParser::simple_stmt() {
  Simple_stmtContext *_localctx = _tracker.createInstance<Simple_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, FIRRTLParser::RuleSimple_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(516);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__10:
      case FIRRTLParser::T__16:
      case FIRRTLParser::T__17:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Reset:
      case FIRRTLParser::Key_AsyncReset:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_Interval:
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
      case FIRRTLParser::Key_attach:
      case FIRRTLParser::Key_assert:
      case FIRRTLParser::Key_assume:
      case FIRRTLParser::Key_cover:
      case FIRRTLParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(514);
        stmt();
        break;
      }

      case FIRRTLParser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(515);
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


std::any FIRRTLParser::SuiteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSuite(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::SuiteContext* FIRRTLParser::suite() {
  SuiteContext *_localctx = _tracker.createInstance<SuiteContext>(_ctx, getState());
  enterRule(_localctx, 32, FIRRTLParser::RuleSuite);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(527);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::T__10:
      case FIRRTLParser::T__16:
      case FIRRTLParser::T__17:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Reset:
      case FIRRTLParser::Key_AsyncReset:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_Interval:
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
      case FIRRTLParser::Key_attach:
      case FIRRTLParser::Key_assert:
      case FIRRTLParser::Key_assume:
      case FIRRTLParser::Key_cover:
      case FIRRTLParser::Id:
      case FIRRTLParser::NEWLINE: {
        enterOuterAlt(_localctx, 1);
        setState(518);
        simple_stmt();
        break;
      }

      case FIRRTLParser::INDENT: {
        enterOuterAlt(_localctx, 2);
        setState(519);
        match(FIRRTLParser::INDENT);
        setState(521); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(520);
          simple_stmt();
          setState(523); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 395264) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & 4900479344532520959) != 0);
        setState(525);
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


std::any FIRRTLParser::WhenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitWhen(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::WhenContext* FIRRTLParser::when() {
  WhenContext *_localctx = _tracker.createInstance<WhenContext>(_ctx, getState());
  enterRule(_localctx, 34, FIRRTLParser::RuleWhen);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    match(FIRRTLParser::Key_when);
    setState(530);
    exp();
    setState(531);
    match(FIRRTLParser::T__0);
    setState(533);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FIRRTLParser::FileInfo) {
      setState(532);
      info();
    }
    setState(536);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(535);
      suite();
      break;
    }

    default:
      break;
    }
    setState(549);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      setState(538);
      match(FIRRTLParser::Key_else);
      setState(547);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case FIRRTLParser::Key_when: {
          setState(539);
          when();
          break;
        }

        case FIRRTLParser::T__0: {
          setState(540);
          match(FIRRTLParser::T__0);
          setState(542);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == FIRRTLParser::FileInfo) {
            setState(541);
            info();
          }
          setState(545);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
          case 1: {
            setState(544);
            suite();
            break;
          }

          default:
            break;
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
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


std::any FIRRTLParser::InfoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitInfo(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::InfoContext* FIRRTLParser::info() {
  InfoContext *_localctx = _tracker.createInstance<InfoContext>(_ctx, getState());
  enterRule(_localctx, 36, FIRRTLParser::RuleInfo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
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


std::any FIRRTLParser::MdirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitMdir(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::MdirContext* FIRRTLParser::mdir() {
  MdirContext *_localctx = _tracker.createInstance<MdirContext>(_ctx, getState());
  enterRule(_localctx, 38, FIRRTLParser::RuleMdir);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    _la = _input->LA(1);
    if (!((((_la - 111) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 111)) & 15) != 0)) {
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


std::any FIRRTLParser::RuwContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitRuw(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::RuwContext* FIRRTLParser::ruw() {
  RuwContext *_localctx = _tracker.createInstance<RuwContext>(_ctx, getState());
  enterRule(_localctx, 40, FIRRTLParser::RuleRuw);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(555);
    _la = _input->LA(1);
    if (!((((_la - 103) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 103)) & 7) != 0)) {
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

FIRRTLParser::RefContext* FIRRTLParser::ExpContext::ref() {
  return getRuleContext<FIRRTLParser::RefContext>(0);
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


std::any FIRRTLParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::ExpContext* FIRRTLParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 42, FIRRTLParser::RuleExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(606);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(557);
      match(FIRRTLParser::Key_UInt);
      setState(562);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__1) {
        setState(558);
        match(FIRRTLParser::T__1);
        setState(559);
        intLit();
        setState(560);
        match(FIRRTLParser::T__2);
      }
      setState(564);
      match(FIRRTLParser::T__12);
      setState(565);
      intLit();
      setState(566);
      match(FIRRTLParser::T__13);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(568);
      match(FIRRTLParser::Key_SInt);
      setState(573);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__1) {
        setState(569);
        match(FIRRTLParser::T__1);
        setState(570);
        intLit();
        setState(571);
        match(FIRRTLParser::T__2);
      }
      setState(575);
      match(FIRRTLParser::T__12);
      setState(576);
      intLit();
      setState(577);
      match(FIRRTLParser::T__13);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(579);
      ref();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(580);
      match(FIRRTLParser::T__22);
      setState(581);
      exp();
      setState(582);
      exp();
      setState(583);
      exp();
      setState(584);
      match(FIRRTLParser::T__13);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(586);
      match(FIRRTLParser::T__23);
      setState(587);
      exp();
      setState(588);
      exp();
      setState(589);
      match(FIRRTLParser::T__13);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(591);
      primop();
      setState(595);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la - 11) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 11)) & -20479) != 0 || (((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & 9024791440785407) != 0) {
        setState(592);
        exp();
        setState(597);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(601);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la - 119) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 119)) & 31) != 0) {
        setState(598);
        intLit();
        setState(603);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(604);
      match(FIRRTLParser::T__13);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefContext ------------------------------------------------------------------

FIRRTLParser::RefContext::RefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::IdContext* FIRRTLParser::RefContext::id() {
  return getRuleContext<FIRRTLParser::IdContext>(0);
}

FIRRTLParser::SubrefContext* FIRRTLParser::RefContext::subref() {
  return getRuleContext<FIRRTLParser::SubrefContext>(0);
}


size_t FIRRTLParser::RefContext::getRuleIndex() const {
  return FIRRTLParser::RuleRef;
}

void FIRRTLParser::RefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRef(this);
}

void FIRRTLParser::RefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRef(this);
}


std::any FIRRTLParser::RefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitRef(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::RefContext* FIRRTLParser::ref() {
  RefContext *_localctx = _tracker.createInstance<RefContext>(_ctx, getState());
  enterRule(_localctx, 44, FIRRTLParser::RuleRef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    id();
    setState(610);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FIRRTLParser::T__3

    || _la == FIRRTLParser::T__6) {
      setState(609);
      subref();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrefContext ------------------------------------------------------------------

FIRRTLParser::SubrefContext::SubrefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FIRRTLParser::FieldIdContext* FIRRTLParser::SubrefContext::fieldId() {
  return getRuleContext<FIRRTLParser::FieldIdContext>(0);
}

FIRRTLParser::SubrefContext* FIRRTLParser::SubrefContext::subref() {
  return getRuleContext<FIRRTLParser::SubrefContext>(0);
}

tree::TerminalNode* FIRRTLParser::SubrefContext::DoubleLit() {
  return getToken(FIRRTLParser::DoubleLit, 0);
}

FIRRTLParser::IntLitContext* FIRRTLParser::SubrefContext::intLit() {
  return getRuleContext<FIRRTLParser::IntLitContext>(0);
}

FIRRTLParser::ExpContext* FIRRTLParser::SubrefContext::exp() {
  return getRuleContext<FIRRTLParser::ExpContext>(0);
}


size_t FIRRTLParser::SubrefContext::getRuleIndex() const {
  return FIRRTLParser::RuleSubref;
}

void FIRRTLParser::SubrefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubref(this);
}

void FIRRTLParser::SubrefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FIRRTLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubref(this);
}


std::any FIRRTLParser::SubrefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitSubref(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::SubrefContext* FIRRTLParser::subref() {
  SubrefContext *_localctx = _tracker.createInstance<SubrefContext>(_ctx, getState());
  enterRule(_localctx, 46, FIRRTLParser::RuleSubref);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(631);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(612);
      match(FIRRTLParser::T__3);
      setState(613);
      fieldId();
      setState(615);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__3

      || _la == FIRRTLParser::T__6) {
        setState(614);
        subref();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(617);
      match(FIRRTLParser::T__3);
      setState(618);
      match(FIRRTLParser::DoubleLit);
      setState(620);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__3

      || _la == FIRRTLParser::T__6) {
        setState(619);
        subref();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(622);
      match(FIRRTLParser::T__6);
      setState(625);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case FIRRTLParser::UnsignedInt:
        case FIRRTLParser::SignedInt:
        case FIRRTLParser::HexLit:
        case FIRRTLParser::OctalLit:
        case FIRRTLParser::BinaryLit: {
          setState(623);
          intLit();
          break;
        }

        case FIRRTLParser::T__10:
        case FIRRTLParser::T__22:
        case FIRRTLParser::T__23:
        case FIRRTLParser::T__25:
        case FIRRTLParser::T__26:
        case FIRRTLParser::T__27:
        case FIRRTLParser::T__28:
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
        case FIRRTLParser::Key_circuit:
        case FIRRTLParser::Key_module:
        case FIRRTLParser::Key_extmodule:
        case FIRRTLParser::Key_parameter:
        case FIRRTLParser::Key_input:
        case FIRRTLParser::Key_output:
        case FIRRTLParser::Key_UInt:
        case FIRRTLParser::Key_SInt:
        case FIRRTLParser::Key_Clock:
        case FIRRTLParser::Key_Reset:
        case FIRRTLParser::Key_AsyncReset:
        case FIRRTLParser::Key_Analog:
        case FIRRTLParser::Key_Fixed:
        case FIRRTLParser::Key_Interval:
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
        case FIRRTLParser::Key_attach:
        case FIRRTLParser::Key_assert:
        case FIRRTLParser::Key_assume:
        case FIRRTLParser::Key_cover:
        case FIRRTLParser::Id: {
          setState(624);
          exp();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(627);
      match(FIRRTLParser::T__7);
      setState(629);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FIRRTLParser::T__3

      || _la == FIRRTLParser::T__6) {
        setState(628);
        subref();
      }
      break;
    }

    default:
      break;
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


std::any FIRRTLParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::IdContext* FIRRTLParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 48, FIRRTLParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(633);
        match(FIRRTLParser::Id);
        break;
      }

      case FIRRTLParser::T__10:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Reset:
      case FIRRTLParser::Key_AsyncReset:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_Interval:
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
      case FIRRTLParser::Key_attach:
      case FIRRTLParser::Key_assert:
      case FIRRTLParser::Key_assume:
      case FIRRTLParser::Key_cover: {
        enterOuterAlt(_localctx, 2);
        setState(634);
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


std::any FIRRTLParser::FieldIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitFieldId(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::FieldIdContext* FIRRTLParser::fieldId() {
  FieldIdContext *_localctx = _tracker.createInstance<FieldIdContext>(_ctx, getState());
  enterRule(_localctx, 50, FIRRTLParser::RuleFieldId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(641);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FIRRTLParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(637);
        match(FIRRTLParser::Id);
        break;
      }

      case FIRRTLParser::RelaxedId: {
        enterOuterAlt(_localctx, 2);
        setState(638);
        match(FIRRTLParser::RelaxedId);
        break;
      }

      case FIRRTLParser::UnsignedInt: {
        enterOuterAlt(_localctx, 3);
        setState(639);
        match(FIRRTLParser::UnsignedInt);
        break;
      }

      case FIRRTLParser::T__10:
      case FIRRTLParser::Key_circuit:
      case FIRRTLParser::Key_module:
      case FIRRTLParser::Key_extmodule:
      case FIRRTLParser::Key_parameter:
      case FIRRTLParser::Key_input:
      case FIRRTLParser::Key_output:
      case FIRRTLParser::Key_UInt:
      case FIRRTLParser::Key_SInt:
      case FIRRTLParser::Key_Clock:
      case FIRRTLParser::Key_Reset:
      case FIRRTLParser::Key_AsyncReset:
      case FIRRTLParser::Key_Analog:
      case FIRRTLParser::Key_Fixed:
      case FIRRTLParser::Key_Interval:
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
      case FIRRTLParser::Key_attach:
      case FIRRTLParser::Key_assert:
      case FIRRTLParser::Key_assume:
      case FIRRTLParser::Key_cover: {
        enterOuterAlt(_localctx, 4);
        setState(640);
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


std::any FIRRTLParser::IntLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitIntLit(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::IntLitContext* FIRRTLParser::intLit() {
  IntLitContext *_localctx = _tracker.createInstance<IntLitContext>(_ctx, getState());
  enterRule(_localctx, 52, FIRRTLParser::RuleIntLit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    _la = _input->LA(1);
    if (!((((_la - 119) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 119)) & 31) != 0)) {
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


std::any FIRRTLParser::LowerBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitLowerBound(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::LowerBoundContext* FIRRTLParser::lowerBound() {
  LowerBoundContext *_localctx = _tracker.createInstance<LowerBoundContext>(_ctx, getState());
  enterRule(_localctx, 54, FIRRTLParser::RuleLowerBound);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__6

    || _la == FIRRTLParser::T__12)) {
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


std::any FIRRTLParser::UpperBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitUpperBound(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::UpperBoundContext* FIRRTLParser::upperBound() {
  UpperBoundContext *_localctx = _tracker.createInstance<UpperBoundContext>(_ctx, getState());
  enterRule(_localctx, 56, FIRRTLParser::RuleUpperBound);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(647);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__7

    || _la == FIRRTLParser::T__13)) {
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


std::any FIRRTLParser::BoundValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitBoundValue(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::BoundValueContext* FIRRTLParser::boundValue() {
  BoundValueContext *_localctx = _tracker.createInstance<BoundValueContext>(_ctx, getState());
  enterRule(_localctx, 58, FIRRTLParser::RuleBoundValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(649);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__24 || (((_la - 119) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 119)) & 35) != 0)) {
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

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_Reset() {
  return getToken(FIRRTLParser::Key_Reset, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_AsyncReset() {
  return getToken(FIRRTLParser::Key_AsyncReset, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_Analog() {
  return getToken(FIRRTLParser::Key_Analog, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_Fixed() {
  return getToken(FIRRTLParser::Key_Fixed, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_Interval() {
  return getToken(FIRRTLParser::Key_Interval, 0);
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

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_attach() {
  return getToken(FIRRTLParser::Key_attach, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_assert() {
  return getToken(FIRRTLParser::Key_assert, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_assume() {
  return getToken(FIRRTLParser::Key_assume, 0);
}

tree::TerminalNode* FIRRTLParser::KeywordAsIdContext::Key_cover() {
  return getToken(FIRRTLParser::Key_cover, 0);
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


std::any FIRRTLParser::KeywordAsIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitKeywordAsId(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::KeywordAsIdContext* FIRRTLParser::keywordAsId() {
  KeywordAsIdContext *_localctx = _tracker.createInstance<KeywordAsIdContext>(_ctx, getState());
  enterRule(_localctx, 60, FIRRTLParser::RuleKeywordAsId);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    _la = _input->LA(1);
    if (!(_la == FIRRTLParser::T__10 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 562949953421311) != 0)) {
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


std::any FIRRTLParser::PrimopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FIRRTLVisitor*>(visitor))
    return parserVisitor->visitPrimop(this);
  else
    return visitor->visitChildren(this);
}

FIRRTLParser::PrimopContext* FIRRTLParser::primop() {
  PrimopContext *_localctx = _tracker.createInstance<PrimopContext>(_ctx, getState());
  enterRule(_localctx, 62, FIRRTLParser::RulePrimop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(653);
    _la = _input->LA(1);
    if (!((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 17592186044415) != 0)) {
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
    case 4: return typeSempred(antlrcpp::downCast<TypeContext *>(context), predicateIndex);

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

void FIRRTLParser::initialize() {
  ::antlr4::internal::call_once(firrtlParserOnceFlag, firrtlParserInitialize);
}
