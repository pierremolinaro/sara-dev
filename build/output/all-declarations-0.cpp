#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_sara_5F_scanner::cTokenFor_sara_5F_scanner (void) :
mLexicalAttribute_identifierString (),
mLexicalAttribute_ulongValue () {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_sara_5F_scanner::C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                                                      const C_String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_sara_5F_scanner::C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                                                      const C_String & inSourceString,
                                                      const C_String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectCharInString = "this character cannot appear within a string" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectEndOfComment = "incorrect end of comment" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectMachineNameBeginning = "incorrect machine name beginning" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_sara_5F_scanner_internalError = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_sara_5F_scanner::getMessageForTerminal (const int32_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
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

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_sara_5F_scanner__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_sara_5F_scanner__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_sara_5F_scanner__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_sara_5F_scanner__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_sara_5F_scanner__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__2A_$'
static const utf32 kUnicodeString_sara_5F_scanner__2A__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_sara_5F_scanner__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_sara_5F_scanner__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_sara_5F_scanner__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_sara_5F_scanner__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3D_$'
static const utf32 kUnicodeString_sara_5F_scanner__3A__3D_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_sara_5F_scanner__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_sara_5F_scanner__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F_$'
static const utf32 kUnicodeString_sara_5F_scanner__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_40_$'
static const utf32 kUnicodeString_sara_5F_scanner__40_ [] = {
  TO_UNICODE ('@'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_sara_5F_scanner__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$auto$'
static const utf32 kUnicodeString_sara_5F_scanner_auto [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bdd$'
static const utf32 kUnicodeString_sara_5F_scanner_bdd [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bool$'
static const utf32 kUnicodeString_sara_5F_scanner_bool [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$check$'
static const utf32 kUnicodeString_sara_5F_scanner_check [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$checkbool$'
static const utf32 kUnicodeString_sara_5F_scanner_checkbool [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$checkidentical$'
static const utf32 kUnicodeString_sara_5F_scanner_checkidentical [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$display$'
static const utf32 kUnicodeString_sara_5F_scanner_display [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$exclude$'
static const utf32 kUnicodeString_sara_5F_scanner_exclude [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_sara_5F_scanner_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$first$'
static const utf32 kUnicodeString_sara_5F_scanner_first [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$goto$'
static const utf32 kUnicodeString_sara_5F_scanner_goto [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$include$'
static const utf32 kUnicodeString_sara_5F_scanner_include [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$last$'
static const utf32 kUnicodeString_sara_5F_scanner_last [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$map$'
static const utf32 kUnicodeString_sara_5F_scanner_map [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$modalcompadd$'
static const utf32 kUnicodeString_sara_5F_scanner_modalcompadd [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$modalcompsub$'
static const utf32 kUnicodeString_sara_5F_scanner_modalcompsub [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nofirst$'
static const utf32 kUnicodeString_sara_5F_scanner_nofirst [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nolast$'
static const utf32 kUnicodeString_sara_5F_scanner_nolast [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$scenario$'
static const utf32 kUnicodeString_sara_5F_scanner_scenario [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$state$'
static const utf32 kUnicodeString_sara_5F_scanner_state [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$to$'
static const utf32 kUnicodeString_sara_5F_scanner_to [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$trans$'
static const utf32 kUnicodeString_sara_5F_scanner_trans [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_sara_5F_scanner_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_sara_5F_scanner__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_sara_5F_scanner__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__7C_$'
static const utf32 kUnicodeString_sara_5F_scanner__7C__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_sara_5F_scanner__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_sara_5F_scanner__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_sara_5F_scanner_delimitorsList = 21 ;

static const C_unicode_lexique_table_entry ktable_for_sara_5F_scanner_delimitorsList [ktable_size_sara_5F_scanner_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__21_, 1, C_Lexique_sara_5F_scanner::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__26_, 1, C_Lexique_sara_5F_scanner::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__28_, 1, C_Lexique_sara_5F_scanner::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__29_, 1, C_Lexique_sara_5F_scanner::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2A_, 1, C_Lexique_sara_5F_scanner::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2B_, 1, C_Lexique_sara_5F_scanner::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2C_, 1, C_Lexique_sara_5F_scanner::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3A_, 1, C_Lexique_sara_5F_scanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3B_, 1, C_Lexique_sara_5F_scanner::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3D_, 1, C_Lexique_sara_5F_scanner::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3F_, 1, C_Lexique_sara_5F_scanner::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__40_, 1, C_Lexique_sara_5F_scanner::kToken__40_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__5E_, 1, C_Lexique_sara_5F_scanner::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7B_, 1, C_Lexique_sara_5F_scanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7C_, 1, C_Lexique_sara_5F_scanner::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7D_, 1, C_Lexique_sara_5F_scanner::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7E_, 1, C_Lexique_sara_5F_scanner::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2A__2A_, 2, C_Lexique_sara_5F_scanner::kToken__2A__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__2D__3E_, 2, C_Lexique_sara_5F_scanner::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__3A__3D_, 2, C_Lexique_sara_5F_scanner::kToken__3A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner__7C__7C_, 2, C_Lexique_sara_5F_scanner::kToken__7C__7C_)
} ;

int32_t C_Lexique_sara_5F_scanner::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_sara_5F_scanner_delimitorsList, ktable_size_sara_5F_scanner_delimitorsList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_sara_5F_scanner_keyWordList = 23 ;

static const C_unicode_lexique_table_entry ktable_for_sara_5F_scanner_keyWordList [ktable_size_sara_5F_scanner_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_to, 2, C_Lexique_sara_5F_scanner::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_bdd, 3, C_Lexique_sara_5F_scanner::kToken_bdd),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_map, 3, C_Lexique_sara_5F_scanner::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_auto, 4, C_Lexique_sara_5F_scanner::kToken_auto),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_bool, 4, C_Lexique_sara_5F_scanner::kToken_bool),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_goto, 4, C_Lexique_sara_5F_scanner::kToken_goto),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_last, 4, C_Lexique_sara_5F_scanner::kToken_last),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_true, 4, C_Lexique_sara_5F_scanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_check, 5, C_Lexique_sara_5F_scanner::kToken_check),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_false, 5, C_Lexique_sara_5F_scanner::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_first, 5, C_Lexique_sara_5F_scanner::kToken_first),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_state, 5, C_Lexique_sara_5F_scanner::kToken_state),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_trans, 5, C_Lexique_sara_5F_scanner::kToken_trans),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_nolast, 6, C_Lexique_sara_5F_scanner::kToken_nolast),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_display, 7, C_Lexique_sara_5F_scanner::kToken_display),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_exclude, 7, C_Lexique_sara_5F_scanner::kToken_exclude),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_include, 7, C_Lexique_sara_5F_scanner::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_nofirst, 7, C_Lexique_sara_5F_scanner::kToken_nofirst),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_scenario, 8, C_Lexique_sara_5F_scanner::kToken_scenario),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_checkbool, 9, C_Lexique_sara_5F_scanner::kToken_checkbool),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_modalcompadd, 12, C_Lexique_sara_5F_scanner::kToken_modalcompadd),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_modalcompsub, 12, C_Lexique_sara_5F_scanner::kToken_modalcompsub),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_checkidentical, 14, C_Lexique_sara_5F_scanner::kToken_checkidentical)
} ;

int32_t C_Lexique_sara_5F_scanner::search_into_keyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_sara_5F_scanner_keyWordList, ktable_size_sara_5F_scanner_keyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_sara_5F_scanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_sara_5F_scanner * ptr = (const cTokenFor_sara_5F_scanner *) inTokenPtr ;
  C_String s ;
  if (ptr == nullptr) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_machineIdf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("machineIdf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_literal_5F_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_ulongValue) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_auto:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("auto") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_state:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("state") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_first:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("first") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_last:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("last") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_goto:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("goto") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_true:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("true") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_false:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("false") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nofirst:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nofirst") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nolast:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nolast") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_modalcompadd:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("modalcompadd") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_exclude:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("exclude") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_modalcompsub:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("modalcompsub") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("include") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_to:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("to") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_scenario:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("scenario") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_trans:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("trans") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_display:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("display") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bdd:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bdd") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bool:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bool") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_map:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("map") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_check:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("check") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checkbool:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("checkbool") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checkidentical:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("checkidentical") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("->") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("~") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("||") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__40_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("**") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_sara_5F_scanner::internalParseLexicalToken (cTokenFor_sara_5F_scanner & token) {
  bool loop = true ;
  token.mLexicalAttribute_identifierString.setLengthToZero () ;
  token.mLexicalAttribute_ulongValue = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7C__7C_, 2, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3A__3D_, 2, true)) {
      token.mTokenCode = kToken__3A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2D__3E_, 2, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2A__2A_, 2, true)) {
      token.mTokenCode = kToken__2A__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7E_, 1, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7C_, 1, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__5E_, 1, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__40_, 1, true)) {
      token.mTokenCode = kToken__40_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3F_, 1, true)) {
      token.mTokenCode = kToken__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3D_, 1, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3B_, 1, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2B_, 1, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__2A_, 1, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__29_, 1, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__28_, 1, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__26_, 1, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_sara_5F_scanner__21_, 1, true)) {
      token.mTokenCode = kToken__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          if (testForInputUTF32Char (TO_UNICODE ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, TO_UNICODE ('\n')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, TO_UNICODE ('\"')) ;
          }else{
            lexicalError (gLexicalMessage_sara_5F_scanner_incorrectCharInString COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE ('~'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken_literal_5F_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_sara_5F_scanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_ulongValue, gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge, gLexicalMessage_sara_5F_scanner_internalError) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_ulongValue, gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge, gLexicalMessage_sara_5F_scanner_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_literal_5F_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32CharRange (TO_UNICODE ('\v'), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\n'))) {
      }else{
        lexicalError (gLexicalMessage_sara_5F_scanner_incorrectEndOfComment COMMA_LINE_AND_SOURCE_FILE) ;
      }
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
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

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_sara_5F_scanner::parseLexicalToken (void) {
  cTokenFor_sara_5F_scanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_sara_5F_scanner::enterToken (cTokenFor_sara_5F_scanner & ioToken) {
  cTokenFor_sara_5F_scanner * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_sara_5F_scanner ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_ulongValue = ioToken.mLexicalAttribute_ulongValue ;
  enterTokenFromPointer (ptr) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_sara_5F_scanner::attributeValue_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_sara_5F_scanner::attributeValue_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_ulongValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_sara_5F_scanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_sara_5F_scanner::synthetizedAttribute_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_ulongValue) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_sara_5F_scanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("machineIdf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("auto") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("state") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("first") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("last") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("goto") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nofirst") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nolast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("modalcompadd") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("exclude") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("modalcompsub") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("to") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("scenario") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("trans") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("display") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bdd") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bool") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("check") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("checkbool") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("checkidentical") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("**") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_sara_5F_scanner (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("sara_scanner:delimitorsList") ;
  ioList.appendObject ("sara_scanner:keyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_sara_5F_scanner (const C_String & inIdentifier,
                                                      bool & ioFound,
                                                      TC_UniqueArray <C_String> & ioList) {
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

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_sara_5F_scanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_sara_5F_scanner, getKeywordsForIdentifier_sara_5F_scanner) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_sara_5F_scanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
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

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_sara_5F_scanner::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_M_5F_variablesMap::cMapElement_M_5F_variablesMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_uint & in_mIndex
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_variablesMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_variablesMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_M_5F_variablesMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_M_5F_variablesMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_M_5F_variablesMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_variablesMap * operand = (cMapElement_M_5F_variablesMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap::GALGAS_M_5F_variablesMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap::GALGAS_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap & GALGAS_M_5F_variablesMap::operator = (const GALGAS_M_5F_variablesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_variablesMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_variablesMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_uint & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_variablesMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_variablesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::add_operation (const GALGAS_M_5F_variablesMap & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result = *this ;
  cEnumerator_M_5F_variablesMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_variablesMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_uint inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_variablesMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_variablesMap_searchKey = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_variablesMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_uint & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_M_5F_variablesMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_M_5F_variablesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_variablesMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_variablesMap * p = (cMapElement_M_5F_variablesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_M_5F_variablesMap * GALGAS_M_5F_variablesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * result = (cMapElement_M_5F_variablesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_variablesMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_M_5F_variablesMap::cEnumerator_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap_2D_element cEnumerator_M_5F_variablesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return GALGAS_M_5F_variablesMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_M_5F_variablesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_M_5F_variablesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_variablesMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_uint & outArgument0) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @M_variablesMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_variablesMap ("M_variablesMap",
                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_variablesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_variablesMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_variablesMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  const GALGAS_M_5F_variablesMap * p = (const GALGAS_M_5F_variablesMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_M_5F_variablesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_variablesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_M_5F_stateMap::cMapElement_M_5F_stateMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mIndex
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_stateMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_stateMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_M_5F_stateMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_M_5F_stateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_M_5F_stateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_stateMap * operand = (cMapElement_M_5F_stateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap::GALGAS_M_5F_stateMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap::GALGAS_M_5F_stateMap (const GALGAS_M_5F_stateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap & GALGAS_M_5F_stateMap::operator = (const GALGAS_M_5F_stateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_stateMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_stateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_stateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_stateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_stateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::add_operation (const GALGAS_M_5F_stateMap & inOperand,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_stateMap result = *this ;
  cEnumerator_M_5F_stateMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_stateMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uint inArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_stateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' state has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_stateMap::setter_defineState (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_stateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' state has been already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_stateMap_searchKey = "the '%K' state is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_stateMap::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uint & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_M_5F_stateMap_searchKey
                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_M_5F_stateMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_stateMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_stateMap * p = (cMapElement_M_5F_stateMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_M_5F_stateMap * GALGAS_M_5F_stateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * result = (cMapElement_M_5F_stateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_stateMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_M_5F_stateMap::cEnumerator_M_5F_stateMap (const GALGAS_M_5F_stateMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap_2D_element cEnumerator_M_5F_stateMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return GALGAS_M_5F_stateMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_M_5F_stateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_M_5F_stateMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_stateMap::optional_searchKey (const GALGAS_string & inKey,
                                               GALGAS_uint & outArgument0) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @M_stateMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_stateMap ("M_stateMap",
                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_stateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_stateMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_stateMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  const GALGAS_M_5F_stateMap * p = (const GALGAS_M_5F_stateMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_M_5F_stateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_stateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_translationVector' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_translationVector : public cCollectionElement {
  public: GALGAS_L_5F_translationVector_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_translationVector (const GALGAS_uint & in_mTargetSlot
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_translationVector (const GALGAS_L_5F_translationVector_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_translationVector::cCollectionElement_L_5F_translationVector (const GALGAS_uint & in_mTargetSlot
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetSlot) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_translationVector::cCollectionElement_L_5F_translationVector (const GALGAS_L_5F_translationVector_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetSlot) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_translationVector::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_translationVector::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_translationVector (mObject.mProperty_mTargetSlot COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_translationVector::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetSlot" ":" ;
  mObject.mProperty_mTargetSlot.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_translationVector::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_translationVector * operand = (cCollectionElement_L_5F_translationVector *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_translationVector) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector::GALGAS_L_5F_translationVector (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector::GALGAS_L_5F_translationVector (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_translationVector  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::constructor_listWithValue (const GALGAS_uint & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_translationVector (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_translationVector::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_uint & in_mTargetSlot
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_translationVector * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_translationVector (in_mTargetSlot COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::addAssign_operation (const GALGAS_uint & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::setter_append (GALGAS_L_5F_translationVector_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_translationVector (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
        outOperand0 = p->mObject.mProperty_mTargetSlot ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::setter_popFirst (GALGAS_uint & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::setter_popLast (GALGAS_uint & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::method_first (GALGAS_uint & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::method_last (GALGAS_uint & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::add_operation (const GALGAS_L_5F_translationVector & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::plusAssign_operation (const GALGAS_L_5F_translationVector inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector::setter_setMTargetSlotAtIndex (GALGAS_uint inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetSlot = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_L_5F_translationVector::getter_mTargetSlotAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    result = p->mObject.mProperty_mTargetSlot ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_translationVector::cEnumerator_L_5F_translationVector (const GALGAS_L_5F_translationVector & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector_2D_element cEnumerator_L_5F_translationVector::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_L_5F_translationVector::current_mTargetSlot (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject.mProperty_mTargetSlot ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_translationVector generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_translationVector ("L_translationVector",
                                               nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_translationVector::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_translationVector::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_translationVector (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector result ;
  const GALGAS_L_5F_translationVector * p = (const GALGAS_L_5F_translationVector *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_L_5F_translationVector *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_translationVector", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @AC_5F_boolExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_AC_5F_boolExpression::objectCompare (const GALGAS_AC_5F_boolExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression::GALGAS_AC_5F_boolExpression (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression::GALGAS_AC_5F_boolExpression (const cPtr_AC_5F_boolExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_boolExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @AC_boolExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_AC_5F_boolExpression::cPtr_AC_5F_boolExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @AC_boolExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_boolExpression ("AC_boolExpression",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AC_5F_boolExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_boolExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AC_5F_boolExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_boolExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_AC_5F_boolExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_boolExpression result ;
  const GALGAS_AC_5F_boolExpression * p = (const GALGAS_AC_5F_boolExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AC_5F_boolExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_boolExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_AC_5F_boolExpression_2D_weak::objectCompare (const GALGAS_AC_5F_boolExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression_2D_weak::GALGAS_AC_5F_boolExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression_2D_weak & GALGAS_AC_5F_boolExpression_2D_weak::operator = (const GALGAS_AC_5F_boolExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression_2D_weak::GALGAS_AC_5F_boolExpression_2D_weak (const GALGAS_AC_5F_boolExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression_2D_weak GALGAS_AC_5F_boolExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_AC_5F_boolExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_AC_5F_boolExpression_2D_weak::bang_AC_5F_boolExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_AC_5F_boolExpression) ;
      result = GALGAS_AC_5F_boolExpression ((cPtr_AC_5F_boolExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @AC_boolExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak ("AC_boolExpression-weak",
                                                     nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AC_5F_boolExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AC_5F_boolExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_boolExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression_2D_weak GALGAS_AC_5F_boolExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_boolExpression_2D_weak result ;
  const GALGAS_AC_5F_boolExpression_2D_weak * p = (const GALGAS_AC_5F_boolExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AC_5F_boolExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_boolExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_importBoolMachine_2D_weak::objectCompare (const GALGAS_C_5F_importBoolMachine_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak::GALGAS_C_5F_importBoolMachine_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak & GALGAS_C_5F_importBoolMachine_2D_weak::operator = (const GALGAS_C_5F_importBoolMachine & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak::GALGAS_C_5F_importBoolMachine_2D_weak (const GALGAS_C_5F_importBoolMachine & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak GALGAS_C_5F_importBoolMachine_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_importBoolMachine_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine GALGAS_C_5F_importBoolMachine_2D_weak::bang_C_5F_importBoolMachine_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_importBoolMachine result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_importBoolMachine) ;
      result = GALGAS_C_5F_importBoolMachine ((cPtr_C_5F_importBoolMachine *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_importBoolMachine-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2D_weak ("C_importBoolMachine-weak",
                                                       & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_importBoolMachine_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_importBoolMachine_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importBoolMachine_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak GALGAS_C_5F_importBoolMachine_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importBoolMachine_2D_weak result ;
  const GALGAS_C_5F_importBoolMachine_2D_weak * p = (const GALGAS_C_5F_importBoolMachine_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_importBoolMachine_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importBoolMachine-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_andExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_andExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_andExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_andExpression * p = (const cPtr_C_5F_andExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_andExpression::objectCompare (const GALGAS_C_5F_andExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression::GALGAS_C_5F_andExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression::GALGAS_C_5F_andExpression (const cPtr_C_5F_andExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_andExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression GALGAS_C_5F_andExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_andExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_andExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_andExpression::setter_setMLeftExpression (GALGAS_AC_5F_boolExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_andExpression::setter_setMRightExpression (GALGAS_AC_5F_boolExpression inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_andExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_andExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_andExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_andExpression::cPtr_C_5F_andExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_andExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression ;
}

void cPtr_C_5F_andExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_andExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_andExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_andExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_andExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_andExpression ("C_andExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_andExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression GALGAS_C_5F_andExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_andExpression result ;
  const GALGAS_C_5F_andExpression * p = (const GALGAS_C_5F_andExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_andExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_andExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_andExpression_2D_weak::objectCompare (const GALGAS_C_5F_andExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression_2D_weak::GALGAS_C_5F_andExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression_2D_weak & GALGAS_C_5F_andExpression_2D_weak::operator = (const GALGAS_C_5F_andExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression_2D_weak::GALGAS_C_5F_andExpression_2D_weak (const GALGAS_C_5F_andExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression_2D_weak GALGAS_C_5F_andExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_andExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression GALGAS_C_5F_andExpression_2D_weak::bang_C_5F_andExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_andExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_andExpression) ;
      result = GALGAS_C_5F_andExpression ((cPtr_C_5F_andExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_andExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_andExpression_2D_weak ("C_andExpression-weak",
                                                   & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_andExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_andExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_andExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_andExpression_2D_weak GALGAS_C_5F_andExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_andExpression_2D_weak result ;
  const GALGAS_C_5F_andExpression_2D_weak * p = (const GALGAS_C_5F_andExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_andExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_andExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_orExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_orExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_orExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_orExpression * p = (const cPtr_C_5F_orExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_orExpression::objectCompare (const GALGAS_C_5F_orExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression::GALGAS_C_5F_orExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression::GALGAS_C_5F_orExpression (const cPtr_C_5F_orExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression GALGAS_C_5F_orExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                    const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_orExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_orExpression::setter_setMLeftExpression (GALGAS_AC_5F_boolExpression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_orExpression::setter_setMRightExpression (GALGAS_AC_5F_boolExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_orExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_orExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_orExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_orExpression::cPtr_C_5F_orExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_orExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression ;
}

void cPtr_C_5F_orExpression::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@C_orExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_orExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_orExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_orExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orExpression ("C_orExpression",
                                          & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression GALGAS_C_5F_orExpression::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orExpression result ;
  const GALGAS_C_5F_orExpression * p = (const GALGAS_C_5F_orExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_orExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_orExpression_2D_weak::objectCompare (const GALGAS_C_5F_orExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression_2D_weak::GALGAS_C_5F_orExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression_2D_weak & GALGAS_C_5F_orExpression_2D_weak::operator = (const GALGAS_C_5F_orExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression_2D_weak::GALGAS_C_5F_orExpression_2D_weak (const GALGAS_C_5F_orExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression_2D_weak GALGAS_C_5F_orExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_orExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression GALGAS_C_5F_orExpression_2D_weak::bang_C_5F_orExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_orExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_orExpression) ;
      result = GALGAS_C_5F_orExpression ((cPtr_C_5F_orExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_orExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orExpression_2D_weak ("C_orExpression-weak",
                                                  & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_orExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_orExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orExpression_2D_weak GALGAS_C_5F_orExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orExpression_2D_weak result ;
  const GALGAS_C_5F_orExpression_2D_weak * p = (const GALGAS_C_5F_orExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_orExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_xorExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_xorExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_xorExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_xorExpression * p = (const cPtr_C_5F_xorExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_xorExpression::objectCompare (const GALGAS_C_5F_xorExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression::GALGAS_C_5F_xorExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression::GALGAS_C_5F_xorExpression (const cPtr_C_5F_xorExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_xorExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression GALGAS_C_5F_xorExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_xorExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_xorExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_xorExpression::setter_setMLeftExpression (GALGAS_AC_5F_boolExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_xorExpression::setter_setMRightExpression (GALGAS_AC_5F_boolExpression inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_xorExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_xorExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_xorExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_xorExpression::cPtr_C_5F_xorExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_xorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression ;
}

void cPtr_C_5F_xorExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_xorExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_xorExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_xorExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_xorExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_xorExpression ("C_xorExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_xorExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression GALGAS_C_5F_xorExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_xorExpression result ;
  const GALGAS_C_5F_xorExpression * p = (const GALGAS_C_5F_xorExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_xorExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_xorExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_xorExpression_2D_weak::objectCompare (const GALGAS_C_5F_xorExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression_2D_weak::GALGAS_C_5F_xorExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression_2D_weak & GALGAS_C_5F_xorExpression_2D_weak::operator = (const GALGAS_C_5F_xorExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression_2D_weak::GALGAS_C_5F_xorExpression_2D_weak (const GALGAS_C_5F_xorExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression_2D_weak GALGAS_C_5F_xorExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_xorExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression GALGAS_C_5F_xorExpression_2D_weak::bang_C_5F_xorExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_xorExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_xorExpression) ;
      result = GALGAS_C_5F_xorExpression ((cPtr_C_5F_xorExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_xorExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_xorExpression_2D_weak ("C_xorExpression-weak",
                                                   & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_xorExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_xorExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_xorExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_xorExpression_2D_weak GALGAS_C_5F_xorExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_xorExpression_2D_weak result ;
  const GALGAS_C_5F_xorExpression_2D_weak * p = (const GALGAS_C_5F_xorExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_xorExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_xorExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_impliesExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_impliesExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_impliesExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_impliesExpression * p = (const cPtr_C_5F_impliesExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_impliesExpression::objectCompare (const GALGAS_C_5F_impliesExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression::GALGAS_C_5F_impliesExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression::GALGAS_C_5F_impliesExpression (const cPtr_C_5F_impliesExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_impliesExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression GALGAS_C_5F_impliesExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                              const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_impliesExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_impliesExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_impliesExpression::setter_setMLeftExpression (GALGAS_AC_5F_boolExpression inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_impliesExpression::setter_setMRightExpression (GALGAS_AC_5F_boolExpression inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_impliesExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_impliesExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_impliesExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_impliesExpression::cPtr_C_5F_impliesExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                          const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_impliesExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression ;
}

void cPtr_C_5F_impliesExpression::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@C_impliesExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_impliesExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_impliesExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_impliesExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_impliesExpression ("C_impliesExpression",
                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_impliesExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression GALGAS_C_5F_impliesExpression::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_impliesExpression result ;
  const GALGAS_C_5F_impliesExpression * p = (const GALGAS_C_5F_impliesExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_impliesExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_impliesExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_impliesExpression_2D_weak::objectCompare (const GALGAS_C_5F_impliesExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression_2D_weak::GALGAS_C_5F_impliesExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression_2D_weak & GALGAS_C_5F_impliesExpression_2D_weak::operator = (const GALGAS_C_5F_impliesExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression_2D_weak::GALGAS_C_5F_impliesExpression_2D_weak (const GALGAS_C_5F_impliesExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression_2D_weak GALGAS_C_5F_impliesExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_impliesExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression GALGAS_C_5F_impliesExpression_2D_weak::bang_C_5F_impliesExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_impliesExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_impliesExpression) ;
      result = GALGAS_C_5F_impliesExpression ((cPtr_C_5F_impliesExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_impliesExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_impliesExpression_2D_weak ("C_impliesExpression-weak",
                                                       & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_impliesExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_impliesExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_impliesExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_impliesExpression_2D_weak GALGAS_C_5F_impliesExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_impliesExpression_2D_weak result ;
  const GALGAS_C_5F_impliesExpression_2D_weak * p = (const GALGAS_C_5F_impliesExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_impliesExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_impliesExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_equalExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_equalExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_equalExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_equalExpression * p = (const cPtr_C_5F_equalExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_equalExpression::objectCompare (const GALGAS_C_5F_equalExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression::GALGAS_C_5F_equalExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression::GALGAS_C_5F_equalExpression (const cPtr_C_5F_equalExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_equalExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression GALGAS_C_5F_equalExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                          const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_equalExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_equalExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_equalExpression::setter_setMLeftExpression (GALGAS_AC_5F_boolExpression inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_equalExpression::setter_setMRightExpression (GALGAS_AC_5F_boolExpression inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_equalExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_equalExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_equalExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_equalExpression::cPtr_C_5F_equalExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                      const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_equalExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression ;
}

void cPtr_C_5F_equalExpression::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@C_equalExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_equalExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_equalExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_equalExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_equalExpression ("C_equalExpression",
                                             & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_equalExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression GALGAS_C_5F_equalExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_equalExpression result ;
  const GALGAS_C_5F_equalExpression * p = (const GALGAS_C_5F_equalExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_equalExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_equalExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_equalExpression_2D_weak::objectCompare (const GALGAS_C_5F_equalExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression_2D_weak::GALGAS_C_5F_equalExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression_2D_weak & GALGAS_C_5F_equalExpression_2D_weak::operator = (const GALGAS_C_5F_equalExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression_2D_weak::GALGAS_C_5F_equalExpression_2D_weak (const GALGAS_C_5F_equalExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression_2D_weak GALGAS_C_5F_equalExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_equalExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression GALGAS_C_5F_equalExpression_2D_weak::bang_C_5F_equalExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_equalExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_equalExpression) ;
      result = GALGAS_C_5F_equalExpression ((cPtr_C_5F_equalExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_equalExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_equalExpression_2D_weak ("C_equalExpression-weak",
                                                     & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_equalExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_equalExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_equalExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_equalExpression_2D_weak GALGAS_C_5F_equalExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_equalExpression_2D_weak result ;
  const GALGAS_C_5F_equalExpression_2D_weak * p = (const GALGAS_C_5F_equalExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_equalExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_equalExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_notExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_notExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_notExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_notExpression * p = (const cPtr_C_5F_notExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_notExpression::objectCompare (const GALGAS_C_5F_notExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression::GALGAS_C_5F_notExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression::GALGAS_C_5F_notExpression (const cPtr_C_5F_notExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_notExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression GALGAS_C_5F_notExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_notExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_notExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_notExpression::setter_setMExpression (GALGAS_AC_5F_boolExpression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_notExpression * p = (cPtr_C_5F_notExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_notExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_notExpression * p = (cPtr_C_5F_notExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_notExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_notExpression::cPtr_C_5F_notExpression (const GALGAS_AC_5F_boolExpression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_notExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

void cPtr_C_5F_notExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_notExpression:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_notExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_notExpression (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_notExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_notExpression ("C_notExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_notExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_notExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_notExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression GALGAS_C_5F_notExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_notExpression result ;
  const GALGAS_C_5F_notExpression * p = (const GALGAS_C_5F_notExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_notExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_notExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_notExpression_2D_weak::objectCompare (const GALGAS_C_5F_notExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression_2D_weak::GALGAS_C_5F_notExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression_2D_weak & GALGAS_C_5F_notExpression_2D_weak::operator = (const GALGAS_C_5F_notExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression_2D_weak::GALGAS_C_5F_notExpression_2D_weak (const GALGAS_C_5F_notExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression_2D_weak GALGAS_C_5F_notExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_notExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression GALGAS_C_5F_notExpression_2D_weak::bang_C_5F_notExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_notExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_notExpression) ;
      result = GALGAS_C_5F_notExpression ((cPtr_C_5F_notExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_notExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_notExpression_2D_weak ("C_notExpression-weak",
                                                   & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_notExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_notExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_notExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_notExpression_2D_weak GALGAS_C_5F_notExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_notExpression_2D_weak result ;
  const GALGAS_C_5F_notExpression_2D_weak * p = (const GALGAS_C_5F_notExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_notExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_notExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_VariableExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_VariableExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mInputVarIndex.printNonNullClassInstanceProperties ("mInputVarIndex") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_VariableExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_VariableExpression * p = (const cPtr_C_5F_VariableExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mInputVarIndex.objectCompare (p->mProperty_mInputVarIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_VariableExpression::objectCompare (const GALGAS_C_5F_VariableExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression::GALGAS_C_5F_VariableExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_VariableExpression::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression::GALGAS_C_5F_VariableExpression (const cPtr_C_5F_VariableExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_VariableExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::constructor_new (const GALGAS_uint & inAttribute_mInputVarIndex
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_VariableExpression result ;
  if (inAttribute_mInputVarIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_VariableExpression (inAttribute_mInputVarIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_VariableExpression::setter_setMInputVarIndex (GALGAS_uint inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_VariableExpression * p = (cPtr_C_5F_VariableExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
    p->mProperty_mInputVarIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_VariableExpression::readProperty_mInputVarIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_VariableExpression * p = (cPtr_C_5F_VariableExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
    return p->mProperty_mInputVarIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_VariableExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_VariableExpression::cPtr_C_5F_VariableExpression (const GALGAS_uint & in_mInputVarIndex
                                                            COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mInputVarIndex (in_mInputVarIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_VariableExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

void cPtr_C_5F_VariableExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@C_VariableExpression:" ;
  mProperty_mInputVarIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_VariableExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_VariableExpression (mProperty_mInputVarIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_VariableExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_VariableExpression ("C_VariableExpression",
                                                & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_VariableExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_VariableExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_VariableExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_VariableExpression result ;
  const GALGAS_C_5F_VariableExpression * p = (const GALGAS_C_5F_VariableExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_VariableExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_VariableExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_VariableExpression_2D_weak::objectCompare (const GALGAS_C_5F_VariableExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression_2D_weak::GALGAS_C_5F_VariableExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression_2D_weak & GALGAS_C_5F_VariableExpression_2D_weak::operator = (const GALGAS_C_5F_VariableExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression_2D_weak::GALGAS_C_5F_VariableExpression_2D_weak (const GALGAS_C_5F_VariableExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression_2D_weak GALGAS_C_5F_VariableExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_VariableExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression_2D_weak::bang_C_5F_VariableExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_VariableExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_VariableExpression) ;
      result = GALGAS_C_5F_VariableExpression ((cPtr_C_5F_VariableExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_VariableExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_VariableExpression_2D_weak ("C_VariableExpression-weak",
                                                        & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_VariableExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_VariableExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_VariableExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_VariableExpression_2D_weak GALGAS_C_5F_VariableExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_VariableExpression_2D_weak result ;
  const GALGAS_C_5F_VariableExpression_2D_weak * p = (const GALGAS_C_5F_VariableExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_VariableExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_VariableExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_trueExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_trueExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_trueExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_trueExpression::objectCompare (const GALGAS_C_5F_trueExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression::GALGAS_C_5F_trueExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_trueExpression::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression::GALGAS_C_5F_trueExpression (const cPtr_C_5F_trueExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trueExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_C_5F_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_trueExpression (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_trueExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_trueExpression::cPtr_C_5F_trueExpression (LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

void cPtr_C_5F_trueExpression::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "[@C_trueExpression]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_trueExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_trueExpression (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_trueExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trueExpression ("C_trueExpression",
                                            & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trueExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trueExpression result ;
  const GALGAS_C_5F_trueExpression * p = (const GALGAS_C_5F_trueExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_trueExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trueExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_trueExpression_2D_weak::objectCompare (const GALGAS_C_5F_trueExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression_2D_weak::GALGAS_C_5F_trueExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression_2D_weak & GALGAS_C_5F_trueExpression_2D_weak::operator = (const GALGAS_C_5F_trueExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression_2D_weak::GALGAS_C_5F_trueExpression_2D_weak (const GALGAS_C_5F_trueExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression_2D_weak GALGAS_C_5F_trueExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_trueExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression_2D_weak::bang_C_5F_trueExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_trueExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_trueExpression) ;
      result = GALGAS_C_5F_trueExpression ((cPtr_C_5F_trueExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_trueExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trueExpression_2D_weak ("C_trueExpression-weak",
                                                    & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_trueExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_trueExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trueExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trueExpression_2D_weak GALGAS_C_5F_trueExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trueExpression_2D_weak result ;
  const GALGAS_C_5F_trueExpression_2D_weak * p = (const GALGAS_C_5F_trueExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_trueExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trueExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_falseExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_falseExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_falseExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_falseExpression::objectCompare (const GALGAS_C_5F_falseExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression::GALGAS_C_5F_falseExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_falseExpression::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression::GALGAS_C_5F_falseExpression (const cPtr_C_5F_falseExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_falseExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_C_5F_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_falseExpression (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_falseExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_falseExpression::cPtr_C_5F_falseExpression (LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

void cPtr_C_5F_falseExpression::description (C_String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString << "[@C_falseExpression]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_falseExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_falseExpression (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_falseExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_falseExpression ("C_falseExpression",
                                             & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_falseExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_falseExpression result ;
  const GALGAS_C_5F_falseExpression * p = (const GALGAS_C_5F_falseExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_falseExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_falseExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_falseExpression_2D_weak::objectCompare (const GALGAS_C_5F_falseExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression_2D_weak::GALGAS_C_5F_falseExpression_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression_2D_weak & GALGAS_C_5F_falseExpression_2D_weak::operator = (const GALGAS_C_5F_falseExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression_2D_weak::GALGAS_C_5F_falseExpression_2D_weak (const GALGAS_C_5F_falseExpression & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression_2D_weak GALGAS_C_5F_falseExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_falseExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression_2D_weak::bang_C_5F_falseExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_falseExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_falseExpression) ;
      result = GALGAS_C_5F_falseExpression ((cPtr_C_5F_falseExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_falseExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_falseExpression_2D_weak ("C_falseExpression-weak",
                                                     & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_falseExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_falseExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_falseExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_falseExpression_2D_weak GALGAS_C_5F_falseExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_falseExpression_2D_weak result ;
  const GALGAS_C_5F_falseExpression_2D_weak * p = (const GALGAS_C_5F_falseExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_falseExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_falseExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_transitionDefinition' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_transitionDefinition : public cCollectionElement {
  public: GALGAS_L_5F_transitionDefinition_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_transitionDefinition (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                        const GALGAS_location & in_mEndOfExpression,
                                                        const GALGAS_uint & in_mTargetStateIndex
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_transitionDefinition::cCollectionElement_L_5F_transitionDefinition (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                                                            const GALGAS_location & in_mEndOfExpression,
                                                                                            const GALGAS_uint & in_mTargetStateIndex
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActionExpression, in_mEndOfExpression, in_mTargetStateIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_transitionDefinition::cCollectionElement_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActionExpression, inElement.mProperty_mEndOfExpression, inElement.mProperty_mTargetStateIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_transitionDefinition::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_transitionDefinition::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_transitionDefinition (mObject.mProperty_mActionExpression, mObject.mProperty_mEndOfExpression, mObject.mProperty_mTargetStateIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_transitionDefinition::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionExpression" ":" ;
  mObject.mProperty_mActionExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpression" ":" ;
  mObject.mProperty_mEndOfExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateIndex" ":" ;
  mObject.mProperty_mTargetStateIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_transitionDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_transitionDefinition * operand = (cCollectionElement_L_5F_transitionDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_transitionDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition::GALGAS_L_5F_transitionDefinition (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition::GALGAS_L_5F_transitionDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_transitionDefinition  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::constructor_listWithValue (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                              const GALGAS_location & inOperand1,
                                                                                              const GALGAS_uint & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_L_5F_transitionDefinition (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_transitionDefinition::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                                  const GALGAS_location & in_mEndOfExpression,
                                                                  const GALGAS_uint & in_mTargetStateIndex
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (in_mActionExpression,
                                                               in_mEndOfExpression,
                                                               in_mTargetStateIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::addAssign_operation (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                            const GALGAS_location & inOperand1,
                                                            const GALGAS_uint & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_append (GALGAS_L_5F_transitionDefinition_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_insertAtIndex (const GALGAS_AC_5F_boolExpression inOperand0,
                                                             const GALGAS_location inOperand1,
                                                             const GALGAS_uint inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_removeAtIndex (GALGAS_AC_5F_boolExpression & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             GALGAS_uint & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
        outOperand0 = p->mObject.mProperty_mActionExpression ;
        outOperand1 = p->mObject.mProperty_mEndOfExpression ;
        outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_popFirst (GALGAS_AC_5F_boolExpression & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        GALGAS_uint & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    outOperand0 = p->mObject.mProperty_mActionExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_popLast (GALGAS_AC_5F_boolExpression & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       GALGAS_uint & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    outOperand0 = p->mObject.mProperty_mActionExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::method_first (GALGAS_AC_5F_boolExpression & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     GALGAS_uint & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    outOperand0 = p->mObject.mProperty_mActionExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::method_last (GALGAS_AC_5F_boolExpression & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    GALGAS_uint & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    outOperand0 = p->mObject.mProperty_mActionExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::add_operation (const GALGAS_L_5F_transitionDefinition & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::plusAssign_operation (const GALGAS_L_5F_transitionDefinition inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_setMActionExpressionAtIndex (GALGAS_AC_5F_boolExpression inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActionExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_L_5F_transitionDefinition::getter_mActionExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_AC_5F_boolExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mActionExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_setMEndOfExpressionAtIndex (GALGAS_location inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_L_5F_transitionDefinition::getter_mEndOfExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition::setter_setMTargetStateIndexAtIndex (GALGAS_uint inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetStateIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_L_5F_transitionDefinition::getter_mTargetStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mTargetStateIndex ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_transitionDefinition::cEnumerator_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition_2D_element cEnumerator_L_5F_transitionDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression cEnumerator_L_5F_transitionDefinition::current_mActionExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mActionExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_L_5F_transitionDefinition::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mEndOfExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_L_5F_transitionDefinition::current_mTargetStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mTargetStateIndex ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_transitionDefinition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_transitionDefinition ("L_transitionDefinition",
                                                  nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_transitionDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_transitionDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_transitionDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition result ;
  const GALGAS_L_5F_transitionDefinition * p = (const GALGAS_L_5F_transitionDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_L_5F_transitionDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_transitionDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_stateDefinition' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_stateDefinition : public cCollectionElement {
  public: GALGAS_L_5F_stateDefinition_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_stateDefinition (const GALGAS_uint & in_mStateIndex,
                                                   const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                   const GALGAS_location & in_mEndOfStateExpression,
                                                   const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_stateDefinition::cCollectionElement_L_5F_stateDefinition (const GALGAS_uint & in_mStateIndex,
                                                                                  const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                                                  const GALGAS_location & in_mEndOfStateExpression,
                                                                                  const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateExpression, in_mEndOfStateExpression, in_mTransitionsList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_stateDefinition::cCollectionElement_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStateIndex, inElement.mProperty_mStateExpression, inElement.mProperty_mEndOfStateExpression, inElement.mProperty_mTransitionsList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_stateDefinition::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_stateDefinition::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_stateDefinition (mObject.mProperty_mStateIndex, mObject.mProperty_mStateExpression, mObject.mProperty_mEndOfStateExpression, mObject.mProperty_mTransitionsList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_stateDefinition::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mObject.mProperty_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateExpression" ":" ;
  mObject.mProperty_mStateExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfStateExpression" ":" ;
  mObject.mProperty_mEndOfStateExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionsList" ":" ;
  mObject.mProperty_mTransitionsList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_stateDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_stateDefinition * operand = (cCollectionElement_L_5F_stateDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_stateDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition::GALGAS_L_5F_stateDefinition (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition::GALGAS_L_5F_stateDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_stateDefinition  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_AC_5F_boolExpression & inOperand1,
                                                                                    const GALGAS_location & inOperand2,
                                                                                    const GALGAS_L_5F_transitionDefinition & inOperand3
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_L_5F_stateDefinition (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_stateDefinition::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_uint & in_mStateIndex,
                                                             const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                             const GALGAS_location & in_mEndOfStateExpression,
                                                             const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_stateDefinition (in_mStateIndex,
                                                          in_mStateExpression,
                                                          in_mEndOfStateExpression,
                                                          in_mTransitionsList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::addAssign_operation (const GALGAS_uint & inOperand0,
                                                       const GALGAS_AC_5F_boolExpression & inOperand1,
                                                       const GALGAS_location & inOperand2,
                                                       const GALGAS_L_5F_transitionDefinition & inOperand3
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_append (GALGAS_L_5F_stateDefinition_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                        const GALGAS_AC_5F_boolExpression inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_L_5F_transitionDefinition inOperand3,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                        GALGAS_AC_5F_boolExpression & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        GALGAS_L_5F_transitionDefinition & outOperand3,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
        outOperand0 = p->mObject.mProperty_mStateIndex ;
        outOperand1 = p->mObject.mProperty_mStateExpression ;
        outOperand2 = p->mObject.mProperty_mEndOfStateExpression ;
        outOperand3 = p->mObject.mProperty_mTransitionsList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_popFirst (GALGAS_uint & outOperand0,
                                                   GALGAS_AC_5F_boolExpression & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   GALGAS_L_5F_transitionDefinition & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfStateExpression ;
    outOperand3 = p->mObject.mProperty_mTransitionsList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_popLast (GALGAS_uint & outOperand0,
                                                  GALGAS_AC_5F_boolExpression & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  GALGAS_L_5F_transitionDefinition & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfStateExpression ;
    outOperand3 = p->mObject.mProperty_mTransitionsList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::method_first (GALGAS_uint & outOperand0,
                                                GALGAS_AC_5F_boolExpression & outOperand1,
                                                GALGAS_location & outOperand2,
                                                GALGAS_L_5F_transitionDefinition & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfStateExpression ;
    outOperand3 = p->mObject.mProperty_mTransitionsList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::method_last (GALGAS_uint & outOperand0,
                                               GALGAS_AC_5F_boolExpression & outOperand1,
                                               GALGAS_location & outOperand2,
                                               GALGAS_L_5F_transitionDefinition & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfStateExpression ;
    outOperand3 = p->mObject.mProperty_mTransitionsList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::add_operation (const GALGAS_L_5F_stateDefinition & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::plusAssign_operation (const GALGAS_L_5F_stateDefinition inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_setMStateIndexAtIndex (GALGAS_uint inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_L_5F_stateDefinition::getter_mStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mStateIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_setMStateExpressionAtIndex (GALGAS_AC_5F_boolExpression inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_L_5F_stateDefinition::getter_mStateExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_AC_5F_boolExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mStateExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_setMEndOfStateExpressionAtIndex (GALGAS_location inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfStateExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_L_5F_stateDefinition::getter_mEndOfStateExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mEndOfStateExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition::setter_setMTransitionsListAtIndex (GALGAS_L_5F_transitionDefinition inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTransitionsList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_stateDefinition::getter_mTransitionsListAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_L_5F_transitionDefinition result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mTransitionsList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_stateDefinition::cEnumerator_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition_2D_element cEnumerator_L_5F_stateDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_L_5F_stateDefinition::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression cEnumerator_L_5F_stateDefinition::current_mStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_L_5F_stateDefinition::current_mEndOfStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mEndOfStateExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition cEnumerator_L_5F_stateDefinition::current_mTransitionsList (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mTransitionsList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_stateDefinition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_stateDefinition ("L_stateDefinition",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_stateDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_stateDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_stateDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition result ;
  const GALGAS_L_5F_stateDefinition * p = (const GALGAS_L_5F_stateDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_L_5F_stateDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_stateDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_statesDefinitionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_statesDefinitionList : public cCollectionElement {
  public: GALGAS_L_5F_statesDefinitionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_statesDefinitionList (const GALGAS_uint & in_mStateIndex,
                                                        const GALGAS_location & in_mStateLocation
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_statesDefinitionList::cCollectionElement_L_5F_statesDefinitionList (const GALGAS_uint & in_mStateIndex,
                                                                                            const GALGAS_location & in_mStateLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_statesDefinitionList::cCollectionElement_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStateIndex, inElement.mProperty_mStateLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_statesDefinitionList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_statesDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_statesDefinitionList (mObject.mProperty_mStateIndex, mObject.mProperty_mStateLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_statesDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mObject.mProperty_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateLocation" ":" ;
  mObject.mProperty_mStateLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_statesDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_statesDefinitionList * operand = (cCollectionElement_L_5F_statesDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_statesDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList::GALGAS_L_5F_statesDefinitionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList::GALGAS_L_5F_statesDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_statesDefinitionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                              const GALGAS_location & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_statesDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_statesDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_uint & in_mStateIndex,
                                                                  const GALGAS_location & in_mStateLocation
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (in_mStateIndex,
                                                               in_mStateLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                            const GALGAS_location & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::setter_append (GALGAS_L_5F_statesDefinitionList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                             const GALGAS_location inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mStateIndex ;
        outOperand1 = p->mObject.mProperty_mStateLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::setter_popFirst (GALGAS_uint & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::setter_popLast (GALGAS_uint & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::method_first (GALGAS_uint & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::method_last (GALGAS_uint & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::add_operation (const GALGAS_L_5F_statesDefinitionList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::plusAssign_operation (const GALGAS_L_5F_statesDefinitionList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::setter_setMStateIndexAtIndex (GALGAS_uint inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_L_5F_statesDefinitionList::getter_mStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mProperty_mStateIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList::setter_setMStateLocationAtIndex (GALGAS_location inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_L_5F_statesDefinitionList::getter_mStateLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mProperty_mStateLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_statesDefinitionList::cEnumerator_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList_2D_element cEnumerator_L_5F_statesDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_L_5F_statesDefinitionList::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_L_5F_statesDefinitionList::current_mStateLocation (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_statesDefinitionList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ("L_statesDefinitionList",
                                                  nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_statesDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_statesDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_statesDefinitionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList result ;
  const GALGAS_L_5F_statesDefinitionList * p = (const GALGAS_L_5F_statesDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_L_5F_statesDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_statesDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @AC_5F_machineDefinition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_AC_5F_machineDefinition::objectCompare (const GALGAS_AC_5F_machineDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition::GALGAS_AC_5F_machineDefinition (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition::GALGAS_AC_5F_machineDefinition (const cPtr_AC_5F_machineDefinition * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_machineDefinition) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @AC_machineDefinition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_AC_5F_machineDefinition::cPtr_AC_5F_machineDefinition (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @AC_machineDefinition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_machineDefinition ("AC_machineDefinition",
                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AC_5F_machineDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_machineDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AC_5F_machineDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_machineDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_AC_5F_machineDefinition::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_machineDefinition result ;
  const GALGAS_AC_5F_machineDefinition * p = (const GALGAS_AC_5F_machineDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AC_5F_machineDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_machineDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_AC_5F_machineDefinition_2D_weak::objectCompare (const GALGAS_AC_5F_machineDefinition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition_2D_weak::GALGAS_AC_5F_machineDefinition_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition_2D_weak & GALGAS_AC_5F_machineDefinition_2D_weak::operator = (const GALGAS_AC_5F_machineDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition_2D_weak::GALGAS_AC_5F_machineDefinition_2D_weak (const GALGAS_AC_5F_machineDefinition & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition_2D_weak GALGAS_AC_5F_machineDefinition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_AC_5F_machineDefinition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_AC_5F_machineDefinition_2D_weak::bang_AC_5F_machineDefinition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_AC_5F_machineDefinition) ;
      result = GALGAS_AC_5F_machineDefinition ((cPtr_AC_5F_machineDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @AC_machineDefinition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak ("AC_machineDefinition-weak",
                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AC_5F_machineDefinition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AC_5F_machineDefinition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_machineDefinition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition_2D_weak GALGAS_AC_5F_machineDefinition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_machineDefinition_2D_weak result ;
  const GALGAS_AC_5F_machineDefinition_2D_weak * p = (const GALGAS_AC_5F_machineDefinition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AC_5F_machineDefinition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_machineDefinition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_M_5F_modesMap::cMapElement_M_5F_modesMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mIndex,
                                                      const GALGAS_AC_5F_machineDefinition & in_mModeDefinition
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mModeDefinition (in_mModeDefinition) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_modesMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_modesMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_M_5F_modesMap (mProperty_lkey, mProperty_mIndex, mProperty_mModeDefinition COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_M_5F_modesMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModeDefinition" ":" ;
  mProperty_mModeDefinition.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_M_5F_modesMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_modesMap * operand = (cMapElement_M_5F_modesMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModeDefinition.objectCompare (operand->mProperty_mModeDefinition) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap::GALGAS_M_5F_modesMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap::GALGAS_M_5F_modesMap (const GALGAS_M_5F_modesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap & GALGAS_M_5F_modesMap::operator = (const GALGAS_M_5F_modesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_modesMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_modesMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & inArgument0,
                                                const GALGAS_AC_5F_machineDefinition & inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_modesMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_modesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::add_operation (const GALGAS_M_5F_modesMap & inOperand,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result = *this ;
  cEnumerator_M_5F_modesMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mModeDefinition (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_modesMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uint inArgument0,
                                             GALGAS_AC_5F_machineDefinition inArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_modesMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' mode has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_modesMap_searchKey = "the '%K' mode is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_modesMap::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uint & outArgument0,
                                             GALGAS_AC_5F_machineDefinition & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_M_5F_modesMap_searchKey
                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mModeDefinition ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_M_5F_modesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_M_5F_modesMap::getter_mModeDefinitionForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GALGAS_AC_5F_machineDefinition result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mProperty_mModeDefinition ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_modesMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_modesMap::setter_setMModeDefinitionForKey (GALGAS_AC_5F_machineDefinition inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mProperty_mModeDefinition = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_M_5F_modesMap * GALGAS_M_5F_modesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * result = (cMapElement_M_5F_modesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_modesMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_M_5F_modesMap::cEnumerator_M_5F_modesMap (const GALGAS_M_5F_modesMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap_2D_element cEnumerator_M_5F_modesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return GALGAS_M_5F_modesMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mModeDefinition) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_M_5F_modesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_M_5F_modesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition cEnumerator_M_5F_modesMap::current_mModeDefinition (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mModeDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_modesMap::optional_searchKey (const GALGAS_string & inKey,
                                               GALGAS_uint & outArgument0,
                                               GALGAS_AC_5F_machineDefinition & outArgument1) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mModeDefinition ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @M_modesMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_modesMap ("M_modesMap",
                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_modesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_modesMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_modesMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  const GALGAS_M_5F_modesMap * p = (const GALGAS_M_5F_modesMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_M_5F_modesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_modesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@ListForModes' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_ListForModes : public cCollectionElement {
  public: GALGAS_ListForModes_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_ListForModes (const GALGAS_uint & in_mSourceMode,
                                           const GALGAS_uint & in_mTargetMode
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ListForModes (const GALGAS_ListForModes_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_ListForModes::cCollectionElement_ListForModes (const GALGAS_uint & in_mSourceMode,
                                                                  const GALGAS_uint & in_mTargetMode
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSourceMode, in_mTargetMode) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_ListForModes::cCollectionElement_ListForModes (const GALGAS_ListForModes_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSourceMode, inElement.mProperty_mTargetMode) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_ListForModes::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ListForModes::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ListForModes (mObject.mProperty_mSourceMode, mObject.mProperty_mTargetMode COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_ListForModes::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceMode" ":" ;
  mObject.mProperty_mSourceMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetMode" ":" ;
  mObject.mProperty_mTargetMode.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ListForModes::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ListForModes * operand = (cCollectionElement_ListForModes *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ListForModes) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes::GALGAS_ListForModes (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes::GALGAS_ListForModes (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_ListForModes::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ListForModes  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_ListForModes::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_uint & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ListForModes result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ListForModes (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ListForModes::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_uint & in_mSourceMode,
                                                     const GALGAS_uint & in_mTargetMode
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = nullptr ;
  macroMyNew (p, cCollectionElement_ListForModes (in_mSourceMode,
                                                  in_mTargetMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::addAssign_operation (const GALGAS_uint & inOperand0,
                                               const GALGAS_uint & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::setter_append (GALGAS_ListForModes_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ListForModes (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                const GALGAS_uint inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ListForModes) ;
        outOperand0 = p->mObject.mProperty_mSourceMode ;
        outOperand1 = p->mObject.mProperty_mTargetMode ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::setter_popFirst (GALGAS_uint & outOperand0,
                                           GALGAS_uint & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::setter_popLast (GALGAS_uint & outOperand0,
                                          GALGAS_uint & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::method_first (GALGAS_uint & outOperand0,
                                        GALGAS_uint & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::method_last (GALGAS_uint & outOperand0,
                                       GALGAS_uint & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_ListForModes::add_operation (const GALGAS_ListForModes & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_ListForModes::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_ListForModes::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_ListForModes::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::plusAssign_operation (const GALGAS_ListForModes inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::setter_setMSourceModeAtIndex (GALGAS_uint inOperand,
                                                        GALGAS_uint inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ListForModes::getter_mSourceModeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mProperty_mSourceMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes::setter_setMTargetModeAtIndex (GALGAS_uint inOperand,
                                                        GALGAS_uint inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ListForModes::getter_mTargetModeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mProperty_mTargetMode ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ListForModes::cEnumerator_ListForModes (const GALGAS_ListForModes & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes_2D_element cEnumerator_ListForModes::current (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ListForModes::current_mSourceMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mSourceMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ListForModes::current_mTargetMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mTargetMode ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @ListForModes generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ListForModes ("ListForModes",
                                     nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ListForModes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ListForModes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ListForModes (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_ListForModes::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ListForModes result ;
  const GALGAS_ListForModes * p = (const GALGAS_ListForModes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ListForModes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ListForModes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_substractiveModalCompositionComponent reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_substractiveModalCompositionComponent::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mModeMap.printNonNullClassInstanceProperties ("mModeMap") ;
    mProperty_mExclusionList.printNonNullClassInstanceProperties ("mExclusionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_substractiveModalCompositionComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_substractiveModalCompositionComponent * p = (const cPtr_C_5F_substractiveModalCompositionComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
  if (kOperandEqual == result) {
    result = mProperty_mModeMap.objectCompare (p->mProperty_mModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExclusionList.objectCompare (p->mProperty_mExclusionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_substractiveModalCompositionComponent::objectCompare (const GALGAS_C_5F_substractiveModalCompositionComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent::GALGAS_C_5F_substractiveModalCompositionComponent (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                             GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent::GALGAS_C_5F_substractiveModalCompositionComponent (const cPtr_C_5F_substractiveModalCompositionComponent * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_substractiveModalCompositionComponent) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                                      const GALGAS_ListForModes & inAttribute_mExclusionList
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent result ;
  if (inAttribute_mModeMap.isValid () && inAttribute_mExclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_substractiveModalCompositionComponent (inAttribute_mModeMap, inAttribute_mExclusionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_substractiveModalCompositionComponent::setter_setMModeMap (GALGAS_M_5F_modesMap inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_substractiveModalCompositionComponent::setter_setMExclusionList (GALGAS_ListForModes inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    p->mProperty_mExclusionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_C_5F_substractiveModalCompositionComponent::readProperty_mModeMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    return p->mProperty_mModeMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_C_5F_substractiveModalCompositionComponent::readProperty_mExclusionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ListForModes () ;
  }else{
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    return p->mProperty_mExclusionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_substractiveModalCompositionComponent class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_substractiveModalCompositionComponent::cPtr_C_5F_substractiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                                  const GALGAS_ListForModes & in_mExclusionList
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mModeMap (in_mModeMap),
mProperty_mExclusionList (in_mExclusionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_substractiveModalCompositionComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;
}

void cPtr_C_5F_substractiveModalCompositionComponent::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@C_substractiveModalCompositionComponent:" ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExclusionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_substractiveModalCompositionComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_substractiveModalCompositionComponent (mProperty_mModeMap, mProperty_mExclusionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_substractiveModalCompositionComponent generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ("C_substractiveModalCompositionComponent",
                                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_substractiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_substractiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_substractiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent result ;
  const GALGAS_C_5F_substractiveModalCompositionComponent * p = (const GALGAS_C_5F_substractiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_substractiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_substractiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::objectCompare (const GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak & GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::operator = (const GALGAS_C_5F_substractiveModalCompositionComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak (const GALGAS_C_5F_substractiveModalCompositionComponent & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::bang_C_5F_substractiveModalCompositionComponent_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_substractiveModalCompositionComponent result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_substractiveModalCompositionComponent) ;
      result = GALGAS_C_5F_substractiveModalCompositionComponent ((cPtr_C_5F_substractiveModalCompositionComponent *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_substractiveModalCompositionComponent-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak ("C_substractiveModalCompositionComponent-weak",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak result ;
  const GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak * p = (const GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_substractiveModalCompositionComponent_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_substractiveModalCompositionComponent-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_additiveModalCompositionComponent reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_additiveModalCompositionComponent::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mModeMap.printNonNullClassInstanceProperties ("mModeMap") ;
    mProperty_mInclusionList.printNonNullClassInstanceProperties ("mInclusionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_additiveModalCompositionComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_additiveModalCompositionComponent * p = (const cPtr_C_5F_additiveModalCompositionComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
  if (kOperandEqual == result) {
    result = mProperty_mModeMap.objectCompare (p->mProperty_mModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInclusionList.objectCompare (p->mProperty_mInclusionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_additiveModalCompositionComponent::objectCompare (const GALGAS_C_5F_additiveModalCompositionComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent::GALGAS_C_5F_additiveModalCompositionComponent (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                         GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent::GALGAS_C_5F_additiveModalCompositionComponent (const cPtr_C_5F_additiveModalCompositionComponent * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_additiveModalCompositionComponent) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                              const GALGAS_ListForModes & inAttribute_mInclusionList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent result ;
  if (inAttribute_mModeMap.isValid () && inAttribute_mInclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_additiveModalCompositionComponent (inAttribute_mModeMap, inAttribute_mInclusionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_additiveModalCompositionComponent::setter_setMModeMap (GALGAS_M_5F_modesMap inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_additiveModalCompositionComponent::setter_setMInclusionList (GALGAS_ListForModes inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    p->mProperty_mInclusionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_C_5F_additiveModalCompositionComponent::readProperty_mModeMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    return p->mProperty_mModeMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_C_5F_additiveModalCompositionComponent::readProperty_mInclusionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ListForModes () ;
  }else{
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    return p->mProperty_mInclusionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_additiveModalCompositionComponent class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_additiveModalCompositionComponent::cPtr_C_5F_additiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                          const GALGAS_ListForModes & in_mInclusionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mModeMap (in_mModeMap),
mProperty_mInclusionList (in_mInclusionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_additiveModalCompositionComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;
}

void cPtr_C_5F_additiveModalCompositionComponent::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@C_additiveModalCompositionComponent:" ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInclusionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_additiveModalCompositionComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_additiveModalCompositionComponent (mProperty_mModeMap, mProperty_mInclusionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_additiveModalCompositionComponent generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ("C_additiveModalCompositionComponent",
                                                               & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_additiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_additiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_additiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent result ;
  const GALGAS_C_5F_additiveModalCompositionComponent * p = (const GALGAS_C_5F_additiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_additiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_additiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::objectCompare (const GALGAS_C_5F_additiveModalCompositionComponent_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::GALGAS_C_5F_additiveModalCompositionComponent_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent_2D_weak & GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::operator = (const GALGAS_C_5F_additiveModalCompositionComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::GALGAS_C_5F_additiveModalCompositionComponent_2D_weak (const GALGAS_C_5F_additiveModalCompositionComponent & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent_2D_weak GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::bang_C_5F_additiveModalCompositionComponent_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_additiveModalCompositionComponent result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_additiveModalCompositionComponent) ;
      result = GALGAS_C_5F_additiveModalCompositionComponent ((cPtr_C_5F_additiveModalCompositionComponent *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_additiveModalCompositionComponent-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent_2D_weak ("C_additiveModalCompositionComponent-weak",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_additiveModalCompositionComponent_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_additiveModalCompositionComponent_2D_weak GALGAS_C_5F_additiveModalCompositionComponent_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent_2D_weak result ;
  const GALGAS_C_5F_additiveModalCompositionComponent_2D_weak * p = (const GALGAS_C_5F_additiveModalCompositionComponent_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_additiveModalCompositionComponent_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_additiveModalCompositionComponent-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_trans reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_trans::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mSourceStateExpression.printNonNullClassInstanceProperties ("mSourceStateExpression") ;
    mProperty_mTargetStateExpression.printNonNullClassInstanceProperties ("mTargetStateExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_trans::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_trans * p = (const cPtr_C_5F_trans *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_trans) ;
  if (kOperandEqual == result) {
    result = mProperty_mSourceStateExpression.objectCompare (p->mProperty_mSourceStateExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetStateExpression.objectCompare (p->mProperty_mTargetStateExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_trans::objectCompare (const GALGAS_C_5F_trans & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans::GALGAS_C_5F_trans (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans::GALGAS_C_5F_trans (const cPtr_C_5F_trans * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trans) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans GALGAS_C_5F_trans::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mSourceStateExpression,
                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mTargetStateExpression
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trans result ;
  if (inAttribute_mSourceStateExpression.isValid () && inAttribute_mTargetStateExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_trans (inAttribute_mSourceStateExpression, inAttribute_mTargetStateExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_trans::setter_setMSourceStateExpression (GALGAS_AC_5F_boolExpression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    p->mProperty_mSourceStateExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_trans::setter_setMTargetStateExpression (GALGAS_AC_5F_boolExpression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    p->mProperty_mTargetStateExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_trans::readProperty_mSourceStateExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    return p->mProperty_mSourceStateExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_trans::readProperty_mTargetStateExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    return p->mProperty_mTargetStateExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_trans class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_trans::cPtr_C_5F_trans (const GALGAS_AC_5F_boolExpression & in_mSourceStateExpression,
                                  const GALGAS_AC_5F_boolExpression & in_mTargetStateExpression
                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mSourceStateExpression (in_mSourceStateExpression),
mProperty_mTargetStateExpression (in_mTargetStateExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_trans::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans ;
}

void cPtr_C_5F_trans::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "[@C_trans:" ;
  mProperty_mSourceStateExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetStateExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_trans::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_trans (mProperty_mSourceStateExpression, mProperty_mTargetStateExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_trans generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trans ("C_trans",
                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_trans::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_trans::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trans (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans GALGAS_C_5F_trans::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trans result ;
  const GALGAS_C_5F_trans * p = (const GALGAS_C_5F_trans *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_trans *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trans", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_trans_2D_weak::objectCompare (const GALGAS_C_5F_trans_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans_2D_weak::GALGAS_C_5F_trans_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans_2D_weak & GALGAS_C_5F_trans_2D_weak::operator = (const GALGAS_C_5F_trans & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans_2D_weak::GALGAS_C_5F_trans_2D_weak (const GALGAS_C_5F_trans & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans_2D_weak GALGAS_C_5F_trans_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_trans_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans GALGAS_C_5F_trans_2D_weak::bang_C_5F_trans_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_trans result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_trans) ;
      result = GALGAS_C_5F_trans ((cPtr_C_5F_trans *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_trans-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trans_2D_weak ("C_trans-weak",
                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_trans_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_trans_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trans_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_trans_2D_weak GALGAS_C_5F_trans_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trans_2D_weak result ;
  const GALGAS_C_5F_trans_2D_weak * p = (const GALGAS_C_5F_trans_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_trans_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trans-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_importMachine reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_importMachine::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mIndexOfImportedMachine.printNonNullClassInstanceProperties ("mIndexOfImportedMachine") ;
    mProperty_mTranslationVector.printNonNullClassInstanceProperties ("mTranslationVector") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_importMachine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_importMachine * p = (const cPtr_C_5F_importMachine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndexOfImportedMachine.objectCompare (p->mProperty_mIndexOfImportedMachine) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTranslationVector.objectCompare (p->mProperty_mTranslationVector) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_importMachine::objectCompare (const GALGAS_C_5F_importMachine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine::GALGAS_C_5F_importMachine (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_importMachine::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_L_5F_translationVector::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine::GALGAS_C_5F_importMachine (const cPtr_C_5F_importMachine * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importMachine) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::constructor_new (const GALGAS_uint & inAttribute_mIndexOfImportedMachine,
                                                                      const GALGAS_L_5F_translationVector & inAttribute_mTranslationVector
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importMachine result ;
  if (inAttribute_mIndexOfImportedMachine.isValid () && inAttribute_mTranslationVector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_importMachine (inAttribute_mIndexOfImportedMachine, inAttribute_mTranslationVector COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_importMachine::setter_setMIndexOfImportedMachine (GALGAS_uint inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    p->mProperty_mIndexOfImportedMachine = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_importMachine::setter_setMTranslationVector (GALGAS_L_5F_translationVector inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    p->mProperty_mTranslationVector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_importMachine::readProperty_mIndexOfImportedMachine (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    return p->mProperty_mIndexOfImportedMachine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_C_5F_importMachine::readProperty_mTranslationVector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_L_5F_translationVector () ;
  }else{
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    return p->mProperty_mTranslationVector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_importMachine class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_importMachine::cPtr_C_5F_importMachine (const GALGAS_uint & in_mIndexOfImportedMachine,
                                                  const GALGAS_L_5F_translationVector & in_mTranslationVector
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mIndexOfImportedMachine (in_mIndexOfImportedMachine),
mProperty_mTranslationVector (in_mTranslationVector) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_importMachine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine ;
}

void cPtr_C_5F_importMachine::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_importMachine:" ;
  mProperty_mIndexOfImportedMachine.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTranslationVector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_importMachine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_importMachine (mProperty_mIndexOfImportedMachine, mProperty_mTranslationVector COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_importMachine generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importMachine ("C_importMachine",
                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_importMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_importMachine::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importMachine (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importMachine result ;
  const GALGAS_C_5F_importMachine * p = (const GALGAS_C_5F_importMachine *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_importMachine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importMachine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_importMachine_2D_weak::objectCompare (const GALGAS_C_5F_importMachine_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine_2D_weak::GALGAS_C_5F_importMachine_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine_2D_weak & GALGAS_C_5F_importMachine_2D_weak::operator = (const GALGAS_C_5F_importMachine & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine_2D_weak::GALGAS_C_5F_importMachine_2D_weak (const GALGAS_C_5F_importMachine & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine_2D_weak GALGAS_C_5F_importMachine_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_importMachine_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine_2D_weak::bang_C_5F_importMachine_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_importMachine result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_importMachine) ;
      result = GALGAS_C_5F_importMachine ((cPtr_C_5F_importMachine *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_importMachine-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importMachine_2D_weak ("C_importMachine-weak",
                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_importMachine_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_importMachine_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importMachine_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importMachine_2D_weak GALGAS_C_5F_importMachine_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importMachine_2D_weak result ;
  const GALGAS_C_5F_importMachine_2D_weak * p = (const GALGAS_C_5F_importMachine_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_importMachine_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importMachine-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_explicitAutomatonDefinition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_explicitAutomatonDefinition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mStatesMap.printNonNullClassInstanceProperties ("mStatesMap") ;
    mProperty_mInitialStatesDefinitionList.printNonNullClassInstanceProperties ("mInitialStatesDefinitionList") ;
    mProperty_mTerminalStatesDefinitionList.printNonNullClassInstanceProperties ("mTerminalStatesDefinitionList") ;
    mProperty_mStateDefinitionList.printNonNullClassInstanceProperties ("mStateDefinitionList") ;
    mProperty_mEndOfDefinition.printNonNullClassInstanceProperties ("mEndOfDefinition") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_explicitAutomatonDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
  if (kOperandEqual == result) {
    result = mProperty_mStatesMap.objectCompare (p->mProperty_mStatesMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInitialStatesDefinitionList.objectCompare (p->mProperty_mInitialStatesDefinitionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalStatesDefinitionList.objectCompare (p->mProperty_mTerminalStatesDefinitionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStateDefinitionList.objectCompare (p->mProperty_mStateDefinitionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfDefinition.objectCompare (p->mProperty_mEndOfDefinition) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_explicitAutomatonDefinition::objectCompare (const GALGAS_C_5F_explicitAutomatonDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition::GALGAS_C_5F_explicitAutomatonDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (GALGAS_M_5F_stateMap::constructor_emptyMap (HERE),
                                                                   GALGAS_L_5F_statesDefinitionList::constructor_emptyList (HERE),
                                                                   GALGAS_L_5F_statesDefinitionList::constructor_emptyList (HERE),
                                                                   GALGAS_L_5F_stateDefinition::constructor_emptyList (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition::GALGAS_C_5F_explicitAutomatonDefinition (const cPtr_C_5F_explicitAutomatonDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_explicitAutomatonDefinition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (const GALGAS_M_5F_stateMap & inAttribute_mStatesMap,
                                                                                                  const GALGAS_L_5F_statesDefinitionList & inAttribute_mInitialStatesDefinitionList,
                                                                                                  const GALGAS_L_5F_statesDefinitionList & inAttribute_mTerminalStatesDefinitionList,
                                                                                                  const GALGAS_L_5F_stateDefinition & inAttribute_mStateDefinitionList,
                                                                                                  const GALGAS_location & inAttribute_mEndOfDefinition
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_explicitAutomatonDefinition result ;
  if (inAttribute_mStatesMap.isValid () && inAttribute_mInitialStatesDefinitionList.isValid () && inAttribute_mTerminalStatesDefinitionList.isValid () && inAttribute_mStateDefinitionList.isValid () && inAttribute_mEndOfDefinition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_explicitAutomatonDefinition (inAttribute_mStatesMap, inAttribute_mInitialStatesDefinitionList, inAttribute_mTerminalStatesDefinitionList, inAttribute_mStateDefinitionList, inAttribute_mEndOfDefinition COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_explicitAutomatonDefinition::setter_setMStatesMap (GALGAS_M_5F_stateMap inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mStatesMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_explicitAutomatonDefinition::setter_setMInitialStatesDefinitionList (GALGAS_L_5F_statesDefinitionList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mInitialStatesDefinitionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_explicitAutomatonDefinition::setter_setMTerminalStatesDefinitionList (GALGAS_L_5F_statesDefinitionList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mTerminalStatesDefinitionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_explicitAutomatonDefinition::setter_setMStateDefinitionList (GALGAS_L_5F_stateDefinition inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mStateDefinitionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_explicitAutomatonDefinition::setter_setMEndOfDefinition (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mEndOfDefinition = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap GALGAS_C_5F_explicitAutomatonDefinition::readProperty_mStatesMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_M_5F_stateMap () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mStatesMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_C_5F_explicitAutomatonDefinition::readProperty_mInitialStatesDefinitionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_L_5F_statesDefinitionList () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mInitialStatesDefinitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList GALGAS_C_5F_explicitAutomatonDefinition::readProperty_mTerminalStatesDefinitionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_L_5F_statesDefinitionList () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mTerminalStatesDefinitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition GALGAS_C_5F_explicitAutomatonDefinition::readProperty_mStateDefinitionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_L_5F_stateDefinition () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mStateDefinitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_C_5F_explicitAutomatonDefinition::readProperty_mEndOfDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mEndOfDefinition ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_explicitAutomatonDefinition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_explicitAutomatonDefinition::cPtr_C_5F_explicitAutomatonDefinition (const GALGAS_M_5F_stateMap & in_mStatesMap,
                                                                              const GALGAS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                                              const GALGAS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                                              const GALGAS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                                              const GALGAS_location & in_mEndOfDefinition
                                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mStatesMap (in_mStatesMap),
mProperty_mInitialStatesDefinitionList (in_mInitialStatesDefinitionList),
mProperty_mTerminalStatesDefinitionList (in_mTerminalStatesDefinitionList),
mProperty_mStateDefinitionList (in_mStateDefinitionList),
mProperty_mEndOfDefinition (in_mEndOfDefinition) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_explicitAutomatonDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;
}

void cPtr_C_5F_explicitAutomatonDefinition::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@C_explicitAutomatonDefinition:" ;
  mProperty_mStatesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInitialStatesDefinitionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTerminalStatesDefinitionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStateDefinitionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfDefinition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_explicitAutomatonDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_explicitAutomatonDefinition (mProperty_mStatesMap, mProperty_mInitialStatesDefinitionList, mProperty_mTerminalStatesDefinitionList, mProperty_mStateDefinitionList, mProperty_mEndOfDefinition COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_explicitAutomatonDefinition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ("C_explicitAutomatonDefinition",
                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_explicitAutomatonDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_explicitAutomatonDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_explicitAutomatonDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_explicitAutomatonDefinition result ;
  const GALGAS_C_5F_explicitAutomatonDefinition * p = (const GALGAS_C_5F_explicitAutomatonDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_explicitAutomatonDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_explicitAutomatonDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::objectCompare (const GALGAS_C_5F_explicitAutomatonDefinition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::GALGAS_C_5F_explicitAutomatonDefinition_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition_2D_weak & GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::operator = (const GALGAS_C_5F_explicitAutomatonDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::GALGAS_C_5F_explicitAutomatonDefinition_2D_weak (const GALGAS_C_5F_explicitAutomatonDefinition & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition_2D_weak GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_explicitAutomatonDefinition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::bang_C_5F_explicitAutomatonDefinition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_explicitAutomatonDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_explicitAutomatonDefinition) ;
      result = GALGAS_C_5F_explicitAutomatonDefinition ((cPtr_C_5F_explicitAutomatonDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_explicitAutomatonDefinition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition_2D_weak ("C_explicitAutomatonDefinition-weak",
                                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_explicitAutomatonDefinition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_explicitAutomatonDefinition_2D_weak GALGAS_C_5F_explicitAutomatonDefinition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_explicitAutomatonDefinition_2D_weak result ;
  const GALGAS_C_5F_explicitAutomatonDefinition_2D_weak * p = (const GALGAS_C_5F_explicitAutomatonDefinition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_explicitAutomatonDefinition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_explicitAutomatonDefinition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_boolToSeqExpression reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_boolToSeqExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_boolToSeqExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_boolToSeqExpression * p = (const cPtr_C_5F_boolToSeqExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_boolToSeqExpression::objectCompare (const GALGAS_C_5F_boolToSeqExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression::GALGAS_C_5F_boolToSeqExpression (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression::GALGAS_C_5F_boolToSeqExpression (const cPtr_C_5F_boolToSeqExpression * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_boolToSeqExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression GALGAS_C_5F_boolToSeqExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_boolToSeqExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_boolToSeqExpression::setter_setMExpression (GALGAS_AC_5F_boolExpression inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_boolToSeqExpression * p = (cPtr_C_5F_boolToSeqExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_boolExpression GALGAS_C_5F_boolToSeqExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_boolToSeqExpression * p = (cPtr_C_5F_boolToSeqExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_boolToSeqExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_boolToSeqExpression::cPtr_C_5F_boolToSeqExpression (const GALGAS_AC_5F_boolExpression & in_mExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_boolToSeqExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

void cPtr_C_5F_boolToSeqExpression::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@C_boolToSeqExpression:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_boolToSeqExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_boolToSeqExpression (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_boolToSeqExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ("C_boolToSeqExpression",
                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_boolToSeqExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_boolToSeqExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_boolToSeqExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression GALGAS_C_5F_boolToSeqExpression::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression result ;
  const GALGAS_C_5F_boolToSeqExpression * p = (const GALGAS_C_5F_boolToSeqExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_boolToSeqExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_boolToSeqExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_boolToSeqExpression_2D_weak::objectCompare (const GALGAS_C_5F_boolToSeqExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression_2D_weak::GALGAS_C_5F_boolToSeqExpression_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression_2D_weak & GALGAS_C_5F_boolToSeqExpression_2D_weak::operator = (const GALGAS_C_5F_boolToSeqExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression_2D_weak::GALGAS_C_5F_boolToSeqExpression_2D_weak (const GALGAS_C_5F_boolToSeqExpression & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression_2D_weak GALGAS_C_5F_boolToSeqExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression GALGAS_C_5F_boolToSeqExpression_2D_weak::bang_C_5F_boolToSeqExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_boolToSeqExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_boolToSeqExpression) ;
      result = GALGAS_C_5F_boolToSeqExpression ((cPtr_C_5F_boolToSeqExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_boolToSeqExpression-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression_2D_weak ("C_boolToSeqExpression-weak",
                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_boolToSeqExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_boolToSeqExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_boolToSeqExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_boolToSeqExpression_2D_weak GALGAS_C_5F_boolToSeqExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression_2D_weak result ;
  const GALGAS_C_5F_boolToSeqExpression_2D_weak * p = (const GALGAS_C_5F_boolToSeqExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_boolToSeqExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_boolToSeqExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_existsDefinition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_existsDefinition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mPreviousVariableCount.printNonNullClassInstanceProperties ("mPreviousVariableCount") ;
    mProperty_mTotalVariableCount.printNonNullClassInstanceProperties ("mTotalVariableCount") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_existsDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
  if (kOperandEqual == result) {
    result = mProperty_mPreviousVariableCount.objectCompare (p->mProperty_mPreviousVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTotalVariableCount.objectCompare (p->mProperty_mTotalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_existsDefinition::objectCompare (const GALGAS_C_5F_existsDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition::GALGAS_C_5F_existsDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition::GALGAS_C_5F_existsDefinition (const cPtr_C_5F_existsDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_existsDefinition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition GALGAS_C_5F_existsDefinition::constructor_new (const GALGAS_uint & inAttribute_mPreviousVariableCount,
                                                                            const GALGAS_uint & inAttribute_mTotalVariableCount,
                                                                            const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_existsDefinition result ;
  if (inAttribute_mPreviousVariableCount.isValid () && inAttribute_mTotalVariableCount.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_existsDefinition (inAttribute_mPreviousVariableCount, inAttribute_mTotalVariableCount, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_existsDefinition::setter_setMPreviousVariableCount (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    p->mProperty_mPreviousVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_existsDefinition::setter_setMTotalVariableCount (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    p->mProperty_mTotalVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_existsDefinition::setter_setMOperand (GALGAS_AC_5F_machineDefinition inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_existsDefinition::readProperty_mPreviousVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    return p->mProperty_mPreviousVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_existsDefinition::readProperty_mTotalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    return p->mProperty_mTotalVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_existsDefinition::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_existsDefinition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_existsDefinition::cPtr_C_5F_existsDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                                        const GALGAS_uint & in_mTotalVariableCount,
                                                        const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mPreviousVariableCount (in_mPreviousVariableCount),
mProperty_mTotalVariableCount (in_mTotalVariableCount),
mProperty_mOperand (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_existsDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition ;
}

void cPtr_C_5F_existsDefinition::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@C_existsDefinition:" ;
  mProperty_mPreviousVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTotalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_existsDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_existsDefinition (mProperty_mPreviousVariableCount, mProperty_mTotalVariableCount, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_existsDefinition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_existsDefinition ("C_existsDefinition",
                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_existsDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_existsDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_existsDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition GALGAS_C_5F_existsDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_existsDefinition result ;
  const GALGAS_C_5F_existsDefinition * p = (const GALGAS_C_5F_existsDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_existsDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_existsDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_existsDefinition_2D_weak::objectCompare (const GALGAS_C_5F_existsDefinition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition_2D_weak::GALGAS_C_5F_existsDefinition_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition_2D_weak & GALGAS_C_5F_existsDefinition_2D_weak::operator = (const GALGAS_C_5F_existsDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition_2D_weak::GALGAS_C_5F_existsDefinition_2D_weak (const GALGAS_C_5F_existsDefinition & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition_2D_weak GALGAS_C_5F_existsDefinition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_existsDefinition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition GALGAS_C_5F_existsDefinition_2D_weak::bang_C_5F_existsDefinition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_existsDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_existsDefinition) ;
      result = GALGAS_C_5F_existsDefinition ((cPtr_C_5F_existsDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_existsDefinition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_existsDefinition_2D_weak ("C_existsDefinition-weak",
                                                      & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_existsDefinition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_existsDefinition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_existsDefinition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_existsDefinition_2D_weak GALGAS_C_5F_existsDefinition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_existsDefinition_2D_weak result ;
  const GALGAS_C_5F_existsDefinition_2D_weak * p = (const GALGAS_C_5F_existsDefinition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_existsDefinition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_existsDefinition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_forallDefinition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_forallDefinition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mPreviousVariableCount.printNonNullClassInstanceProperties ("mPreviousVariableCount") ;
    mProperty_mTotalVariableCount.printNonNullClassInstanceProperties ("mTotalVariableCount") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_forallDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
  if (kOperandEqual == result) {
    result = mProperty_mPreviousVariableCount.objectCompare (p->mProperty_mPreviousVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTotalVariableCount.objectCompare (p->mProperty_mTotalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_forallDefinition::objectCompare (const GALGAS_C_5F_forallDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition::GALGAS_C_5F_forallDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition::GALGAS_C_5F_forallDefinition (const cPtr_C_5F_forallDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_forallDefinition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition GALGAS_C_5F_forallDefinition::constructor_new (const GALGAS_uint & inAttribute_mPreviousVariableCount,
                                                                            const GALGAS_uint & inAttribute_mTotalVariableCount,
                                                                            const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_forallDefinition result ;
  if (inAttribute_mPreviousVariableCount.isValid () && inAttribute_mTotalVariableCount.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_forallDefinition (inAttribute_mPreviousVariableCount, inAttribute_mTotalVariableCount, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_forallDefinition::setter_setMPreviousVariableCount (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    p->mProperty_mPreviousVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_forallDefinition::setter_setMTotalVariableCount (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    p->mProperty_mTotalVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_forallDefinition::setter_setMOperand (GALGAS_AC_5F_machineDefinition inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_forallDefinition::readProperty_mPreviousVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    return p->mProperty_mPreviousVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_forallDefinition::readProperty_mTotalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    return p->mProperty_mTotalVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_forallDefinition::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_forallDefinition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_forallDefinition::cPtr_C_5F_forallDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                                        const GALGAS_uint & in_mTotalVariableCount,
                                                        const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mPreviousVariableCount (in_mPreviousVariableCount),
mProperty_mTotalVariableCount (in_mTotalVariableCount),
mProperty_mOperand (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_forallDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition ;
}

void cPtr_C_5F_forallDefinition::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@C_forallDefinition:" ;
  mProperty_mPreviousVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTotalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_forallDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_forallDefinition (mProperty_mPreviousVariableCount, mProperty_mTotalVariableCount, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_forallDefinition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_forallDefinition ("C_forallDefinition",
                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_forallDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_forallDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_forallDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition GALGAS_C_5F_forallDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_forallDefinition result ;
  const GALGAS_C_5F_forallDefinition * p = (const GALGAS_C_5F_forallDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_forallDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_forallDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_forallDefinition_2D_weak::objectCompare (const GALGAS_C_5F_forallDefinition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition_2D_weak::GALGAS_C_5F_forallDefinition_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition_2D_weak & GALGAS_C_5F_forallDefinition_2D_weak::operator = (const GALGAS_C_5F_forallDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition_2D_weak::GALGAS_C_5F_forallDefinition_2D_weak (const GALGAS_C_5F_forallDefinition & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition_2D_weak GALGAS_C_5F_forallDefinition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_forallDefinition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition GALGAS_C_5F_forallDefinition_2D_weak::bang_C_5F_forallDefinition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_forallDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_forallDefinition) ;
      result = GALGAS_C_5F_forallDefinition ((cPtr_C_5F_forallDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_forallDefinition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_forallDefinition_2D_weak ("C_forallDefinition-weak",
                                                      & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_forallDefinition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_forallDefinition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_forallDefinition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_forallDefinition_2D_weak GALGAS_C_5F_forallDefinition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_forallDefinition_2D_weak result ;
  const GALGAS_C_5F_forallDefinition_2D_weak * p = (const GALGAS_C_5F_forallDefinition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_forallDefinition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_forallDefinition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_parallelComposition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_parallelComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_parallelComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_parallelComposition * p = (const cPtr_C_5F_parallelComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_parallelComposition::objectCompare (const GALGAS_C_5F_parallelComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition::GALGAS_C_5F_parallelComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition::GALGAS_C_5F_parallelComposition (const cPtr_C_5F_parallelComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_parallelComposition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition GALGAS_C_5F_parallelComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                                  const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_parallelComposition (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_parallelComposition::setter_setMLeftOperand (GALGAS_AC_5F_machineDefinition inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_parallelComposition::setter_setMRightOperand (GALGAS_AC_5F_machineDefinition inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_parallelComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_parallelComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_parallelComposition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_parallelComposition::cPtr_C_5F_parallelComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                              const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_parallelComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition ;
}

void cPtr_C_5F_parallelComposition::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@C_parallelComposition:" ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_parallelComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_parallelComposition (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_parallelComposition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_parallelComposition ("C_parallelComposition",
                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_parallelComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_parallelComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_parallelComposition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition GALGAS_C_5F_parallelComposition::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition result ;
  const GALGAS_C_5F_parallelComposition * p = (const GALGAS_C_5F_parallelComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_parallelComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_parallelComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_parallelComposition_2D_weak::objectCompare (const GALGAS_C_5F_parallelComposition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition_2D_weak::GALGAS_C_5F_parallelComposition_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition_2D_weak & GALGAS_C_5F_parallelComposition_2D_weak::operator = (const GALGAS_C_5F_parallelComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition_2D_weak::GALGAS_C_5F_parallelComposition_2D_weak (const GALGAS_C_5F_parallelComposition & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition_2D_weak GALGAS_C_5F_parallelComposition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition GALGAS_C_5F_parallelComposition_2D_weak::bang_C_5F_parallelComposition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_parallelComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_parallelComposition) ;
      result = GALGAS_C_5F_parallelComposition ((cPtr_C_5F_parallelComposition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_parallelComposition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_parallelComposition_2D_weak ("C_parallelComposition-weak",
                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_parallelComposition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_parallelComposition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_parallelComposition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_parallelComposition_2D_weak GALGAS_C_5F_parallelComposition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition_2D_weak result ;
  const GALGAS_C_5F_parallelComposition_2D_weak * p = (const GALGAS_C_5F_parallelComposition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_parallelComposition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_parallelComposition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_orComposition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_orComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_orComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_orComposition * p = (const cPtr_C_5F_orComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_orComposition::objectCompare (const GALGAS_C_5F_orComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition::GALGAS_C_5F_orComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition::GALGAS_C_5F_orComposition (const cPtr_C_5F_orComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orComposition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition GALGAS_C_5F_orComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                      const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_orComposition (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_orComposition::setter_setMLeftOperand (GALGAS_AC_5F_machineDefinition inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_orComposition::setter_setMRightOperand (GALGAS_AC_5F_machineDefinition inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_orComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_orComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_orComposition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_orComposition::cPtr_C_5F_orComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                  const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_orComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition ;
}

void cPtr_C_5F_orComposition::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_orComposition:" ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_orComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_orComposition (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_orComposition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orComposition ("C_orComposition",
                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_orComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_orComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orComposition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition GALGAS_C_5F_orComposition::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orComposition result ;
  const GALGAS_C_5F_orComposition * p = (const GALGAS_C_5F_orComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_orComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_orComposition_2D_weak::objectCompare (const GALGAS_C_5F_orComposition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition_2D_weak::GALGAS_C_5F_orComposition_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition_2D_weak & GALGAS_C_5F_orComposition_2D_weak::operator = (const GALGAS_C_5F_orComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition_2D_weak::GALGAS_C_5F_orComposition_2D_weak (const GALGAS_C_5F_orComposition & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition_2D_weak GALGAS_C_5F_orComposition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_orComposition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition GALGAS_C_5F_orComposition_2D_weak::bang_C_5F_orComposition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_orComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_orComposition) ;
      result = GALGAS_C_5F_orComposition ((cPtr_C_5F_orComposition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_orComposition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orComposition_2D_weak ("C_orComposition-weak",
                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_orComposition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_orComposition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orComposition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_orComposition_2D_weak GALGAS_C_5F_orComposition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orComposition_2D_weak result ;
  const GALGAS_C_5F_orComposition_2D_weak * p = (const GALGAS_C_5F_orComposition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_orComposition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orComposition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_strongModalComposition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_strongModalComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_strongModalComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorLocation.objectCompare (p->mProperty_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_strongModalComposition::objectCompare (const GALGAS_C_5F_strongModalComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition::GALGAS_C_5F_strongModalComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition::GALGAS_C_5F_strongModalComposition (const cPtr_C_5F_strongModalComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_strongModalComposition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition GALGAS_C_5F_strongModalComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                                        const GALGAS_location & inAttribute_mErrorLocation,
                                                                                        const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_strongModalComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_strongModalComposition (inAttribute_mLeftOperand, inAttribute_mErrorLocation, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_strongModalComposition::setter_setMLeftOperand (GALGAS_AC_5F_machineDefinition inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_strongModalComposition::setter_setMErrorLocation (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_strongModalComposition::setter_setMRightOperand (GALGAS_AC_5F_machineDefinition inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_strongModalComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_C_5F_strongModalComposition::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    return p->mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_strongModalComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_strongModalComposition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_strongModalComposition::cPtr_C_5F_strongModalComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                    const GALGAS_location & in_mErrorLocation,
                                                                    const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_strongModalComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;
}

void cPtr_C_5F_strongModalComposition::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@C_strongModalComposition:" ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_strongModalComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_strongModalComposition (mProperty_mLeftOperand, mProperty_mErrorLocation, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_strongModalComposition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_strongModalComposition ("C_strongModalComposition",
                                                    & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_strongModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_strongModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_strongModalComposition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition GALGAS_C_5F_strongModalComposition::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_strongModalComposition result ;
  const GALGAS_C_5F_strongModalComposition * p = (const GALGAS_C_5F_strongModalComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_strongModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_strongModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_strongModalComposition_2D_weak::objectCompare (const GALGAS_C_5F_strongModalComposition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition_2D_weak::GALGAS_C_5F_strongModalComposition_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition_2D_weak & GALGAS_C_5F_strongModalComposition_2D_weak::operator = (const GALGAS_C_5F_strongModalComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition_2D_weak::GALGAS_C_5F_strongModalComposition_2D_weak (const GALGAS_C_5F_strongModalComposition & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition_2D_weak GALGAS_C_5F_strongModalComposition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_strongModalComposition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition GALGAS_C_5F_strongModalComposition_2D_weak::bang_C_5F_strongModalComposition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_strongModalComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_strongModalComposition) ;
      result = GALGAS_C_5F_strongModalComposition ((cPtr_C_5F_strongModalComposition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_strongModalComposition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_strongModalComposition_2D_weak ("C_strongModalComposition-weak",
                                                            & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_strongModalComposition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_strongModalComposition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_strongModalComposition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_strongModalComposition_2D_weak GALGAS_C_5F_strongModalComposition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_strongModalComposition_2D_weak result ;
  const GALGAS_C_5F_strongModalComposition_2D_weak * p = (const GALGAS_C_5F_strongModalComposition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_strongModalComposition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_strongModalComposition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_weakModalComposition reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_weakModalComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_weakModalComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorLocation.objectCompare (p->mProperty_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_weakModalComposition::objectCompare (const GALGAS_C_5F_weakModalComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition::GALGAS_C_5F_weakModalComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition::GALGAS_C_5F_weakModalComposition (const cPtr_C_5F_weakModalComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_weakModalComposition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition GALGAS_C_5F_weakModalComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                                    const GALGAS_location & inAttribute_mErrorLocation,
                                                                                    const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_weakModalComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_weakModalComposition (inAttribute_mLeftOperand, inAttribute_mErrorLocation, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_weakModalComposition::setter_setMLeftOperand (GALGAS_AC_5F_machineDefinition inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_weakModalComposition::setter_setMErrorLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_weakModalComposition::setter_setMRightOperand (GALGAS_AC_5F_machineDefinition inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_weakModalComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_C_5F_weakModalComposition::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    return p->mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_weakModalComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_weakModalComposition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_weakModalComposition::cPtr_C_5F_weakModalComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                const GALGAS_location & in_mErrorLocation,
                                                                const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_weakModalComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;
}

void cPtr_C_5F_weakModalComposition::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@C_weakModalComposition:" ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_weakModalComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_weakModalComposition (mProperty_mLeftOperand, mProperty_mErrorLocation, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_weakModalComposition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_weakModalComposition ("C_weakModalComposition",
                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_weakModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_weakModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_weakModalComposition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition GALGAS_C_5F_weakModalComposition::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_weakModalComposition result ;
  const GALGAS_C_5F_weakModalComposition * p = (const GALGAS_C_5F_weakModalComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_weakModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_weakModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_weakModalComposition_2D_weak::objectCompare (const GALGAS_C_5F_weakModalComposition_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition_2D_weak::GALGAS_C_5F_weakModalComposition_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition_2D_weak & GALGAS_C_5F_weakModalComposition_2D_weak::operator = (const GALGAS_C_5F_weakModalComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition_2D_weak::GALGAS_C_5F_weakModalComposition_2D_weak (const GALGAS_C_5F_weakModalComposition & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition_2D_weak GALGAS_C_5F_weakModalComposition_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_weakModalComposition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition GALGAS_C_5F_weakModalComposition_2D_weak::bang_C_5F_weakModalComposition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_weakModalComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_weakModalComposition) ;
      result = GALGAS_C_5F_weakModalComposition ((cPtr_C_5F_weakModalComposition *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_weakModalComposition-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_weakModalComposition_2D_weak ("C_weakModalComposition-weak",
                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_weakModalComposition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_weakModalComposition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_weakModalComposition_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_weakModalComposition_2D_weak GALGAS_C_5F_weakModalComposition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_weakModalComposition_2D_weak result ;
  const GALGAS_C_5F_weakModalComposition_2D_weak * p = (const GALGAS_C_5F_weakModalComposition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_weakModalComposition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_weakModalComposition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_fullSaturationOperation reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_fullSaturationOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_fullSaturationOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_fullSaturationOperation * p = (const cPtr_C_5F_fullSaturationOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_fullSaturationOperation::objectCompare (const GALGAS_C_5F_fullSaturationOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation::GALGAS_C_5F_fullSaturationOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation::GALGAS_C_5F_fullSaturationOperation (const cPtr_C_5F_fullSaturationOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_fullSaturationOperation) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation GALGAS_C_5F_fullSaturationOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_fullSaturationOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_fullSaturationOperation::setter_setMOperand (GALGAS_AC_5F_machineDefinition inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_fullSaturationOperation * p = (cPtr_C_5F_fullSaturationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_fullSaturationOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_fullSaturationOperation * p = (cPtr_C_5F_fullSaturationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_fullSaturationOperation class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_fullSaturationOperation::cPtr_C_5F_fullSaturationOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_fullSaturationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

void cPtr_C_5F_fullSaturationOperation::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@C_fullSaturationOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_fullSaturationOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_fullSaturationOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_fullSaturationOperation generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ("C_fullSaturationOperation",
                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_fullSaturationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_fullSaturationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_fullSaturationOperation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation GALGAS_C_5F_fullSaturationOperation::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation result ;
  const GALGAS_C_5F_fullSaturationOperation * p = (const GALGAS_C_5F_fullSaturationOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_fullSaturationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_fullSaturationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_fullSaturationOperation_2D_weak::objectCompare (const GALGAS_C_5F_fullSaturationOperation_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation_2D_weak::GALGAS_C_5F_fullSaturationOperation_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation_2D_weak & GALGAS_C_5F_fullSaturationOperation_2D_weak::operator = (const GALGAS_C_5F_fullSaturationOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation_2D_weak::GALGAS_C_5F_fullSaturationOperation_2D_weak (const GALGAS_C_5F_fullSaturationOperation & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation_2D_weak GALGAS_C_5F_fullSaturationOperation_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation GALGAS_C_5F_fullSaturationOperation_2D_weak::bang_C_5F_fullSaturationOperation_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_fullSaturationOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_fullSaturationOperation) ;
      result = GALGAS_C_5F_fullSaturationOperation ((cPtr_C_5F_fullSaturationOperation *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_fullSaturationOperation-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation_2D_weak ("C_fullSaturationOperation-weak",
                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_fullSaturationOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_fullSaturationOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_fullSaturationOperation_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_fullSaturationOperation_2D_weak GALGAS_C_5F_fullSaturationOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation_2D_weak result ;
  const GALGAS_C_5F_fullSaturationOperation_2D_weak * p = (const GALGAS_C_5F_fullSaturationOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_fullSaturationOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_fullSaturationOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_complementationOperation reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_complementationOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_complementationOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_complementationOperation * p = (const cPtr_C_5F_complementationOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_complementationOperation::objectCompare (const GALGAS_C_5F_complementationOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation::GALGAS_C_5F_complementationOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation::GALGAS_C_5F_complementationOperation (const cPtr_C_5F_complementationOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_complementationOperation) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation GALGAS_C_5F_complementationOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_complementationOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_complementationOperation::setter_setMOperand (GALGAS_AC_5F_machineDefinition inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_complementationOperation * p = (cPtr_C_5F_complementationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_complementationOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_complementationOperation * p = (cPtr_C_5F_complementationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_complementationOperation class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_complementationOperation::cPtr_C_5F_complementationOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_complementationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

void cPtr_C_5F_complementationOperation::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@C_complementationOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_complementationOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_complementationOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_complementationOperation generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_complementationOperation ("C_complementationOperation",
                                                      & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_complementationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_complementationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_complementationOperation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation GALGAS_C_5F_complementationOperation::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation result ;
  const GALGAS_C_5F_complementationOperation * p = (const GALGAS_C_5F_complementationOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_complementationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_complementationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_complementationOperation_2D_weak::objectCompare (const GALGAS_C_5F_complementationOperation_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation_2D_weak::GALGAS_C_5F_complementationOperation_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation_2D_weak & GALGAS_C_5F_complementationOperation_2D_weak::operator = (const GALGAS_C_5F_complementationOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation_2D_weak::GALGAS_C_5F_complementationOperation_2D_weak (const GALGAS_C_5F_complementationOperation & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation_2D_weak GALGAS_C_5F_complementationOperation_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation GALGAS_C_5F_complementationOperation_2D_weak::bang_C_5F_complementationOperation_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_complementationOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_complementationOperation) ;
      result = GALGAS_C_5F_complementationOperation ((cPtr_C_5F_complementationOperation *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_complementationOperation-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_complementationOperation_2D_weak ("C_complementationOperation-weak",
                                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_complementationOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_complementationOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_complementationOperation_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_complementationOperation_2D_weak GALGAS_C_5F_complementationOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation_2D_weak result ;
  const GALGAS_C_5F_complementationOperation_2D_weak * p = (const GALGAS_C_5F_complementationOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_complementationOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_complementationOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_suppressTerminalStatesOperation reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_suppressTerminalStatesOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_suppressTerminalStatesOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_suppressTerminalStatesOperation * p = (const cPtr_C_5F_suppressTerminalStatesOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_suppressTerminalStatesOperation::objectCompare (const GALGAS_C_5F_suppressTerminalStatesOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation::GALGAS_C_5F_suppressTerminalStatesOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation::GALGAS_C_5F_suppressTerminalStatesOperation (const cPtr_C_5F_suppressTerminalStatesOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressTerminalStatesOperation) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation GALGAS_C_5F_suppressTerminalStatesOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressTerminalStatesOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_suppressTerminalStatesOperation::setter_setMOperand (GALGAS_AC_5F_machineDefinition inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_suppressTerminalStatesOperation * p = (cPtr_C_5F_suppressTerminalStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_suppressTerminalStatesOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_suppressTerminalStatesOperation * p = (cPtr_C_5F_suppressTerminalStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_suppressTerminalStatesOperation class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_suppressTerminalStatesOperation::cPtr_C_5F_suppressTerminalStatesOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_suppressTerminalStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

void cPtr_C_5F_suppressTerminalStatesOperation::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@C_suppressTerminalStatesOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_suppressTerminalStatesOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_suppressTerminalStatesOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_suppressTerminalStatesOperation generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ("C_suppressTerminalStatesOperation",
                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_suppressTerminalStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_suppressTerminalStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressTerminalStatesOperation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation GALGAS_C_5F_suppressTerminalStatesOperation::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation result ;
  const GALGAS_C_5F_suppressTerminalStatesOperation * p = (const GALGAS_C_5F_suppressTerminalStatesOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_suppressTerminalStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressTerminalStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::objectCompare (const GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak & GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::operator = (const GALGAS_C_5F_suppressTerminalStatesOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak (const GALGAS_C_5F_suppressTerminalStatesOperation & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::bang_C_5F_suppressTerminalStatesOperation_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_suppressTerminalStatesOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_suppressTerminalStatesOperation) ;
      result = GALGAS_C_5F_suppressTerminalStatesOperation ((cPtr_C_5F_suppressTerminalStatesOperation *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_suppressTerminalStatesOperation-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak ("C_suppressTerminalStatesOperation-weak",
                                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak result ;
  const GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak * p = (const GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_suppressTerminalStatesOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressTerminalStatesOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_suppressInitialStatesOperation reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_suppressInitialStatesOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_suppressInitialStatesOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_suppressInitialStatesOperation * p = (const cPtr_C_5F_suppressInitialStatesOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_suppressInitialStatesOperation::objectCompare (const GALGAS_C_5F_suppressInitialStatesOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation::GALGAS_C_5F_suppressInitialStatesOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation::GALGAS_C_5F_suppressInitialStatesOperation (const cPtr_C_5F_suppressInitialStatesOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressInitialStatesOperation) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation GALGAS_C_5F_suppressInitialStatesOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressInitialStatesOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_suppressInitialStatesOperation::setter_setMOperand (GALGAS_AC_5F_machineDefinition inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_suppressInitialStatesOperation * p = (cPtr_C_5F_suppressInitialStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_suppressInitialStatesOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_suppressInitialStatesOperation * p = (cPtr_C_5F_suppressInitialStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_suppressInitialStatesOperation class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_suppressInitialStatesOperation::cPtr_C_5F_suppressInitialStatesOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_suppressInitialStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

void cPtr_C_5F_suppressInitialStatesOperation::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@C_suppressInitialStatesOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_suppressInitialStatesOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_suppressInitialStatesOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_suppressInitialStatesOperation generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ("C_suppressInitialStatesOperation",
                                                            & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_suppressInitialStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_suppressInitialStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressInitialStatesOperation (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation GALGAS_C_5F_suppressInitialStatesOperation::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation result ;
  const GALGAS_C_5F_suppressInitialStatesOperation * p = (const GALGAS_C_5F_suppressInitialStatesOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_suppressInitialStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressInitialStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::objectCompare (const GALGAS_C_5F_suppressInitialStatesOperation_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::GALGAS_C_5F_suppressInitialStatesOperation_2D_weak (void) :
GALGAS_AC_5F_machineDefinition_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation_2D_weak & GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::operator = (const GALGAS_C_5F_suppressInitialStatesOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::GALGAS_C_5F_suppressInitialStatesOperation_2D_weak (const GALGAS_C_5F_suppressInitialStatesOperation & inSource) :
GALGAS_AC_5F_machineDefinition_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation_2D_weak GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::bang_C_5F_suppressInitialStatesOperation_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_suppressInitialStatesOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_suppressInitialStatesOperation) ;
      result = GALGAS_C_5F_suppressInitialStatesOperation ((cPtr_C_5F_suppressInitialStatesOperation *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_suppressInitialStatesOperation-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation_2D_weak ("C_suppressInitialStatesOperation-weak",
                                                                    & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressInitialStatesOperation_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_suppressInitialStatesOperation_2D_weak GALGAS_C_5F_suppressInitialStatesOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation_2D_weak result ;
  const GALGAS_C_5F_suppressInitialStatesOperation_2D_weak * p = (const GALGAS_C_5F_suppressInitialStatesOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_suppressInitialStatesOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressInitialStatesOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @AC_5F_job reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_AC_5F_job::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_AC_5F_job::objectCompare (const GALGAS_AC_5F_job & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job::GALGAS_AC_5F_job (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job::GALGAS_AC_5F_job (const cPtr_AC_5F_job * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_job) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @AC_job class
//----------------------------------------------------------------------------------------------------------------------

cPtr_AC_5F_job::cPtr_AC_5F_job (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @AC_job generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_job ("AC_job",
                                  nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AC_5F_job::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_job ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AC_5F_job::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_job (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job GALGAS_AC_5F_job::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_job result ;
  const GALGAS_AC_5F_job * p = (const GALGAS_AC_5F_job *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AC_5F_job *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_job", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_AC_5F_job_2D_weak::objectCompare (const GALGAS_AC_5F_job_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job_2D_weak::GALGAS_AC_5F_job_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job_2D_weak & GALGAS_AC_5F_job_2D_weak::operator = (const GALGAS_AC_5F_job & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job_2D_weak::GALGAS_AC_5F_job_2D_weak (const GALGAS_AC_5F_job & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job_2D_weak GALGAS_AC_5F_job_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_AC_5F_job_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job GALGAS_AC_5F_job_2D_weak::bang_AC_5F_job_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_AC_5F_job result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_AC_5F_job) ;
      result = GALGAS_AC_5F_job ((cPtr_AC_5F_job *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @AC_job-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_job_2D_weak ("AC_job-weak",
                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AC_5F_job_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AC_5F_job_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_job_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job_2D_weak GALGAS_AC_5F_job_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_job_2D_weak result ;
  const GALGAS_AC_5F_job_2D_weak * p = (const GALGAS_AC_5F_job_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AC_5F_job_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_job-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayStates reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayStates::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineDisplayStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayStates * p = (const cPtr_C_5F_machineDisplayStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineDisplayStates::objectCompare (const GALGAS_C_5F_machineDisplayStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates::GALGAS_C_5F_machineDisplayStates (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates::GALGAS_C_5F_machineDisplayStates (const cPtr_C_5F_machineDisplayStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayStates) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDisplayStates::setter_setMMachineIndex (GALGAS_uint inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayStates * p = (cPtr_C_5F_machineDisplayStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDisplayStates::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayStates * p = (cPtr_C_5F_machineDisplayStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayStates class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayStates::cPtr_C_5F_machineDisplayStates (const GALGAS_uint & in_mMachineIndex
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

void cPtr_C_5F_machineDisplayStates::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayStates:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayStates (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayStates generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ("C_machineDisplayStates",
                                                  & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayStates::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayStates (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates result ;
  const GALGAS_C_5F_machineDisplayStates * p = (const GALGAS_C_5F_machineDisplayStates *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDisplayStates_2D_weak::objectCompare (const GALGAS_C_5F_machineDisplayStates_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates_2D_weak::GALGAS_C_5F_machineDisplayStates_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates_2D_weak & GALGAS_C_5F_machineDisplayStates_2D_weak::operator = (const GALGAS_C_5F_machineDisplayStates & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates_2D_weak::GALGAS_C_5F_machineDisplayStates_2D_weak (const GALGAS_C_5F_machineDisplayStates & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates_2D_weak GALGAS_C_5F_machineDisplayStates_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates_2D_weak::bang_C_5F_machineDisplayStates_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDisplayStates result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayStates) ;
      result = GALGAS_C_5F_machineDisplayStates ((cPtr_C_5F_machineDisplayStates *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayStates-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayStates_2D_weak ("C_machineDisplayStates-weak",
                                                          & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayStates_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayStates_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayStates_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayStates_2D_weak GALGAS_C_5F_machineDisplayStates_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates_2D_weak result ;
  const GALGAS_C_5F_machineDisplayStates_2D_weak * p = (const GALGAS_C_5F_machineDisplayStates_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayStates_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayStates-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayInitialStates reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayInitialStates::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineDisplayInitialStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayInitialStates * p = (const cPtr_C_5F_machineDisplayInitialStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineDisplayInitialStates::objectCompare (const GALGAS_C_5F_machineDisplayInitialStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates::GALGAS_C_5F_machineDisplayInitialStates (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayInitialStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates::GALGAS_C_5F_machineDisplayInitialStates (const cPtr_C_5F_machineDisplayInitialStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayInitialStates) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayInitialStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDisplayInitialStates::setter_setMMachineIndex (GALGAS_uint inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayInitialStates * p = (cPtr_C_5F_machineDisplayInitialStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDisplayInitialStates::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayInitialStates * p = (cPtr_C_5F_machineDisplayInitialStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayInitialStates class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayInitialStates::cPtr_C_5F_machineDisplayInitialStates (const GALGAS_uint & in_mMachineIndex
                                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayInitialStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

void cPtr_C_5F_machineDisplayInitialStates::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayInitialStates:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayInitialStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayInitialStates (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayInitialStates generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ("C_machineDisplayInitialStates",
                                                         & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayInitialStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayInitialStates::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayInitialStates (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates result ;
  const GALGAS_C_5F_machineDisplayInitialStates * p = (const GALGAS_C_5F_machineDisplayInitialStates *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayInitialStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayInitialStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDisplayInitialStates_2D_weak::objectCompare (const GALGAS_C_5F_machineDisplayInitialStates_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates_2D_weak::GALGAS_C_5F_machineDisplayInitialStates_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates_2D_weak & GALGAS_C_5F_machineDisplayInitialStates_2D_weak::operator = (const GALGAS_C_5F_machineDisplayInitialStates & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates_2D_weak::GALGAS_C_5F_machineDisplayInitialStates_2D_weak (const GALGAS_C_5F_machineDisplayInitialStates & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates_2D_weak GALGAS_C_5F_machineDisplayInitialStates_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates_2D_weak::bang_C_5F_machineDisplayInitialStates_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDisplayInitialStates result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayInitialStates) ;
      result = GALGAS_C_5F_machineDisplayInitialStates ((cPtr_C_5F_machineDisplayInitialStates *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayInitialStates-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates_2D_weak ("C_machineDisplayInitialStates-weak",
                                                                 & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayInitialStates_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayInitialStates_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayInitialStates_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayInitialStates_2D_weak GALGAS_C_5F_machineDisplayInitialStates_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates_2D_weak result ;
  const GALGAS_C_5F_machineDisplayInitialStates_2D_weak * p = (const GALGAS_C_5F_machineDisplayInitialStates_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayInitialStates_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayInitialStates-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayTerminalStates reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayTerminalStates::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineDisplayTerminalStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayTerminalStates * p = (const cPtr_C_5F_machineDisplayTerminalStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineDisplayTerminalStates::objectCompare (const GALGAS_C_5F_machineDisplayTerminalStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates::GALGAS_C_5F_machineDisplayTerminalStates (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates::GALGAS_C_5F_machineDisplayTerminalStates (const cPtr_C_5F_machineDisplayTerminalStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTerminalStates) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTerminalStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDisplayTerminalStates::setter_setMMachineIndex (GALGAS_uint inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayTerminalStates * p = (cPtr_C_5F_machineDisplayTerminalStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDisplayTerminalStates::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayTerminalStates * p = (cPtr_C_5F_machineDisplayTerminalStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayTerminalStates class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayTerminalStates::cPtr_C_5F_machineDisplayTerminalStates (const GALGAS_uint & in_mMachineIndex
                                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTerminalStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

void cPtr_C_5F_machineDisplayTerminalStates::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayTerminalStates:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayTerminalStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTerminalStates (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayTerminalStates generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ("C_machineDisplayTerminalStates",
                                                          & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTerminalStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTerminalStates::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTerminalStates (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates result ;
  const GALGAS_C_5F_machineDisplayTerminalStates * p = (const GALGAS_C_5F_machineDisplayTerminalStates *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayTerminalStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTerminalStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::objectCompare (const GALGAS_C_5F_machineDisplayTerminalStates_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::GALGAS_C_5F_machineDisplayTerminalStates_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates_2D_weak & GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::operator = (const GALGAS_C_5F_machineDisplayTerminalStates & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::GALGAS_C_5F_machineDisplayTerminalStates_2D_weak (const GALGAS_C_5F_machineDisplayTerminalStates & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates_2D_weak GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::bang_C_5F_machineDisplayTerminalStates_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDisplayTerminalStates result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayTerminalStates) ;
      result = GALGAS_C_5F_machineDisplayTerminalStates ((cPtr_C_5F_machineDisplayTerminalStates *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayTerminalStates-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates_2D_weak ("C_machineDisplayTerminalStates-weak",
                                                                  & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTerminalStates_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTerminalStates_2D_weak GALGAS_C_5F_machineDisplayTerminalStates_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates_2D_weak result ;
  const GALGAS_C_5F_machineDisplayTerminalStates_2D_weak * p = (const GALGAS_C_5F_machineDisplayTerminalStates_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayTerminalStates_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTerminalStates-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayTransitions reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayTransitions::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineDisplayTransitions::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayTransitions * p = (const cPtr_C_5F_machineDisplayTransitions *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineDisplayTransitions::objectCompare (const GALGAS_C_5F_machineDisplayTransitions & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions::GALGAS_C_5F_machineDisplayTransitions (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayTransitions::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions::GALGAS_C_5F_machineDisplayTransitions (const cPtr_C_5F_machineDisplayTransitions * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTransitions) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTransitions (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDisplayTransitions::setter_setMMachineIndex (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayTransitions * p = (cPtr_C_5F_machineDisplayTransitions *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDisplayTransitions::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayTransitions * p = (cPtr_C_5F_machineDisplayTransitions *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayTransitions class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayTransitions::cPtr_C_5F_machineDisplayTransitions (const GALGAS_uint & in_mMachineIndex
                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTransitions::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

void cPtr_C_5F_machineDisplayTransitions::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayTransitions:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayTransitions::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTransitions (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayTransitions generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ("C_machineDisplayTransitions",
                                                       & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTransitions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTransitions::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTransitions (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions result ;
  const GALGAS_C_5F_machineDisplayTransitions * p = (const GALGAS_C_5F_machineDisplayTransitions *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayTransitions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTransitions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDisplayTransitions_2D_weak::objectCompare (const GALGAS_C_5F_machineDisplayTransitions_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions_2D_weak::GALGAS_C_5F_machineDisplayTransitions_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions_2D_weak & GALGAS_C_5F_machineDisplayTransitions_2D_weak::operator = (const GALGAS_C_5F_machineDisplayTransitions & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions_2D_weak::GALGAS_C_5F_machineDisplayTransitions_2D_weak (const GALGAS_C_5F_machineDisplayTransitions & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions_2D_weak GALGAS_C_5F_machineDisplayTransitions_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions_2D_weak::bang_C_5F_machineDisplayTransitions_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDisplayTransitions result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayTransitions) ;
      result = GALGAS_C_5F_machineDisplayTransitions ((cPtr_C_5F_machineDisplayTransitions *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDisplayTransitions-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions_2D_weak ("C_machineDisplayTransitions-weak",
                                                               & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTransitions_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTransitions_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTransitions_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDisplayTransitions_2D_weak GALGAS_C_5F_machineDisplayTransitions_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions_2D_weak result ;
  const GALGAS_C_5F_machineDisplayTransitions_2D_weak * p = (const GALGAS_C_5F_machineDisplayTransitions_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDisplayTransitions_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTransitions-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineCheck_2D_weak::objectCompare (const GALGAS_C_5F_machineCheck_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak::GALGAS_C_5F_machineCheck_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak & GALGAS_C_5F_machineCheck_2D_weak::operator = (const GALGAS_C_5F_machineCheck & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak::GALGAS_C_5F_machineCheck_2D_weak (const GALGAS_C_5F_machineCheck & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak GALGAS_C_5F_machineCheck_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck_2D_weak::bang_C_5F_machineCheck_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineCheck result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineCheck) ;
      result = GALGAS_C_5F_machineCheck ((cPtr_C_5F_machineCheck *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineCheck-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheck_2D_weak ("C_machineCheck-weak",
                                                  & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheck_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineCheck_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheck_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak GALGAS_C_5F_machineCheck_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck_2D_weak result ;
  const GALGAS_C_5F_machineCheck_2D_weak * p = (const GALGAS_C_5F_machineCheck_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineCheck_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheck-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineCheckIdentical reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineCheckIdentical::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex_31_.printNonNullClassInstanceProperties ("mMachineIndex1") ;
    mProperty_mMachineIndex_32_.printNonNullClassInstanceProperties ("mMachineIndex2") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineCheckIdentical::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineCheckIdentical * p = (const cPtr_C_5F_machineCheckIdentical *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex_31_.objectCompare (p->mProperty_mMachineIndex_31_) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex_32_.objectCompare (p->mProperty_mMachineIndex_32_) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineCheckIdentical::objectCompare (const GALGAS_C_5F_machineCheckIdentical & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical::GALGAS_C_5F_machineCheckIdentical (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineCheckIdentical::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                             GALGAS_uint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical::GALGAS_C_5F_machineCheckIdentical (const cPtr_C_5F_machineCheckIdentical * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheckIdentical) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex_31_,
                                                                                      const GALGAS_uint & inAttribute_mMachineIndex_32_
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheckIdentical result ;
  if (inAttribute_mMachineIndex_31_.isValid () && inAttribute_mMachineIndex_32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheckIdentical (inAttribute_mMachineIndex_31_, inAttribute_mMachineIndex_32_ COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineCheckIdentical::setter_setMMachineIndex_31_ (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    p->mProperty_mMachineIndex_31_ = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineCheckIdentical::setter_setMMachineIndex_32_ (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    p->mProperty_mMachineIndex_32_ = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineCheckIdentical::readProperty_mMachineIndex_31_ (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    return p->mProperty_mMachineIndex_31_ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineCheckIdentical::readProperty_mMachineIndex_32_ (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    return p->mProperty_mMachineIndex_32_ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineCheckIdentical class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineCheckIdentical::cPtr_C_5F_machineCheckIdentical (const GALGAS_uint & in_mMachineIndex_31_,
                                                                  const GALGAS_uint & in_mMachineIndex_32_
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex_31_ (in_mMachineIndex_31_),
mProperty_mMachineIndex_32_ (in_mMachineIndex_32_) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineCheckIdentical::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;
}

void cPtr_C_5F_machineCheckIdentical::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@C_machineCheckIdentical:" ;
  mProperty_mMachineIndex_31_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMachineIndex_32_.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineCheckIdentical::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineCheckIdentical (mProperty_mMachineIndex_31_, mProperty_mMachineIndex_32_ COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineCheckIdentical generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ("C_machineCheckIdentical",
                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheckIdentical::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineCheckIdentical::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheckIdentical (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheckIdentical result ;
  const GALGAS_C_5F_machineCheckIdentical * p = (const GALGAS_C_5F_machineCheckIdentical *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineCheckIdentical *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheckIdentical", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineCheckIdentical_2D_weak::objectCompare (const GALGAS_C_5F_machineCheckIdentical_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical_2D_weak::GALGAS_C_5F_machineCheckIdentical_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical_2D_weak & GALGAS_C_5F_machineCheckIdentical_2D_weak::operator = (const GALGAS_C_5F_machineCheckIdentical & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical_2D_weak::GALGAS_C_5F_machineCheckIdentical_2D_weak (const GALGAS_C_5F_machineCheckIdentical & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical_2D_weak GALGAS_C_5F_machineCheckIdentical_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineCheckIdentical_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical_2D_weak::bang_C_5F_machineCheckIdentical_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineCheckIdentical result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineCheckIdentical) ;
      result = GALGAS_C_5F_machineCheckIdentical ((cPtr_C_5F_machineCheckIdentical *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineCheckIdentical-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical_2D_weak ("C_machineCheckIdentical-weak",
                                                           & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheckIdentical_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineCheckIdentical_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheckIdentical_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheckIdentical_2D_weak GALGAS_C_5F_machineCheckIdentical_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheckIdentical_2D_weak result ;
  const GALGAS_C_5F_machineCheckIdentical_2D_weak * p = (const GALGAS_C_5F_machineCheckIdentical_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineCheckIdentical_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheckIdentical-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineComponent_2D_weak::objectCompare (const GALGAS_C_5F_machineComponent_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak::GALGAS_C_5F_machineComponent_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak & GALGAS_C_5F_machineComponent_2D_weak::operator = (const GALGAS_C_5F_machineComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak::GALGAS_C_5F_machineComponent_2D_weak (const GALGAS_C_5F_machineComponent & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak GALGAS_C_5F_machineComponent_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineComponent_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent GALGAS_C_5F_machineComponent_2D_weak::bang_C_5F_machineComponent_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineComponent result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineComponent) ;
      result = GALGAS_C_5F_machineComponent ((cPtr_C_5F_machineComponent *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineComponent-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineComponent_2D_weak ("C_machineComponent-weak",
                                                      & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineComponent_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineComponent_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineComponent_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak GALGAS_C_5F_machineComponent_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineComponent_2D_weak result ;
  const GALGAS_C_5F_machineComponent_2D_weak * p = (const GALGAS_C_5F_machineComponent_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineComponent_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineComponent-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::objectCompare (const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak & GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::operator = (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::bang_C_5F_machineDefinedByAdditiveModalComp_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
      result = GALGAS_C_5F_machineDefinedByAdditiveModalComp ((cPtr_C_5F_machineDefinedByAdditiveModalComp *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDefinedByAdditiveModalComp-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak ("C_machineDefinedByAdditiveModalComp-weak",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak result ;
  const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak * p = (const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedByAdditiveModalComp-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::objectCompare (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak & GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::operator = (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::bang_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
      result = GALGAS_C_5F_machineDefinedBySubstractiveModalComp ((cPtr_C_5F_machineDefinedBySubstractiveModalComp *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_machineDefinedBySubstractiveModalComp-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak ("C_machineDefinedBySubstractiveModalComp-weak",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak result ;
  const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak * p = (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedBySubstractiveModalComp-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_inputConfigurationForScenario' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_inputConfigurationForScenario : public cCollectionElement {
  public: GALGAS_L_5F_inputConfigurationForScenario_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_luint & in_mInputValue
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputConfigurationForScenario::cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_luint & in_mInputValue
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputConfigurationForScenario::cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_inputConfigurationForScenario::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_inputConfigurationForScenario::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_inputConfigurationForScenario (mObject.mProperty_mInputValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_inputConfigurationForScenario::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputValue" ":" ;
  mObject.mProperty_mInputValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_inputConfigurationForScenario::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_inputConfigurationForScenario * operand = (cCollectionElement_L_5F_inputConfigurationForScenario *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario::GALGAS_L_5F_inputConfigurationForScenario (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario::GALGAS_L_5F_inputConfigurationForScenario (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputConfigurationForScenario  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::constructor_listWithValue (const GALGAS_luint & inOperand0
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputConfigurationForScenario (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_inputConfigurationForScenario::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_luint & in_mInputValue
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputConfigurationForScenario * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (in_mInputValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::addAssign_operation (const GALGAS_luint & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::setter_append (GALGAS_L_5F_inputConfigurationForScenario_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::setter_insertAtIndex (const GALGAS_luint inOperand0,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::setter_removeAtIndex (GALGAS_luint & outOperand0,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
        outOperand0 = p->mObject.mProperty_mInputValue ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::setter_popFirst (GALGAS_luint & outOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::setter_popLast (GALGAS_luint & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::method_first (GALGAS_luint & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::method_last (GALGAS_luint & outOperand0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::add_operation (const GALGAS_L_5F_inputConfigurationForScenario & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::plusAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario::setter_setMInputValueAtIndex (GALGAS_luint inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_L_5F_inputConfigurationForScenario::getter_mInputValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    result = p->mObject.mProperty_mInputValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_inputConfigurationForScenario::cEnumerator_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario_2D_element cEnumerator_L_5F_inputConfigurationForScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_L_5F_inputConfigurationForScenario::current_mInputValue (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject.mProperty_mInputValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_inputConfigurationForScenario generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ("L_inputConfigurationForScenario",
                                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_inputConfigurationForScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_inputConfigurationForScenario::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputConfigurationForScenario (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario result ;
  const GALGAS_L_5F_inputConfigurationForScenario * p = (const GALGAS_L_5F_inputConfigurationForScenario *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_L_5F_inputConfigurationForScenario *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputConfigurationForScenario", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_inputScenario' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_inputScenario : public cCollectionElement {
  public: GALGAS_L_5F_inputScenario_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputScenario_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputScenario::cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputConfiguration) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputScenario::cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputScenario_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputConfiguration) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_inputScenario::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_inputScenario::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_inputScenario (mObject.mProperty_mInputConfiguration COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_inputScenario::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputConfiguration" ":" ;
  mObject.mProperty_mInputConfiguration.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_inputScenario::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_inputScenario * operand = (cCollectionElement_L_5F_inputScenario *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_inputScenario) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario::GALGAS_L_5F_inputScenario (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario::GALGAS_L_5F_inputScenario (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputScenario  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::constructor_listWithValue (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputScenario (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_inputScenario::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputScenario * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_inputScenario (in_mInputConfiguration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::addAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::setter_append (GALGAS_L_5F_inputScenario_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_inputScenario (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::setter_insertAtIndex (const GALGAS_L_5F_inputConfigurationForScenario inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::setter_removeAtIndex (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
        outOperand0 = p->mObject.mProperty_mInputConfiguration ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::setter_popFirst (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::setter_popLast (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::method_first (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::method_last (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::add_operation (const GALGAS_L_5F_inputScenario & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::plusAssign_operation (const GALGAS_L_5F_inputScenario inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario::setter_setMInputConfigurationAtIndex (GALGAS_L_5F_inputConfigurationForScenario inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputConfiguration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputScenario::getter_mInputConfigurationAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  GALGAS_L_5F_inputConfigurationForScenario result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    result = p->mObject.mProperty_mInputConfiguration ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_inputScenario::cEnumerator_L_5F_inputScenario (const GALGAS_L_5F_inputScenario & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario_2D_element cEnumerator_L_5F_inputScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario cEnumerator_L_5F_inputScenario::current_mInputConfiguration (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject.mProperty_mInputConfiguration ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_inputScenario generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputScenario ("L_inputScenario",
                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_inputScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_inputScenario::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputScenario (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario result ;
  const GALGAS_L_5F_inputScenario * p = (const GALGAS_L_5F_inputScenario *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_L_5F_inputScenario *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputScenario", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_scenarioList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_scenarioList : public cCollectionElement {
  public: GALGAS_L_5F_scenarioList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_scenarioList (const GALGAS_lstring & in_mScenarioTitle,
                                                const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_scenarioList (const GALGAS_L_5F_scenarioList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_scenarioList::cCollectionElement_L_5F_scenarioList (const GALGAS_lstring & in_mScenarioTitle,
                                                                            const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScenarioTitle, in_mInputScenario) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_scenarioList::cCollectionElement_L_5F_scenarioList (const GALGAS_L_5F_scenarioList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScenarioTitle, inElement.mProperty_mInputScenario) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_scenarioList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_scenarioList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_scenarioList (mObject.mProperty_mScenarioTitle, mObject.mProperty_mInputScenario COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_scenarioList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mScenarioTitle" ":" ;
  mObject.mProperty_mScenarioTitle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputScenario" ":" ;
  mObject.mProperty_mInputScenario.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_scenarioList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_scenarioList * operand = (cCollectionElement_L_5F_scenarioList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_scenarioList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList::GALGAS_L_5F_scenarioList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList::GALGAS_L_5F_scenarioList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_scenarioList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_L_5F_inputScenario & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_scenarioList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_scenarioList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mScenarioTitle,
                                                          const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_scenarioList * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_scenarioList (in_mScenarioTitle,
                                                       in_mInputScenario COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_L_5F_inputScenario & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_scenarioList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::setter_append (GALGAS_L_5F_scenarioList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_scenarioList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_L_5F_inputScenario inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_L_5F_scenarioList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_L_5F_inputScenario & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
        outOperand0 = p->mObject.mProperty_mScenarioTitle ;
        outOperand1 = p->mObject.mProperty_mInputScenario ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_L_5F_inputScenario & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_L_5F_inputScenario & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_L_5F_inputScenario & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_L_5F_inputScenario & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::add_operation (const GALGAS_L_5F_scenarioList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::plusAssign_operation (const GALGAS_L_5F_scenarioList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::setter_setMScenarioTitleAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mScenarioTitle = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_L_5F_scenarioList::getter_mScenarioTitleAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    result = p->mObject.mProperty_mScenarioTitle ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList::setter_setMInputScenarioAtIndex (GALGAS_L_5F_inputScenario inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputScenario = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario GALGAS_L_5F_scenarioList::getter_mInputScenarioAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  GALGAS_L_5F_inputScenario result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    result = p->mObject.mProperty_mInputScenario ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_scenarioList::cEnumerator_L_5F_scenarioList (const GALGAS_L_5F_scenarioList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList_2D_element cEnumerator_L_5F_scenarioList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_L_5F_scenarioList::current_mScenarioTitle (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject.mProperty_mScenarioTitle ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario cEnumerator_L_5F_scenarioList::current_mInputScenario (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject.mProperty_mInputScenario ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_scenarioList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_scenarioList ("L_scenarioList",
                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_scenarioList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_scenarioList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_scenarioList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList result ;
  const GALGAS_L_5F_scenarioList * p = (const GALGAS_L_5F_scenarioList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_L_5F_scenarioList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_scenarioList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_scenarioComponent reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_scenarioComponent::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
    mProperty_mInputVariableCount.printNonNullClassInstanceProperties ("mInputVariableCount") ;
    mProperty_mInputAndInternalVariableCount.printNonNullClassInstanceProperties ("mInputAndInternalVariableCount") ;
    mProperty_mVariablesMap.printNonNullClassInstanceProperties ("mVariablesMap") ;
    mProperty_mScenarioList.printNonNullClassInstanceProperties ("mScenarioList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_scenarioComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputVariableCount.objectCompare (p->mProperty_mInputVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputAndInternalVariableCount.objectCompare (p->mProperty_mInputAndInternalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariablesMap.objectCompare (p->mProperty_mVariablesMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mScenarioList.objectCompare (p->mProperty_mScenarioList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_scenarioComponent::objectCompare (const GALGAS_C_5F_scenarioComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_scenarioComponent::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                                         GALGAS_L_5F_scenarioList::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (const cPtr_C_5F_scenarioComponent * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_scenarioComponent) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex,
                                                                              const GALGAS_uint & inAttribute_mInputVariableCount,
                                                                              const GALGAS_uint & inAttribute_mInputAndInternalVariableCount,
                                                                              const GALGAS_M_5F_variablesMap & inAttribute_mVariablesMap,
                                                                              const GALGAS_L_5F_scenarioList & inAttribute_mScenarioList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_scenarioComponent result ;
  if (inAttribute_mMachineIndex.isValid () && inAttribute_mInputVariableCount.isValid () && inAttribute_mInputAndInternalVariableCount.isValid () && inAttribute_mVariablesMap.isValid () && inAttribute_mScenarioList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_scenarioComponent (inAttribute_mMachineIndex, inAttribute_mInputVariableCount, inAttribute_mInputAndInternalVariableCount, inAttribute_mVariablesMap, inAttribute_mScenarioList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMMachineIndex (GALGAS_uint inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMInputVariableCount (GALGAS_uint inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMInputAndInternalVariableCount (GALGAS_uint inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMVariablesMap (GALGAS_M_5F_variablesMap inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMScenarioList (GALGAS_L_5F_scenarioList inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mScenarioList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_scenarioComponent::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_scenarioComponent::readProperty_mInputVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_scenarioComponent::readProperty_mInputAndInternalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_C_5F_scenarioComponent::readProperty_mVariablesMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mVariablesMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_C_5F_scenarioComponent::readProperty_mScenarioList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_L_5F_scenarioList () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mScenarioList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_scenarioComponent class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_scenarioComponent::cPtr_C_5F_scenarioComponent (const GALGAS_uint & in_mMachineIndex,
                                                          const GALGAS_uint & in_mInputVariableCount,
                                                          const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                          const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                          const GALGAS_L_5F_scenarioList & in_mScenarioList
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex),
mProperty_mInputVariableCount (in_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mProperty_mVariablesMap (in_mVariablesMap),
mProperty_mScenarioList (in_mScenarioList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_scenarioComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

void cPtr_C_5F_scenarioComponent::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@C_scenarioComponent:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mScenarioList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_scenarioComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_scenarioComponent (mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mScenarioList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_scenarioComponent generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_scenarioComponent ("C_scenarioComponent",
                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_scenarioComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_scenarioComponent::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_scenarioComponent (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_scenarioComponent result ;
  const GALGAS_C_5F_scenarioComponent * p = (const GALGAS_C_5F_scenarioComponent *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_C_5F_scenarioComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_scenarioComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

