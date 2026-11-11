#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
mProperty_componentsMap (),
mProperty_machinesMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_componentsMap (inSource.mProperty_componentsMap),
mProperty_machinesMap (inSource.mProperty_machinesMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_componentsMap = inSource.mProperty_componentsMap ;
  mProperty_machinesMap = inSource.mProperty_machinesMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init_21__21_ (const GGS_L_5F_jobList & in_componentsMap,
                                                       const GGS_M_5F_machinesMap & in_machinesMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_componentsMap = in_componentsMap ;
  result.mProperty_machinesMap = in_machinesMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_L_5F_jobList & inOperand0,
                                          const GGS_M_5F_machinesMap & inOperand1) :
mProperty_componentsMap (inOperand0),
mProperty_machinesMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_componentsMap.isValid () && mProperty_machinesMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
  mProperty_componentsMap.drop () ;
  mProperty_machinesMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_componentsMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_machinesMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_sara_5F_scanner::cTokenFor_sara_5F_scanner (void) :
mLexicalAttribute_identifierString (),
mLexicalAttribute_ulongValue () {
}

//--------------------------------------------------------------------------------------------------

Lexique_sara_5F_scanner::Lexique_sara_5F_scanner (Compiler * inCallerCompiler,
                                                  const String & inSourceFileName
                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_sara_5F_scanner::Lexique_sara_5F_scanner (Compiler * inCallerCompiler,
                                                  const String & inSourceString,
                                                  const String & inStringForError
                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectCharInString = "this character cannot appear within a string" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectEndOfComment = "incorrect end of comment" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectMachineNameBeginning = "incorrect machine name beginning" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_sara_5F_scanner_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_sara_5F_scanner::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 50)) {
    static const char * syntaxErrorMessageArray [50] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a character string constant \"...\"",
        "a machine name ($...)",
        "a decimal number",
        "a comment",
        "the 'auto' key word",
        "the 'state' key word",
        "the 'first' key word",
        "the 'last' key word",
        "the 'goto' key word",
        "the 'true' key word",
        "the 'false' key word",
        "the 'nofirst' key word",
        "the 'nolast' key word",
        "the 'modalcompadd' key word",
        "the 'exclude' key word",
        "the 'modalcompsub' key word",
        "the 'include' key word",
        "the 'to' key word",
        "the 'scenario' key word",
        "the 'trans' key word",
        "the 'display' key word",
        "the 'bdd' key word",
        "the 'bool' key word",
        "the 'map' key word",
        "the 'check' key word",
        "the 'checkbool' key word",
        "the 'checkidentical' key word",
        "the ',' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '->' delimitor",
        "the '&' delimitor",
        "the '~' delimitor",
        "the '\?' delimitor",
        "the '!' delimitor",
        "the '|' delimitor",
        "the '||' delimitor",
        "the '+' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the ':=' delimitor",
        "the '^' delimitor",
        "the '=' delimitor",
        "the '*' delimitor",
        "the '@' delimitor",
        "the '**' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__21_ = {
  utf32 ('!'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$**$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2A__2A_ = {
  utf32 ('*'),
  utf32 ('*'),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2B_ = {
  utf32 ('+'),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2D__3E_ = {
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$:=$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3A__3D_ = {
  utf32 (':'),
  utf32 ('='),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$?$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3F_ = {
  utf32 ('\?'),
} ;

//--- Unicode string for '$@$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__40_ = {
  utf32 ('@'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$auto$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_auto = {
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('o'),
} ;

//--- Unicode string for '$bdd$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_bdd = {
  utf32 ('b'),
  utf32 ('d'),
  utf32 ('d'),
} ;

//--- Unicode string for '$bool$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_bool = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('l'),
} ;

//--- Unicode string for '$check$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_check = {
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('k'),
} ;

//--- Unicode string for '$checkbool$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_checkbool = {
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('l'),
} ;

//--- Unicode string for '$checkidentical$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_checkidentical = {
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('l'),
} ;

//--- Unicode string for '$display$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_display = {
  utf32 ('d'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('y'),
} ;

//--- Unicode string for '$exclude$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_exclude = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_false = {
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$first$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_first = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$goto$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_goto = {
  utf32 ('g'),
  utf32 ('o'),
  utf32 ('t'),
  utf32 ('o'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_include = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$last$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_last = {
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$map$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_map = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('p'),
} ;

//--- Unicode string for '$modalcompadd$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_modalcompadd = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('d'),
  utf32 ('d'),
} ;

//--- Unicode string for '$modalcompsub$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_modalcompsub = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('b'),
} ;

//--- Unicode string for '$nofirst$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_nofirst = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$nolast$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_nolast = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$scenario$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_scenario = {
  utf32 ('s'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('o'),
} ;

//--- Unicode string for '$state$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_state = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$to$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_to = {
  utf32 ('t'),
  utf32 ('o'),
} ;

//--- Unicode string for '$trans$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_trans = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('s'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_true = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7C__7C_ = {
  utf32 ('|'),
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7D_ = {
  utf32 ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7E_ = {
  utf32 ('~'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_sara_5F_scanner_delimitorsList = 21 ;

static const C_unicode_lexique_table_entry ktable_for_sara_5F_scanner_delimitorsList [ktable_size_sara_5F_scanner_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__21_, Lexique_sara_5F_scanner::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__26_, Lexique_sara_5F_scanner::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__28_, Lexique_sara_5F_scanner::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__29_, Lexique_sara_5F_scanner::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2A_, Lexique_sara_5F_scanner::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2B_, Lexique_sara_5F_scanner::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2C_, Lexique_sara_5F_scanner::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3A_, Lexique_sara_5F_scanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3B_, Lexique_sara_5F_scanner::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3D_, Lexique_sara_5F_scanner::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3F_, Lexique_sara_5F_scanner::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__40_, Lexique_sara_5F_scanner::kToken__40_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__5E_, Lexique_sara_5F_scanner::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7B_, Lexique_sara_5F_scanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7C_, Lexique_sara_5F_scanner::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7D_, Lexique_sara_5F_scanner::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7E_, Lexique_sara_5F_scanner::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2A__2A_, Lexique_sara_5F_scanner::kToken__2A__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2D__3E_, Lexique_sara_5F_scanner::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3A__3D_, Lexique_sara_5F_scanner::kToken__3A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7C__7C_, Lexique_sara_5F_scanner::kToken__7C__7C_)
} ;

int32_t Lexique_sara_5F_scanner::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_sara_5F_scanner_delimitorsList, ktable_size_sara_5F_scanner_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_sara_5F_scanner_keyWordList = 23 ;

static const C_unicode_lexique_table_entry ktable_for_sara_5F_scanner_keyWordList [ktable_size_sara_5F_scanner_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_to, Lexique_sara_5F_scanner::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_bdd, Lexique_sara_5F_scanner::kToken_bdd),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_map, Lexique_sara_5F_scanner::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_auto, Lexique_sara_5F_scanner::kToken_auto),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_bool, Lexique_sara_5F_scanner::kToken_bool),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_goto, Lexique_sara_5F_scanner::kToken_goto),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_last, Lexique_sara_5F_scanner::kToken_last),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_true, Lexique_sara_5F_scanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_check, Lexique_sara_5F_scanner::kToken_check),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_false, Lexique_sara_5F_scanner::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_first, Lexique_sara_5F_scanner::kToken_first),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_state, Lexique_sara_5F_scanner::kToken_state),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_trans, Lexique_sara_5F_scanner::kToken_trans),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_nolast, Lexique_sara_5F_scanner::kToken_nolast),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_display, Lexique_sara_5F_scanner::kToken_display),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_exclude, Lexique_sara_5F_scanner::kToken_exclude),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_include, Lexique_sara_5F_scanner::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_nofirst, Lexique_sara_5F_scanner::kToken_nofirst),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_scenario, Lexique_sara_5F_scanner::kToken_scenario),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_checkbool, Lexique_sara_5F_scanner::kToken_checkbool),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_modalcompadd, Lexique_sara_5F_scanner::kToken_modalcompadd),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_modalcompsub, Lexique_sara_5F_scanner::kToken_modalcompsub),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_checkidentical, Lexique_sara_5F_scanner::kToken_checkidentical)
} ;

int32_t Lexique_sara_5F_scanner::search_into_keyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_sara_5F_scanner_keyWordList, ktable_size_sara_5F_scanner_keyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_sara_5F_scanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_sara_5F_scanner * ptr = (const cTokenFor_sara_5F_scanner *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_machineIdf:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("machineIdf") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_literal_5F_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_ulongValue) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_auto:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("auto") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_state:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("state") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_first:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("first") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_last:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("last") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_goto:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("goto") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nofirst:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nofirst") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nolast:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nolast") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_modalcompadd:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("modalcompadd") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_exclude:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("exclude") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_modalcompsub:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("modalcompsub") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_to:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("to") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_scenario:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("scenario") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_trans:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("trans") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_display:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("display") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bdd:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bdd") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bool:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bool") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_map:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("map") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_check:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("check") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_checkbool:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("checkbool") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_checkidentical:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("checkidentical") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__40_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("**") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_sara_5F_scanner::internalParseLexicalToken (cTokenFor_sara_5F_scanner & token) {
  bool loop = true ;
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_ulongValue = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7C__7C_, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3A__3D_, true)) {
      token.mTokenCode = kToken__3A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2A__2A_, true)) {
      token.mTokenCode = kToken__2A__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__40_, true)) {
      token.mTokenCode = kToken__40_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3F_, true)) {
      token.mTokenCode = kToken__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__21_, true)) {
      token.mTokenCode = kToken__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 ('\\'))) {
          if (testForInputUTF32Char (utf32 ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, utf32 ('\n')) ;
          }else if (testForInputUTF32Char (utf32 ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, utf32 ('\\')) ;
          }else if (testForInputUTF32Char (utf32 ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, utf32 ('\"')) ;
          }else{
            lexicalError (gLexicalMessage_sara_5F_scanner_incorrectCharInString COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 ('~'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken_literal_5F_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_sara_5F_scanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (utf32 ('$'))) {
      if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
          if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_sara_5F_scanner_incorrectMachineNameBeginning COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken_machineIdf ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_ulongValue, gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge, gLexicalMessage_sara_5F_scanner_internalError) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_ulongValue, gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge, gLexicalMessage_sara_5F_scanner_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_literal_5F_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32CharRange (utf32 ('\v'), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\n'))) {
      }else{
        lexicalError (gLexicalMessage_sara_5F_scanner_incorrectEndOfComment COMMA_LINE_AND_SOURCE_FILE) ;
      }
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_sara_5F_scanner::parseLexicalToken (void) {
  cTokenFor_sara_5F_scanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_sara_5F_scanner::enterToken (cTokenFor_sara_5F_scanner & ioToken) {
  cTokenFor_sara_5F_scanner * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_sara_5F_scanner ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_ulongValue = ioToken.mLexicalAttribute_ulongValue ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

String Lexique_sara_5F_scanner::attributeValue_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_sara_5F_scanner::attributeValue_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_ulongValue ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_sara_5F_scanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_identifierString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_sara_5F_scanner::synthetizedAttribute_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_ulongValue) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

 GGS__5B_string_5D_ Lexique_sara_5F_scanner::symbols (LOCATION_ARGS) {
  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;
  result.plusPlusAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("literal_string") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("machineIdf") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("literal_integer") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("auto") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("state") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("first") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("last") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("goto") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("true") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("nofirst") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("nolast") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("modalcompadd") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("exclude") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("modalcompsub") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("include") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("to") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("scenario") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("trans") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("display") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("bdd") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("bool") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("map") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("check") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("checkbool") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("checkidentical") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (":=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("@") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("**") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_sara_5F_scanner (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("sara_scanner:delimitorsList") ;
  ioList.appendObject ("sara_scanner:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_sara_5F_scanner (const String & inIdentifier,
                                                      bool & ioFound,
                                                      GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "sara_scanner:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("=") ;
    ioList.appendObject ("\?") ;
    ioList.appendObject ("@") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("**") ;
    ioList.appendObject ("->") ;
    ioList.appendObject (":=") ;
    ioList.appendObject ("||") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "sara_scanner:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("to") ;
    ioList.appendObject ("bdd") ;
    ioList.appendObject ("map") ;
    ioList.appendObject ("auto") ;
    ioList.appendObject ("bool") ;
    ioList.appendObject ("goto") ;
    ioList.appendObject ("last") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("check") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("first") ;
    ioList.appendObject ("state") ;
    ioList.appendObject ("trans") ;
    ioList.appendObject ("nolast") ;
    ioList.appendObject ("display") ;
    ioList.appendObject ("exclude") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("nofirst") ;
    ioList.appendObject ("scenario") ;
    ioList.appendObject ("checkbool") ;
    ioList.appendObject ("modalcompadd") ;
    ioList.appendObject ("modalcompsub") ;
    ioList.appendObject ("checkidentical") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_sara_5F_scanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_sara_5F_scanner, getKeywordsForIdentifier_sara_5F_scanner) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_sara_5F_scanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [50] = {0,
    1 /* sara_scanner_1_identifier */,
    6 /* sara_scanner_1_literal_5F_string */,
    3 /* sara_scanner_1_machineIdf */,
    5 /* sara_scanner_1_literal_5F_integer */,
    7 /* sara_scanner_1_comment */,
    2 /* sara_scanner_1_auto */,
    2 /* sara_scanner_1_state */,
    2 /* sara_scanner_1_first */,
    2 /* sara_scanner_1_last */,
    2 /* sara_scanner_1_goto */,
    2 /* sara_scanner_1_true */,
    2 /* sara_scanner_1_false */,
    2 /* sara_scanner_1_nofirst */,
    2 /* sara_scanner_1_nolast */,
    2 /* sara_scanner_1_modalcompadd */,
    2 /* sara_scanner_1_exclude */,
    2 /* sara_scanner_1_modalcompsub */,
    2 /* sara_scanner_1_include */,
    2 /* sara_scanner_1_to */,
    2 /* sara_scanner_1_scenario */,
    2 /* sara_scanner_1_trans */,
    2 /* sara_scanner_1_display */,
    2 /* sara_scanner_1_bdd */,
    2 /* sara_scanner_1_bool */,
    2 /* sara_scanner_1_map */,
    2 /* sara_scanner_1_check */,
    2 /* sara_scanner_1_checkbool */,
    2 /* sara_scanner_1_checkidentical */,
    4 /* sara_scanner_1__2C_ */,
    4 /* sara_scanner_1__3B_ */,
    4 /* sara_scanner_1__3A_ */,
    4 /* sara_scanner_1__7B_ */,
    4 /* sara_scanner_1__7D_ */,
    4 /* sara_scanner_1__2D__3E_ */,
    4 /* sara_scanner_1__26_ */,
    4 /* sara_scanner_1__7E_ */,
    4 /* sara_scanner_1__3F_ */,
    4 /* sara_scanner_1__21_ */,
    4 /* sara_scanner_1__7C_ */,
    4 /* sara_scanner_1__7C__7C_ */,
    4 /* sara_scanner_1__2B_ */,
    4 /* sara_scanner_1__28_ */,
    4 /* sara_scanner_1__29_ */,
    4 /* sara_scanner_1__3A__3D_ */,
    4 /* sara_scanner_1__5E_ */,
    4 /* sara_scanner_1__3D_ */,
    4 /* sara_scanner_1__2A_ */,
    4 /* sara_scanner_1__40_ */,
    4 /* sara_scanner_1__2A__2A_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_sara_5F_scanner::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 8) {
    static const char * kStyleArray [8] = {
      "",
      "identifier",
      "keyWords",
      "machineNameStyle",
      "delimitors",
      "integerStyle",
      "stringStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element::GGS_M_5F_variablesMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element::GGS_M_5F_variablesMap_2E_element (const GGS_M_5F_variablesMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element & GGS_M_5F_variablesMap_2E_element::operator = (const GGS_M_5F_variablesMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element GGS_M_5F_variablesMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_uint & in_mIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_variablesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element::GGS_M_5F_variablesMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_variablesMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_variablesMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_variablesMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element ("M_variablesMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_variablesMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @M_5F_variablesMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_::GGS_M_5F_variablesMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_::GGS_M_5F_variablesMap_2E_element_3F_ (const GGS_M_5F_variablesMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_ GGS_M_5F_variablesMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_variablesMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_variablesMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_variablesMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_variablesMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_variablesMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element_3F_ ("M_variablesMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_variablesMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element::GGS_M_5F_stateMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element::GGS_M_5F_stateMap_2E_element (const GGS_M_5F_stateMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element & GGS_M_5F_stateMap_2E_element::operator = (const GGS_M_5F_stateMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element GGS_M_5F_stateMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                         const GGS_uint & in_mIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_stateMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element::GGS_M_5F_stateMap_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_stateMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_stateMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_stateMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element ("M_stateMap.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_stateMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @M_5F_stateMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_::GGS_M_5F_stateMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_::GGS_M_5F_stateMap_2E_element_3F_ (const GGS_M_5F_stateMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_ GGS_M_5F_stateMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_stateMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_stateMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_stateMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_stateMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_stateMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element_3F_ ("M_stateMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_stateMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::GGS_L_5F_translationVector_2E_element (void) :
mProperty_mTargetSlot () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::GGS_L_5F_translationVector_2E_element (const GGS_L_5F_translationVector_2E_element & inSource) :
mProperty_mTargetSlot (inSource.mProperty_mTargetSlot) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element & GGS_L_5F_translationVector_2E_element::operator = (const GGS_L_5F_translationVector_2E_element & inSource) {
  mProperty_mTargetSlot = inSource.mProperty_mTargetSlot ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element GGS_L_5F_translationVector_2E_element::init_21_ (const GGS_uint & in_mTargetSlot,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_translationVector_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetSlot = in_mTargetSlot ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::GGS_L_5F_translationVector_2E_element (const GGS_uint & inOperand0) :
mProperty_mTargetSlot (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_translationVector_2E_element::isValid (void) const {
  return mProperty_mTargetSlot.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector_2E_element::drop (void) {
  mProperty_mTargetSlot.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_translationVector.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetSlot.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_translationVector.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_translationVector_2E_element ("L_translationVector.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_translationVector_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element::GGS_L_5F_transitionDefinition_2E_element (void) :
mProperty_mActionExpression (),
mProperty_mEndOfExpression (),
mProperty_mTargetStateIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element::GGS_L_5F_transitionDefinition_2E_element (const GGS_L_5F_transitionDefinition_2E_element & inSource) :
mProperty_mActionExpression (inSource.mProperty_mActionExpression),
mProperty_mEndOfExpression (inSource.mProperty_mEndOfExpression),
mProperty_mTargetStateIndex (inSource.mProperty_mTargetStateIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element & GGS_L_5F_transitionDefinition_2E_element::operator = (const GGS_L_5F_transitionDefinition_2E_element & inSource) {
  mProperty_mActionExpression = inSource.mProperty_mActionExpression ;
  mProperty_mEndOfExpression = inSource.mProperty_mEndOfExpression ;
  mProperty_mTargetStateIndex = inSource.mProperty_mTargetStateIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element GGS_L_5F_transitionDefinition_2E_element::init_21__21__21_ (const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                                                                     const GGS_location & in_mEndOfExpression,
                                                                                                     const GGS_uint & in_mTargetStateIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_transitionDefinition_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActionExpression = in_mActionExpression ;
  result.mProperty_mEndOfExpression = in_mEndOfExpression ;
  result.mProperty_mTargetStateIndex = in_mTargetStateIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element::GGS_L_5F_transitionDefinition_2E_element (const GGS_AC_5F_boolExpression & inOperand0,
                                                                                    const GGS_location & inOperand1,
                                                                                    const GGS_uint & inOperand2) :
mProperty_mActionExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1),
mProperty_mTargetStateIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_transitionDefinition_2E_element::isValid (void) const {
  return mProperty_mActionExpression.isValid () && mProperty_mEndOfExpression.isValid () && mProperty_mTargetStateIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition_2E_element::drop (void) {
  mProperty_mActionExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
  mProperty_mTargetStateIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_transitionDefinition.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActionExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetStateIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_transitionDefinition.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2E_element ("L_transitionDefinition.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_transitionDefinition_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element::GGS_L_5F_stateDefinition_2E_element (void) :
mProperty_mStateIndex (),
mProperty_mStateExpression (),
mProperty_mEndOfStateExpression (),
mProperty_mTransitionsList () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element::GGS_L_5F_stateDefinition_2E_element (const GGS_L_5F_stateDefinition_2E_element & inSource) :
mProperty_mStateIndex (inSource.mProperty_mStateIndex),
mProperty_mStateExpression (inSource.mProperty_mStateExpression),
mProperty_mEndOfStateExpression (inSource.mProperty_mEndOfStateExpression),
mProperty_mTransitionsList (inSource.mProperty_mTransitionsList) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element & GGS_L_5F_stateDefinition_2E_element::operator = (const GGS_L_5F_stateDefinition_2E_element & inSource) {
  mProperty_mStateIndex = inSource.mProperty_mStateIndex ;
  mProperty_mStateExpression = inSource.mProperty_mStateExpression ;
  mProperty_mEndOfStateExpression = inSource.mProperty_mEndOfStateExpression ;
  mProperty_mTransitionsList = inSource.mProperty_mTransitionsList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element GGS_L_5F_stateDefinition_2E_element::init_21__21__21__21_ (const GGS_uint & in_mStateIndex,
                                                                                               const GGS_AC_5F_boolExpression & in_mStateExpression,
                                                                                               const GGS_location & in_mEndOfStateExpression,
                                                                                               const GGS_L_5F_transitionDefinition & in_mTransitionsList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_stateDefinition_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStateIndex = in_mStateIndex ;
  result.mProperty_mStateExpression = in_mStateExpression ;
  result.mProperty_mEndOfStateExpression = in_mEndOfStateExpression ;
  result.mProperty_mTransitionsList = in_mTransitionsList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element::GGS_L_5F_stateDefinition_2E_element (const GGS_uint & inOperand0,
                                                                          const GGS_AC_5F_boolExpression & inOperand1,
                                                                          const GGS_location & inOperand2,
                                                                          const GGS_L_5F_transitionDefinition & inOperand3) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateExpression (inOperand1),
mProperty_mEndOfStateExpression (inOperand2),
mProperty_mTransitionsList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_stateDefinition_2E_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateExpression.isValid () && mProperty_mEndOfStateExpression.isValid () && mProperty_mTransitionsList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition_2E_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateExpression.drop () ;
  mProperty_mEndOfStateExpression.drop () ;
  mProperty_mTransitionsList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_stateDefinition.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStateIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStateExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfStateExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTransitionsList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_stateDefinition.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition_2E_element ("L_stateDefinition.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_stateDefinition_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element::GGS_L_5F_statesDefinitionList_2E_element (void) :
mProperty_mStateIndex (),
mProperty_mStateLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element::GGS_L_5F_statesDefinitionList_2E_element (const GGS_L_5F_statesDefinitionList_2E_element & inSource) :
mProperty_mStateIndex (inSource.mProperty_mStateIndex),
mProperty_mStateLocation (inSource.mProperty_mStateLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element & GGS_L_5F_statesDefinitionList_2E_element::operator = (const GGS_L_5F_statesDefinitionList_2E_element & inSource) {
  mProperty_mStateIndex = inSource.mProperty_mStateIndex ;
  mProperty_mStateLocation = inSource.mProperty_mStateLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element GGS_L_5F_statesDefinitionList_2E_element::init_21__21_ (const GGS_uint & in_mStateIndex,
                                                                                                 const GGS_location & in_mStateLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_statesDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStateIndex = in_mStateIndex ;
  result.mProperty_mStateLocation = in_mStateLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element::GGS_L_5F_statesDefinitionList_2E_element (const GGS_uint & inOperand0,
                                                                                    const GGS_location & inOperand1) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_statesDefinitionList_2E_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList_2E_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_statesDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStateIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStateLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_statesDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2E_element ("L_statesDefinitionList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_statesDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element::GGS_M_5F_modesMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mModeDefinition () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element::GGS_M_5F_modesMap_2E_element (const GGS_M_5F_modesMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mModeDefinition (inSource.mProperty_mModeDefinition) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element & GGS_M_5F_modesMap_2E_element::operator = (const GGS_M_5F_modesMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mModeDefinition = inSource.mProperty_mModeDefinition ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element GGS_M_5F_modesMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mIndex,
                                                                             const GGS_AC_5F_machineDefinition & in_mModeDefinition,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_modesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mModeDefinition = in_mModeDefinition ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element::GGS_M_5F_modesMap_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uint & inOperand1,
                                                            const GGS_AC_5F_machineDefinition & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mModeDefinition (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_modesMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mModeDefinition.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mModeDefinition.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_modesMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModeDefinition.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_modesMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element ("M_modesMap.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_modesMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @M_5F_modesMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_::GGS_M_5F_modesMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_::GGS_M_5F_modesMap_2E_element_3F_ (const GGS_M_5F_modesMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_ GGS_M_5F_modesMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_modesMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_modesMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_modesMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_modesMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_modesMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element_3F_ ("M_modesMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_modesMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element::GGS_ListForModes_2E_element (void) :
mProperty_mSourceMode (),
mProperty_mTargetMode () {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element::GGS_ListForModes_2E_element (const GGS_ListForModes_2E_element & inSource) :
mProperty_mSourceMode (inSource.mProperty_mSourceMode),
mProperty_mTargetMode (inSource.mProperty_mTargetMode) {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element & GGS_ListForModes_2E_element::operator = (const GGS_ListForModes_2E_element & inSource) {
  mProperty_mSourceMode = inSource.mProperty_mSourceMode ;
  mProperty_mTargetMode = inSource.mProperty_mTargetMode ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ListForModes_2E_element GGS_ListForModes_2E_element::init_21__21_ (const GGS_uint & in_mSourceMode,
                                                                       const GGS_uint & in_mTargetMode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ListForModes_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSourceMode = in_mSourceMode ;
  result.mProperty_mTargetMode = in_mTargetMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element::GGS_ListForModes_2E_element (const GGS_uint & inOperand0,
                                                          const GGS_uint & inOperand1) :
mProperty_mSourceMode (inOperand0),
mProperty_mTargetMode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ListForModes_2E_element::isValid (void) const {
  return mProperty_mSourceMode.isValid () && mProperty_mTargetMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes_2E_element::drop (void) {
  mProperty_mSourceMode.drop () ;
  mProperty_mTargetMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ListForModes.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSourceMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetMode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ListForModes.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ListForModes_2E_element ("ListForModes.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ListForModes_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element::GGS_L_5F_inputConfigurationForScenario_2E_element (void) :
mProperty_mInputValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element::GGS_L_5F_inputConfigurationForScenario_2E_element (const GGS_L_5F_inputConfigurationForScenario_2E_element & inSource) :
mProperty_mInputValue (inSource.mProperty_mInputValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element & GGS_L_5F_inputConfigurationForScenario_2E_element::operator = (const GGS_L_5F_inputConfigurationForScenario_2E_element & inSource) {
  mProperty_mInputValue = inSource.mProperty_mInputValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element GGS_L_5F_inputConfigurationForScenario_2E_element::init_21_ (const GGS_luint & in_mInputValue,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputValue = in_mInputValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element::GGS_L_5F_inputConfigurationForScenario_2E_element (const GGS_luint & inOperand0) :
mProperty_mInputValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_inputConfigurationForScenario_2E_element::isValid (void) const {
  return mProperty_mInputValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario_2E_element::drop (void) {
  mProperty_mInputValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_inputConfigurationForScenario.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_inputConfigurationForScenario.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2E_element ("L_inputConfigurationForScenario.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_inputConfigurationForScenario_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element::GGS_L_5F_inputScenario_2E_element (void) :
mProperty_mInputConfiguration () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element::GGS_L_5F_inputScenario_2E_element (const GGS_L_5F_inputScenario_2E_element & inSource) :
mProperty_mInputConfiguration (inSource.mProperty_mInputConfiguration) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element & GGS_L_5F_inputScenario_2E_element::operator = (const GGS_L_5F_inputScenario_2E_element & inSource) {
  mProperty_mInputConfiguration = inSource.mProperty_mInputConfiguration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element GGS_L_5F_inputScenario_2E_element::init_21_ (const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputScenario_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputConfiguration = in_mInputConfiguration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element::GGS_L_5F_inputScenario_2E_element (const GGS_L_5F_inputConfigurationForScenario & inOperand0) :
mProperty_mInputConfiguration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_inputScenario_2E_element::isValid (void) const {
  return mProperty_mInputConfiguration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario_2E_element::drop (void) {
  mProperty_mInputConfiguration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_inputScenario.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputConfiguration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_inputScenario.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputScenario_2E_element ("L_inputScenario.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_inputScenario_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element::GGS_L_5F_scenarioList_2E_element (void) :
mProperty_mScenarioTitle (),
mProperty_mInputScenario () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element::GGS_L_5F_scenarioList_2E_element (const GGS_L_5F_scenarioList_2E_element & inSource) :
mProperty_mScenarioTitle (inSource.mProperty_mScenarioTitle),
mProperty_mInputScenario (inSource.mProperty_mInputScenario) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element & GGS_L_5F_scenarioList_2E_element::operator = (const GGS_L_5F_scenarioList_2E_element & inSource) {
  mProperty_mScenarioTitle = inSource.mProperty_mScenarioTitle ;
  mProperty_mInputScenario = inSource.mProperty_mInputScenario ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element GGS_L_5F_scenarioList_2E_element::init_21__21_ (const GGS_lstring & in_mScenarioTitle,
                                                                                 const GGS_L_5F_inputScenario & in_mInputScenario,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_scenarioList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScenarioTitle = in_mScenarioTitle ;
  result.mProperty_mInputScenario = in_mInputScenario ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element::GGS_L_5F_scenarioList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_L_5F_inputScenario & inOperand1) :
mProperty_mScenarioTitle (inOperand0),
mProperty_mInputScenario (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_scenarioList_2E_element::isValid (void) const {
  return mProperty_mScenarioTitle.isValid () && mProperty_mInputScenario.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList_2E_element::drop (void) {
  mProperty_mScenarioTitle.drop () ;
  mProperty_mInputScenario.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_scenarioList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mScenarioTitle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputScenario.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_scenarioList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_scenarioList_2E_element ("L_scenarioList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_scenarioList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element::GGS_L_5F_jobList_2E_element (void) :
mProperty_mComponent () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element::GGS_L_5F_jobList_2E_element (const GGS_L_5F_jobList_2E_element & inSource) :
mProperty_mComponent (inSource.mProperty_mComponent) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element & GGS_L_5F_jobList_2E_element::operator = (const GGS_L_5F_jobList_2E_element & inSource) {
  mProperty_mComponent = inSource.mProperty_mComponent ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_jobList_2E_element GGS_L_5F_jobList_2E_element::init_21_ (const GGS_AC_5F_job & in_mComponent,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_jobList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mComponent = in_mComponent ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element::GGS_L_5F_jobList_2E_element (const GGS_AC_5F_job & inOperand0) :
mProperty_mComponent (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_jobList_2E_element::isValid (void) const {
  return mProperty_mComponent.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList_2E_element::drop (void) {
  mProperty_mComponent.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_jobList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mComponent.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @L_jobList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_jobList_2E_element ("L_jobList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_jobList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element::GGS_M_5F_machinesMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mNameList () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element::GGS_M_5F_machinesMap_2E_element (const GGS_M_5F_machinesMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mInputVariableCount (inSource.mProperty_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (inSource.mProperty_mInputAndInternalVariableCount),
mProperty_mVariablesMap (inSource.mProperty_mVariablesMap),
mProperty_mNameList (inSource.mProperty_mNameList) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element & GGS_M_5F_machinesMap_2E_element::operator = (const GGS_M_5F_machinesMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mInputVariableCount = inSource.mProperty_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = inSource.mProperty_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = inSource.mProperty_mVariablesMap ;
  mProperty_mNameList = inSource.mProperty_mNameList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element GGS_M_5F_machinesMap_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mIndex,
                                                                                               const GGS_uint & in_mInputVariableCount,
                                                                                               const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                               const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                               const GGS__5B_string_5D_ & in_mNameList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_machinesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mInputVariableCount = in_mInputVariableCount ;
  result.mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  result.mProperty_mVariablesMap = in_mVariablesMap ;
  result.mProperty_mNameList = in_mNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element::GGS_M_5F_machinesMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_uint & inOperand2,
                                                                  const GGS_uint & inOperand3,
                                                                  const GGS_M_5F_variablesMap & inOperand4,
                                                                  const GGS__5B_string_5D_ & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mInputVariableCount (inOperand2),
mProperty_mInputAndInternalVariableCount (inOperand3),
mProperty_mVariablesMap (inOperand4),
mProperty_mNameList (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_machinesMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mInputVariableCount.isValid () && mProperty_mInputAndInternalVariableCount.isValid () && mProperty_mVariablesMap.isValid () && mProperty_mNameList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mInputVariableCount.drop () ;
  mProperty_mInputAndInternalVariableCount.drop () ;
  mProperty_mVariablesMap.drop () ;
  mProperty_mNameList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_machinesMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNameList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_machinesMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element ("M_machinesMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_machinesMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @M_5F_machinesMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_::GGS_M_5F_machinesMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_::GGS_M_5F_machinesMap_2E_element_3F_ (const GGS_M_5F_machinesMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_ GGS_M_5F_machinesMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_machinesMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_machinesMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_machinesMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_machinesMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @M_machinesMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element_3F_ ("M_machinesMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_machinesMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element_3F_ ;
}



//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_ (Lexique_sara_5F_scanner * inCompiler) {
  GGS_semanticContext var_semanticContext_544 = GGS_semanticContext::init_21__21_ (GGS_L_5F_jobList::init (inCompiler COMMA_HERE), GGS_M_5F_machinesMap::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_ (var_semanticContext_544, inCompiler) ;
    if (select_sara_5F_parser_0 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  {
  routine_performComputations_3F_ (var_semanticContext_544.readProperty_componentsMap (), inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 20)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_indexing (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_indexing (inCompiler) ;
    if (select_sara_5F_parser_0 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 29)) ;
  GGS_lstring var_machineName_946 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 30)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 31)) ;
  GGS_uint var_machineIndex_1064 ;
  GGS_uint joker_1078 ; // Joker input parameter
  GGS_uint joker_1082 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_1086 ; // Joker input parameter
  GGS__5B_string_5D_ joker_1090 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_946, var_machineIndex_1064, joker_1078, joker_1082, joker_1086, joker_1090, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 33)) ;
  GGS_AC_5F_job var_job_1140 = GGS_C_5F_machineDisplayStates::init_21_ (var_machineIndex_1064, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_1140, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 30)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 45)) ;
  GGS_lstring var_machineName_1437 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 46)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 47)) ;
  GGS_uint var_machineIndex_1555 ;
  GGS_uint joker_1569 ; // Joker input parameter
  GGS_uint joker_1573 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_1577 ; // Joker input parameter
  GGS__5B_string_5D_ joker_1581 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1437, var_machineIndex_1555, joker_1569, joker_1573, joker_1577, joker_1581, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 49)) ;
  GGS_AC_5F_job var_job_1631 = GGS_C_5F_machineDisplayTransitions::init_21_ (var_machineIndex_1555, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_1631, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 45)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 46)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 62)) ;
  GGS_lstring var_machineName_1943 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 64)) ;
  GGS_uint var_machineIndex_2061 ;
  GGS_uint joker_2075 ; // Joker input parameter
  GGS_uint joker_2079 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_2083 ; // Joker input parameter
  GGS__5B_string_5D_ joker_2087 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1943, var_machineIndex_2061, joker_2075, joker_2079, joker_2083, joker_2087, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 66)) ;
  GGS_AC_5F_job var_job_2137 = GGS_C_5F_machineDisplayInitialStates::init_21_ (var_machineIndex_2061, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_2137, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas4", 77)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 78)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 79)) ;
  GGS_lstring var_machineName_2450 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 80)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 81)) ;
  GGS_uint var_machineIndex_2568 ;
  GGS_uint joker_2582 ; // Joker input parameter
  GGS_uint joker_2586 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_2590 ; // Joker input parameter
  GGS__5B_string_5D_ joker_2594 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2450, var_machineIndex_2568, joker_2582, joker_2586, joker_2590, joker_2594, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 83)) ;
  GGS_AC_5F_job var_job_2644 = GGS_C_5F_machineDisplayTerminalStates::init_21_ (var_machineIndex_2568, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_2644, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas4", 77)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 78)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas4", 79)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 80)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas4", 94)) ;
  GGS_lstring var_machineName_2937 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 95)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 96)) ;
  GGS_uint var_machineIndex_3055 ;
  GGS_uint joker_3069 ; // Joker input parameter
  GGS_uint joker_3073 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3077 ; // Joker input parameter
  GGS__5B_string_5D_ joker_3081 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2937, var_machineIndex_3055, joker_3069, joker_3073, joker_3077, joker_3081, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 98)) ;
  GGS_AC_5F_job var_job_3131 = GGS_C_5F_machineCheck::init_21__21_ (var_machineIndex_3055, GGS_bool (false), inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_3131, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas4", 94)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 95)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas4", 109)) ;
  GGS_lstring var_machineName_31__3424 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 110)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 111)) ;
  GGS_lstring var_machineName_32__3465 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 112)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 113)) ;
  GGS_uint var_machineIndex_31__3585 ;
  GGS_uint joker_3600 ; // Joker input parameter
  GGS_uint joker_3604 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3608 ; // Joker input parameter
  GGS__5B_string_5D_ joker_3612 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_31__3424, var_machineIndex_31__3585, joker_3600, joker_3604, joker_3608, joker_3612, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 115)) ;
  GGS_uint var_machineIndex_32__3716 ;
  GGS_uint joker_3731 ; // Joker input parameter
  GGS_uint joker_3735 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3739 ; // Joker input parameter
  GGS__5B_string_5D_ joker_3743 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_32__3465, var_machineIndex_32__3716, joker_3731, joker_3735, joker_3739, joker_3743, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 117)) ;
  GGS_AC_5F_job var_job_3793 = GGS_C_5F_machineCheckIdentical::init_21__21_ (var_machineIndex_31__3585, var_machineIndex_32__3716, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_3793, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 120)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas4", 109)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 110)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 111)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 112)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas4", 128)) ;
  GGS_lstring var_machineName_4099 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 129)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 130)) ;
  GGS_uint var_machineIndex_4217 ;
  GGS_uint joker_4231 ; // Joker input parameter
  GGS_uint joker_4235 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_4239 ; // Joker input parameter
  GGS__5B_string_5D_ joker_4243 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_4099, var_machineIndex_4217, joker_4231, joker_4235, joker_4239, joker_4243, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 132)) ;
  GGS_AC_5F_job var_job_4293 = GGS_C_5F_machineCheck::init_21__21_ (var_machineIndex_4217, GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_4293, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas4", 128)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 129)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas4", 142)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 143)) ;
  GGS_AC_5F_job var_job_4554 = GGS_typeDisplayBDDstats::init (inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_job_4554, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas4", 142)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap var_variablesMap_4779 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_nameList_4818 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_machineName_4882 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 155)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 156)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_4961 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 159)) ;
    {
    var_variablesMap_4779.setter_insertKey (var_inputVarName_4961, var_variablesMap_4779.getter_count (SOURCE_FILE ("sara_parser.galgas4", 160)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 160)) ;
    }
    var_nameList_4818.plusPlusAssignOperation (var_inputVarName_4961.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 161)) ;
    if (select_sara_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 163)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_5110 = var_variablesMap_4779.getter_count (SOURCE_FILE ("sara_parser.galgas4", 165)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 166)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 168)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_outputVarName_5244 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 172)) ;
      {
      var_variablesMap_4779.setter_insertKey (var_outputVarName_5244, var_variablesMap_4779.getter_count (SOURCE_FILE ("sara_parser.galgas4", 173)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 173)) ;
      }
      var_nameList_4818.plusPlusAssignOperation (var_outputVarName_5244.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 174)) ;
      if (select_sara_5F_parser_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 176)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 179)) ;
  GGS_uint var_inputAndInternalVariablesCount_5418 = var_variablesMap_4779.getter_count (SOURCE_FILE ("sara_parser.galgas4", 180)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 182)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_outputVarName_5537 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 184)) ;
    {
    var_variablesMap_4779.setter_insertKey (var_outputVarName_5537, var_variablesMap_4779.getter_count (SOURCE_FILE ("sara_parser.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 185)) ;
    }
    var_nameList_4818.plusPlusAssignOperation (var_outputVarName_5537.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 186)) ;
    if (select_sara_5F_parser_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 188)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 190)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 191)) ;
  GGS_AC_5F_machineDefinition var_definition_5782 ;
  nt_definition_5F_expression_ (ioArgument_ioSemanticContext, var_variablesMap_4779, var_definition_5782, inCompiler) ;
  GGS_uint var_machineIndex_5844 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas4", 195)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_4882, var_machineIndex_5844, var_inputVariablesCount_5110, var_inputAndInternalVariablesCount_5418, var_variablesMap_4779, var_nameList_4818, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 196)) ;
  }
  GGS_AC_5F_job var_machine_6117 = GGS_C_5F_machineComponent::init_21__21__21__21__21__21__21_ (var_machineName_4882, var_machineIndex_5844, var_inputVariablesCount_5110, var_inputAndInternalVariablesCount_5418, var_variablesMap_4779, var_nameList_4818, var_definition_5782, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_machine_6117, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 206)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 155)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 156)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 159)) ;
    if (select_sara_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 163)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 166)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 168)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 172)) ;
      if (select_sara_5F_parser_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 176)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 179)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 182)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 184)) ;
    if (select_sara_5F_parser_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 188)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 190)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 191)) ;
  nt_definition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap var_variablesMap_6470 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_nameList_6509 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas4", 217)) ;
  GGS_lstring var_machineName_6589 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 218)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 219)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_6668 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 222)) ;
    {
    var_variablesMap_6470.setter_insertKey (var_inputVarName_6668, var_variablesMap_6470.getter_count (SOURCE_FILE ("sara_parser.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 223)) ;
    }
    var_nameList_6509.plusPlusAssignOperation (var_inputVarName_6668.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 224)) ;
    if (select_sara_5F_parser_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 226)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_6817 = var_variablesMap_6470.getter_count (SOURCE_FILE ("sara_parser.galgas4", 228)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 229)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 231)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_outputVarName_6951 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 235)) ;
      {
      var_variablesMap_6470.setter_insertKey (var_outputVarName_6951, var_variablesMap_6470.getter_count (SOURCE_FILE ("sara_parser.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 236)) ;
      }
      var_nameList_6509.plusPlusAssignOperation (var_outputVarName_6951.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 237)) ;
      if (select_sara_5F_parser_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 239)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 242)) ;
  GGS_uint var_inputAndInternalVariablesCount_7125 = var_variablesMap_6470.getter_count (SOURCE_FILE ("sara_parser.galgas4", 243)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 245)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_outputVarName_7245 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 247)) ;
    {
    var_variablesMap_6470.setter_insertKey (var_outputVarName_7245, var_variablesMap_6470.getter_count (SOURCE_FILE ("sara_parser.galgas4", 248)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 248)) ;
    }
    var_nameList_6509.plusPlusAssignOperation (var_outputVarName_7245.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 249)) ;
    if (select_sara_5F_parser_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 251)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 253)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 254)) ;
  GGS_M_5F_modesMap var_modeMap_7504 ;
  GGS_ListForModes var_inclusionList_7522 ;
  nt_modalcompadd_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_6470, var_modeMap_7504, var_inclusionList_7522, inCompiler) ;
  GGS_uint var_machineIndex_7587 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas4", 262)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_6589, var_machineIndex_7587, var_inputVariablesCount_6817, var_inputAndInternalVariablesCount_7125, var_variablesMap_6470, var_nameList_6509, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 263)) ;
  }
  GGS_AC_5F_job var_machine_7833 = GGS_C_5F_machineDefinedByAdditiveModalComp::init_21__21__21__21__21__21__21_ (var_machineName_6589, var_machineIndex_7587, var_inputVariablesCount_6817, var_inputAndInternalVariablesCount_7125, var_variablesMap_6470, var_modeMap_7504, var_inclusionList_7522, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_machine_7833, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 273)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas4", 217)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 218)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 219)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 222)) ;
    if (select_sara_5F_parser_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 226)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 229)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 231)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 235)) ;
      if (select_sara_5F_parser_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 239)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 242)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 245)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 247)) ;
    if (select_sara_5F_parser_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 251)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 253)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 254)) ;
  nt_modalcompadd_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap var_variablesMap_8226 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_nameList_8265 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas4", 284)) ;
  GGS_lstring var_machineName_8345 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 285)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_8424 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 289)) ;
    {
    var_variablesMap_8226.setter_insertKey (var_inputVarName_8424, var_variablesMap_8226.getter_count (SOURCE_FILE ("sara_parser.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 290)) ;
    }
    var_nameList_8265.plusPlusAssignOperation (var_inputVarName_8424.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 291)) ;
    if (select_sara_5F_parser_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 293)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_8573 = var_variablesMap_8226.getter_count (SOURCE_FILE ("sara_parser.galgas4", 295)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 296)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 298)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_outputVarName_8707 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 302)) ;
      {
      var_variablesMap_8226.setter_insertKey (var_outputVarName_8707, var_variablesMap_8226.getter_count (SOURCE_FILE ("sara_parser.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 303)) ;
      }
      var_nameList_8265.plusPlusAssignOperation (var_outputVarName_8707.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 304)) ;
      if (select_sara_5F_parser_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 306)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 309)) ;
  GGS_uint var_inputAndInternalVariablesCount_8881 = var_variablesMap_8226.getter_count (SOURCE_FILE ("sara_parser.galgas4", 310)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 312)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_outputVarName_9000 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 314)) ;
    {
    var_variablesMap_8226.setter_insertKey (var_outputVarName_9000, var_variablesMap_8226.getter_count (SOURCE_FILE ("sara_parser.galgas4", 315)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 315)) ;
    }
    var_nameList_8265.plusPlusAssignOperation (var_outputVarName_9000.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas4", 316)) ;
    if (select_sara_5F_parser_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 318)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 320)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 321)) ;
  GGS_M_5F_modesMap var_modeMap_9259 ;
  GGS_ListForModes var_exclusionList_9277 ;
  nt_modalcompsub_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_8226, var_modeMap_9259, var_exclusionList_9277, inCompiler) ;
  GGS_uint var_machineIndex_9342 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas4", 329)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_8345, var_machineIndex_9342, var_inputVariablesCount_8573, var_inputAndInternalVariablesCount_8881, var_variablesMap_8226, var_nameList_8265, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 330)) ;
  }
  GGS_AC_5F_job var_machine_9588 = GGS_C_5F_machineDefinedBySubstractiveModalComp::init_21__21__21__21__21__21__21_ (var_machineName_8345, var_machineIndex_9342, var_inputVariablesCount_8573, var_inputAndInternalVariablesCount_8881, var_variablesMap_8226, var_modeMap_9259, var_exclusionList_9277, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_machine_9588, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 340)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 341)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas4", 284)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 285)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 289)) ;
    if (select_sara_5F_parser_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 293)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 296)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 298)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 302)) ;
      if (select_sara_5F_parser_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 306)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 309)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 312)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 314)) ;
    if (select_sara_5F_parser_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 318)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 320)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 321)) ;
  nt_modalcompsub_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 341)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas4", 345)) ;
  GGS_M_5F_variablesMap var_variablesMap_9994 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_machineName_10067 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 348)) ;
  GGS_uint var_machineIndex_10179 ;
  GGS_uint var_inputVariablesCountFromDefinition_10198 ;
  GGS_uint var_inputAndInternalVariablesCountFromDefinition_10238 ;
  GGS_M_5F_variablesMap var_variablesMapFromDefinition_10289 ;
  GGS__5B_string_5D_ joker_10317 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_10067, var_machineIndex_10179, var_inputVariablesCountFromDefinition_10198, var_inputAndInternalVariablesCountFromDefinition_10238, var_variablesMapFromDefinition_10289, joker_10317, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 350)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 352)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_10387 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 354)) ;
    {
    var_variablesMap_9994.setter_insertKey (var_inputVarName_10387, var_variablesMap_9994.getter_count (SOURCE_FILE ("sara_parser.galgas4", 355)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 355)) ;
    }
    if (select_sara_5F_parser_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 357)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_10499 = var_variablesMap_9994.getter_count (SOURCE_FILE ("sara_parser.galgas4", 359)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 360)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCountFromDefinition_10198.objectCompare (var_inputVariablesCount_10499)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 363)), GGS_string ("This declaration names ").add_operation (var_inputVariablesCount_10499.getter_string (SOURCE_FILE ("sara_parser.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 363)).add_operation (GGS_string (" input variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 363)).add_operation (var_inputVariablesCountFromDefinition_10198.getter_string (SOURCE_FILE ("sara_parser.galgas4", 364)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 364)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 364)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas4", 363)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 367)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_outputVarName_10962 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 371)) ;
      {
      var_variablesMap_9994.setter_insertKey (var_outputVarName_10962, var_variablesMap_9994.getter_count (SOURCE_FILE ("sara_parser.galgas4", 372)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 372)) ;
      }
      if (select_sara_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 374)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 377)) ;
  GGS_uint var_inputAndInternalVariablesCount_11145 = var_variablesMap_9994.getter_count (SOURCE_FILE ("sara_parser.galgas4", 379)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCountFromDefinition_10238.objectCompare (var_inputAndInternalVariablesCount_11145)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 381)), GGS_string ("This declaration names ").add_operation (var_inputAndInternalVariablesCount_11145.getter_string (SOURCE_FILE ("sara_parser.galgas4", 381)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 381)).add_operation (GGS_string (" input and internal variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 381)).add_operation (var_inputAndInternalVariablesCountFromDefinition_10238.getter_string (SOURCE_FILE ("sara_parser.galgas4", 382)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 382)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 382)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas4", 381)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 385)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GGS_lstring var_outputVarName_11617 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 387)) ;
    {
    var_variablesMap_9994.setter_insertKey (var_outputVarName_11617, var_variablesMap_9994.getter_count (SOURCE_FILE ("sara_parser.galgas4", 388)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 388)) ;
    }
    if (select_sara_5F_parser_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 390)) ;
    }else{
      repeatFlag_6 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 392)) ;
  GGS_uint var_outputVariablesCount_11786 = var_variablesMap_9994.getter_count (SOURCE_FILE ("sara_parser.galgas4", 394)) ;
  GGS_uint var_outputVariablesCountFromDefinition_11840 = var_variablesMapFromDefinition_10289.getter_count (SOURCE_FILE ("sara_parser.galgas4", 395)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_outputVariablesCountFromDefinition_11840.objectCompare (var_outputVariablesCount_11786)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 397)), GGS_string ("This declaration names ").add_operation (var_outputVariablesCount_11786.getter_string (SOURCE_FILE ("sara_parser.galgas4", 397)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 397)).add_operation (GGS_string (" variables, but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 397)).add_operation (var_outputVariablesCountFromDefinition_11840.getter_string (SOURCE_FILE ("sara_parser.galgas4", 398)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 398)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 398)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas4", 397)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 400)) ;
  GGS_L_5F_scenarioList var_scenarioList_12193 = GGS_L_5F_scenarioList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GGS_lstring var_scenarioTitle_12263 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas4", 403)) ;
    GGS_L_5F_inputScenario var_inputScenario_12286 = GGS_L_5F_inputScenario::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_10 = true ;
    while (repeatFlag_10) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 406)) ;
      GGS_L_5F_inputConfigurationForScenario var_inputConfigurationForScenario_12352 = GGS_L_5F_inputConfigurationForScenario::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GGS_luint var_v_12465 = inCompiler->synthetizedAttribute_ulongValue () ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas4", 409)) ;
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = GGS_bool (ComparisonKind::greaterThan, var_v_12465.readProperty_uint ().objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (var_v_12465.readProperty_location (), GGS_string ("this value is not a  binary digit"), fixItArray13  COMMA_SOURCE_FILE ("sara_parser.galgas4", 411)) ;
          }
        }
        var_inputConfigurationForScenario_12352.plusPlusAssignOperation (GGS_L_5F_inputConfigurationForScenario_2E_element::init_21_ (var_v_12465, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 413)) ;
        if (select_sara_5F_parser_19 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 415)) ;
        }else{
          repeatFlag_11 = false ;
        }
      }
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_10499.objectCompare (var_inputConfigurationForScenario_12352.getter_count (SOURCE_FILE ("sara_parser.galgas4", 417)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 418)), GGS_string ("this input configuration names ").add_operation (var_inputConfigurationForScenario_12352.getter_count (SOURCE_FILE ("sara_parser.galgas4", 418)).getter_string (SOURCE_FILE ("sara_parser.galgas4", 418)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 418)).add_operation (GGS_string (" input variable(s), instead of "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 418)).add_operation (var_inputVariablesCount_10499.getter_string (SOURCE_FILE ("sara_parser.galgas4", 418)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 418)), fixItArray15  COMMA_SOURCE_FILE ("sara_parser.galgas4", 418)) ;
        }
      }
      var_inputScenario_12286.plusPlusAssignOperation (GGS_L_5F_inputScenario_2E_element::init_21_ (var_inputConfigurationForScenario_12352, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 420)) ;
      if (select_sara_5F_parser_18 (inCompiler) == 2) {
      }else{
        repeatFlag_10 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 423)) ;
    var_scenarioList_12193.plusPlusAssignOperation (GGS_L_5F_scenarioList_2E_element::init_21__21_ (var_scenarioTitle_12263, var_inputScenario_12286, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 424)) ;
    if (select_sara_5F_parser_17 (inCompiler) == 2) {
    }else{
      repeatFlag_9 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 427)) ;
  GGS_AC_5F_job var_machine_13102 = GGS_C_5F_scenarioComponent::init_21__21__21__21__21_ (var_machineIndex_10179, var_inputVariablesCount_10499, var_inputAndInternalVariablesCount_11145, var_variablesMap_9994, var_scenarioList_12193, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.plusPlusAssignOperation (GGS_L_5F_jobList_2E_element::init_21_ (var_machine_13102, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 430)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas4", 345)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 348)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 352)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 354)) ;
    if (select_sara_5F_parser_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 357)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 360)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 367)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 371)) ;
      if (select_sara_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 374)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 377)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 385)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 387)) ;
    if (select_sara_5F_parser_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 390)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 392)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 400)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas4", 403)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 406)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas4", 409)) ;
        if (select_sara_5F_parser_19 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 415)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      if (select_sara_5F_parser_18 (inCompiler) == 2) {
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 423)) ;
    if (select_sara_5F_parser_17 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 427)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i13_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                                GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                                Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 442)) ;
      GGS_AC_5F_boolExpression var_rightExpression_13657 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_13657, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_orExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_13657, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 446)) ;
      GGS_AC_5F_boolExpression var_rightExpression_13823 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_13823, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_xorExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_13823, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 450)) ;
      GGS_AC_5F_boolExpression var_rightExpression_13991 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_13991, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_impliesExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_13991, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 454)) ;
      GGS_AC_5F_boolExpression var_rightExpression_14162 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_14162, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_equalExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_14162, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_and_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 442)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 446)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 450)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 454)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i14_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                               GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                               GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                               Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 469)) ;
      GGS_AC_5F_boolExpression var_rightExpression_14623 ;
      nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_14623, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_andExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_14623, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 469)) ;
      nt_io_5F_primary_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 481)) ;
  nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 483)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 481)) ;
  nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 483)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_ (const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_inputVarName_15251 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 492)) ;
  GGS_uint var_inputVarIndex_15305 ;
  ioArgument_ioVarMap.method_searchKey (var_inputVarName_15251, var_inputVarIndex_15305, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 493)) ;
  outArgument_outExpression = GGS_C_5F_VariableExpression::init_21_ (var_inputVarIndex_15305, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 492)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 503)) ;
  GGS_AC_5F_boolExpression var_expression_15649 ;
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_expression_15649, inCompiler) ;
  outArgument_outExpression = GGS_C_5F_notExpression::init_21_ (var_expression_15649, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 503)) ;
  nt_io_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_ (const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & /* ioArgument__5F_ioVarMap */,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas4", 514)) ;
  outArgument_outExpression = GGS_C_5F_falseExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas4", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_ (const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & /* ioArgument__5F_ioVarMap */,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas4", 524)) ;
  outArgument_outExpression = GGS_C_5F_trueExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas4", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_machineIdentifier_16476 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 534)) ;
  GGS_uint var_indexOfImportedMachine_16562 ;
  GGS_uint var_machineInputVariableCount_16591 ;
  GGS_uint var_machineInputAndInternalVariableCount_16623 ;
  GGS_M_5F_variablesMap var_machineVariablesMap_16666 ;
  GGS__5B_string_5D_ joker_16687 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_16476, var_indexOfImportedMachine_16562, var_machineInputVariableCount_16591, var_machineInputAndInternalVariableCount_16623, var_machineVariablesMap_16666, joker_16687, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 535)) ;
  GGS_L_5F_translationVector var_translationVector_16697 = GGS_L_5F_translationVector::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 538)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVar_16806 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 540)) ;
    GGS_uint var_inputVarIndex_16855 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_16806, var_inputVarIndex_16855, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 541)) ;
    var_translationVector_16697.plusPlusAssignOperation (GGS_L_5F_translationVector_2E_element::init_21_ (var_inputVarIndex_16855, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 542)) ;
    if (select_sara_5F_parser_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 544)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 546)) ;
  GGS_uint var_inputVariablesCount_16953 = var_translationVector_16697.getter_count (SOURCE_FILE ("sara_parser.galgas4", 547)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_16953.objectCompare (var_machineInputVariableCount_16591)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 549)), GGS_string ("The '$").add_operation (var_machineIdentifier_16476.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 549)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 549)).add_operation (var_machineInputVariableCount_16591.getter_string (SOURCE_FILE ("sara_parser.galgas4", 549)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 549)).add_operation (GGS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 549)).add_operation (var_inputVariablesCount_16953.getter_string (SOURCE_FILE ("sara_parser.galgas4", 550)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 550)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 550)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas4", 549)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 553)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_internalVar_17373 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 557)) ;
      GGS_uint var_internalVarIndex_17430 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_17373, var_internalVarIndex_17430, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 558)) ;
      var_translationVector_16697.plusPlusAssignOperation (GGS_L_5F_translationVector_2E_element::init_21_ (var_internalVarIndex_17430, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 559)) ;
      if (select_sara_5F_parser_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 561)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 564)) ;
  GGS_uint var_inputAndInternalVariablesCount_17549 = var_translationVector_16697.getter_count (SOURCE_FILE ("sara_parser.galgas4", 565)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCount_17549.objectCompare (var_machineInputAndInternalVariableCount_16623)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 567)), GGS_string ("The '$").add_operation (var_machineIdentifier_16476.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 567)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 567)).add_operation (var_machineInputAndInternalVariableCount_16623.getter_string (SOURCE_FILE ("sara_parser.galgas4", 567)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 567)).add_operation (GGS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 567)).add_operation (var_inputAndInternalVariablesCount_17549.getter_string (SOURCE_FILE ("sara_parser.galgas4", 568)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 568)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 568)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas4", 567)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 571)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GGS_lstring var_outputVar_18037 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 573)) ;
    GGS_uint var_outputVarIndex_18088 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_18037, var_outputVarIndex_18088, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 574)) ;
    var_translationVector_16697.plusPlusAssignOperation (GGS_L_5F_translationVector_2E_element::init_21_ (var_outputVarIndex_18088, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 575)) ;
    if (select_sara_5F_parser_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 577)) ;
    }else{
      repeatFlag_6 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 579)) ;
  GGS_uint var_allVariablesCount_18188 = var_translationVector_16697.getter_count (SOURCE_FILE ("sara_parser.galgas4", 580)) ;
  GGS_uint var_machineAllVariablesCount_18244 = var_machineVariablesMap_16666.getter_count (SOURCE_FILE ("sara_parser.galgas4", 581)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_allVariablesCount_18188.objectCompare (var_machineAllVariablesCount_18244)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 583)), GGS_string ("The '$").add_operation (var_machineIdentifier_16476.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 583)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 583)).add_operation (var_machineAllVariablesCount_18244.getter_string (SOURCE_FILE ("sara_parser.galgas4", 583)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 583)).add_operation (GGS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 583)).add_operation (var_allVariablesCount_18188.getter_string (SOURCE_FILE ("sara_parser.galgas4", 584)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 584)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 584)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas4", 583)) ;
    }
  }
  outArgument_outExpression = GGS_C_5F_importBoolMachine::init_21__21__21_ (var_indexOfImportedMachine_16562, var_machineIdentifier_16476.readProperty_location (), var_translationVector_16697, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 534)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 538)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 540)) ;
    if (select_sara_5F_parser_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 544)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 546)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 553)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 557)) ;
      if (select_sara_5F_parser_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 561)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 564)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 571)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 573)) ;
    if (select_sara_5F_parser_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 577)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 579)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i21_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                GGS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 603)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_19221 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_19324 ;
      nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_19324, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_orComposition::init_21__21_ (var_leftOperand_19221, var_rightOperand_19324, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i21_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 603)) ;
      nt_definition_5F_expression_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i22_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                        GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                        GGS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                        Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 619)) ;
      GGS_location var_errorLocation_19776 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 620)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_19837 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_19942 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_19942, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_strongModalComposition::init_21__21__21_ (var_leftOperand_19837, var_errorLocation_19776, var_rightOperand_19942, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 625)) ;
      GGS_location var_errorLocation_20081 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 626)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_20142 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_20247 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_20247, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_weakModalComposition::init_21__21__21_ (var_leftOperand_20142, var_errorLocation_20081, var_rightOperand_20247, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 631)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_20396 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_20501 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_20501, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_parallelComposition::init_21__21_ (var_leftOperand_20396, var_rightOperand_20501, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 619)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 625)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 631)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                  GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GGS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GGS_ListForModes & outArgument_outInclusionList,
                                                                                  Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outInclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GGS_M_5F_modesMap::init (inCompiler COMMA_HERE) ;
  outArgument_outInclusionList = GGS_ListForModes::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_modeName_20949 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 648)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 649)) ;
    GGS_AC_5F_machineDefinition var_def_21036 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_21036, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_20949, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas4", 651)), var_def_21036, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 651)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 652)) ;
    if (select_sara_5F_parser_28 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas4", 657)) ;
      GGS_lstring var_sourceModeName_21178 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 658)) ;
      GGS_uint var_sourceModeIndex_21241 ;
      GGS_AC_5F_machineDefinition joker_21258 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_21178, var_sourceModeIndex_21241, joker_21258, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 659)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas4", 660)) ;
      GGS_lstring var_targetModeName_21294 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 661)) ;
      GGS_uint var_targetModeIndex_21357 ;
      GGS_AC_5F_machineDefinition joker_21374 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_21294, var_targetModeIndex_21357, joker_21374, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 662)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 663)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_sourceModeIndex_21241.objectCompare (var_targetModeIndex_21357)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_21294.readProperty_location (), GGS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas4", 665)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        outArgument_outInclusionList.plusPlusAssignOperation (GGS_ListForModes_2E_element::init_21__21_ (var_sourceModeIndex_21241, var_targetModeIndex_21357, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 667)) ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 648)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 649)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 652)) ;
    if (select_sara_5F_parser_28 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas4", 657)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 658)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas4", 660)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 661)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 663)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                  GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GGS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GGS_ListForModes & outArgument_outExclusionList,
                                                                                  Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outExclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GGS_M_5F_modesMap::init (inCompiler COMMA_HERE) ;
  outArgument_outExclusionList = GGS_ListForModes::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_modeName_22029 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 682)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 683)) ;
    GGS_AC_5F_machineDefinition var_def_22116 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_22116, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_22029, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas4", 685)), var_def_22116, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 685)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 686)) ;
    if (select_sara_5F_parser_30 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas4", 691)) ;
      GGS_lstring var_sourceModeName_22258 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 692)) ;
      GGS_uint var_sourceModeIndex_22321 ;
      GGS_AC_5F_machineDefinition joker_22338 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_22258, var_sourceModeIndex_22321, joker_22338, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 693)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas4", 694)) ;
      GGS_lstring var_targetModeName_22374 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 695)) ;
      GGS_uint var_targetModeIndex_22437 ;
      GGS_AC_5F_machineDefinition joker_22454 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_22374, var_targetModeIndex_22437, joker_22454, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 696)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 697)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_sourceModeIndex_22321.objectCompare (var_targetModeIndex_22437)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_22374.readProperty_location (), GGS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas4", 699)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        outArgument_outExclusionList.plusPlusAssignOperation (GGS_ListForModes_2E_element::init_21__21_ (var_sourceModeIndex_22321, var_targetModeIndex_22437, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 701)) ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 682)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 683)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 686)) ;
    if (select_sara_5F_parser_30 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas4", 691)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 692)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas4", 694)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 695)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 697)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                          GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                          GGS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                          Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 715)) ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 717)) ;
  } break ;
  case 3: {
    GGS_M_5F_variablesMap var_extendedVariablesMap_23209 = ioArgument_variablesMap ;
    GGS_uint var_previousVariableCount_23259 = var_extendedVariablesMap_23209.getter_count (SOURCE_FILE ("sara_parser.galgas4", 720)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 721)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_variableName_23354 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 723)) ;
      {
      var_extendedVariablesMap_23209.setter_insertKey (var_variableName_23354, var_extendedVariablesMap_23209.getter_count (SOURCE_FILE ("sara_parser.galgas4", 724)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 724)) ;
      }
      if (select_sara_5F_parser_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 726)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    GGS_uint var_actualVariableCount_23492 = var_extendedVariablesMap_23209.getter_count (SOURCE_FILE ("sara_parser.galgas4", 728)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 729)) ;
    GGS_AC_5F_machineDefinition var_def_23626 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_23209, var_def_23626, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 731)) ;
    outArgument_outDefinition = GGS_C_5F_existsDefinition::init_21__21__21_ (var_previousVariableCount_23259, var_actualVariableCount_23492, var_def_23626, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_M_5F_variablesMap var_extendedVariablesMap_23759 = ioArgument_variablesMap ;
    GGS_uint var_previousVariableCount_23809 = var_extendedVariablesMap_23759.getter_count (SOURCE_FILE ("sara_parser.galgas4", 735)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 736)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_variableName_23904 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 738)) ;
      {
      var_extendedVariablesMap_23759.setter_insertKey (var_variableName_23904, var_extendedVariablesMap_23759.getter_count (SOURCE_FILE ("sara_parser.galgas4", 739)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 739)) ;
      }
      if (select_sara_5F_parser_34 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 741)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_uint var_actualVariableCount_24042 = var_extendedVariablesMap_23759.getter_count (SOURCE_FILE ("sara_parser.galgas4", 743)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 744)) ;
    GGS_AC_5F_machineDefinition var_def_24176 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_23759, var_def_24176, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 746)) ;
    outArgument_outDefinition = GGS_C_5F_forallDefinition::init_21__21__21_ (var_previousVariableCount_23809, var_actualVariableCount_24042, var_def_24176, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas4", 749)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 750)) ;
    GGS_AC_5F_boolExpression var_def_24370 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24370, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_boolToSeqExpression::init_21_ (var_def_24370, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 753)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 755)) ;
    GGS_AC_5F_machineDefinition var_def_24523 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24523, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_fullSaturationOperation::init_21_ (var_def_24523, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 759)) ;
    GGS_AC_5F_machineDefinition var_def_24672 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24672, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_complementationOperation::init_21_ (var_def_24672, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas4", 763)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 764)) ;
    GGS_AC_5F_machineDefinition var_def_24829 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24829, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_suppressInitialStatesOperation::init_21_ (var_def_24829, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas4", 769)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 770)) ;
    GGS_AC_5F_machineDefinition var_def_24999 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24999, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_suppressTerminalStatesOperation::init_21_ (var_def_24999, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 773)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas4", 775)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 776)) ;
    GGS_M_5F_modesMap var_modeMap_25195 ;
    GGS_ListForModes var_inclusionList_25215 ;
    nt_modalcompadd_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_25195, var_inclusionList_25215, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 782)) ;
    outArgument_outDefinition = GGS_C_5F_additiveModalCompositionComponent::init_21__21_ (var_modeMap_25195, var_inclusionList_25215, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas4", 785)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 786)) ;
    GGS_M_5F_modesMap var_modeMap_25442 ;
    GGS_ListForModes var_exclusionList_25462 ;
    nt_modalcompsub_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_25442, var_exclusionList_25462, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 792)) ;
    outArgument_outDefinition = GGS_C_5F_substractiveModalCompositionComponent::init_21__21_ (var_modeMap_25442, var_exclusionList_25462, inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas4", 795)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 796)) ;
    GGS_AC_5F_boolExpression var_sourceExpression_25663 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_sourceExpression_25663, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas4", 798)) ;
    GGS_AC_5F_boolExpression var_targetExpression_25756 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_targetExpression_25756, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 800)) ;
    outArgument_outDefinition = GGS_C_5F_trans::init_21__21_ (var_sourceExpression_25663, var_targetExpression_25756, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing (Lexique_sara_5F_scanner * inCompiler) {
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 715)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 717)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 721)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 723)) ;
      if (select_sara_5F_parser_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 726)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 729)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 731)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 736)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 738)) ;
      if (select_sara_5F_parser_34 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 741)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 744)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 746)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas4", 749)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 750)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 753)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 755)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 759)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas4", 763)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 764)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas4", 769)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 770)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 773)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas4", 775)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 776)) ;
    nt_modalcompadd_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 782)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas4", 785)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 786)) ;
    nt_modalcompsub_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 792)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas4", 795)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 796)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas4", 798)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 800)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                          GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                                          GGS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                          Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GGS_lstring var_machineIdentifier_26111 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 811)) ;
  GGS_uint var_indexOfImportedMachine_26197 ;
  GGS_uint var_machineInputVariableCount_26226 ;
  GGS_uint var_machineInputAndInternalVariableCount_26258 ;
  GGS_M_5F_variablesMap var_machineVariablesMap_26301 ;
  GGS__5B_string_5D_ joker_26322 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_26111, var_indexOfImportedMachine_26197, var_machineInputVariableCount_26226, var_machineInputAndInternalVariableCount_26258, var_machineVariablesMap_26301, joker_26322, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 812)) ;
  GGS_L_5F_translationVector var_translationVector_26332 = GGS_L_5F_translationVector::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 815)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVar_26441 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 817)) ;
    GGS_uint var_inputVarIndex_26490 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_26441, var_inputVarIndex_26490, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 818)) ;
    var_translationVector_26332.plusPlusAssignOperation (GGS_L_5F_translationVector_2E_element::init_21_ (var_inputVarIndex_26490, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 819)) ;
    if (select_sara_5F_parser_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 821)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 823)) ;
  GGS_uint var_inputVariablesCount_26588 = var_translationVector_26332.getter_count (SOURCE_FILE ("sara_parser.galgas4", 824)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_26588.objectCompare (var_machineInputVariableCount_26226)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 826)), GGS_string ("The '$").add_operation (var_machineIdentifier_26111.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 826)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 826)).add_operation (var_machineInputVariableCount_26226.getter_string (SOURCE_FILE ("sara_parser.galgas4", 826)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 826)).add_operation (GGS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 826)).add_operation (var_inputVariablesCount_26588.getter_string (SOURCE_FILE ("sara_parser.galgas4", 827)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 827)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 827)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas4", 826)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 830)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_internalVar_27015 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 834)) ;
      GGS_uint var_internalVarIndex_27072 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_27015, var_internalVarIndex_27072, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 835)) ;
      var_translationVector_26332.plusPlusAssignOperation (GGS_L_5F_translationVector_2E_element::init_21_ (var_internalVarIndex_27072, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 836)) ;
      if (select_sara_5F_parser_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 838)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 841)) ;
  GGS_uint var_inputAndInternalVariablesCount_27191 = var_translationVector_26332.getter_count (SOURCE_FILE ("sara_parser.galgas4", 842)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCount_27191.objectCompare (var_machineInputAndInternalVariableCount_26258)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 844)), GGS_string ("The '$").add_operation (var_machineIdentifier_26111.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 844)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 844)).add_operation (var_machineInputAndInternalVariableCount_26258.getter_string (SOURCE_FILE ("sara_parser.galgas4", 844)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 844)).add_operation (GGS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 844)).add_operation (var_inputAndInternalVariablesCount_27191.getter_string (SOURCE_FILE ("sara_parser.galgas4", 845)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 845)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 845)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas4", 844)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 848)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GGS_lstring var_outputVar_27679 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 850)) ;
    GGS_uint var_outputVarIndex_27730 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_27679, var_outputVarIndex_27730, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 851)) ;
    var_translationVector_26332.plusPlusAssignOperation (GGS_L_5F_translationVector_2E_element::init_21_ (var_outputVarIndex_27730, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 852)) ;
    if (select_sara_5F_parser_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 854)) ;
    }else{
      repeatFlag_6 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 856)) ;
  GGS_uint var_allVariablesCount_27830 = var_translationVector_26332.getter_count (SOURCE_FILE ("sara_parser.galgas4", 857)) ;
  GGS_uint var_machineAllVariablesCount_27886 = var_machineVariablesMap_26301.getter_count (SOURCE_FILE ("sara_parser.galgas4", 858)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_allVariablesCount_27830.objectCompare (var_machineAllVariablesCount_27886)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 860)), GGS_string ("The '$").add_operation (var_machineIdentifier_26111.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 860)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 860)).add_operation (var_machineAllVariablesCount_27886.getter_string (SOURCE_FILE ("sara_parser.galgas4", 860)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 860)).add_operation (GGS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 860)).add_operation (var_allVariablesCount_27830.getter_string (SOURCE_FILE ("sara_parser.galgas4", 861)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 861)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 861)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas4", 860)) ;
    }
  }
  outArgument_outDefinition = GGS_C_5F_importMachine::init_21__21_ (var_indexOfImportedMachine_26197, var_translationVector_26332, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas4", 811)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 815)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 817)) ;
    if (select_sara_5F_parser_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 821)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 823)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 830)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 834)) ;
      if (select_sara_5F_parser_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 838)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 841)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 848)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 850)) ;
    if (select_sara_5F_parser_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 854)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 856)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                             GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                             GGS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                             Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GGS_M_5F_stateMap var_statesMap_28684 = GGS_M_5F_stateMap::init (inCompiler COMMA_HERE) ;
  GGS_L_5F_stateDefinition var_stateDefinitionList_28716 = GGS_L_5F_stateDefinition::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas4", 876)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 877)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 879)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_stateName_28841 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 881)) ;
    {
    var_statesMap_28684.setter_insertKey (var_stateName_28841, var_statesMap_28684.getter_count (SOURCE_FILE ("sara_parser.galgas4", 882)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 882)) ;
    }
    if (select_sara_5F_parser_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 884)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 886)) ;
  GGS_L_5F_statesDefinitionList var_initialStatesDefinitionList_28962 = GGS_L_5F_statesDefinitionList::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas4", 889)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_initialState_29060 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 891)) ;
    GGS_uint var_initialStateIndex_29118 ;
    var_statesMap_28684.method_searchKey (var_initialState_29060, var_initialStateIndex_29118, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 892)) ;
    var_initialStatesDefinitionList_28962.plusPlusAssignOperation (GGS_L_5F_statesDefinitionList_2E_element::init_21__21_ (var_initialStateIndex_29118, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 893)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 893)) ;
    if (select_sara_5F_parser_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 895)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 897)) ;
  GGS_L_5F_statesDefinitionList var_terminalStatesDefinitionList_29266 = GGS_L_5F_statesDefinitionList::init (inCompiler COMMA_HERE) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas4", 902)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GGS_lstring var_terminalState_29384 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 904)) ;
      GGS_uint var_terminalStateIndex_29446 ;
      var_statesMap_28684.method_searchKey (var_terminalState_29384, var_terminalStateIndex_29446, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 905)) ;
      var_terminalStatesDefinitionList_29266.plusPlusAssignOperation (GGS_L_5F_statesDefinitionList_2E_element::init_21__21_ (var_terminalStateIndex_29446, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 906)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 906)) ;
      if (select_sara_5F_parser_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 908)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 910)) ;
  } break ;
  default:
    break ;
  }
  GGS_M_5F_stateMap var_stateDefinitionMap_29622 = GGS_M_5F_stateMap::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GGS_lstring var_stateName_29711 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 916)) ;
    GGS_uint var_stateIndex_29763 ;
    var_statesMap_28684.method_searchKey (var_stateName_29711, var_stateIndex_29763, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 917)) ;
    {
    var_stateDefinitionMap_29622.setter_defineState (var_stateName_29711, var_stateDefinitionMap_29622.getter_count (SOURCE_FILE ("sara_parser.galgas4", 918)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 918)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 919)) ;
    GGS_AC_5F_boolExpression var_stateExpression_29955 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_stateExpression_29955, inCompiler) ;
    GGS_location var_endOfStateExpression_29990 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 922)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 923)) ;
    GGS_L_5F_transitionDefinition var_transitionsList_30075 = GGS_L_5F_transitionDefinition::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      if (select_sara_5F_parser_44 (inCompiler) == 2) {
        GGS_AC_5F_boolExpression var_transitionInputExpression_30208 ;
        nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_transitionInputExpression_30208, inCompiler) ;
        GGS_location var_endOfExpression_30255 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 929)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas4", 930)) ;
        GGS_lstring var_targetStateName_30326 = inCompiler->synthetizedAttribute_identifierString () ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 931)) ;
        GGS_uint var_targetStateIndex_30392 ;
        var_statesMap_28684.method_searchKey (var_targetStateName_30326, var_targetStateIndex_30392, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 932)) ;
        var_transitionsList_30075.plusPlusAssignOperation (GGS_L_5F_transitionDefinition_2E_element::init_21__21__21_ (var_transitionInputExpression_30208, var_endOfExpression_30255, var_targetStateIndex_30392, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 933)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 934)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 936)) ;
    var_stateDefinitionList_28716.plusPlusAssignOperation (GGS_L_5F_stateDefinition_2E_element::init_21__21__21__21_ (var_stateIndex_29763, var_stateExpression_29955, var_endOfStateExpression_29990, var_transitionsList_30075, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas4", 937)) ;
    if (select_sara_5F_parser_43 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  UpEnumerator_M_5F_stateMap enumerator_30715 (var_statesMap_28684) ;
  while (enumerator_30715.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_stateDefinitionMap_29622.getter_contains (enumerator_30715.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("sara_parser.galgas4", 943)).operator_not (SOURCE_FILE ("sara_parser.galgas4", 943)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 944)), GGS_string ("'").add_operation (enumerator_30715.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 944)).add_operation (GGS_string ("' state is not described"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas4", 944)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas4", 944)) ;
      }
    }
    enumerator_30715.gotoNextObject () ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 948)) ;
  outArgument_outDefinition = GGS_C_5F_explicitAutomatonDefinition::init_21__21__21__21__21_ (var_statesMap_28684, var_initialStatesDefinitionList_28962, var_terminalStatesDefinitionList_29266, var_stateDefinitionList_28716, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas4", 949)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas4", 876)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 877)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas4", 879)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 881)) ;
    if (select_sara_5F_parser_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 884)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 886)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas4", 889)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 891)) ;
    if (select_sara_5F_parser_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 895)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 897)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas4", 902)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 904)) ;
      if (select_sara_5F_parser_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 908)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 910)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 916)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 919)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 923)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      if (select_sara_5F_parser_44 (inCompiler) == 2) {
        nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas4", 930)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas4", 931)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 934)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 936)) ;
    if (select_sara_5F_parser_43 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas4", 948)) ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_sara_grammar [] = {
// At index 0 : <start_symbol>, in file 'sara_parser.galgas', line 11
  TOP_DOWN_NONTERMINAL (1) // <component>
, TOP_DOWN_NONTERMINAL (11) // <select_sara_5F_parser_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 3 : <component>, in file 'sara_parser.galgas', line 25
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 8 : <component>, in file 'sara_parser.galgas', line 41
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 13 : <component>, in file 'sara_parser.galgas', line 57
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_first) // $first$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 19 : <component>, in file 'sara_parser.galgas', line 74
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_last) // $last$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 25 : <component>, in file 'sara_parser.galgas', line 91
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_check) // $check$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 29 : <component>, in file 'sara_parser.galgas', line 106
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_checkidentical) // $checkidentical$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 35 : <component>, in file 'sara_parser.galgas', line 125
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_checkbool) // $checkbool$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 39 : <component>, in file 'sara_parser.galgas', line 140
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_bdd) // $bdd$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 42 : <component>, in file 'sara_parser.galgas', line 150
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_sara_5F_parser_1>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (13) // <select_sara_5F_parser_2>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (15) // <select_sara_5F_parser_4>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 58 : <component>, in file 'sara_parser.galgas', line 212
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (16) // <select_sara_5F_parser_5>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (17) // <select_sara_5F_parser_6>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (19) // <select_sara_5F_parser_8>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, TOP_DOWN_NONTERMINAL (7) // <modalcompadd_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 75 : <component>, in file 'sara_parser.galgas', line 279
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (20) // <select_sara_5F_parser_9>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (21) // <select_sara_5F_parser_10>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (23) // <select_sara_5F_parser_12>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, TOP_DOWN_NONTERMINAL (8) // <modalcompsub_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 92 : <component>, in file 'sara_parser.galgas', line 344
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_scenario) // $scenario$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (24) // <select_sara_5F_parser_13>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (25) // <select_sara_5F_parser_14>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (27) // <select_sara_5F_parser_16>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_NONTERMINAL (29) // <select_sara_5F_parser_18>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (28) // <select_sara_5F_parser_17>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 115 : <io_bool_expression>, in file 'sara_parser.galgas', line 435
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 118 : <io_and_expression>, in file 'sara_parser.galgas', line 462
, TOP_DOWN_NONTERMINAL (4) // <io_primary>
, TOP_DOWN_NONTERMINAL (32) // <select_sara_5F_parser_21>
, TOP_DOWN_END_PRODUCTION ()
// At index 121 : <io_primary>, in file 'sara_parser.galgas', line 477
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 125 : <io_primary>, in file 'sara_parser.galgas', line 488
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_END_PRODUCTION ()
// At index 127 : <io_primary>, in file 'sara_parser.galgas', line 499
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7E_) // $~$
, TOP_DOWN_NONTERMINAL (4) // <io_primary>
, TOP_DOWN_END_PRODUCTION ()
// At index 130 : <io_primary>, in file 'sara_parser.galgas', line 510
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_false) // $false$
, TOP_DOWN_END_PRODUCTION ()
// At index 132 : <io_primary>, in file 'sara_parser.galgas', line 520
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_true) // $true$
, TOP_DOWN_END_PRODUCTION ()
// At index 134 : <io_primary>, in file 'sara_parser.galgas', line 530
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (33) // <select_sara_5F_parser_22>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (34) // <select_sara_5F_parser_23>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (36) // <select_sara_5F_parser_25>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 147 : <definition_expression>, in file 'sara_parser.galgas', line 596
, TOP_DOWN_NONTERMINAL (6) // <definition_expression_term>
, TOP_DOWN_NONTERMINAL (37) // <select_sara_5F_parser_26>
, TOP_DOWN_END_PRODUCTION ()
// At index 150 : <definition_expression_term>, in file 'sara_parser.galgas', line 612
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 153 : <modalcompadd_definition>, in file 'sara_parser.galgas', line 640
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (39) // <select_sara_5F_parser_28>
, TOP_DOWN_NONTERMINAL (40) // <select_sara_5F_parser_29>
, TOP_DOWN_END_PRODUCTION ()
// At index 160 : <modalcompsub_definition>, in file 'sara_parser.galgas', line 674
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (41) // <select_sara_5F_parser_30>
, TOP_DOWN_NONTERMINAL (42) // <select_sara_5F_parser_31>
, TOP_DOWN_END_PRODUCTION ()
// At index 167 : <definition_expression_factor>, in file 'sara_parser.galgas', line 708
, TOP_DOWN_NONTERMINAL (43) // <select_sara_5F_parser_32>
, TOP_DOWN_END_PRODUCTION ()
// At index 169 : <definition_expression_factor>, in file 'sara_parser.galgas', line 807
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (46) // <select_sara_5F_parser_35>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (47) // <select_sara_5F_parser_36>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (49) // <select_sara_5F_parser_38>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 182 : <explicit_automaton>, in file 'sara_parser.galgas', line 870
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_auto) // $auto$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (50) // <select_sara_5F_parser_39>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_first) // $first$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (51) // <select_sara_5F_parser_40>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (52) // <select_sara_5F_parser_41>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (55) // <select_sara_5F_parser_44>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_NONTERMINAL (54) // <select_sara_5F_parser_43>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 202 : <select_sara_5F_parser_0>, in file 'sara_parser.galgas', line 16
, TOP_DOWN_END_PRODUCTION ()
// At index 203 : <select_sara_5F_parser_0>, in file 'sara_parser.galgas', line 16
, TOP_DOWN_NONTERMINAL (1) // <component>
, TOP_DOWN_NONTERMINAL (11) // <select_sara_5F_parser_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 206 : <select_sara_5F_parser_1>, in file 'sara_parser.galgas', line 158
, TOP_DOWN_END_PRODUCTION ()
// At index 207 : <select_sara_5F_parser_1>, in file 'sara_parser.galgas', line 158
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_sara_5F_parser_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 211 : <select_sara_5F_parser_2>, in file 'sara_parser.galgas', line 169
, TOP_DOWN_END_PRODUCTION ()
// At index 212 : <select_sara_5F_parser_2>, in file 'sara_parser.galgas', line 169
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (14) // <select_sara_5F_parser_3>
, TOP_DOWN_END_PRODUCTION ()
// At index 215 : <select_sara_5F_parser_3>, in file 'sara_parser.galgas', line 171
, TOP_DOWN_END_PRODUCTION ()
// At index 216 : <select_sara_5F_parser_3>, in file 'sara_parser.galgas', line 171
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (14) // <select_sara_5F_parser_3>
, TOP_DOWN_END_PRODUCTION ()
// At index 220 : <select_sara_5F_parser_4>, in file 'sara_parser.galgas', line 183
, TOP_DOWN_END_PRODUCTION ()
// At index 221 : <select_sara_5F_parser_4>, in file 'sara_parser.galgas', line 183
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (15) // <select_sara_5F_parser_4>
, TOP_DOWN_END_PRODUCTION ()
// At index 225 : <select_sara_5F_parser_5>, in file 'sara_parser.galgas', line 221
, TOP_DOWN_END_PRODUCTION ()
// At index 226 : <select_sara_5F_parser_5>, in file 'sara_parser.galgas', line 221
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (16) // <select_sara_5F_parser_5>
, TOP_DOWN_END_PRODUCTION ()
// At index 230 : <select_sara_5F_parser_6>, in file 'sara_parser.galgas', line 232
, TOP_DOWN_END_PRODUCTION ()
// At index 231 : <select_sara_5F_parser_6>, in file 'sara_parser.galgas', line 232
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (18) // <select_sara_5F_parser_7>
, TOP_DOWN_END_PRODUCTION ()
// At index 234 : <select_sara_5F_parser_7>, in file 'sara_parser.galgas', line 234
, TOP_DOWN_END_PRODUCTION ()
// At index 235 : <select_sara_5F_parser_7>, in file 'sara_parser.galgas', line 234
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (18) // <select_sara_5F_parser_7>
, TOP_DOWN_END_PRODUCTION ()
// At index 239 : <select_sara_5F_parser_8>, in file 'sara_parser.galgas', line 246
, TOP_DOWN_END_PRODUCTION ()
// At index 240 : <select_sara_5F_parser_8>, in file 'sara_parser.galgas', line 246
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (19) // <select_sara_5F_parser_8>
, TOP_DOWN_END_PRODUCTION ()
// At index 244 : <select_sara_5F_parser_9>, in file 'sara_parser.galgas', line 288
, TOP_DOWN_END_PRODUCTION ()
// At index 245 : <select_sara_5F_parser_9>, in file 'sara_parser.galgas', line 288
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (20) // <select_sara_5F_parser_9>
, TOP_DOWN_END_PRODUCTION ()
// At index 249 : <select_sara_5F_parser_10>, in file 'sara_parser.galgas', line 299
, TOP_DOWN_END_PRODUCTION ()
// At index 250 : <select_sara_5F_parser_10>, in file 'sara_parser.galgas', line 299
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (22) // <select_sara_5F_parser_11>
, TOP_DOWN_END_PRODUCTION ()
// At index 253 : <select_sara_5F_parser_11>, in file 'sara_parser.galgas', line 301
, TOP_DOWN_END_PRODUCTION ()
// At index 254 : <select_sara_5F_parser_11>, in file 'sara_parser.galgas', line 301
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (22) // <select_sara_5F_parser_11>
, TOP_DOWN_END_PRODUCTION ()
// At index 258 : <select_sara_5F_parser_12>, in file 'sara_parser.galgas', line 313
, TOP_DOWN_END_PRODUCTION ()
// At index 259 : <select_sara_5F_parser_12>, in file 'sara_parser.galgas', line 313
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (23) // <select_sara_5F_parser_12>
, TOP_DOWN_END_PRODUCTION ()
// At index 263 : <select_sara_5F_parser_13>, in file 'sara_parser.galgas', line 353
, TOP_DOWN_END_PRODUCTION ()
// At index 264 : <select_sara_5F_parser_13>, in file 'sara_parser.galgas', line 353
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (24) // <select_sara_5F_parser_13>
, TOP_DOWN_END_PRODUCTION ()
// At index 268 : <select_sara_5F_parser_14>, in file 'sara_parser.galgas', line 368
, TOP_DOWN_END_PRODUCTION ()
// At index 269 : <select_sara_5F_parser_14>, in file 'sara_parser.galgas', line 368
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (26) // <select_sara_5F_parser_15>
, TOP_DOWN_END_PRODUCTION ()
// At index 272 : <select_sara_5F_parser_15>, in file 'sara_parser.galgas', line 370
, TOP_DOWN_END_PRODUCTION ()
// At index 273 : <select_sara_5F_parser_15>, in file 'sara_parser.galgas', line 370
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (26) // <select_sara_5F_parser_15>
, TOP_DOWN_END_PRODUCTION ()
// At index 277 : <select_sara_5F_parser_16>, in file 'sara_parser.galgas', line 386
, TOP_DOWN_END_PRODUCTION ()
// At index 278 : <select_sara_5F_parser_16>, in file 'sara_parser.galgas', line 386
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (27) // <select_sara_5F_parser_16>
, TOP_DOWN_END_PRODUCTION ()
// At index 282 : <select_sara_5F_parser_17>, in file 'sara_parser.galgas', line 402
, TOP_DOWN_END_PRODUCTION ()
// At index 283 : <select_sara_5F_parser_17>, in file 'sara_parser.galgas', line 402
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_NONTERMINAL (29) // <select_sara_5F_parser_18>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (28) // <select_sara_5F_parser_17>
, TOP_DOWN_END_PRODUCTION ()
// At index 291 : <select_sara_5F_parser_18>, in file 'sara_parser.galgas', line 405
, TOP_DOWN_END_PRODUCTION ()
// At index 292 : <select_sara_5F_parser_18>, in file 'sara_parser.galgas', line 405
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_NONTERMINAL (29) // <select_sara_5F_parser_18>
, TOP_DOWN_END_PRODUCTION ()
// At index 297 : <select_sara_5F_parser_19>, in file 'sara_parser.galgas', line 408
, TOP_DOWN_END_PRODUCTION ()
// At index 298 : <select_sara_5F_parser_19>, in file 'sara_parser.galgas', line 408
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_END_PRODUCTION ()
// At index 302 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
, TOP_DOWN_END_PRODUCTION ()
// At index 303 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7C_) // $|$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 307 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__5E_) // $^$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 311 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2D__3E_) // $->$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 315 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3D_) // $=$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 319 : <select_sara_5F_parser_21>, in file 'sara_parser.galgas', line 467
, TOP_DOWN_END_PRODUCTION ()
// At index 320 : <select_sara_5F_parser_21>, in file 'sara_parser.galgas', line 467
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__26_) // $&$
, TOP_DOWN_NONTERMINAL (4) // <io_primary>
, TOP_DOWN_NONTERMINAL (32) // <select_sara_5F_parser_21>
, TOP_DOWN_END_PRODUCTION ()
// At index 324 : <select_sara_5F_parser_22>, in file 'sara_parser.galgas', line 539
, TOP_DOWN_END_PRODUCTION ()
// At index 325 : <select_sara_5F_parser_22>, in file 'sara_parser.galgas', line 539
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (33) // <select_sara_5F_parser_22>
, TOP_DOWN_END_PRODUCTION ()
// At index 329 : <select_sara_5F_parser_23>, in file 'sara_parser.galgas', line 554
, TOP_DOWN_END_PRODUCTION ()
// At index 330 : <select_sara_5F_parser_23>, in file 'sara_parser.galgas', line 554
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (35) // <select_sara_5F_parser_24>
, TOP_DOWN_END_PRODUCTION ()
// At index 333 : <select_sara_5F_parser_24>, in file 'sara_parser.galgas', line 556
, TOP_DOWN_END_PRODUCTION ()
// At index 334 : <select_sara_5F_parser_24>, in file 'sara_parser.galgas', line 556
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (35) // <select_sara_5F_parser_24>
, TOP_DOWN_END_PRODUCTION ()
// At index 338 : <select_sara_5F_parser_25>, in file 'sara_parser.galgas', line 572
, TOP_DOWN_END_PRODUCTION ()
// At index 339 : <select_sara_5F_parser_25>, in file 'sara_parser.galgas', line 572
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (36) // <select_sara_5F_parser_25>
, TOP_DOWN_END_PRODUCTION ()
// At index 343 : <select_sara_5F_parser_26>, in file 'sara_parser.galgas', line 601
, TOP_DOWN_END_PRODUCTION ()
// At index 344 : <select_sara_5F_parser_26>, in file 'sara_parser.galgas', line 601
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2B_) // $+$
, TOP_DOWN_NONTERMINAL (6) // <definition_expression_term>
, TOP_DOWN_NONTERMINAL (37) // <select_sara_5F_parser_26>
, TOP_DOWN_END_PRODUCTION ()
// At index 348 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
, TOP_DOWN_END_PRODUCTION ()
// At index 349 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2A_) // $*$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 353 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2A__2A_) // $**$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 357 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7C__7C_) // $||$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 361 : <select_sara_5F_parser_28>, in file 'sara_parser.galgas', line 647
, TOP_DOWN_END_PRODUCTION ()
// At index 362 : <select_sara_5F_parser_28>, in file 'sara_parser.galgas', line 647
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (39) // <select_sara_5F_parser_28>
, TOP_DOWN_END_PRODUCTION ()
// At index 368 : <select_sara_5F_parser_29>, in file 'sara_parser.galgas', line 655
, TOP_DOWN_END_PRODUCTION ()
// At index 369 : <select_sara_5F_parser_29>, in file 'sara_parser.galgas', line 655
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_include) // $include$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (40) // <select_sara_5F_parser_29>
, TOP_DOWN_END_PRODUCTION ()
// At index 376 : <select_sara_5F_parser_30>, in file 'sara_parser.galgas', line 681
, TOP_DOWN_END_PRODUCTION ()
// At index 377 : <select_sara_5F_parser_30>, in file 'sara_parser.galgas', line 681
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (41) // <select_sara_5F_parser_30>
, TOP_DOWN_END_PRODUCTION ()
// At index 383 : <select_sara_5F_parser_31>, in file 'sara_parser.galgas', line 689
, TOP_DOWN_END_PRODUCTION ()
// At index 384 : <select_sara_5F_parser_31>, in file 'sara_parser.galgas', line 689
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_exclude) // $exclude$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (42) // <select_sara_5F_parser_31>
, TOP_DOWN_END_PRODUCTION ()
// At index 391 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_NONTERMINAL (10) // <explicit_automaton>
, TOP_DOWN_END_PRODUCTION ()
// At index 393 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 397 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3F_) // $?$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (44) // <select_sara_5F_parser_33>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 404 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__21_) // $!$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (45) // <select_sara_5F_parser_34>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 411 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_bool) // $bool$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 416 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__40_) // $@$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_END_PRODUCTION ()
// At index 419 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7E_) // $~$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_END_PRODUCTION ()
// At index 422 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_nofirst) // $nofirst$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 427 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_nolast) // $nolast$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 432 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (7) // <modalcompadd_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 437 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (8) // <modalcompsub_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 442 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_to) // $to$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 449 : <select_sara_5F_parser_33>, in file 'sara_parser.galgas', line 722
, TOP_DOWN_END_PRODUCTION ()
// At index 450 : <select_sara_5F_parser_33>, in file 'sara_parser.galgas', line 722
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (44) // <select_sara_5F_parser_33>
, TOP_DOWN_END_PRODUCTION ()
// At index 454 : <select_sara_5F_parser_34>, in file 'sara_parser.galgas', line 737
, TOP_DOWN_END_PRODUCTION ()
// At index 455 : <select_sara_5F_parser_34>, in file 'sara_parser.galgas', line 737
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (45) // <select_sara_5F_parser_34>
, TOP_DOWN_END_PRODUCTION ()
// At index 459 : <select_sara_5F_parser_35>, in file 'sara_parser.galgas', line 816
, TOP_DOWN_END_PRODUCTION ()
// At index 460 : <select_sara_5F_parser_35>, in file 'sara_parser.galgas', line 816
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (46) // <select_sara_5F_parser_35>
, TOP_DOWN_END_PRODUCTION ()
// At index 464 : <select_sara_5F_parser_36>, in file 'sara_parser.galgas', line 831
, TOP_DOWN_END_PRODUCTION ()
// At index 465 : <select_sara_5F_parser_36>, in file 'sara_parser.galgas', line 831
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (48) // <select_sara_5F_parser_37>
, TOP_DOWN_END_PRODUCTION ()
// At index 468 : <select_sara_5F_parser_37>, in file 'sara_parser.galgas', line 833
, TOP_DOWN_END_PRODUCTION ()
// At index 469 : <select_sara_5F_parser_37>, in file 'sara_parser.galgas', line 833
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (48) // <select_sara_5F_parser_37>
, TOP_DOWN_END_PRODUCTION ()
// At index 473 : <select_sara_5F_parser_38>, in file 'sara_parser.galgas', line 849
, TOP_DOWN_END_PRODUCTION ()
// At index 474 : <select_sara_5F_parser_38>, in file 'sara_parser.galgas', line 849
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (49) // <select_sara_5F_parser_38>
, TOP_DOWN_END_PRODUCTION ()
// At index 478 : <select_sara_5F_parser_39>, in file 'sara_parser.galgas', line 880
, TOP_DOWN_END_PRODUCTION ()
// At index 479 : <select_sara_5F_parser_39>, in file 'sara_parser.galgas', line 880
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (50) // <select_sara_5F_parser_39>
, TOP_DOWN_END_PRODUCTION ()
// At index 483 : <select_sara_5F_parser_40>, in file 'sara_parser.galgas', line 890
, TOP_DOWN_END_PRODUCTION ()
// At index 484 : <select_sara_5F_parser_40>, in file 'sara_parser.galgas', line 890
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (51) // <select_sara_5F_parser_40>
, TOP_DOWN_END_PRODUCTION ()
// At index 488 : <select_sara_5F_parser_41>, in file 'sara_parser.galgas', line 900
, TOP_DOWN_END_PRODUCTION ()
// At index 489 : <select_sara_5F_parser_41>, in file 'sara_parser.galgas', line 900
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_last) // $last$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (53) // <select_sara_5F_parser_42>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 494 : <select_sara_5F_parser_42>, in file 'sara_parser.galgas', line 903
, TOP_DOWN_END_PRODUCTION ()
// At index 495 : <select_sara_5F_parser_42>, in file 'sara_parser.galgas', line 903
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (53) // <select_sara_5F_parser_42>
, TOP_DOWN_END_PRODUCTION ()
// At index 499 : <select_sara_5F_parser_43>, in file 'sara_parser.galgas', line 914
, TOP_DOWN_END_PRODUCTION ()
// At index 500 : <select_sara_5F_parser_43>, in file 'sara_parser.galgas', line 914
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (55) // <select_sara_5F_parser_44>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_NONTERMINAL (54) // <select_sara_5F_parser_43>
, TOP_DOWN_END_PRODUCTION ()
// At index 508 : <select_sara_5F_parser_44>, in file 'sara_parser.galgas', line 926
, TOP_DOWN_END_PRODUCTION ()
// At index 509 : <select_sara_5F_parser_44>, in file 'sara_parser.galgas', line 926
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_goto) // $goto$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (55) // <select_sara_5F_parser_44>
, TOP_DOWN_END_PRODUCTION ()
// At index 515 : <>, in file '.galgas', line 0
, TOP_DOWN_NONTERMINAL (0) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_sara_grammar [134] = {
 {"<start_symbol>", "sara_parser", 0}, // at index 0
 {"<component>", "sara_parser", 3}, // at index 1
 {"<component>", "sara_parser", 8}, // at index 2
 {"<component>", "sara_parser", 13}, // at index 3
 {"<component>", "sara_parser", 19}, // at index 4
 {"<component>", "sara_parser", 25}, // at index 5
 {"<component>", "sara_parser", 29}, // at index 6
 {"<component>", "sara_parser", 35}, // at index 7
 {"<component>", "sara_parser", 39}, // at index 8
 {"<component>", "sara_parser", 42}, // at index 9
 {"<component>", "sara_parser", 58}, // at index 10
 {"<component>", "sara_parser", 75}, // at index 11
 {"<component>", "sara_parser", 92}, // at index 12
 {"<io_bool_expression>", "sara_parser", 115}, // at index 13
 {"<io_and_expression>", "sara_parser", 118}, // at index 14
 {"<io_primary>", "sara_parser", 121}, // at index 15
 {"<io_primary>", "sara_parser", 125}, // at index 16
 {"<io_primary>", "sara_parser", 127}, // at index 17
 {"<io_primary>", "sara_parser", 130}, // at index 18
 {"<io_primary>", "sara_parser", 132}, // at index 19
 {"<io_primary>", "sara_parser", 134}, // at index 20
 {"<definition_expression>", "sara_parser", 147}, // at index 21
 {"<definition_expression_term>", "sara_parser", 150}, // at index 22
 {"<modalcompadd_definition>", "sara_parser", 153}, // at index 23
 {"<modalcompsub_definition>", "sara_parser", 160}, // at index 24
 {"<definition_expression_factor>", "sara_parser", 167}, // at index 25
 {"<definition_expression_factor>", "sara_parser", 169}, // at index 26
 {"<explicit_automaton>", "sara_parser", 182}, // at index 27
 {"<select_sara_5F_parser_0>", "sara_parser", 202}, // at index 28
 {"<select_sara_5F_parser_0>", "sara_parser", 203}, // at index 29
 {"<select_sara_5F_parser_1>", "sara_parser", 206}, // at index 30
 {"<select_sara_5F_parser_1>", "sara_parser", 207}, // at index 31
 {"<select_sara_5F_parser_2>", "sara_parser", 211}, // at index 32
 {"<select_sara_5F_parser_2>", "sara_parser", 212}, // at index 33
 {"<select_sara_5F_parser_3>", "sara_parser", 215}, // at index 34
 {"<select_sara_5F_parser_3>", "sara_parser", 216}, // at index 35
 {"<select_sara_5F_parser_4>", "sara_parser", 220}, // at index 36
 {"<select_sara_5F_parser_4>", "sara_parser", 221}, // at index 37
 {"<select_sara_5F_parser_5>", "sara_parser", 225}, // at index 38
 {"<select_sara_5F_parser_5>", "sara_parser", 226}, // at index 39
 {"<select_sara_5F_parser_6>", "sara_parser", 230}, // at index 40
 {"<select_sara_5F_parser_6>", "sara_parser", 231}, // at index 41
 {"<select_sara_5F_parser_7>", "sara_parser", 234}, // at index 42
 {"<select_sara_5F_parser_7>", "sara_parser", 235}, // at index 43
 {"<select_sara_5F_parser_8>", "sara_parser", 239}, // at index 44
 {"<select_sara_5F_parser_8>", "sara_parser", 240}, // at index 45
 {"<select_sara_5F_parser_9>", "sara_parser", 244}, // at index 46
 {"<select_sara_5F_parser_9>", "sara_parser", 245}, // at index 47
 {"<select_sara_5F_parser_10>", "sara_parser", 249}, // at index 48
 {"<select_sara_5F_parser_10>", "sara_parser", 250}, // at index 49
 {"<select_sara_5F_parser_11>", "sara_parser", 253}, // at index 50
 {"<select_sara_5F_parser_11>", "sara_parser", 254}, // at index 51
 {"<select_sara_5F_parser_12>", "sara_parser", 258}, // at index 52
 {"<select_sara_5F_parser_12>", "sara_parser", 259}, // at index 53
 {"<select_sara_5F_parser_13>", "sara_parser", 263}, // at index 54
 {"<select_sara_5F_parser_13>", "sara_parser", 264}, // at index 55
 {"<select_sara_5F_parser_14>", "sara_parser", 268}, // at index 56
 {"<select_sara_5F_parser_14>", "sara_parser", 269}, // at index 57
 {"<select_sara_5F_parser_15>", "sara_parser", 272}, // at index 58
 {"<select_sara_5F_parser_15>", "sara_parser", 273}, // at index 59
 {"<select_sara_5F_parser_16>", "sara_parser", 277}, // at index 60
 {"<select_sara_5F_parser_16>", "sara_parser", 278}, // at index 61
 {"<select_sara_5F_parser_17>", "sara_parser", 282}, // at index 62
 {"<select_sara_5F_parser_17>", "sara_parser", 283}, // at index 63
 {"<select_sara_5F_parser_18>", "sara_parser", 291}, // at index 64
 {"<select_sara_5F_parser_18>", "sara_parser", 292}, // at index 65
 {"<select_sara_5F_parser_19>", "sara_parser", 297}, // at index 66
 {"<select_sara_5F_parser_19>", "sara_parser", 298}, // at index 67
 {"<select_sara_5F_parser_20>", "sara_parser", 302}, // at index 68
 {"<select_sara_5F_parser_20>", "sara_parser", 303}, // at index 69
 {"<select_sara_5F_parser_20>", "sara_parser", 307}, // at index 70
 {"<select_sara_5F_parser_20>", "sara_parser", 311}, // at index 71
 {"<select_sara_5F_parser_20>", "sara_parser", 315}, // at index 72
 {"<select_sara_5F_parser_21>", "sara_parser", 319}, // at index 73
 {"<select_sara_5F_parser_21>", "sara_parser", 320}, // at index 74
 {"<select_sara_5F_parser_22>", "sara_parser", 324}, // at index 75
 {"<select_sara_5F_parser_22>", "sara_parser", 325}, // at index 76
 {"<select_sara_5F_parser_23>", "sara_parser", 329}, // at index 77
 {"<select_sara_5F_parser_23>", "sara_parser", 330}, // at index 78
 {"<select_sara_5F_parser_24>", "sara_parser", 333}, // at index 79
 {"<select_sara_5F_parser_24>", "sara_parser", 334}, // at index 80
 {"<select_sara_5F_parser_25>", "sara_parser", 338}, // at index 81
 {"<select_sara_5F_parser_25>", "sara_parser", 339}, // at index 82
 {"<select_sara_5F_parser_26>", "sara_parser", 343}, // at index 83
 {"<select_sara_5F_parser_26>", "sara_parser", 344}, // at index 84
 {"<select_sara_5F_parser_27>", "sara_parser", 348}, // at index 85
 {"<select_sara_5F_parser_27>", "sara_parser", 349}, // at index 86
 {"<select_sara_5F_parser_27>", "sara_parser", 353}, // at index 87
 {"<select_sara_5F_parser_27>", "sara_parser", 357}, // at index 88
 {"<select_sara_5F_parser_28>", "sara_parser", 361}, // at index 89
 {"<select_sara_5F_parser_28>", "sara_parser", 362}, // at index 90
 {"<select_sara_5F_parser_29>", "sara_parser", 368}, // at index 91
 {"<select_sara_5F_parser_29>", "sara_parser", 369}, // at index 92
 {"<select_sara_5F_parser_30>", "sara_parser", 376}, // at index 93
 {"<select_sara_5F_parser_30>", "sara_parser", 377}, // at index 94
 {"<select_sara_5F_parser_31>", "sara_parser", 383}, // at index 95
 {"<select_sara_5F_parser_31>", "sara_parser", 384}, // at index 96
 {"<select_sara_5F_parser_32>", "sara_parser", 391}, // at index 97
 {"<select_sara_5F_parser_32>", "sara_parser", 393}, // at index 98
 {"<select_sara_5F_parser_32>", "sara_parser", 397}, // at index 99
 {"<select_sara_5F_parser_32>", "sara_parser", 404}, // at index 100
 {"<select_sara_5F_parser_32>", "sara_parser", 411}, // at index 101
 {"<select_sara_5F_parser_32>", "sara_parser", 416}, // at index 102
 {"<select_sara_5F_parser_32>", "sara_parser", 419}, // at index 103
 {"<select_sara_5F_parser_32>", "sara_parser", 422}, // at index 104
 {"<select_sara_5F_parser_32>", "sara_parser", 427}, // at index 105
 {"<select_sara_5F_parser_32>", "sara_parser", 432}, // at index 106
 {"<select_sara_5F_parser_32>", "sara_parser", 437}, // at index 107
 {"<select_sara_5F_parser_32>", "sara_parser", 442}, // at index 108
 {"<select_sara_5F_parser_33>", "sara_parser", 449}, // at index 109
 {"<select_sara_5F_parser_33>", "sara_parser", 450}, // at index 110
 {"<select_sara_5F_parser_34>", "sara_parser", 454}, // at index 111
 {"<select_sara_5F_parser_34>", "sara_parser", 455}, // at index 112
 {"<select_sara_5F_parser_35>", "sara_parser", 459}, // at index 113
 {"<select_sara_5F_parser_35>", "sara_parser", 460}, // at index 114
 {"<select_sara_5F_parser_36>", "sara_parser", 464}, // at index 115
 {"<select_sara_5F_parser_36>", "sara_parser", 465}, // at index 116
 {"<select_sara_5F_parser_37>", "sara_parser", 468}, // at index 117
 {"<select_sara_5F_parser_37>", "sara_parser", 469}, // at index 118
 {"<select_sara_5F_parser_38>", "sara_parser", 473}, // at index 119
 {"<select_sara_5F_parser_38>", "sara_parser", 474}, // at index 120
 {"<select_sara_5F_parser_39>", "sara_parser", 478}, // at index 121
 {"<select_sara_5F_parser_39>", "sara_parser", 479}, // at index 122
 {"<select_sara_5F_parser_40>", "sara_parser", 483}, // at index 123
 {"<select_sara_5F_parser_40>", "sara_parser", 484}, // at index 124
 {"<select_sara_5F_parser_41>", "sara_parser", 488}, // at index 125
 {"<select_sara_5F_parser_41>", "sara_parser", 489}, // at index 126
 {"<select_sara_5F_parser_42>", "sara_parser", 494}, // at index 127
 {"<select_sara_5F_parser_42>", "sara_parser", 495}, // at index 128
 {"<select_sara_5F_parser_43>", "sara_parser", 499}, // at index 129
 {"<select_sara_5F_parser_43>", "sara_parser", 500}, // at index 130
 {"<select_sara_5F_parser_44>", "sara_parser", 508}, // at index 131
 {"<select_sara_5F_parser_44>", "sara_parser", 509}, // at index 132
 {"<>", "", 515} // at index 133
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_sara_grammar [134] = {
0, // index 0 : <start_symbol>, in file 'sara_parser.galgas', line 11
3, // index 1 : <component>, in file 'sara_parser.galgas', line 25
8, // index 2 : <component>, in file 'sara_parser.galgas', line 41
13, // index 3 : <component>, in file 'sara_parser.galgas', line 57
19, // index 4 : <component>, in file 'sara_parser.galgas', line 74
25, // index 5 : <component>, in file 'sara_parser.galgas', line 91
29, // index 6 : <component>, in file 'sara_parser.galgas', line 106
35, // index 7 : <component>, in file 'sara_parser.galgas', line 125
39, // index 8 : <component>, in file 'sara_parser.galgas', line 140
42, // index 9 : <component>, in file 'sara_parser.galgas', line 150
58, // index 10 : <component>, in file 'sara_parser.galgas', line 212
75, // index 11 : <component>, in file 'sara_parser.galgas', line 279
92, // index 12 : <component>, in file 'sara_parser.galgas', line 344
115, // index 13 : <io_bool_expression>, in file 'sara_parser.galgas', line 435
118, // index 14 : <io_and_expression>, in file 'sara_parser.galgas', line 462
121, // index 15 : <io_primary>, in file 'sara_parser.galgas', line 477
125, // index 16 : <io_primary>, in file 'sara_parser.galgas', line 488
127, // index 17 : <io_primary>, in file 'sara_parser.galgas', line 499
130, // index 18 : <io_primary>, in file 'sara_parser.galgas', line 510
132, // index 19 : <io_primary>, in file 'sara_parser.galgas', line 520
134, // index 20 : <io_primary>, in file 'sara_parser.galgas', line 530
147, // index 21 : <definition_expression>, in file 'sara_parser.galgas', line 596
150, // index 22 : <definition_expression_term>, in file 'sara_parser.galgas', line 612
153, // index 23 : <modalcompadd_definition>, in file 'sara_parser.galgas', line 640
160, // index 24 : <modalcompsub_definition>, in file 'sara_parser.galgas', line 674
167, // index 25 : <definition_expression_factor>, in file 'sara_parser.galgas', line 708
169, // index 26 : <definition_expression_factor>, in file 'sara_parser.galgas', line 807
182, // index 27 : <explicit_automaton>, in file 'sara_parser.galgas', line 870
202, // index 28 : <select_sara_5F_parser_0>, in file 'sara_parser.galgas', line 16
203, // index 29 : <select_sara_5F_parser_0>, in file 'sara_parser.galgas', line 16
206, // index 30 : <select_sara_5F_parser_1>, in file 'sara_parser.galgas', line 158
207, // index 31 : <select_sara_5F_parser_1>, in file 'sara_parser.galgas', line 158
211, // index 32 : <select_sara_5F_parser_2>, in file 'sara_parser.galgas', line 169
212, // index 33 : <select_sara_5F_parser_2>, in file 'sara_parser.galgas', line 169
215, // index 34 : <select_sara_5F_parser_3>, in file 'sara_parser.galgas', line 171
216, // index 35 : <select_sara_5F_parser_3>, in file 'sara_parser.galgas', line 171
220, // index 36 : <select_sara_5F_parser_4>, in file 'sara_parser.galgas', line 183
221, // index 37 : <select_sara_5F_parser_4>, in file 'sara_parser.galgas', line 183
225, // index 38 : <select_sara_5F_parser_5>, in file 'sara_parser.galgas', line 221
226, // index 39 : <select_sara_5F_parser_5>, in file 'sara_parser.galgas', line 221
230, // index 40 : <select_sara_5F_parser_6>, in file 'sara_parser.galgas', line 232
231, // index 41 : <select_sara_5F_parser_6>, in file 'sara_parser.galgas', line 232
234, // index 42 : <select_sara_5F_parser_7>, in file 'sara_parser.galgas', line 234
235, // index 43 : <select_sara_5F_parser_7>, in file 'sara_parser.galgas', line 234
239, // index 44 : <select_sara_5F_parser_8>, in file 'sara_parser.galgas', line 246
240, // index 45 : <select_sara_5F_parser_8>, in file 'sara_parser.galgas', line 246
244, // index 46 : <select_sara_5F_parser_9>, in file 'sara_parser.galgas', line 288
245, // index 47 : <select_sara_5F_parser_9>, in file 'sara_parser.galgas', line 288
249, // index 48 : <select_sara_5F_parser_10>, in file 'sara_parser.galgas', line 299
250, // index 49 : <select_sara_5F_parser_10>, in file 'sara_parser.galgas', line 299
253, // index 50 : <select_sara_5F_parser_11>, in file 'sara_parser.galgas', line 301
254, // index 51 : <select_sara_5F_parser_11>, in file 'sara_parser.galgas', line 301
258, // index 52 : <select_sara_5F_parser_12>, in file 'sara_parser.galgas', line 313
259, // index 53 : <select_sara_5F_parser_12>, in file 'sara_parser.galgas', line 313
263, // index 54 : <select_sara_5F_parser_13>, in file 'sara_parser.galgas', line 353
264, // index 55 : <select_sara_5F_parser_13>, in file 'sara_parser.galgas', line 353
268, // index 56 : <select_sara_5F_parser_14>, in file 'sara_parser.galgas', line 368
269, // index 57 : <select_sara_5F_parser_14>, in file 'sara_parser.galgas', line 368
272, // index 58 : <select_sara_5F_parser_15>, in file 'sara_parser.galgas', line 370
273, // index 59 : <select_sara_5F_parser_15>, in file 'sara_parser.galgas', line 370
277, // index 60 : <select_sara_5F_parser_16>, in file 'sara_parser.galgas', line 386
278, // index 61 : <select_sara_5F_parser_16>, in file 'sara_parser.galgas', line 386
282, // index 62 : <select_sara_5F_parser_17>, in file 'sara_parser.galgas', line 402
283, // index 63 : <select_sara_5F_parser_17>, in file 'sara_parser.galgas', line 402
291, // index 64 : <select_sara_5F_parser_18>, in file 'sara_parser.galgas', line 405
292, // index 65 : <select_sara_5F_parser_18>, in file 'sara_parser.galgas', line 405
297, // index 66 : <select_sara_5F_parser_19>, in file 'sara_parser.galgas', line 408
298, // index 67 : <select_sara_5F_parser_19>, in file 'sara_parser.galgas', line 408
302, // index 68 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
303, // index 69 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
307, // index 70 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
311, // index 71 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
315, // index 72 : <select_sara_5F_parser_20>, in file 'sara_parser.galgas', line 440
319, // index 73 : <select_sara_5F_parser_21>, in file 'sara_parser.galgas', line 467
320, // index 74 : <select_sara_5F_parser_21>, in file 'sara_parser.galgas', line 467
324, // index 75 : <select_sara_5F_parser_22>, in file 'sara_parser.galgas', line 539
325, // index 76 : <select_sara_5F_parser_22>, in file 'sara_parser.galgas', line 539
329, // index 77 : <select_sara_5F_parser_23>, in file 'sara_parser.galgas', line 554
330, // index 78 : <select_sara_5F_parser_23>, in file 'sara_parser.galgas', line 554
333, // index 79 : <select_sara_5F_parser_24>, in file 'sara_parser.galgas', line 556
334, // index 80 : <select_sara_5F_parser_24>, in file 'sara_parser.galgas', line 556
338, // index 81 : <select_sara_5F_parser_25>, in file 'sara_parser.galgas', line 572
339, // index 82 : <select_sara_5F_parser_25>, in file 'sara_parser.galgas', line 572
343, // index 83 : <select_sara_5F_parser_26>, in file 'sara_parser.galgas', line 601
344, // index 84 : <select_sara_5F_parser_26>, in file 'sara_parser.galgas', line 601
348, // index 85 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
349, // index 86 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
353, // index 87 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
357, // index 88 : <select_sara_5F_parser_27>, in file 'sara_parser.galgas', line 617
361, // index 89 : <select_sara_5F_parser_28>, in file 'sara_parser.galgas', line 647
362, // index 90 : <select_sara_5F_parser_28>, in file 'sara_parser.galgas', line 647
368, // index 91 : <select_sara_5F_parser_29>, in file 'sara_parser.galgas', line 655
369, // index 92 : <select_sara_5F_parser_29>, in file 'sara_parser.galgas', line 655
376, // index 93 : <select_sara_5F_parser_30>, in file 'sara_parser.galgas', line 681
377, // index 94 : <select_sara_5F_parser_30>, in file 'sara_parser.galgas', line 681
383, // index 95 : <select_sara_5F_parser_31>, in file 'sara_parser.galgas', line 689
384, // index 96 : <select_sara_5F_parser_31>, in file 'sara_parser.galgas', line 689
391, // index 97 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
393, // index 98 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
397, // index 99 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
404, // index 100 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
411, // index 101 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
416, // index 102 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
419, // index 103 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
422, // index 104 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
427, // index 105 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
432, // index 106 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
437, // index 107 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
442, // index 108 : <select_sara_5F_parser_32>, in file 'sara_parser.galgas', line 712
449, // index 109 : <select_sara_5F_parser_33>, in file 'sara_parser.galgas', line 722
450, // index 110 : <select_sara_5F_parser_33>, in file 'sara_parser.galgas', line 722
454, // index 111 : <select_sara_5F_parser_34>, in file 'sara_parser.galgas', line 737
455, // index 112 : <select_sara_5F_parser_34>, in file 'sara_parser.galgas', line 737
459, // index 113 : <select_sara_5F_parser_35>, in file 'sara_parser.galgas', line 816
460, // index 114 : <select_sara_5F_parser_35>, in file 'sara_parser.galgas', line 816
464, // index 115 : <select_sara_5F_parser_36>, in file 'sara_parser.galgas', line 831
465, // index 116 : <select_sara_5F_parser_36>, in file 'sara_parser.galgas', line 831
468, // index 117 : <select_sara_5F_parser_37>, in file 'sara_parser.galgas', line 833
469, // index 118 : <select_sara_5F_parser_37>, in file 'sara_parser.galgas', line 833
473, // index 119 : <select_sara_5F_parser_38>, in file 'sara_parser.galgas', line 849
474, // index 120 : <select_sara_5F_parser_38>, in file 'sara_parser.galgas', line 849
478, // index 121 : <select_sara_5F_parser_39>, in file 'sara_parser.galgas', line 880
479, // index 122 : <select_sara_5F_parser_39>, in file 'sara_parser.galgas', line 880
483, // index 123 : <select_sara_5F_parser_40>, in file 'sara_parser.galgas', line 890
484, // index 124 : <select_sara_5F_parser_40>, in file 'sara_parser.galgas', line 890
488, // index 125 : <select_sara_5F_parser_41>, in file 'sara_parser.galgas', line 900
489, // index 126 : <select_sara_5F_parser_41>, in file 'sara_parser.galgas', line 900
494, // index 127 : <select_sara_5F_parser_42>, in file 'sara_parser.galgas', line 903
495, // index 128 : <select_sara_5F_parser_42>, in file 'sara_parser.galgas', line 903
499, // index 129 : <select_sara_5F_parser_43>, in file 'sara_parser.galgas', line 914
500, // index 130 : <select_sara_5F_parser_43>, in file 'sara_parser.galgas', line 914
508, // index 131 : <select_sara_5F_parser_44>, in file 'sara_parser.galgas', line 926
509, // index 132 : <select_sara_5F_parser_44>, in file 'sara_parser.galgas', line 926
515 // index 133 : <>, in file '.galgas', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_sara_grammar [58] = {
0, // at 0 : <start_symbol>
1, // at 1 : <component>
13, // at 2 : <io_bool_expression>
14, // at 3 : <io_and_expression>
15, // at 4 : <io_primary>
21, // at 5 : <definition_expression>
22, // at 6 : <definition_expression_term>
23, // at 7 : <modalcompadd_definition>
24, // at 8 : <modalcompsub_definition>
25, // at 9 : <definition_expression_factor>
27, // at 10 : <explicit_automaton>
28, // at 11 : <select_sara_5F_parser_0>
30, // at 12 : <select_sara_5F_parser_1>
32, // at 13 : <select_sara_5F_parser_2>
34, // at 14 : <select_sara_5F_parser_3>
36, // at 15 : <select_sara_5F_parser_4>
38, // at 16 : <select_sara_5F_parser_5>
40, // at 17 : <select_sara_5F_parser_6>
42, // at 18 : <select_sara_5F_parser_7>
44, // at 19 : <select_sara_5F_parser_8>
46, // at 20 : <select_sara_5F_parser_9>
48, // at 21 : <select_sara_5F_parser_10>
50, // at 22 : <select_sara_5F_parser_11>
52, // at 23 : <select_sara_5F_parser_12>
54, // at 24 : <select_sara_5F_parser_13>
56, // at 25 : <select_sara_5F_parser_14>
58, // at 26 : <select_sara_5F_parser_15>
60, // at 27 : <select_sara_5F_parser_16>
62, // at 28 : <select_sara_5F_parser_17>
64, // at 29 : <select_sara_5F_parser_18>
66, // at 30 : <select_sara_5F_parser_19>
68, // at 31 : <select_sara_5F_parser_20>
73, // at 32 : <select_sara_5F_parser_21>
75, // at 33 : <select_sara_5F_parser_22>
77, // at 34 : <select_sara_5F_parser_23>
79, // at 35 : <select_sara_5F_parser_24>
81, // at 36 : <select_sara_5F_parser_25>
83, // at 37 : <select_sara_5F_parser_26>
85, // at 38 : <select_sara_5F_parser_27>
89, // at 39 : <select_sara_5F_parser_28>
91, // at 40 : <select_sara_5F_parser_29>
93, // at 41 : <select_sara_5F_parser_30>
95, // at 42 : <select_sara_5F_parser_31>
97, // at 43 : <select_sara_5F_parser_32>
109, // at 44 : <select_sara_5F_parser_33>
111, // at 45 : <select_sara_5F_parser_34>
113, // at 46 : <select_sara_5F_parser_35>
115, // at 47 : <select_sara_5F_parser_36>
117, // at 48 : <select_sara_5F_parser_37>
119, // at 49 : <select_sara_5F_parser_38>
121, // at 50 : <select_sara_5F_parser_39>
123, // at 51 : <select_sara_5F_parser_40>
125, // at 52 : <select_sara_5F_parser_41>
127, // at 53 : <select_sara_5F_parser_42>
129, // at 54 : <select_sara_5F_parser_43>
131, // at 55 : <select_sara_5F_parser_44>
133, // at 56 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_sara_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
// At index 1 : <component>
Lexique_sara_5F_scanner::kToken_state, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_trans, -1, // Choice 2
Lexique_sara_5F_scanner::kToken_first, -1, // Choice 3
Lexique_sara_5F_scanner::kToken_last, -1, // Choice 4
Lexique_sara_5F_scanner::kToken_check, -1, // Choice 5
Lexique_sara_5F_scanner::kToken_checkidentical, -1, // Choice 6
Lexique_sara_5F_scanner::kToken_checkbool, -1, // Choice 7
Lexique_sara_5F_scanner::kToken_bdd, -1, // Choice 8
Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 9
Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 10
Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 11
Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 12
  -1,
// At index 26 : <io_bool_expression> only one production, no choice
  -1,
// At index 27 : <io_and_expression> only one production, no choice
  -1,
// At index 28 : <io_primary>
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken_false, -1, // Choice 4
Lexique_sara_5F_scanner::kToken_true, -1, // Choice 5
Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 6
  -1,
// At index 41 : <definition_expression> only one production, no choice
  -1,
// At index 42 : <definition_expression_term> only one production, no choice
  -1,
// At index 43 : <modalcompadd_definition> only one production, no choice
  -1,
// At index 44 : <modalcompsub_definition> only one production, no choice
  -1,
// At index 45 : <definition_expression_factor>
Lexique_sara_5F_scanner::kToken_trans, Lexique_sara_5F_scanner::kToken__28_, Lexique_sara_5F_scanner::kToken_modalcompadd, Lexique_sara_5F_scanner::kToken_modalcompsub, Lexique_sara_5F_scanner::kToken__7E_, Lexique_sara_5F_scanner::kToken__3F_, Lexique_sara_5F_scanner::kToken__21_, Lexique_sara_5F_scanner::kToken_bool, Lexique_sara_5F_scanner::kToken__40_, Lexique_sara_5F_scanner::kToken_nofirst, Lexique_sara_5F_scanner::kToken_nolast, Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 2
  -1,
// At index 61 : <explicit_automaton> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 62 : <select_sara_5F_parser_0>
Lexique_sara_5F_scanner::kToken_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_state, Lexique_sara_5F_scanner::kToken_machineIdf, Lexique_sara_5F_scanner::kToken_trans, Lexique_sara_5F_scanner::kToken_first, Lexique_sara_5F_scanner::kToken_last, Lexique_sara_5F_scanner::kToken_check, Lexique_sara_5F_scanner::kToken_checkidentical, Lexique_sara_5F_scanner::kToken_checkbool, Lexique_sara_5F_scanner::kToken_bdd, Lexique_sara_5F_scanner::kToken_modalcompadd, Lexique_sara_5F_scanner::kToken_modalcompsub, Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 2
  -1,
// At index 78 : <select_sara_5F_parser_1>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 83 : <select_sara_5F_parser_2>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 88 : <select_sara_5F_parser_3>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 93 : <select_sara_5F_parser_4>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 98 : <select_sara_5F_parser_5>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 103 : <select_sara_5F_parser_6>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 108 : <select_sara_5F_parser_7>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 113 : <select_sara_5F_parser_8>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 118 : <select_sara_5F_parser_9>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 123 : <select_sara_5F_parser_10>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 128 : <select_sara_5F_parser_11>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 133 : <select_sara_5F_parser_12>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 138 : <select_sara_5F_parser_13>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 143 : <select_sara_5F_parser_14>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 148 : <select_sara_5F_parser_15>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 153 : <select_sara_5F_parser_16>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 158 : <select_sara_5F_parser_17>
Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_literal_5F_string, -1, // Choice 2
  -1,
// At index 163 : <select_sara_5F_parser_18>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 168 : <select_sara_5F_parser_19>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 174 : <select_sara_5F_parser_20>
Lexique_sara_5F_scanner::kToken__29_, Lexique_sara_5F_scanner::kToken__7B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken_to, Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__7C_, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__5E_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken__2D__3E_, -1, // Choice 4
Lexique_sara_5F_scanner::kToken__3D_, -1, // Choice 5
  -1,
// At index 189 : <select_sara_5F_parser_21>
Lexique_sara_5F_scanner::kToken__29_, Lexique_sara_5F_scanner::kToken__7B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken__7C_, Lexique_sara_5F_scanner::kToken__5E_, Lexique_sara_5F_scanner::kToken__2D__3E_, Lexique_sara_5F_scanner::kToken__3D_, Lexique_sara_5F_scanner::kToken_to, Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 202 : <select_sara_5F_parser_22>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 207 : <select_sara_5F_parser_23>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 212 : <select_sara_5F_parser_24>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 217 : <select_sara_5F_parser_25>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 222 : <select_sara_5F_parser_26>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 2
  -1,
// At index 228 : <select_sara_5F_parser_27>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__29_, Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2A_, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__2A__2A_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken__7C__7C_, -1, // Choice 4
  -1,
// At index 239 : <select_sara_5F_parser_28>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken_include, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 246 : <select_sara_5F_parser_29>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_include, -1, // Choice 2
  -1,
// At index 252 : <select_sara_5F_parser_30>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 259 : <select_sara_5F_parser_31>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 2
  -1,
// At index 265 : <select_sara_5F_parser_32>
Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__3F_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken__21_, -1, // Choice 4
Lexique_sara_5F_scanner::kToken_bool, -1, // Choice 5
Lexique_sara_5F_scanner::kToken__40_, -1, // Choice 6
Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 7
Lexique_sara_5F_scanner::kToken_nofirst, -1, // Choice 8
Lexique_sara_5F_scanner::kToken_nolast, -1, // Choice 9
Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 10
Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 11
Lexique_sara_5F_scanner::kToken_trans, -1, // Choice 12
  -1,
// At index 290 : <select_sara_5F_parser_33>
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 295 : <select_sara_5F_parser_34>
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 300 : <select_sara_5F_parser_35>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 305 : <select_sara_5F_parser_36>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 310 : <select_sara_5F_parser_37>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 315 : <select_sara_5F_parser_38>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 320 : <select_sara_5F_parser_39>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 325 : <select_sara_5F_parser_40>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 330 : <select_sara_5F_parser_41>
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_last, -1, // Choice 2
  -1,
// At index 335 : <select_sara_5F_parser_42>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 340 : <select_sara_5F_parser_43>
Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 345 : <select_sara_5F_parser_44>
Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_machineIdf, Lexique_sara_5F_scanner::kToken__28_, Lexique_sara_5F_scanner::kToken_identifier, Lexique_sara_5F_scanner::kToken__7E_, Lexique_sara_5F_scanner::kToken_false, Lexique_sara_5F_scanner::kToken_true, -1, // Choice 2
  -1,
// At index 355 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_sara_grammar [58] = {
0, // at 0 : <start_symbol>
1, // at 1 : <component>
26, // at 2 : <io_bool_expression>
27, // at 3 : <io_and_expression>
28, // at 4 : <io_primary>
41, // at 5 : <definition_expression>
42, // at 6 : <definition_expression_term>
43, // at 7 : <modalcompadd_definition>
44, // at 8 : <modalcompsub_definition>
45, // at 9 : <definition_expression_factor>
61, // at 10 : <explicit_automaton>
62, // at 11 : <select_sara_5F_parser_0>
78, // at 12 : <select_sara_5F_parser_1>
83, // at 13 : <select_sara_5F_parser_2>
88, // at 14 : <select_sara_5F_parser_3>
93, // at 15 : <select_sara_5F_parser_4>
98, // at 16 : <select_sara_5F_parser_5>
103, // at 17 : <select_sara_5F_parser_6>
108, // at 18 : <select_sara_5F_parser_7>
113, // at 19 : <select_sara_5F_parser_8>
118, // at 20 : <select_sara_5F_parser_9>
123, // at 21 : <select_sara_5F_parser_10>
128, // at 22 : <select_sara_5F_parser_11>
133, // at 23 : <select_sara_5F_parser_12>
138, // at 24 : <select_sara_5F_parser_13>
143, // at 25 : <select_sara_5F_parser_14>
148, // at 26 : <select_sara_5F_parser_15>
153, // at 27 : <select_sara_5F_parser_16>
158, // at 28 : <select_sara_5F_parser_17>
163, // at 29 : <select_sara_5F_parser_18>
168, // at 30 : <select_sara_5F_parser_19>
174, // at 31 : <select_sara_5F_parser_20>
189, // at 32 : <select_sara_5F_parser_21>
202, // at 33 : <select_sara_5F_parser_22>
207, // at 34 : <select_sara_5F_parser_23>
212, // at 35 : <select_sara_5F_parser_24>
217, // at 36 : <select_sara_5F_parser_25>
222, // at 37 : <select_sara_5F_parser_26>
228, // at 38 : <select_sara_5F_parser_27>
239, // at 39 : <select_sara_5F_parser_28>
246, // at 40 : <select_sara_5F_parser_29>
252, // at 41 : <select_sara_5F_parser_30>
259, // at 42 : <select_sara_5F_parser_31>
265, // at 43 : <select_sara_5F_parser_32>
290, // at 44 : <select_sara_5F_parser_33>
295, // at 45 : <select_sara_5F_parser_34>
300, // at 46 : <select_sara_5F_parser_35>
305, // at 47 : <select_sara_5F_parser_36>
310, // at 48 : <select_sara_5F_parser_37>
315, // at 49 : <select_sara_5F_parser_38>
320, // at 50 : <select_sara_5F_parser_39>
325, // at 51 : <select_sara_5F_parser_40>
330, // at 52 : <select_sara_5F_parser_41>
335, // at 53 : <select_sara_5F_parser_42>
340, // at 54 : <select_sara_5F_parser_43>
345, // at 55 : <select_sara_5F_parser_44>
355, // at 56 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_ (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_(inLexique) ;
}

void cGrammar_sara_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_sara_5F_scanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
    if (ok) {
      cGrammar_sara_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_sara_5F_scanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_sara_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_sara_5F_scanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_sara_5F_scanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                      gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_sara_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_sara_5F_scanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_sara_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'component' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_component_indexing (Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_component_i1_indexing(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_component_i2_indexing(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_component_i3_indexing(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_component_i4_indexing(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_component_i5_indexing(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_component_i6_indexing(inLexique) ;
    break ;
  case 7 :
    rule_sara_5F_parser_component_i7_indexing(inLexique) ;
    break ;
  case 8 :
    rule_sara_5F_parser_component_i8_indexing(inLexique) ;
    break ;
  case 9 :
    rule_sara_5F_parser_component_i9_indexing(inLexique) ;
    break ;
  case 10 :
    rule_sara_5F_parser_component_i10_indexing(inLexique) ;
    break ;
  case 11 :
    rule_sara_5F_parser_component_i11_indexing(inLexique) ;
    break ;
  case 12 :
    rule_sara_5F_parser_component_i12_indexing(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_component_ (GGS_semanticContext & parameter_1,
                                Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_component_i1_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_component_i2_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_component_i3_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_component_i4_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_component_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_component_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_sara_5F_parser_component_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_sara_5F_parser_component_i8_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_sara_5F_parser_component_i9_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_sara_5F_parser_component_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_sara_5F_parser_component_i11_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_sara_5F_parser_component_i12_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'io_bool_expression' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_boolExpression & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'io_and_expression' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_boolExpression & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                            'io_primary' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_io_5F_primary_indexing (Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_io_5F_primary_i15_indexing(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i16_indexing(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i17_indexing(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i18_indexing(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i19_indexing(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i20_indexing(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_io_5F_primary_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_boolExpression & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_io_5F_primary_i15_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i16_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i17_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i18_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i19_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i20_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'definition_expression' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'definition_expression_term' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'modalcompadd_definition' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_M_5F_modesMap & parameter_3,
                                GGS_ListForModes & parameter_4,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'modalcompsub_definition' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_M_5F_modesMap & parameter_3,
                                GGS_ListForModes & parameter_4,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'definition_expression_factor' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_indexing (Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'explicit_automaton' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_0' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_0 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_1' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_1 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_2' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_2 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_3' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_3 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_4' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_4 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_5' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_5 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_6' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_6 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_7' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_7 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_8' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_8 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_9' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_9 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_10' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_10 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_11' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_11 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_12' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_12 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_13' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_13 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_14' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_14 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_15' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_15 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_16' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_16 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_17' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_17 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_18' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_18 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_19' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_19 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_20' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_20 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_21' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_21 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_22' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_22 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_23' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_23 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_24' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_24 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_25' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_25 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_26' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_26 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_27' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_27 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_28' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_28 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_29' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_29 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_30' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_30 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_31' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_31 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_32' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_32 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_33' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_33 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_34' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_34 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_35' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_35 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_36' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_36 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_37' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_37 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_38' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_38 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_39' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_39 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_40' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_40 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_41' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_41 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_42' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_42 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_43' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_43 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_44' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_44 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvaluesCount ("sara_cli_options",
                                         "displayBDDvaluesCount",
                                         99,
                                         "display-bdd-values-count",
                                         "displays values count for every BDD") ;

BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvalues ("sara_cli_options",
                                         "displayBDDvalues",
                                         118,
                                         "display-bdd-values",
                                         "displays values for every BDD") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "sara",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a '.sara' source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_sara_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("sara_main.galgas4", 11)) ;
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "sara") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_sara_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_sara_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

