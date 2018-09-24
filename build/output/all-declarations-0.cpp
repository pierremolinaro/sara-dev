#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cTokenFor_sara_5F_scanner::cTokenFor_sara_5F_scanner (void) :
mLexicalAttribute_identifierString (),
mLexicalAttribute_ulongValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_sara_5F_scanner::C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                                                      const C_String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_sara_5F_scanner::C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                                                      const C_String & inSourceString,
                                                      const C_String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_sara_5F_scanner::indexingDirectory (void) const {
  return "" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Lexical error message list                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectCharInString = "this character cannot appear within a string" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectEndOfComment = "incorrect end of comment" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectMachineNameBeginning = "incorrect machine name beginning" ;

static const char * gLexicalMessage_sara_5F_scanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_sara_5F_scanner_internalError = "internal error" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//          Syntax error messages, for every terminal symbol                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$machineIdf$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_machineIdf = "a machine name ($...)" ;

//--- Syntax error message for terminal '$literal_integer$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_literal_5F_integer = "a decimal number" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_comment = "a comment" ;

//--- Syntax error message for terminal '$auto$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_auto = "the 'auto' key word" ;

//--- Syntax error message for terminal '$state$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_state = "the 'state' key word" ;

//--- Syntax error message for terminal '$first$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_first = "the 'first' key word" ;

//--- Syntax error message for terminal '$last$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_last = "the 'last' key word" ;

//--- Syntax error message for terminal '$goto$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_goto = "the 'goto' key word" ;

//--- Syntax error message for terminal '$true$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_true = "the 'true' key word" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_false = "the 'false' key word" ;

//--- Syntax error message for terminal '$nofirst$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_nofirst = "the 'nofirst' key word" ;

//--- Syntax error message for terminal '$nolast$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_nolast = "the 'nolast' key word" ;

//--- Syntax error message for terminal '$modalcompadd$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_modalcompadd = "the 'modalcompadd' key word" ;

//--- Syntax error message for terminal '$exclude$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_exclude = "the 'exclude' key word" ;

//--- Syntax error message for terminal '$modalcompsub$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_modalcompsub = "the 'modalcompsub' key word" ;

//--- Syntax error message for terminal '$include$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_include = "the 'include' key word" ;

//--- Syntax error message for terminal '$to$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_to = "the 'to' key word" ;

//--- Syntax error message for terminal '$scenario$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_scenario = "the 'scenario' key word" ;

//--- Syntax error message for terminal '$trans$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_trans = "the 'trans' key word" ;

//--- Syntax error message for terminal '$display$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_display = "the 'display' key word" ;

//--- Syntax error message for terminal '$ite_cache$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_ite_5F_cache = "the 'ite_cache' key word" ;

//--- Syntax error message for terminal '$and_cache$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_and_5F_cache = "the 'and_cache' key word" ;

//--- Syntax error message for terminal '$map$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_map = "the 'map' key word" ;

//--- Syntax error message for terminal '$bdd$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_bdd = "the 'bdd' key word" ;

//--- Syntax error message for terminal '$bool$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_bool = "the 'bool' key word" ;

//--- Syntax error message for terminal '$use_and$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_use_5F_and = "the 'use_and' key word" ;

//--- Syntax error message for terminal '$use_ite$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_use_5F_ite = "the 'use_ite' key word" ;

//--- Syntax error message for terminal '$use_and_ite$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_use_5F_and_5F_ite = "the 'use_and_ite' key word" ;

//--- Syntax error message for terminal '$check$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_check = "the 'check' key word" ;

//--- Syntax error message for terminal '$checkbool$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_checkbool = "the 'checkbool' key word" ;

//--- Syntax error message for terminal '$checkidentical$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner_checkidentical = "the 'checkidentical' key word" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__3F_ = "the '\?' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__21_ = "the '!' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$||$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__7C__7C_ = "the '||' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$:=$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__3A__3D_ = "the ':=' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$@$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__40_ = "the '@' delimitor" ;

//--- Syntax error message for terminal '$**$' :
static const char * gSyntaxErrorMessage_sara_5F_scanner__2A__2A_ = "the '**' delimitor" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                getMessageForTerminal                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_sara_5F_scanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 55)) {
    static const char * syntaxErrorMessageArray [55] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_sara_5F_scanner_identifier,
        gSyntaxErrorMessage_sara_5F_scanner_literal_5F_string,
        gSyntaxErrorMessage_sara_5F_scanner_machineIdf,
        gSyntaxErrorMessage_sara_5F_scanner_literal_5F_integer,
        gSyntaxErrorMessage_sara_5F_scanner_comment,
        gSyntaxErrorMessage_sara_5F_scanner_auto,
        gSyntaxErrorMessage_sara_5F_scanner_state,
        gSyntaxErrorMessage_sara_5F_scanner_first,
        gSyntaxErrorMessage_sara_5F_scanner_last,
        gSyntaxErrorMessage_sara_5F_scanner_goto,
        gSyntaxErrorMessage_sara_5F_scanner_true,
        gSyntaxErrorMessage_sara_5F_scanner_false,
        gSyntaxErrorMessage_sara_5F_scanner_nofirst,
        gSyntaxErrorMessage_sara_5F_scanner_nolast,
        gSyntaxErrorMessage_sara_5F_scanner_modalcompadd,
        gSyntaxErrorMessage_sara_5F_scanner_exclude,
        gSyntaxErrorMessage_sara_5F_scanner_modalcompsub,
        gSyntaxErrorMessage_sara_5F_scanner_include,
        gSyntaxErrorMessage_sara_5F_scanner_to,
        gSyntaxErrorMessage_sara_5F_scanner_scenario,
        gSyntaxErrorMessage_sara_5F_scanner_trans,
        gSyntaxErrorMessage_sara_5F_scanner_display,
        gSyntaxErrorMessage_sara_5F_scanner_ite_5F_cache,
        gSyntaxErrorMessage_sara_5F_scanner_and_5F_cache,
        gSyntaxErrorMessage_sara_5F_scanner_map,
        gSyntaxErrorMessage_sara_5F_scanner_bdd,
        gSyntaxErrorMessage_sara_5F_scanner_bool,
        gSyntaxErrorMessage_sara_5F_scanner_use_5F_and,
        gSyntaxErrorMessage_sara_5F_scanner_use_5F_ite,
        gSyntaxErrorMessage_sara_5F_scanner_use_5F_and_5F_ite,
        gSyntaxErrorMessage_sara_5F_scanner_check,
        gSyntaxErrorMessage_sara_5F_scanner_checkbool,
        gSyntaxErrorMessage_sara_5F_scanner_checkidentical,
        gSyntaxErrorMessage_sara_5F_scanner__2C_,
        gSyntaxErrorMessage_sara_5F_scanner__3B_,
        gSyntaxErrorMessage_sara_5F_scanner__3A_,
        gSyntaxErrorMessage_sara_5F_scanner__7B_,
        gSyntaxErrorMessage_sara_5F_scanner__7D_,
        gSyntaxErrorMessage_sara_5F_scanner__2D__3E_,
        gSyntaxErrorMessage_sara_5F_scanner__26_,
        gSyntaxErrorMessage_sara_5F_scanner__7E_,
        gSyntaxErrorMessage_sara_5F_scanner__3F_,
        gSyntaxErrorMessage_sara_5F_scanner__21_,
        gSyntaxErrorMessage_sara_5F_scanner__7C_,
        gSyntaxErrorMessage_sara_5F_scanner__7C__7C_,
        gSyntaxErrorMessage_sara_5F_scanner__2B_,
        gSyntaxErrorMessage_sara_5F_scanner__28_,
        gSyntaxErrorMessage_sara_5F_scanner__29_,
        gSyntaxErrorMessage_sara_5F_scanner__3A__3D_,
        gSyntaxErrorMessage_sara_5F_scanner__5E_,
        gSyntaxErrorMessage_sara_5F_scanner__3D_,
        gSyntaxErrorMessage_sara_5F_scanner__2A_,
        gSyntaxErrorMessage_sara_5F_scanner__40_,
        gSyntaxErrorMessage_sara_5F_scanner__2A__2A_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      U N I C O D E    S T R I N G S                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//--- Unicode string for '$and_5F_cache$'
static const utf32 kUnicodeString_sara_5F_scanner_and_5F_cache [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('_'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
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

//--- Unicode string for '$ite_5F_cache$'
static const utf32 kUnicodeString_sara_5F_scanner_ite_5F_cache [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('_'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
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

//--- Unicode string for '$use_5F_and$'
static const utf32 kUnicodeString_sara_5F_scanner_use_5F_and [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('_'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$use_5F_and_5F_ite$'
static const utf32 kUnicodeString_sara_5F_scanner_use_5F_and_5F_ite [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('_'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('_'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$use_5F_ite$'
static const utf32 kUnicodeString_sara_5F_scanner_use_5F_ite [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('_'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'delimitorsList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

int16_t C_Lexique_sara_5F_scanner::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_sara_5F_scanner_delimitorsList, ktable_size_sara_5F_scanner_delimitorsList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'keyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_sara_5F_scanner_keyWordList = 28 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_use_5F_and, 7, C_Lexique_sara_5F_scanner::kToken_use_5F_and),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_use_5F_ite, 7, C_Lexique_sara_5F_scanner::kToken_use_5F_ite),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_scenario, 8, C_Lexique_sara_5F_scanner::kToken_scenario),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_and_5F_cache, 9, C_Lexique_sara_5F_scanner::kToken_and_5F_cache),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_checkbool, 9, C_Lexique_sara_5F_scanner::kToken_checkbool),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_ite_5F_cache, 9, C_Lexique_sara_5F_scanner::kToken_ite_5F_cache),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_use_5F_and_5F_ite, 11, C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_modalcompadd, 12, C_Lexique_sara_5F_scanner::kToken_modalcompadd),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_modalcompsub, 12, C_Lexique_sara_5F_scanner::kToken_modalcompsub),
  C_unicode_lexique_table_entry (kUnicodeString_sara_5F_scanner_checkidentical, 14, C_Lexique_sara_5F_scanner::kToken_checkidentical)
} ;

int16_t C_Lexique_sara_5F_scanner::search_into_keyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_sara_5F_scanner_keyWordList, ktable_size_sara_5F_scanner_keyWordList) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          getCurrentTokenString                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_sara_5F_scanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_sara_5F_scanner * ptr = (const cTokenFor_sara_5F_scanner *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
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
    case kToken_ite_5F_cache:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ite_cache") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_and_5F_cache:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("and_cache") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_map:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("map") ;
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
    case kToken_use_5F_and:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("use_and") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_use_5F_ite:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("use_ite") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_use_5F_and_5F_ite:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("use_and_ite") ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Delimiters                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Replacements                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Terminal Symbols as end of script in template mark                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Unicode test functions                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
 
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool C_Lexique_sara_5F_scanner::parseLexicalToken (void) {
  cTokenFor_sara_5F_scanner token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_identifierString.setLengthToZero () ;
    token.mLexicalAttribute_ulongValue = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_literal_5F_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32CharRange (TO_UNICODE ('\v'), TO_UNICODE (65533))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         E N T E R    T O K E N                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void C_Lexique_sara_5F_scanner::enterToken (cTokenFor_sara_5F_scanner & ioToken) {
  cTokenFor_sara_5F_scanner * ptr = NULL ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               A T T R I B U T E   A C C E S S                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_sara_5F_scanner::attributeValue_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_sara_5F_scanner::attributeValue_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_ulongValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring C_Lexique_sara_5F_scanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint C_Lexique_sara_5F_scanner::synthetizedAttribute_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_ulongValue) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         I N T R O S P E C T I O N                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  result.addAssign_operation (GALGAS_string ("ite_cache") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("and_cache") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bdd") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bool") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("use_and") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("use_ite") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("use_and_ite") COMMA_THERE) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void getKeywordLists_sara_5F_scanner (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("sara_scanner:delimitorsList") ;
  ioList.appendObject ("sara_scanner:keyWordList") ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    ioList.appendObject ("use_and") ;
    ioList.appendObject ("use_ite") ;
    ioList.appendObject ("scenario") ;
    ioList.appendObject ("and_cache") ;
    ioList.appendObject ("checkbool") ;
    ioList.appendObject ("ite_cache") ;
    ioList.appendObject ("use_and_ite") ;
    ioList.appendObject ("modalcompadd") ;
    ioList.appendObject ("modalcompsub") ;
    ioList.appendObject ("checkidentical") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static cLexiqueIntrospection lexiqueIntrospection_sara_5F_scanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_sara_5F_scanner, getKeywordsForIdentifier_sara_5F_scanner) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_sara_5F_scanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [55] = {0,
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
    2 /* sara_scanner_1_ite_5F_cache */,
    2 /* sara_scanner_1_and_5F_cache */,
    2 /* sara_scanner_1_map */,
    2 /* sara_scanner_1_bdd */,
    2 /* sara_scanner_1_bool */,
    2 /* sara_scanner_1_use_5F_and */,
    2 /* sara_scanner_1_use_5F_ite */,
    2 /* sara_scanner_1_use_5F_and_5F_ite */,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_variablesMap::cMapElement_M_5F_variablesMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_uint & in_mIndex
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_M_5F_variablesMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_M_5F_variablesMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_variablesMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_M_5F_variablesMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_M_5F_variablesMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_variablesMap * operand = (cMapElement_M_5F_variablesMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap::GALGAS_M_5F_variablesMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap::GALGAS_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap & GALGAS_M_5F_variablesMap::operator = (const GALGAS_M_5F_variablesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_variablesMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_variablesMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_uint & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_variablesMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_variablesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_variablesMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_uint inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_variablesMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_M_5F_variablesMap_searchKey = "the '%K' variable is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_variablesMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_uint & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_M_5F_variablesMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_variablesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_variablesMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_variablesMap * p = (cMapElement_M_5F_variablesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_variablesMap * GALGAS_M_5F_variablesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * result = (cMapElement_M_5F_variablesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_variablesMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_M_5F_variablesMap::cEnumerator_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap_2D_element cEnumerator_M_5F_variablesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return GALGAS_M_5F_variablesMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_M_5F_variablesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_M_5F_variablesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return p->mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @M_variablesMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_variablesMap ("M_variablesMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_variablesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_variablesMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_variablesMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  const GALGAS_M_5F_variablesMap * p = (const GALGAS_M_5F_variablesMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_variablesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_variablesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_stateMap::cMapElement_M_5F_stateMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mIndex
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_M_5F_stateMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_M_5F_stateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_stateMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_M_5F_stateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_M_5F_stateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_stateMap * operand = (cMapElement_M_5F_stateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap::GALGAS_M_5F_stateMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap::GALGAS_M_5F_stateMap (const GALGAS_M_5F_stateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap & GALGAS_M_5F_stateMap::operator = (const GALGAS_M_5F_stateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_stateMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_stateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_stateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_stateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_stateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_stateMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uint inArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_stateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' state has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_stateMap::setter_defineState (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_stateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' state has been already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_M_5F_stateMap_searchKey = "the '%K' state is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_stateMap::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uint & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_M_5F_stateMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_stateMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_stateMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_stateMap * p = (cMapElement_M_5F_stateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_stateMap * GALGAS_M_5F_stateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * result = (cMapElement_M_5F_stateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_stateMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_M_5F_stateMap::cEnumerator_M_5F_stateMap (const GALGAS_M_5F_stateMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap_2D_element cEnumerator_M_5F_stateMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return GALGAS_M_5F_stateMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_M_5F_stateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_M_5F_stateMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return p->mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @M_stateMap type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_stateMap ("M_stateMap",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_stateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_stateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_stateMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  const GALGAS_M_5F_stateMap * p = (const GALGAS_M_5F_stateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_stateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_stateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@L_5F_translationVector' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_translationVector : public cCollectionElement {
  public : GALGAS_L_5F_translationVector_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_translationVector (const GALGAS_uint & in_mTargetSlot
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_translationVector (const GALGAS_L_5F_translationVector_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_translationVector::cCollectionElement_L_5F_translationVector (const GALGAS_uint & in_mTargetSlot
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetSlot) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_translationVector::cCollectionElement_L_5F_translationVector (const GALGAS_L_5F_translationVector_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetSlot) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_translationVector::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_translationVector::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_translationVector (mObject.mProperty_mTargetSlot COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_L_5F_translationVector::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetSlot" ":" ;
  mObject.mProperty_mTargetSlot.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_translationVector::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_translationVector * operand = (cCollectionElement_L_5F_translationVector *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_translationVector) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector::GALGAS_L_5F_translationVector (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector::GALGAS_L_5F_translationVector (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_translationVector  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_uint & in_mTargetSlot
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_translationVector * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_translationVector (in_mTargetSlot COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::addAssign_operation (const GALGAS_uint & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::setter_append (GALGAS_L_5F_translationVector_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
      outOperand0 = p->mObject.mProperty_mTargetSlot ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::setter_popFirst (GALGAS_uint & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::setter_popLast (GALGAS_uint & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::method_first (GALGAS_uint & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::method_last (GALGAS_uint & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mProperty_mTargetSlot ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector::plusAssign_operation (const GALGAS_L_5F_translationVector inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_translationVector::getter_mTargetSlotAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    result = p->mObject.mProperty_mTargetSlot ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_translationVector::cEnumerator_L_5F_translationVector (const GALGAS_L_5F_translationVector & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector_2D_element cEnumerator_L_5F_translationVector::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_L_5F_translationVector::current_mTargetSlot (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject.mProperty_mTargetSlot ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @L_translationVector type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_translationVector ("L_translationVector",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_translationVector::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_translationVector::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_translationVector (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector result ;
  const GALGAS_L_5F_translationVector * p = (const GALGAS_L_5F_translationVector *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_translationVector *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_translationVector", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_AC_5F_boolExpression::objectCompare (const GALGAS_AC_5F_boolExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression::GALGAS_AC_5F_boolExpression (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression::GALGAS_AC_5F_boolExpression (const cPtr_AC_5F_boolExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_boolExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @AC_boolExpression class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_AC_5F_boolExpression::cPtr_AC_5F_boolExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @AC_boolExpression type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_boolExpression ("AC_boolExpression",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_AC_5F_boolExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_boolExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_AC_5F_boolExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_boolExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_AC_5F_boolExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_boolExpression result ;
  const GALGAS_AC_5F_boolExpression * p = (const GALGAS_AC_5F_boolExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_AC_5F_boolExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_boolExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_andExpression::objectCompare (const GALGAS_C_5F_andExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_andExpression::GALGAS_C_5F_andExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_andExpression::GALGAS_C_5F_andExpression (const cPtr_C_5F_andExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_andExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_andExpression GALGAS_C_5F_andExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_andExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_andExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_andExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_andExpression * p = (const cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_andExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_andExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_andExpression * p = (const cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_andExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @C_andExpression class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_andExpression::cPtr_C_5F_andExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_andExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_andExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @C_andExpression type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_andExpression ("C_andExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_andExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_andExpression GALGAS_C_5F_andExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_andExpression result ;
  const GALGAS_C_5F_andExpression * p = (const GALGAS_C_5F_andExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_andExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_andExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_orExpression::objectCompare (const GALGAS_C_5F_orExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orExpression::GALGAS_C_5F_orExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orExpression::GALGAS_C_5F_orExpression (const cPtr_C_5F_orExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orExpression GALGAS_C_5F_orExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                    const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_orExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_orExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orExpression * p = (const cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_orExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_orExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orExpression * p = (const cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_orExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @C_orExpression class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_orExpression::cPtr_C_5F_orExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_orExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_orExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @C_orExpression type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orExpression ("C_orExpression",
                                          & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orExpression GALGAS_C_5F_orExpression::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orExpression result ;
  const GALGAS_C_5F_orExpression * p = (const GALGAS_C_5F_orExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_orExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_xorExpression::objectCompare (const GALGAS_C_5F_xorExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_xorExpression::GALGAS_C_5F_xorExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_xorExpression::GALGAS_C_5F_xorExpression (const cPtr_C_5F_xorExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_xorExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_xorExpression GALGAS_C_5F_xorExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_xorExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_xorExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_xorExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_xorExpression * p = (const cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_xorExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_xorExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_xorExpression * p = (const cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_xorExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @C_xorExpression class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_xorExpression::cPtr_C_5F_xorExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_xorExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_xorExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @C_xorExpression type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_xorExpression ("C_xorExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_xorExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_xorExpression GALGAS_C_5F_xorExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_xorExpression result ;
  const GALGAS_C_5F_xorExpression * p = (const GALGAS_C_5F_xorExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_xorExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_xorExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_impliesExpression::objectCompare (const GALGAS_C_5F_impliesExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_impliesExpression::GALGAS_C_5F_impliesExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_impliesExpression::GALGAS_C_5F_impliesExpression (const cPtr_C_5F_impliesExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_impliesExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_impliesExpression GALGAS_C_5F_impliesExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                              const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_impliesExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_impliesExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_impliesExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_impliesExpression * p = (const cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_impliesExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_impliesExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_impliesExpression * p = (const cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_impliesExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @C_impliesExpression class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_impliesExpression::cPtr_C_5F_impliesExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                          const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_impliesExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_impliesExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @C_impliesExpression type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_impliesExpression ("C_impliesExpression",
                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_impliesExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_impliesExpression GALGAS_C_5F_impliesExpression::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_impliesExpression result ;
  const GALGAS_C_5F_impliesExpression * p = (const GALGAS_C_5F_impliesExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_impliesExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_impliesExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_equalExpression::objectCompare (const GALGAS_C_5F_equalExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_equalExpression::GALGAS_C_5F_equalExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_equalExpression::GALGAS_C_5F_equalExpression (const cPtr_C_5F_equalExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_equalExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_equalExpression GALGAS_C_5F_equalExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                          const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_equalExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_equalExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_equalExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_equalExpression * p = (const cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_equalExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_equalExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_equalExpression * p = (const cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_equalExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @C_equalExpression class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_equalExpression::cPtr_C_5F_equalExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                      const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_equalExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_equalExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @C_equalExpression type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_equalExpression ("C_equalExpression",
                                             & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_equalExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_equalExpression GALGAS_C_5F_equalExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_equalExpression result ;
  const GALGAS_C_5F_equalExpression * p = (const GALGAS_C_5F_equalExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_equalExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_equalExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_notExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_notExpression * p = (const cPtr_C_5F_notExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_notExpression::objectCompare (const GALGAS_C_5F_notExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_notExpression::GALGAS_C_5F_notExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_notExpression::GALGAS_C_5F_notExpression (const cPtr_C_5F_notExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_notExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_notExpression GALGAS_C_5F_notExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_notExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_notExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_notExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_notExpression * p = (const cPtr_C_5F_notExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_notExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @C_notExpression class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_notExpression::cPtr_C_5F_notExpression (const GALGAS_AC_5F_boolExpression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_notExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

void cPtr_C_5F_notExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_notExpression:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_notExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_notExpression (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @C_notExpression type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_notExpression ("C_notExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_notExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_notExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_notExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_notExpression GALGAS_C_5F_notExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_notExpression result ;
  const GALGAS_C_5F_notExpression * p = (const GALGAS_C_5F_notExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_notExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_notExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_VariableExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_VariableExpression * p = (const cPtr_C_5F_VariableExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mInputVarIndex.objectCompare (p->mProperty_mInputVarIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_VariableExpression::objectCompare (const GALGAS_C_5F_VariableExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_VariableExpression::GALGAS_C_5F_VariableExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_VariableExpression::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_VariableExpression::GALGAS_C_5F_VariableExpression (const cPtr_C_5F_VariableExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_VariableExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::constructor_new (const GALGAS_uint & inAttribute_mInputVarIndex
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_VariableExpression result ;
  if (inAttribute_mInputVarIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_VariableExpression (inAttribute_mInputVarIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_VariableExpression::getter_mInputVarIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_VariableExpression * p = (const cPtr_C_5F_VariableExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
    result = p->mProperty_mInputVarIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_VariableExpression::getter_mInputVarIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputVarIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @C_VariableExpression class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_VariableExpression::cPtr_C_5F_VariableExpression (const GALGAS_uint & in_mInputVarIndex
                                                            COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mInputVarIndex (in_mInputVarIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_VariableExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

void cPtr_C_5F_VariableExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@C_VariableExpression:" ;
  mProperty_mInputVarIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_VariableExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_VariableExpression (mProperty_mInputVarIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @C_VariableExpression type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_VariableExpression ("C_VariableExpression",
                                                & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_VariableExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_VariableExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_VariableExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_VariableExpression result ;
  const GALGAS_C_5F_VariableExpression * p = (const GALGAS_C_5F_VariableExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_VariableExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_VariableExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_trueExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_trueExpression::objectCompare (const GALGAS_C_5F_trueExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trueExpression::GALGAS_C_5F_trueExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_trueExpression::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trueExpression::GALGAS_C_5F_trueExpression (const cPtr_C_5F_trueExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trueExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_C_5F_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_trueExpression (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @C_trueExpression class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_trueExpression::cPtr_C_5F_trueExpression (LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

void cPtr_C_5F_trueExpression::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "[@C_trueExpression]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_trueExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_trueExpression (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @C_trueExpression type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trueExpression ("C_trueExpression",
                                            & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trueExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trueExpression result ;
  const GALGAS_C_5F_trueExpression * p = (const GALGAS_C_5F_trueExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_trueExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trueExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_falseExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_falseExpression::objectCompare (const GALGAS_C_5F_falseExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_falseExpression::GALGAS_C_5F_falseExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_falseExpression::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_falseExpression::GALGAS_C_5F_falseExpression (const cPtr_C_5F_falseExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_falseExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_C_5F_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_falseExpression (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @C_falseExpression class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_falseExpression::cPtr_C_5F_falseExpression (LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

void cPtr_C_5F_falseExpression::description (C_String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString << "[@C_falseExpression]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_falseExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_falseExpression (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @C_falseExpression type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_falseExpression ("C_falseExpression",
                                             & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_falseExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_falseExpression result ;
  const GALGAS_C_5F_falseExpression * p = (const GALGAS_C_5F_falseExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_falseExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_falseExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@L_5F_transitionDefinition' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_transitionDefinition : public cCollectionElement {
  public : GALGAS_L_5F_transitionDefinition_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_transitionDefinition (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                         const GALGAS_location & in_mEndOfExpression,
                                                         const GALGAS_uint & in_mTargetStateIndex
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_transitionDefinition::cCollectionElement_L_5F_transitionDefinition (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                                                            const GALGAS_location & in_mEndOfExpression,
                                                                                            const GALGAS_uint & in_mTargetStateIndex
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActionExpression, in_mEndOfExpression, in_mTargetStateIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_transitionDefinition::cCollectionElement_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActionExpression, inElement.mProperty_mEndOfExpression, inElement.mProperty_mTargetStateIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_transitionDefinition::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_transitionDefinition::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_transitionDefinition (mObject.mProperty_mActionExpression, mObject.mProperty_mEndOfExpression, mObject.mProperty_mTargetStateIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_transitionDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_transitionDefinition * operand = (cCollectionElement_L_5F_transitionDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_transitionDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition::GALGAS_L_5F_transitionDefinition (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition::GALGAS_L_5F_transitionDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_transitionDefinition  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                                  const GALGAS_location & in_mEndOfExpression,
                                                                  const GALGAS_uint & in_mTargetStateIndex
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (in_mActionExpression,
                                                               in_mEndOfExpression,
                                                               in_mTargetStateIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::addAssign_operation (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                            const GALGAS_location & inOperand1,
                                                            const GALGAS_uint & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::setter_append (GALGAS_L_5F_transitionDefinition_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::setter_insertAtIndex (const GALGAS_AC_5F_boolExpression inOperand0,
                                                             const GALGAS_location inOperand1,
                                                             const GALGAS_uint inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::setter_removeAtIndex (GALGAS_AC_5F_boolExpression & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             GALGAS_uint & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
    if (NULL == p) {
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::setter_popFirst (GALGAS_AC_5F_boolExpression & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        GALGAS_uint & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::setter_popLast (GALGAS_AC_5F_boolExpression & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       GALGAS_uint & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::method_first (GALGAS_AC_5F_boolExpression & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     GALGAS_uint & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::method_last (GALGAS_AC_5F_boolExpression & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    GALGAS_uint & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition::plusAssign_operation (const GALGAS_L_5F_transitionDefinition inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_transitionDefinition::getter_mActionExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mActionExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_L_5F_transitionDefinition::getter_mEndOfExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_transitionDefinition::getter_mTargetStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mTargetStateIndex ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_transitionDefinition::cEnumerator_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition_2D_element cEnumerator_L_5F_transitionDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cEnumerator_L_5F_transitionDefinition::current_mActionExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mActionExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_L_5F_transitionDefinition::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_L_5F_transitionDefinition::current_mTargetStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mTargetStateIndex ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @L_transitionDefinition type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_transitionDefinition ("L_transitionDefinition",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_transitionDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_transitionDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_transitionDefinition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition result ;
  const GALGAS_L_5F_transitionDefinition * p = (const GALGAS_L_5F_transitionDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_transitionDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_transitionDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@L_5F_stateDefinition' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_stateDefinition : public cCollectionElement {
  public : GALGAS_L_5F_stateDefinition_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_stateDefinition (const GALGAS_uint & in_mStateIndex,
                                                    const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                    const GALGAS_location & in_mEndOfStateExpression,
                                                    const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_stateDefinition::cCollectionElement_L_5F_stateDefinition (const GALGAS_uint & in_mStateIndex,
                                                                                  const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                                                  const GALGAS_location & in_mEndOfStateExpression,
                                                                                  const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateExpression, in_mEndOfStateExpression, in_mTransitionsList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_stateDefinition::cCollectionElement_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStateIndex, inElement.mProperty_mStateExpression, inElement.mProperty_mEndOfStateExpression, inElement.mProperty_mTransitionsList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_stateDefinition::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_stateDefinition::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_stateDefinition (mObject.mProperty_mStateIndex, mObject.mProperty_mStateExpression, mObject.mProperty_mEndOfStateExpression, mObject.mProperty_mTransitionsList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_stateDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_stateDefinition * operand = (cCollectionElement_L_5F_stateDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_stateDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition::GALGAS_L_5F_stateDefinition (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition::GALGAS_L_5F_stateDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_stateDefinition  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_uint & in_mStateIndex,
                                                             const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                             const GALGAS_location & in_mEndOfStateExpression,
                                                             const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_stateDefinition (in_mStateIndex,
                                                          in_mStateExpression,
                                                          in_mEndOfStateExpression,
                                                          in_mTransitionsList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::addAssign_operation (const GALGAS_uint & inOperand0,
                                                       const GALGAS_AC_5F_boolExpression & inOperand1,
                                                       const GALGAS_location & inOperand2,
                                                       const GALGAS_L_5F_transitionDefinition & inOperand3
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::setter_append (GALGAS_L_5F_stateDefinition_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                        const GALGAS_AC_5F_boolExpression inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_L_5F_transitionDefinition inOperand3,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                        GALGAS_AC_5F_boolExpression & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        GALGAS_L_5F_transitionDefinition & outOperand3,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
    if (NULL == p) {
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::setter_popFirst (GALGAS_uint & outOperand0,
                                                   GALGAS_AC_5F_boolExpression & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   GALGAS_L_5F_transitionDefinition & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::setter_popLast (GALGAS_uint & outOperand0,
                                                  GALGAS_AC_5F_boolExpression & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  GALGAS_L_5F_transitionDefinition & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::method_first (GALGAS_uint & outOperand0,
                                                GALGAS_AC_5F_boolExpression & outOperand1,
                                                GALGAS_location & outOperand2,
                                                GALGAS_L_5F_transitionDefinition & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::method_last (GALGAS_uint & outOperand0,
                                               GALGAS_AC_5F_boolExpression & outOperand1,
                                               GALGAS_location & outOperand2,
                                               GALGAS_L_5F_transitionDefinition & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition::plusAssign_operation (const GALGAS_L_5F_stateDefinition inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_stateDefinition::getter_mStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mStateIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_stateDefinition::getter_mStateExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mStateExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_L_5F_stateDefinition::getter_mEndOfStateExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mEndOfStateExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_stateDefinition::getter_mTransitionsListAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_L_5F_transitionDefinition result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mTransitionsList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_stateDefinition::cEnumerator_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition_2D_element cEnumerator_L_5F_stateDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_L_5F_stateDefinition::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cEnumerator_L_5F_stateDefinition::current_mStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_L_5F_stateDefinition::current_mEndOfStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mEndOfStateExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition cEnumerator_L_5F_stateDefinition::current_mTransitionsList (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mTransitionsList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @L_stateDefinition type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_stateDefinition ("L_stateDefinition",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_stateDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_stateDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_stateDefinition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition result ;
  const GALGAS_L_5F_stateDefinition * p = (const GALGAS_L_5F_stateDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_stateDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_stateDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@L_5F_statesDefinitionList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_statesDefinitionList : public cCollectionElement {
  public : GALGAS_L_5F_statesDefinitionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_statesDefinitionList (const GALGAS_uint & in_mStateIndex,
                                                         const GALGAS_location & in_mStateLocation
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_statesDefinitionList::cCollectionElement_L_5F_statesDefinitionList (const GALGAS_uint & in_mStateIndex,
                                                                                            const GALGAS_location & in_mStateLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_statesDefinitionList::cCollectionElement_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStateIndex, inElement.mProperty_mStateLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_statesDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_statesDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_statesDefinitionList (mObject.mProperty_mStateIndex, mObject.mProperty_mStateLocation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_statesDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_statesDefinitionList * operand = (cCollectionElement_L_5F_statesDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_statesDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList::GALGAS_L_5F_statesDefinitionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList::GALGAS_L_5F_statesDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_statesDefinitionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_uint & in_mStateIndex,
                                                                  const GALGAS_location & in_mStateLocation
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (in_mStateIndex,
                                                               in_mStateLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                            const GALGAS_location & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::setter_append (GALGAS_L_5F_statesDefinitionList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                             const GALGAS_location inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mStateIndex ;
      outOperand1 = p->mObject.mProperty_mStateLocation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::setter_popFirst (GALGAS_uint & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::setter_popLast (GALGAS_uint & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::method_first (GALGAS_uint & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::method_last (GALGAS_uint & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList::plusAssign_operation (const GALGAS_L_5F_statesDefinitionList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_statesDefinitionList::getter_mStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mProperty_mStateIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_L_5F_statesDefinitionList::getter_mStateLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mProperty_mStateLocation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_statesDefinitionList::cEnumerator_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList_2D_element cEnumerator_L_5F_statesDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_L_5F_statesDefinitionList::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_L_5F_statesDefinitionList::current_mStateLocation (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateLocation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @L_statesDefinitionList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ("L_statesDefinitionList",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_statesDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_statesDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_statesDefinitionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList result ;
  const GALGAS_L_5F_statesDefinitionList * p = (const GALGAS_L_5F_statesDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_statesDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_statesDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_AC_5F_machineDefinition::objectCompare (const GALGAS_AC_5F_machineDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition::GALGAS_AC_5F_machineDefinition (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition::GALGAS_AC_5F_machineDefinition (const cPtr_AC_5F_machineDefinition * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_machineDefinition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @AC_machineDefinition class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_AC_5F_machineDefinition::cPtr_AC_5F_machineDefinition (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @AC_machineDefinition type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_machineDefinition ("AC_machineDefinition",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_AC_5F_machineDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_machineDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_AC_5F_machineDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_machineDefinition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_AC_5F_machineDefinition::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_machineDefinition result ;
  const GALGAS_AC_5F_machineDefinition * p = (const GALGAS_AC_5F_machineDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_AC_5F_machineDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_machineDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_modesMap::cMapElement_M_5F_modesMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mIndex,
                                                      const GALGAS_AC_5F_machineDefinition & in_mModeDefinition
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mModeDefinition (in_mModeDefinition) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_M_5F_modesMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mModeDefinition.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_M_5F_modesMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_modesMap (mProperty_lkey, mProperty_mIndex, mProperty_mModeDefinition COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap::GALGAS_M_5F_modesMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap::GALGAS_M_5F_modesMap (const GALGAS_M_5F_modesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap & GALGAS_M_5F_modesMap::operator = (const GALGAS_M_5F_modesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_modesMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_modesMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & inArgument0,
                                                const GALGAS_AC_5F_machineDefinition & inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_modesMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_modesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_modesMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uint inArgument0,
                                             GALGAS_AC_5F_machineDefinition inArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_modesMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' mode has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_M_5F_modesMap_searchKey = "the '%K' mode is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_modesMap::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uint & outArgument0,
                                             GALGAS_AC_5F_machineDefinition & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_M_5F_modesMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mModeDefinition ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_modesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_M_5F_modesMap::getter_mModeDefinitionForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mProperty_mModeDefinition ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_modesMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_modesMap::setter_setMModeDefinitionForKey (GALGAS_AC_5F_machineDefinition inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mProperty_mModeDefinition = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_modesMap * GALGAS_M_5F_modesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * result = (cMapElement_M_5F_modesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_modesMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_M_5F_modesMap::cEnumerator_M_5F_modesMap (const GALGAS_M_5F_modesMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap_2D_element cEnumerator_M_5F_modesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return GALGAS_M_5F_modesMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mModeDefinition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_M_5F_modesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_M_5F_modesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cEnumerator_M_5F_modesMap::current_mModeDefinition (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mModeDefinition ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @M_modesMap type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_modesMap ("M_modesMap",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_modesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_modesMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_modesMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  const GALGAS_M_5F_modesMap * p = (const GALGAS_M_5F_modesMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_modesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_modesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@ListForModes' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_ListForModes : public cCollectionElement {
  public : GALGAS_ListForModes_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_ListForModes (const GALGAS_uint & in_mSourceMode,
                                            const GALGAS_uint & in_mTargetMode
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_ListForModes (const GALGAS_ListForModes_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ListForModes::cCollectionElement_ListForModes (const GALGAS_uint & in_mSourceMode,
                                                                  const GALGAS_uint & in_mTargetMode
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSourceMode, in_mTargetMode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ListForModes::cCollectionElement_ListForModes (const GALGAS_ListForModes_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSourceMode, inElement.mProperty_mTargetMode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_ListForModes::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_ListForModes::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ListForModes (mObject.mProperty_mSourceMode, mObject.mProperty_mTargetMode COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_ListForModes::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ListForModes * operand = (cCollectionElement_ListForModes *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ListForModes) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes::GALGAS_ListForModes (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes::GALGAS_ListForModes (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_ListForModes::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ListForModes  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_uint & in_mSourceMode,
                                                     const GALGAS_uint & in_mTargetMode
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = NULL ;
  macroMyNew (p, cCollectionElement_ListForModes (in_mSourceMode,
                                                  in_mTargetMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::addAssign_operation (const GALGAS_uint & inOperand0,
                                               const GALGAS_uint & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::setter_append (GALGAS_ListForModes_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ListForModes (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                const GALGAS_uint inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ListForModes) ;
      outOperand0 = p->mObject.mProperty_mSourceMode ;
      outOperand1 = p->mObject.mProperty_mTargetMode ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::setter_popFirst (GALGAS_uint & outOperand0,
                                           GALGAS_uint & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::setter_popLast (GALGAS_uint & outOperand0,
                                          GALGAS_uint & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::method_first (GALGAS_uint & outOperand0,
                                        GALGAS_uint & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::method_last (GALGAS_uint & outOperand0,
                                       GALGAS_uint & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    outOperand0 = p->mObject.mProperty_mSourceMode ;
    outOperand1 = p->mObject.mProperty_mTargetMode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_ListForModes::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_ListForModes::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_ListForModes::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes::plusAssign_operation (const GALGAS_ListForModes inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_ListForModes::getter_mSourceModeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mProperty_mSourceMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_ListForModes::getter_mTargetModeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mProperty_mTargetMode ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_ListForModes::cEnumerator_ListForModes (const GALGAS_ListForModes & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes_2D_element cEnumerator_ListForModes::current (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_ListForModes::current_mSourceMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mSourceMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_ListForModes::current_mTargetMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mTargetMode ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @ListForModes type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ListForModes ("ListForModes",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ListForModes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ListForModes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ListForModes (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_ListForModes::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ListForModes result ;
  const GALGAS_ListForModes * p = (const GALGAS_ListForModes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ListForModes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ListForModes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_substractiveModalCompositionComponent::objectCompare (const GALGAS_C_5F_substractiveModalCompositionComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_substractiveModalCompositionComponent::GALGAS_C_5F_substractiveModalCompositionComponent (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                             GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_substractiveModalCompositionComponent::GALGAS_C_5F_substractiveModalCompositionComponent (const cPtr_C_5F_substractiveModalCompositionComponent * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_substractiveModalCompositionComponent) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                                      const GALGAS_ListForModes & inAttribute_mExclusionList
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent result ;
  if (inAttribute_mModeMap.isValid () && inAttribute_mExclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_substractiveModalCompositionComponent (inAttribute_mModeMap, inAttribute_mExclusionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_C_5F_substractiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_substractiveModalCompositionComponent * p = (const cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    result = p->mProperty_mModeMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap cPtr_C_5F_substractiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_C_5F_substractiveModalCompositionComponent::getter_mExclusionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_substractiveModalCompositionComponent * p = (const cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    result = p->mProperty_mExclusionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes cPtr_C_5F_substractiveModalCompositionComponent::getter_mExclusionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExclusionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          Pointer class for @C_substractiveModalCompositionComponent class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_substractiveModalCompositionComponent::cPtr_C_5F_substractiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                                  const GALGAS_ListForModes & in_mExclusionList
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mModeMap (in_mModeMap),
mProperty_mExclusionList (in_mExclusionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_substractiveModalCompositionComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_substractiveModalCompositionComponent (mProperty_mModeMap, mProperty_mExclusionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @C_substractiveModalCompositionComponent type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ("C_substractiveModalCompositionComponent",
                                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_substractiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_substractiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_substractiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent result ;
  const GALGAS_C_5F_substractiveModalCompositionComponent * p = (const GALGAS_C_5F_substractiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_substractiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_substractiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_additiveModalCompositionComponent::objectCompare (const GALGAS_C_5F_additiveModalCompositionComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_additiveModalCompositionComponent::GALGAS_C_5F_additiveModalCompositionComponent (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                         GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_additiveModalCompositionComponent::GALGAS_C_5F_additiveModalCompositionComponent (const cPtr_C_5F_additiveModalCompositionComponent * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_additiveModalCompositionComponent) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                              const GALGAS_ListForModes & inAttribute_mInclusionList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent result ;
  if (inAttribute_mModeMap.isValid () && inAttribute_mInclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_additiveModalCompositionComponent (inAttribute_mModeMap, inAttribute_mInclusionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_C_5F_additiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_additiveModalCompositionComponent * p = (const cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    result = p->mProperty_mModeMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap cPtr_C_5F_additiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_C_5F_additiveModalCompositionComponent::getter_mInclusionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_additiveModalCompositionComponent * p = (const cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    result = p->mProperty_mInclusionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes cPtr_C_5F_additiveModalCompositionComponent::getter_mInclusionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInclusionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @C_additiveModalCompositionComponent class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_additiveModalCompositionComponent::cPtr_C_5F_additiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                          const GALGAS_ListForModes & in_mInclusionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mModeMap (in_mModeMap),
mProperty_mInclusionList (in_mInclusionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_additiveModalCompositionComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_additiveModalCompositionComponent (mProperty_mModeMap, mProperty_mInclusionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @C_additiveModalCompositionComponent type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ("C_additiveModalCompositionComponent",
                                                               & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_additiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_additiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_additiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent result ;
  const GALGAS_C_5F_additiveModalCompositionComponent * p = (const GALGAS_C_5F_additiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_additiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_additiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_trans::objectCompare (const GALGAS_C_5F_trans & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trans::GALGAS_C_5F_trans (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trans::GALGAS_C_5F_trans (const cPtr_C_5F_trans * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trans) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trans GALGAS_C_5F_trans::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mSourceStateExpression,
                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mTargetStateExpression
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trans result ;
  if (inAttribute_mSourceStateExpression.isValid () && inAttribute_mTargetStateExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_trans (inAttribute_mSourceStateExpression, inAttribute_mTargetStateExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_trans::getter_mSourceStateExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_trans * p = (const cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    result = p->mProperty_mSourceStateExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_trans::getter_mSourceStateExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceStateExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_trans::getter_mTargetStateExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_trans * p = (const cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    result = p->mProperty_mTargetStateExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_trans::getter_mTargetStateExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetStateExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                          Pointer class for @C_trans class                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_trans::cPtr_C_5F_trans (const GALGAS_AC_5F_boolExpression & in_mSourceStateExpression,
                                  const GALGAS_AC_5F_boolExpression & in_mTargetStateExpression
                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mSourceStateExpression (in_mSourceStateExpression),
mProperty_mTargetStateExpression (in_mTargetStateExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_trans::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_trans (mProperty_mSourceStateExpression, mProperty_mTargetStateExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @C_trans type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trans ("C_trans",
                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_trans::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_trans::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trans (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_trans GALGAS_C_5F_trans::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trans result ;
  const GALGAS_C_5F_trans * p = (const GALGAS_C_5F_trans *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_trans *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trans", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_importMachine::objectCompare (const GALGAS_C_5F_importMachine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importMachine::GALGAS_C_5F_importMachine (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_importMachine::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_L_5F_translationVector::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importMachine::GALGAS_C_5F_importMachine (const cPtr_C_5F_importMachine * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importMachine) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::constructor_new (const GALGAS_uint & inAttribute_mIndexOfImportedMachine,
                                                                      const GALGAS_L_5F_translationVector & inAttribute_mTranslationVector
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importMachine result ;
  if (inAttribute_mIndexOfImportedMachine.isValid () && inAttribute_mTranslationVector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_importMachine (inAttribute_mIndexOfImportedMachine, inAttribute_mTranslationVector COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_importMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importMachine * p = (const cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    result = p->mProperty_mIndexOfImportedMachine ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_importMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexOfImportedMachine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector GALGAS_C_5F_importMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importMachine * p = (const cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    result = p->mProperty_mTranslationVector ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector cPtr_C_5F_importMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTranslationVector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @C_importMachine class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_importMachine::cPtr_C_5F_importMachine (const GALGAS_uint & in_mIndexOfImportedMachine,
                                                  const GALGAS_L_5F_translationVector & in_mTranslationVector
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mIndexOfImportedMachine (in_mIndexOfImportedMachine),
mProperty_mTranslationVector (in_mTranslationVector) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_importMachine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_importMachine (mProperty_mIndexOfImportedMachine, mProperty_mTranslationVector COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @C_importMachine type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importMachine ("C_importMachine",
                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_importMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_importMachine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importMachine (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importMachine result ;
  const GALGAS_C_5F_importMachine * p = (const GALGAS_C_5F_importMachine *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_importMachine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importMachine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_explicitAutomatonDefinition::objectCompare (const GALGAS_C_5F_explicitAutomatonDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_explicitAutomatonDefinition::GALGAS_C_5F_explicitAutomatonDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (GALGAS_M_5F_stateMap::constructor_emptyMap (HERE),
                                                                   GALGAS_L_5F_statesDefinitionList::constructor_emptyList (HERE),
                                                                   GALGAS_L_5F_statesDefinitionList::constructor_emptyList (HERE),
                                                                   GALGAS_L_5F_stateDefinition::constructor_emptyList (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_explicitAutomatonDefinition::GALGAS_C_5F_explicitAutomatonDefinition (const cPtr_C_5F_explicitAutomatonDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_explicitAutomatonDefinition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap GALGAS_C_5F_explicitAutomatonDefinition::getter_mStatesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_stateMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mProperty_mStatesMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap cPtr_C_5F_explicitAutomatonDefinition::getter_mStatesMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStatesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList GALGAS_C_5F_explicitAutomatonDefinition::getter_mInitialStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mProperty_mInitialStatesDefinitionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList cPtr_C_5F_explicitAutomatonDefinition::getter_mInitialStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialStatesDefinitionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList GALGAS_C_5F_explicitAutomatonDefinition::getter_mTerminalStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mProperty_mTerminalStatesDefinitionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList cPtr_C_5F_explicitAutomatonDefinition::getter_mTerminalStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalStatesDefinitionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition GALGAS_C_5F_explicitAutomatonDefinition::getter_mStateDefinitionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mProperty_mStateDefinitionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition cPtr_C_5F_explicitAutomatonDefinition::getter_mStateDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStateDefinitionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_C_5F_explicitAutomatonDefinition::getter_mEndOfDefinition (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mProperty_mEndOfDefinition ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_C_5F_explicitAutomatonDefinition::getter_mEndOfDefinition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @C_explicitAutomatonDefinition class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_explicitAutomatonDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_explicitAutomatonDefinition (mProperty_mStatesMap, mProperty_mInitialStatesDefinitionList, mProperty_mTerminalStatesDefinitionList, mProperty_mStateDefinitionList, mProperty_mEndOfDefinition COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @C_explicitAutomatonDefinition type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ("C_explicitAutomatonDefinition",
                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_explicitAutomatonDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_explicitAutomatonDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_explicitAutomatonDefinition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_explicitAutomatonDefinition result ;
  const GALGAS_C_5F_explicitAutomatonDefinition * p = (const GALGAS_C_5F_explicitAutomatonDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_explicitAutomatonDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_explicitAutomatonDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_boolToSeqExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_boolToSeqExpression * p = (const cPtr_C_5F_boolToSeqExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_boolToSeqExpression::objectCompare (const GALGAS_C_5F_boolToSeqExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_boolToSeqExpression::GALGAS_C_5F_boolToSeqExpression (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_boolToSeqExpression::GALGAS_C_5F_boolToSeqExpression (const cPtr_C_5F_boolToSeqExpression * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_boolToSeqExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_boolToSeqExpression GALGAS_C_5F_boolToSeqExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_boolToSeqExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_boolToSeqExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_boolToSeqExpression * p = (const cPtr_C_5F_boolToSeqExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression cPtr_C_5F_boolToSeqExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @C_boolToSeqExpression class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_boolToSeqExpression::cPtr_C_5F_boolToSeqExpression (const GALGAS_AC_5F_boolExpression & in_mExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_boolToSeqExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

void cPtr_C_5F_boolToSeqExpression::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@C_boolToSeqExpression:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_boolToSeqExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_boolToSeqExpression (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @C_boolToSeqExpression type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ("C_boolToSeqExpression",
                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_boolToSeqExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_boolToSeqExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_boolToSeqExpression (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_boolToSeqExpression GALGAS_C_5F_boolToSeqExpression::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression result ;
  const GALGAS_C_5F_boolToSeqExpression * p = (const GALGAS_C_5F_boolToSeqExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_boolToSeqExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_boolToSeqExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_existsDefinition::objectCompare (const GALGAS_C_5F_existsDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_existsDefinition::GALGAS_C_5F_existsDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_existsDefinition::GALGAS_C_5F_existsDefinition (const cPtr_C_5F_existsDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_existsDefinition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_existsDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    result = p->mProperty_mPreviousVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_existsDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPreviousVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_existsDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    result = p->mProperty_mTotalVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_existsDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTotalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_existsDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_existsDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @C_existsDefinition class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_existsDefinition::cPtr_C_5F_existsDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                                        const GALGAS_uint & in_mTotalVariableCount,
                                                        const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mPreviousVariableCount (in_mPreviousVariableCount),
mProperty_mTotalVariableCount (in_mTotalVariableCount),
mProperty_mOperand (in_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_existsDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_existsDefinition (mProperty_mPreviousVariableCount, mProperty_mTotalVariableCount, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @C_existsDefinition type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_existsDefinition ("C_existsDefinition",
                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_existsDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_existsDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_existsDefinition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_existsDefinition GALGAS_C_5F_existsDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_existsDefinition result ;
  const GALGAS_C_5F_existsDefinition * p = (const GALGAS_C_5F_existsDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_existsDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_existsDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_forallDefinition::objectCompare (const GALGAS_C_5F_forallDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_forallDefinition::GALGAS_C_5F_forallDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_forallDefinition::GALGAS_C_5F_forallDefinition (const cPtr_C_5F_forallDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_forallDefinition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_forallDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    result = p->mProperty_mPreviousVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_forallDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPreviousVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_forallDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    result = p->mProperty_mTotalVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_forallDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTotalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_forallDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_forallDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @C_forallDefinition class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_forallDefinition::cPtr_C_5F_forallDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                                        const GALGAS_uint & in_mTotalVariableCount,
                                                        const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mPreviousVariableCount (in_mPreviousVariableCount),
mProperty_mTotalVariableCount (in_mTotalVariableCount),
mProperty_mOperand (in_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_forallDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_forallDefinition (mProperty_mPreviousVariableCount, mProperty_mTotalVariableCount, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @C_forallDefinition type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_forallDefinition ("C_forallDefinition",
                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_forallDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_forallDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_forallDefinition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_forallDefinition GALGAS_C_5F_forallDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_forallDefinition result ;
  const GALGAS_C_5F_forallDefinition * p = (const GALGAS_C_5F_forallDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_forallDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_forallDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_parallelComposition::objectCompare (const GALGAS_C_5F_parallelComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_parallelComposition::GALGAS_C_5F_parallelComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_parallelComposition::GALGAS_C_5F_parallelComposition (const cPtr_C_5F_parallelComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_parallelComposition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_parallelComposition GALGAS_C_5F_parallelComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                                  const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_parallelComposition (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_parallelComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_parallelComposition * p = (const cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    result = p->mProperty_mLeftOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_parallelComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_parallelComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_parallelComposition * p = (const cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_parallelComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @C_parallelComposition class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_parallelComposition::cPtr_C_5F_parallelComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                              const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_parallelComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_parallelComposition (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @C_parallelComposition type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_parallelComposition ("C_parallelComposition",
                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_parallelComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_parallelComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_parallelComposition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_parallelComposition GALGAS_C_5F_parallelComposition::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition result ;
  const GALGAS_C_5F_parallelComposition * p = (const GALGAS_C_5F_parallelComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_parallelComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_parallelComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_orComposition::objectCompare (const GALGAS_C_5F_orComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orComposition::GALGAS_C_5F_orComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orComposition::GALGAS_C_5F_orComposition (const cPtr_C_5F_orComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orComposition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orComposition GALGAS_C_5F_orComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                      const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_orComposition (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_orComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orComposition * p = (const cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    result = p->mProperty_mLeftOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_orComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_orComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orComposition * p = (const cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_orComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @C_orComposition class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_orComposition::cPtr_C_5F_orComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                  const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_orComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_orComposition (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @C_orComposition type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orComposition ("C_orComposition",
                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_orComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_orComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orComposition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_orComposition GALGAS_C_5F_orComposition::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orComposition result ;
  const GALGAS_C_5F_orComposition * p = (const GALGAS_C_5F_orComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_orComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_strongModalComposition::objectCompare (const GALGAS_C_5F_strongModalComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_strongModalComposition::GALGAS_C_5F_strongModalComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_strongModalComposition::GALGAS_C_5F_strongModalComposition (const cPtr_C_5F_strongModalComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_strongModalComposition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_strongModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    result = p->mProperty_mLeftOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_strongModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_C_5F_strongModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    result = p->mProperty_mErrorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_C_5F_strongModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_strongModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_strongModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @C_strongModalComposition class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_strongModalComposition::cPtr_C_5F_strongModalComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                    const GALGAS_location & in_mErrorLocation,
                                                                    const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mRightOperand (in_mRightOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_strongModalComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_strongModalComposition (mProperty_mLeftOperand, mProperty_mErrorLocation, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @C_strongModalComposition type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_strongModalComposition ("C_strongModalComposition",
                                                    & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_strongModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_strongModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_strongModalComposition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_strongModalComposition GALGAS_C_5F_strongModalComposition::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_strongModalComposition result ;
  const GALGAS_C_5F_strongModalComposition * p = (const GALGAS_C_5F_strongModalComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_strongModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_strongModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_weakModalComposition::objectCompare (const GALGAS_C_5F_weakModalComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_weakModalComposition::GALGAS_C_5F_weakModalComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_weakModalComposition::GALGAS_C_5F_weakModalComposition (const cPtr_C_5F_weakModalComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_weakModalComposition) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_weakModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    result = p->mProperty_mLeftOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_weakModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_C_5F_weakModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    result = p->mProperty_mErrorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_C_5F_weakModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_weakModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_weakModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @C_weakModalComposition class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_weakModalComposition::cPtr_C_5F_weakModalComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                const GALGAS_location & in_mErrorLocation,
                                                                const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mRightOperand (in_mRightOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_weakModalComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_weakModalComposition (mProperty_mLeftOperand, mProperty_mErrorLocation, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @C_weakModalComposition type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_weakModalComposition ("C_weakModalComposition",
                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_weakModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_weakModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_weakModalComposition (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_weakModalComposition GALGAS_C_5F_weakModalComposition::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_weakModalComposition result ;
  const GALGAS_C_5F_weakModalComposition * p = (const GALGAS_C_5F_weakModalComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_weakModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_weakModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_fullSaturationOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_fullSaturationOperation * p = (const cPtr_C_5F_fullSaturationOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_fullSaturationOperation::objectCompare (const GALGAS_C_5F_fullSaturationOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_fullSaturationOperation::GALGAS_C_5F_fullSaturationOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_fullSaturationOperation::GALGAS_C_5F_fullSaturationOperation (const cPtr_C_5F_fullSaturationOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_fullSaturationOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_fullSaturationOperation GALGAS_C_5F_fullSaturationOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_fullSaturationOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_fullSaturationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_fullSaturationOperation * p = (const cPtr_C_5F_fullSaturationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_fullSaturationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @C_fullSaturationOperation class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_fullSaturationOperation::cPtr_C_5F_fullSaturationOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_fullSaturationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

void cPtr_C_5F_fullSaturationOperation::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@C_fullSaturationOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_fullSaturationOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_fullSaturationOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @C_fullSaturationOperation type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ("C_fullSaturationOperation",
                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_fullSaturationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_fullSaturationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_fullSaturationOperation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_fullSaturationOperation GALGAS_C_5F_fullSaturationOperation::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation result ;
  const GALGAS_C_5F_fullSaturationOperation * p = (const GALGAS_C_5F_fullSaturationOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_fullSaturationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_fullSaturationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_complementationOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_complementationOperation * p = (const cPtr_C_5F_complementationOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_complementationOperation::objectCompare (const GALGAS_C_5F_complementationOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_complementationOperation::GALGAS_C_5F_complementationOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_complementationOperation::GALGAS_C_5F_complementationOperation (const cPtr_C_5F_complementationOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_complementationOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_complementationOperation GALGAS_C_5F_complementationOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_complementationOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_complementationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_complementationOperation * p = (const cPtr_C_5F_complementationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_complementationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @C_complementationOperation class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_complementationOperation::cPtr_C_5F_complementationOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_complementationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

void cPtr_C_5F_complementationOperation::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@C_complementationOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_complementationOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_complementationOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @C_complementationOperation type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_complementationOperation ("C_complementationOperation",
                                                      & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_complementationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_complementationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_complementationOperation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_complementationOperation GALGAS_C_5F_complementationOperation::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation result ;
  const GALGAS_C_5F_complementationOperation * p = (const GALGAS_C_5F_complementationOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_complementationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_complementationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_suppressTerminalStatesOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_suppressTerminalStatesOperation * p = (const cPtr_C_5F_suppressTerminalStatesOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_suppressTerminalStatesOperation::objectCompare (const GALGAS_C_5F_suppressTerminalStatesOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressTerminalStatesOperation::GALGAS_C_5F_suppressTerminalStatesOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressTerminalStatesOperation::GALGAS_C_5F_suppressTerminalStatesOperation (const cPtr_C_5F_suppressTerminalStatesOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressTerminalStatesOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressTerminalStatesOperation GALGAS_C_5F_suppressTerminalStatesOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressTerminalStatesOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_suppressTerminalStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_suppressTerminalStatesOperation * p = (const cPtr_C_5F_suppressTerminalStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_suppressTerminalStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @C_suppressTerminalStatesOperation class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_suppressTerminalStatesOperation::cPtr_C_5F_suppressTerminalStatesOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_suppressTerminalStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

void cPtr_C_5F_suppressTerminalStatesOperation::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@C_suppressTerminalStatesOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_suppressTerminalStatesOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_suppressTerminalStatesOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @C_suppressTerminalStatesOperation type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ("C_suppressTerminalStatesOperation",
                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_suppressTerminalStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_suppressTerminalStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressTerminalStatesOperation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressTerminalStatesOperation GALGAS_C_5F_suppressTerminalStatesOperation::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation result ;
  const GALGAS_C_5F_suppressTerminalStatesOperation * p = (const GALGAS_C_5F_suppressTerminalStatesOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_suppressTerminalStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressTerminalStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_suppressInitialStatesOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_suppressInitialStatesOperation * p = (const cPtr_C_5F_suppressInitialStatesOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_suppressInitialStatesOperation::objectCompare (const GALGAS_C_5F_suppressInitialStatesOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressInitialStatesOperation::GALGAS_C_5F_suppressInitialStatesOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressInitialStatesOperation::GALGAS_C_5F_suppressInitialStatesOperation (const cPtr_C_5F_suppressInitialStatesOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressInitialStatesOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressInitialStatesOperation GALGAS_C_5F_suppressInitialStatesOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressInitialStatesOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_suppressInitialStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_suppressInitialStatesOperation * p = (const cPtr_C_5F_suppressInitialStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_suppressInitialStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @C_suppressInitialStatesOperation class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_suppressInitialStatesOperation::cPtr_C_5F_suppressInitialStatesOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mProperty_mOperand (in_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_suppressInitialStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

void cPtr_C_5F_suppressInitialStatesOperation::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@C_suppressInitialStatesOperation:" ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_suppressInitialStatesOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_suppressInitialStatesOperation (mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @C_suppressInitialStatesOperation type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ("C_suppressInitialStatesOperation",
                                                            & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_suppressInitialStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_suppressInitialStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressInitialStatesOperation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_suppressInitialStatesOperation GALGAS_C_5F_suppressInitialStatesOperation::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation result ;
  const GALGAS_C_5F_suppressInitialStatesOperation * p = (const GALGAS_C_5F_suppressInitialStatesOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_suppressInitialStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressInitialStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_AC_5F_job::objectCompare (const GALGAS_AC_5F_job & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_job::GALGAS_AC_5F_job (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_job::GALGAS_AC_5F_job (const cPtr_AC_5F_job * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_job) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                           Pointer class for @AC_job class                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_AC_5F_job::cPtr_AC_5F_job (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @AC_job type                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_job ("AC_job",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_AC_5F_job::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_job ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_AC_5F_job::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_job (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_job GALGAS_AC_5F_job::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_job result ;
  const GALGAS_AC_5F_job * p = (const GALGAS_AC_5F_job *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_AC_5F_job *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_job", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_machineDisplayStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayStates * p = (const cPtr_C_5F_machineDisplayStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineDisplayStates::objectCompare (const GALGAS_C_5F_machineDisplayStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayStates::GALGAS_C_5F_machineDisplayStates (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayStates::GALGAS_C_5F_machineDisplayStates (const cPtr_C_5F_machineDisplayStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayStates) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDisplayStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayStates * p = (const cPtr_C_5F_machineDisplayStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDisplayStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @C_machineDisplayStates class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_machineDisplayStates::cPtr_C_5F_machineDisplayStates (const GALGAS_uint & in_mMachineIndex
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

void cPtr_C_5F_machineDisplayStates::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayStates:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineDisplayStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayStates (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @C_machineDisplayStates type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ("C_machineDisplayStates",
                                                  & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayStates::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayStates (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates result ;
  const GALGAS_C_5F_machineDisplayStates * p = (const GALGAS_C_5F_machineDisplayStates *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_machineDisplayInitialStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayInitialStates * p = (const cPtr_C_5F_machineDisplayInitialStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineDisplayInitialStates::objectCompare (const GALGAS_C_5F_machineDisplayInitialStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayInitialStates::GALGAS_C_5F_machineDisplayInitialStates (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayInitialStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayInitialStates::GALGAS_C_5F_machineDisplayInitialStates (const cPtr_C_5F_machineDisplayInitialStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayInitialStates) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayInitialStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDisplayInitialStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayInitialStates * p = (const cPtr_C_5F_machineDisplayInitialStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDisplayInitialStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @C_machineDisplayInitialStates class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_machineDisplayInitialStates::cPtr_C_5F_machineDisplayInitialStates (const GALGAS_uint & in_mMachineIndex
                                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayInitialStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

void cPtr_C_5F_machineDisplayInitialStates::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayInitialStates:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineDisplayInitialStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayInitialStates (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @C_machineDisplayInitialStates type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ("C_machineDisplayInitialStates",
                                                         & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayInitialStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayInitialStates::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayInitialStates (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates result ;
  const GALGAS_C_5F_machineDisplayInitialStates * p = (const GALGAS_C_5F_machineDisplayInitialStates *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayInitialStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayInitialStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_machineDisplayTerminalStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayTerminalStates * p = (const cPtr_C_5F_machineDisplayTerminalStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineDisplayTerminalStates::objectCompare (const GALGAS_C_5F_machineDisplayTerminalStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTerminalStates::GALGAS_C_5F_machineDisplayTerminalStates (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTerminalStates::GALGAS_C_5F_machineDisplayTerminalStates (const cPtr_C_5F_machineDisplayTerminalStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTerminalStates) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTerminalStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDisplayTerminalStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayTerminalStates * p = (const cPtr_C_5F_machineDisplayTerminalStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDisplayTerminalStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @C_machineDisplayTerminalStates class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_machineDisplayTerminalStates::cPtr_C_5F_machineDisplayTerminalStates (const GALGAS_uint & in_mMachineIndex
                                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTerminalStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

void cPtr_C_5F_machineDisplayTerminalStates::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayTerminalStates:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineDisplayTerminalStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTerminalStates (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @C_machineDisplayTerminalStates type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ("C_machineDisplayTerminalStates",
                                                          & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTerminalStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTerminalStates::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTerminalStates (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates result ;
  const GALGAS_C_5F_machineDisplayTerminalStates * p = (const GALGAS_C_5F_machineDisplayTerminalStates *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayTerminalStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTerminalStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_C_5F_machineDisplayTransitions::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayTransitions * p = (const cPtr_C_5F_machineDisplayTransitions *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineDisplayTransitions::objectCompare (const GALGAS_C_5F_machineDisplayTransitions & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTransitions::GALGAS_C_5F_machineDisplayTransitions (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayTransitions::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTransitions::GALGAS_C_5F_machineDisplayTransitions (const cPtr_C_5F_machineDisplayTransitions * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTransitions) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTransitions (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDisplayTransitions::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayTransitions * p = (const cPtr_C_5F_machineDisplayTransitions *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDisplayTransitions::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @C_machineDisplayTransitions class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_machineDisplayTransitions::cPtr_C_5F_machineDisplayTransitions (const GALGAS_uint & in_mMachineIndex
                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTransitions::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

void cPtr_C_5F_machineDisplayTransitions::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayTransitions:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineDisplayTransitions::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTransitions (mProperty_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @C_machineDisplayTransitions type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ("C_machineDisplayTransitions",
                                                       & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTransitions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTransitions::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTransitions (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions result ;
  const GALGAS_C_5F_machineDisplayTransitions * p = (const GALGAS_C_5F_machineDisplayTransitions *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayTransitions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTransitions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineCheckIdentical::objectCompare (const GALGAS_C_5F_machineCheckIdentical & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheckIdentical::GALGAS_C_5F_machineCheckIdentical (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineCheckIdentical::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                             GALGAS_uint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheckIdentical::GALGAS_C_5F_machineCheckIdentical (const cPtr_C_5F_machineCheckIdentical * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheckIdentical) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex_31_,
                                                                                      const GALGAS_uint & inAttribute_mMachineIndex_32_
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheckIdentical result ;
  if (inAttribute_mMachineIndex_31_.isValid () && inAttribute_mMachineIndex_32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheckIdentical (inAttribute_mMachineIndex_31_, inAttribute_mMachineIndex_32_ COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineCheckIdentical::getter_mMachineIndex_31_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheckIdentical * p = (const cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    result = p->mProperty_mMachineIndex_31_ ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineCheckIdentical::getter_mMachineIndex_31_ (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex_31_ ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineCheckIdentical::getter_mMachineIndex_32_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheckIdentical * p = (const cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    result = p->mProperty_mMachineIndex_32_ ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineCheckIdentical::getter_mMachineIndex_32_ (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex_32_ ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @C_machineCheckIdentical class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_machineCheckIdentical::cPtr_C_5F_machineCheckIdentical (const GALGAS_uint & in_mMachineIndex_31_,
                                                                  const GALGAS_uint & in_mMachineIndex_32_
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex_31_ (in_mMachineIndex_31_),
mProperty_mMachineIndex_32_ (in_mMachineIndex_32_) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineCheckIdentical::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineCheckIdentical (mProperty_mMachineIndex_31_, mProperty_mMachineIndex_32_ COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @C_machineCheckIdentical type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ("C_machineCheckIdentical",
                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheckIdentical::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineCheckIdentical::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheckIdentical (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheckIdentical result ;
  const GALGAS_C_5F_machineCheckIdentical * p = (const GALGAS_C_5F_machineCheckIdentical *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineCheckIdentical *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheckIdentical", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Class for element of '@L_5F_inputConfigurationForScenario' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_inputConfigurationForScenario : public cCollectionElement {
  public : GALGAS_L_5F_inputConfigurationForScenario_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_luint & in_mInputValue
                                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_inputConfigurationForScenario::cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_luint & in_mInputValue
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_inputConfigurationForScenario::cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_inputConfigurationForScenario::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_inputConfigurationForScenario::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_inputConfigurationForScenario (mObject.mProperty_mInputValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_L_5F_inputConfigurationForScenario::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputValue" ":" ;
  mObject.mProperty_mInputValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_inputConfigurationForScenario::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_inputConfigurationForScenario * operand = (cCollectionElement_L_5F_inputConfigurationForScenario *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario::GALGAS_L_5F_inputConfigurationForScenario (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario::GALGAS_L_5F_inputConfigurationForScenario (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputConfigurationForScenario  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_luint & in_mInputValue
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputConfigurationForScenario * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (in_mInputValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::addAssign_operation (const GALGAS_luint & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::setter_append (GALGAS_L_5F_inputConfigurationForScenario_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::setter_insertAtIndex (const GALGAS_luint inOperand0,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::setter_removeAtIndex (GALGAS_luint & outOperand0,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
      outOperand0 = p->mObject.mProperty_mInputValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::setter_popFirst (GALGAS_luint & outOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::setter_popLast (GALGAS_luint & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::method_first (GALGAS_luint & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::method_last (GALGAS_luint & outOperand0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mProperty_mInputValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario::plusAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_L_5F_inputConfigurationForScenario::getter_mInputValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    result = p->mObject.mProperty_mInputValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_inputConfigurationForScenario::cEnumerator_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario_2D_element cEnumerator_L_5F_inputConfigurationForScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cEnumerator_L_5F_inputConfigurationForScenario::current_mInputValue (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject.mProperty_mInputValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @L_inputConfigurationForScenario type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ("L_inputConfigurationForScenario",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_inputConfigurationForScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_inputConfigurationForScenario::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputConfigurationForScenario (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario result ;
  const GALGAS_L_5F_inputConfigurationForScenario * p = (const GALGAS_L_5F_inputConfigurationForScenario *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_inputConfigurationForScenario *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputConfigurationForScenario", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@L_5F_inputScenario' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_inputScenario : public cCollectionElement {
  public : GALGAS_L_5F_inputScenario_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputScenario_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_inputScenario::cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputConfiguration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_inputScenario::cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputScenario_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputConfiguration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_inputScenario::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_inputScenario::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_inputScenario (mObject.mProperty_mInputConfiguration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_L_5F_inputScenario::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputConfiguration" ":" ;
  mObject.mProperty_mInputConfiguration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_inputScenario::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_inputScenario * operand = (cCollectionElement_L_5F_inputScenario *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_inputScenario) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario::GALGAS_L_5F_inputScenario (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario::GALGAS_L_5F_inputScenario (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputScenario  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputScenario * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_inputScenario (in_mInputConfiguration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::addAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::setter_append (GALGAS_L_5F_inputScenario_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::setter_insertAtIndex (const GALGAS_L_5F_inputConfigurationForScenario inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::setter_removeAtIndex (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
      outOperand0 = p->mObject.mProperty_mInputConfiguration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::setter_popFirst (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::setter_popLast (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::method_first (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::method_last (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mProperty_mInputConfiguration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario::plusAssign_operation (const GALGAS_L_5F_inputScenario inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputScenario::getter_mInputConfigurationAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  GALGAS_L_5F_inputConfigurationForScenario result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    result = p->mObject.mProperty_mInputConfiguration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_inputScenario::cEnumerator_L_5F_inputScenario (const GALGAS_L_5F_inputScenario & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario_2D_element cEnumerator_L_5F_inputScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario cEnumerator_L_5F_inputScenario::current_mInputConfiguration (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject.mProperty_mInputConfiguration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @L_inputScenario type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputScenario ("L_inputScenario",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_inputScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_inputScenario::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputScenario (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario result ;
  const GALGAS_L_5F_inputScenario * p = (const GALGAS_L_5F_inputScenario *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_inputScenario *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputScenario", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@L_5F_scenarioList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_scenarioList : public cCollectionElement {
  public : GALGAS_L_5F_scenarioList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_scenarioList (const GALGAS_lstring & in_mScenarioTitle,
                                                 const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_scenarioList (const GALGAS_L_5F_scenarioList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_scenarioList::cCollectionElement_L_5F_scenarioList (const GALGAS_lstring & in_mScenarioTitle,
                                                                            const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScenarioTitle, in_mInputScenario) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_scenarioList::cCollectionElement_L_5F_scenarioList (const GALGAS_L_5F_scenarioList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScenarioTitle, inElement.mProperty_mInputScenario) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_scenarioList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_scenarioList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_scenarioList (mObject.mProperty_mScenarioTitle, mObject.mProperty_mInputScenario COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_scenarioList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_scenarioList * operand = (cCollectionElement_L_5F_scenarioList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_scenarioList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList::GALGAS_L_5F_scenarioList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList::GALGAS_L_5F_scenarioList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_scenarioList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mScenarioTitle,
                                                          const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_scenarioList * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_scenarioList (in_mScenarioTitle,
                                                       in_mInputScenario COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_L_5F_inputScenario & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_scenarioList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::setter_append (GALGAS_L_5F_scenarioList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_scenarioList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_L_5F_inputScenario inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_scenarioList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_L_5F_inputScenario & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
      outOperand0 = p->mObject.mProperty_mScenarioTitle ;
      outOperand1 = p->mObject.mProperty_mInputScenario ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_L_5F_inputScenario & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_L_5F_inputScenario & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_L_5F_inputScenario & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_L_5F_inputScenario & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    outOperand0 = p->mObject.mProperty_mScenarioTitle ;
    outOperand1 = p->mObject.mProperty_mInputScenario ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList::plusAssign_operation (const GALGAS_L_5F_scenarioList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_L_5F_scenarioList::getter_mScenarioTitleAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    result = p->mObject.mProperty_mScenarioTitle ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario GALGAS_L_5F_scenarioList::getter_mInputScenarioAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  GALGAS_L_5F_inputScenario result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    result = p->mObject.mProperty_mInputScenario ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_scenarioList::cEnumerator_L_5F_scenarioList (const GALGAS_L_5F_scenarioList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList_2D_element cEnumerator_L_5F_scenarioList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_L_5F_scenarioList::current_mScenarioTitle (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject.mProperty_mScenarioTitle ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario cEnumerator_L_5F_scenarioList::current_mInputScenario (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject.mProperty_mInputScenario ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @L_scenarioList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_scenarioList ("L_scenarioList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_scenarioList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_scenarioList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_scenarioList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList result ;
  const GALGAS_L_5F_scenarioList * p = (const GALGAS_L_5F_scenarioList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_scenarioList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_scenarioList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_scenarioComponent::objectCompare (const GALGAS_C_5F_scenarioComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_scenarioComponent::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                                         GALGAS_L_5F_scenarioList::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (const cPtr_C_5F_scenarioComponent * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_scenarioComponent) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_scenarioComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_scenarioComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_scenarioComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mProperty_mInputVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_scenarioComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_scenarioComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mProperty_mInputAndInternalVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_scenarioComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputAndInternalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_C_5F_scenarioComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mProperty_mVariablesMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap cPtr_C_5F_scenarioComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariablesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList GALGAS_C_5F_scenarioComponent::getter_mScenarioList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mProperty_mScenarioList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList cPtr_C_5F_scenarioComponent::getter_mScenarioList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScenarioList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @C_scenarioComponent class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_scenarioComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_scenarioComponent (mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mScenarioList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @C_scenarioComponent type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_scenarioComponent ("C_scenarioComponent",
                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_scenarioComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_scenarioComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_scenarioComponent (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_scenarioComponent result ;
  const GALGAS_C_5F_scenarioComponent * p = (const GALGAS_C_5F_scenarioComponent *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_scenarioComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_scenarioComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeUse_5F_AND::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeUse_5F_AND::objectCompare (const GALGAS_typeUse_5F_AND & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND::GALGAS_typeUse_5F_AND (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND GALGAS_typeUse_5F_AND::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeUse_5F_AND::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND::GALGAS_typeUse_5F_AND (const cPtr_typeUse_5F_AND * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeUse_5F_AND) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND GALGAS_typeUse_5F_AND::constructor_new (LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND result ;
  macroMyNew (result.mObjectPtr, cPtr_typeUse_5F_AND (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                        Pointer class for @typeUse_AND class                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeUse_5F_AND::cPtr_typeUse_5F_AND (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeUse_5F_AND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND ;
}

void cPtr_typeUse_5F_AND::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "[@typeUse_AND]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeUse_5F_AND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeUse_5F_AND (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @typeUse_AND type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeUse_5F_AND ("typeUse_AND",
                                       & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeUse_5F_AND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeUse_5F_AND::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeUse_5F_AND (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND GALGAS_typeUse_5F_AND::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND result ;
  const GALGAS_typeUse_5F_AND * p = (const GALGAS_typeUse_5F_AND *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeUse_5F_AND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeUse_AND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeUse_5F_ITE::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeUse_5F_ITE::objectCompare (const GALGAS_typeUse_5F_ITE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_ITE::GALGAS_typeUse_5F_ITE (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_ITE GALGAS_typeUse_5F_ITE::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeUse_5F_ITE::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_ITE::GALGAS_typeUse_5F_ITE (const cPtr_typeUse_5F_ITE * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeUse_5F_ITE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_ITE GALGAS_typeUse_5F_ITE::constructor_new (LOCATION_ARGS) {
  GALGAS_typeUse_5F_ITE result ;
  macroMyNew (result.mObjectPtr, cPtr_typeUse_5F_ITE (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                        Pointer class for @typeUse_ITE class                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeUse_5F_ITE::cPtr_typeUse_5F_ITE (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeUse_5F_ITE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_ITE ;
}

void cPtr_typeUse_5F_ITE::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "[@typeUse_ITE]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeUse_5F_ITE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeUse_5F_ITE (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @typeUse_ITE type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeUse_5F_ITE ("typeUse_ITE",
                                       & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeUse_5F_ITE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_ITE ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeUse_5F_ITE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeUse_5F_ITE (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_ITE GALGAS_typeUse_5F_ITE::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeUse_5F_ITE result ;
  const GALGAS_typeUse_5F_ITE * p = (const GALGAS_typeUse_5F_ITE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeUse_5F_ITE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeUse_ITE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeUse_5F_AND_5F_ITE::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeUse_5F_AND_5F_ITE::objectCompare (const GALGAS_typeUse_5F_AND_5F_ITE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND_5F_ITE::GALGAS_typeUse_5F_AND_5F_ITE (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND_5F_ITE GALGAS_typeUse_5F_AND_5F_ITE::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeUse_5F_AND_5F_ITE::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND_5F_ITE::GALGAS_typeUse_5F_AND_5F_ITE (const cPtr_typeUse_5F_AND_5F_ITE * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeUse_5F_AND_5F_ITE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND_5F_ITE GALGAS_typeUse_5F_AND_5F_ITE::constructor_new (LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND_5F_ITE result ;
  macroMyNew (result.mObjectPtr, cPtr_typeUse_5F_AND_5F_ITE (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @typeUse_AND_ITE class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeUse_5F_AND_5F_ITE::cPtr_typeUse_5F_AND_5F_ITE (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeUse_5F_AND_5F_ITE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND_5F_ITE ;
}

void cPtr_typeUse_5F_AND_5F_ITE::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "[@typeUse_AND_ITE]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeUse_5F_AND_5F_ITE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeUse_5F_AND_5F_ITE (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @typeUse_AND_ITE type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeUse_5F_AND_5F_ITE ("typeUse_AND_ITE",
                                              & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeUse_5F_AND_5F_ITE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND_5F_ITE ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeUse_5F_AND_5F_ITE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeUse_5F_AND_5F_ITE (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeUse_5F_AND_5F_ITE GALGAS_typeUse_5F_AND_5F_ITE::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND_5F_ITE result ;
  const GALGAS_typeUse_5F_AND_5F_ITE * p = (const GALGAS_typeUse_5F_AND_5F_ITE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeUse_5F_AND_5F_ITE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeUse_AND_ITE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeResize_5F_AND_5F_cache::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeResize_5F_AND_5F_cache * p = (const cPtr_typeResize_5F_AND_5F_cache *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeResize_5F_AND_5F_cache) ;
  if (kOperandEqual == result) {
    result = mProperty_mNewSize.objectCompare (p->mProperty_mNewSize) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeResize_5F_AND_5F_cache::objectCompare (const GALGAS_typeResize_5F_AND_5F_cache & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_AND_5F_cache::GALGAS_typeResize_5F_AND_5F_cache (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_AND_5F_cache GALGAS_typeResize_5F_AND_5F_cache::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeResize_5F_AND_5F_cache::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_AND_5F_cache::GALGAS_typeResize_5F_AND_5F_cache (const cPtr_typeResize_5F_AND_5F_cache * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeResize_5F_AND_5F_cache) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_AND_5F_cache GALGAS_typeResize_5F_AND_5F_cache::constructor_new (const GALGAS_luint & inAttribute_mNewSize
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_AND_5F_cache result ;
  if (inAttribute_mNewSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeResize_5F_AND_5F_cache (inAttribute_mNewSize COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_typeResize_5F_AND_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeResize_5F_AND_5F_cache * p = (const cPtr_typeResize_5F_AND_5F_cache *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeResize_5F_AND_5F_cache) ;
    result = p->mProperty_mNewSize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cPtr_typeResize_5F_AND_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNewSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @typeResize_AND_cache class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeResize_5F_AND_5F_cache::cPtr_typeResize_5F_AND_5F_cache (const GALGAS_luint & in_mNewSize
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mNewSize (in_mNewSize) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeResize_5F_AND_5F_cache::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_AND_5F_cache ;
}

void cPtr_typeResize_5F_AND_5F_cache::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@typeResize_AND_cache:" ;
  mProperty_mNewSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeResize_5F_AND_5F_cache::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeResize_5F_AND_5F_cache (mProperty_mNewSize COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typeResize_AND_cache type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeResize_5F_AND_5F_cache ("typeResize_AND_cache",
                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeResize_5F_AND_5F_cache::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_AND_5F_cache ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeResize_5F_AND_5F_cache::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeResize_5F_AND_5F_cache (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_AND_5F_cache GALGAS_typeResize_5F_AND_5F_cache::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_AND_5F_cache result ;
  const GALGAS_typeResize_5F_AND_5F_cache * p = (const GALGAS_typeResize_5F_AND_5F_cache *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeResize_5F_AND_5F_cache *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeResize_AND_cache", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeResize_5F_ITE_5F_cache::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeResize_5F_ITE_5F_cache * p = (const cPtr_typeResize_5F_ITE_5F_cache *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeResize_5F_ITE_5F_cache) ;
  if (kOperandEqual == result) {
    result = mProperty_mNewSize.objectCompare (p->mProperty_mNewSize) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeResize_5F_ITE_5F_cache::objectCompare (const GALGAS_typeResize_5F_ITE_5F_cache & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_ITE_5F_cache::GALGAS_typeResize_5F_ITE_5F_cache (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_ITE_5F_cache GALGAS_typeResize_5F_ITE_5F_cache::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeResize_5F_ITE_5F_cache::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_ITE_5F_cache::GALGAS_typeResize_5F_ITE_5F_cache (const cPtr_typeResize_5F_ITE_5F_cache * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeResize_5F_ITE_5F_cache) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_ITE_5F_cache GALGAS_typeResize_5F_ITE_5F_cache::constructor_new (const GALGAS_luint & inAttribute_mNewSize
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_ITE_5F_cache result ;
  if (inAttribute_mNewSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeResize_5F_ITE_5F_cache (inAttribute_mNewSize COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_typeResize_5F_ITE_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeResize_5F_ITE_5F_cache * p = (const cPtr_typeResize_5F_ITE_5F_cache *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeResize_5F_ITE_5F_cache) ;
    result = p->mProperty_mNewSize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cPtr_typeResize_5F_ITE_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNewSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @typeResize_ITE_cache class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeResize_5F_ITE_5F_cache::cPtr_typeResize_5F_ITE_5F_cache (const GALGAS_luint & in_mNewSize
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mNewSize (in_mNewSize) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeResize_5F_ITE_5F_cache::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_ITE_5F_cache ;
}

void cPtr_typeResize_5F_ITE_5F_cache::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@typeResize_ITE_cache:" ;
  mProperty_mNewSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeResize_5F_ITE_5F_cache::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeResize_5F_ITE_5F_cache (mProperty_mNewSize COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typeResize_ITE_cache type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeResize_5F_ITE_5F_cache ("typeResize_ITE_cache",
                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeResize_5F_ITE_5F_cache::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_ITE_5F_cache ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeResize_5F_ITE_5F_cache::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeResize_5F_ITE_5F_cache (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResize_5F_ITE_5F_cache GALGAS_typeResize_5F_ITE_5F_cache::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_ITE_5F_cache result ;
  const GALGAS_typeResize_5F_ITE_5F_cache * p = (const GALGAS_typeResize_5F_ITE_5F_cache *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeResize_5F_ITE_5F_cache *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeResize_ITE_cache", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeResizeMap::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeResizeMap * p = (const cPtr_typeResizeMap *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeResizeMap) ;
  if (kOperandEqual == result) {
    result = mProperty_mNewSize.objectCompare (p->mProperty_mNewSize) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeResizeMap::objectCompare (const GALGAS_typeResizeMap & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResizeMap::GALGAS_typeResizeMap (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResizeMap GALGAS_typeResizeMap::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeResizeMap::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResizeMap::GALGAS_typeResizeMap (const cPtr_typeResizeMap * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeResizeMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResizeMap GALGAS_typeResizeMap::constructor_new (const GALGAS_luint & inAttribute_mNewSize
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeResizeMap result ;
  if (inAttribute_mNewSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeResizeMap (inAttribute_mNewSize COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_typeResizeMap::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeResizeMap * p = (const cPtr_typeResizeMap *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeResizeMap) ;
    result = p->mProperty_mNewSize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cPtr_typeResizeMap::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNewSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @typeResizeMap class                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeResizeMap::cPtr_typeResizeMap (const GALGAS_luint & in_mNewSize
                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mNewSize (in_mNewSize) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeResizeMap::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResizeMap ;
}

void cPtr_typeResizeMap::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@typeResizeMap:" ;
  mProperty_mNewSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeResizeMap::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeResizeMap (mProperty_mNewSize COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @typeResizeMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeResizeMap ("typeResizeMap",
                                      & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeResizeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResizeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeResizeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeResizeMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeResizeMap GALGAS_typeResizeMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeResizeMap result ;
  const GALGAS_typeResizeMap * p = (const GALGAS_typeResizeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeResizeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeResizeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeDisplayBDDstats::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeDisplayBDDstats::objectCompare (const GALGAS_typeDisplayBDDstats & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDisplayBDDstats::GALGAS_typeDisplayBDDstats (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeDisplayBDDstats::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDisplayBDDstats::GALGAS_typeDisplayBDDstats (const cPtr_typeDisplayBDDstats * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDisplayBDDstats) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::constructor_new (LOCATION_ARGS) {
  GALGAS_typeDisplayBDDstats result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDisplayBDDstats (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @typeDisplayBDDstats class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeDisplayBDDstats::cPtr_typeDisplayBDDstats (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeDisplayBDDstats::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

void cPtr_typeDisplayBDDstats::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "[@typeDisplayBDDstats]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeDisplayBDDstats::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeDisplayBDDstats (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @typeDisplayBDDstats type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDisplayBDDstats ("typeDisplayBDDstats",
                                            & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeDisplayBDDstats::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeDisplayBDDstats::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDisplayBDDstats (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeDisplayBDDstats result ;
  const GALGAS_typeDisplayBDDstats * p = (const GALGAS_typeDisplayBDDstats *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeDisplayBDDstats *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDisplayBDDstats", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@L_5F_jobList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_L_5F_jobList : public cCollectionElement {
  public : GALGAS_L_5F_jobList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_L_5F_jobList (const GALGAS_AC_5F_job & in_mComponent
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_L_5F_jobList (const GALGAS_L_5F_jobList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_jobList::cCollectionElement_L_5F_jobList (const GALGAS_AC_5F_job & in_mComponent
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mComponent) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_L_5F_jobList::cCollectionElement_L_5F_jobList (const GALGAS_L_5F_jobList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mComponent) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_L_5F_jobList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_L_5F_jobList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_jobList (mObject.mProperty_mComponent COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_L_5F_jobList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComponent" ":" ;
  mObject.mProperty_mComponent.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_L_5F_jobList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_jobList * operand = (cCollectionElement_L_5F_jobList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_jobList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList::GALGAS_L_5F_jobList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList::GALGAS_L_5F_jobList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_jobList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::constructor_listWithValue (const GALGAS_AC_5F_job & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_jobList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_jobList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_jobList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_AC_5F_job & in_mComponent
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_jobList * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_jobList (in_mComponent COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::addAssign_operation (const GALGAS_AC_5F_job & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::setter_append (GALGAS_L_5F_jobList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::setter_insertAtIndex (const GALGAS_AC_5F_job inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::setter_removeAtIndex (GALGAS_AC_5F_job & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
      outOperand0 = p->mObject.mProperty_mComponent ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::setter_popFirst (GALGAS_AC_5F_job & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::setter_popLast (GALGAS_AC_5F_job & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::method_first (GALGAS_AC_5F_job & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::method_last (GALGAS_AC_5F_job & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::add_operation (const GALGAS_L_5F_jobList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList::plusAssign_operation (const GALGAS_L_5F_jobList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_job GALGAS_L_5F_jobList::getter_mComponentAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  GALGAS_AC_5F_job result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    result = p->mObject.mProperty_mComponent ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_L_5F_jobList::cEnumerator_L_5F_jobList (const GALGAS_L_5F_jobList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList_2D_element cEnumerator_L_5F_jobList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_job cEnumerator_L_5F_jobList::current_mComponent (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject.mProperty_mComponent ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @L_jobList type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_jobList ("L_jobList",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_jobList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_jobList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_jobList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_jobList result ;
  const GALGAS_L_5F_jobList * p = (const GALGAS_L_5F_jobList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_jobList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_jobList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_machinesMap::cMapElement_M_5F_machinesMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_uint & in_mInputVariableCount,
                                                            const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                            const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                            const GALGAS_stringlist & in_mNameList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mInputVariableCount (in_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mProperty_mVariablesMap (in_mVariablesMap),
mProperty_mNameList (in_mNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_M_5F_machinesMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mInputVariableCount.isValid () && mProperty_mInputAndInternalVariableCount.isValid () && mProperty_mVariablesMap.isValid () && mProperty_mNameList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_M_5F_machinesMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_machinesMap (mProperty_lkey, mProperty_mIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mNameList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_M_5F_machinesMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputVariableCount" ":" ;
  mProperty_mInputVariableCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputAndInternalVariableCount" ":" ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVariablesMap" ":" ;
  mProperty_mVariablesMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNameList" ":" ;
  mProperty_mNameList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_M_5F_machinesMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_machinesMap * operand = (cMapElement_M_5F_machinesMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputVariableCount.objectCompare (operand->mProperty_mInputVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputAndInternalVariableCount.objectCompare (operand->mProperty_mInputAndInternalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariablesMap.objectCompare (operand->mProperty_mVariablesMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameList.objectCompare (operand->mProperty_mNameList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap::GALGAS_M_5F_machinesMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap::GALGAS_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap & GALGAS_M_5F_machinesMap::operator = (const GALGAS_M_5F_machinesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_machinesMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_machinesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_uint & inArgument1,
                                                   const GALGAS_uint & inArgument2,
                                                   const GALGAS_M_5F_variablesMap & inArgument3,
                                                   const GALGAS_stringlist & inArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_machinesMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_machinesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_uint inArgument0,
                                                GALGAS_uint inArgument1,
                                                GALGAS_uint inArgument2,
                                                GALGAS_M_5F_variablesMap inArgument3,
                                                GALGAS_stringlist inArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * p = NULL ;
  macroMyNew (p, cMapElement_M_5F_machinesMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' machine has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_M_5F_machinesMap_searchKey = "the '%K' machine is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_uint & outArgument1,
                                                GALGAS_uint & outArgument2,
                                                GALGAS_M_5F_variablesMap & outArgument3,
                                                GALGAS_stringlist & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_M_5F_machinesMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mInputVariableCount ;
    outArgument2 = p->mProperty_mInputAndInternalVariableCount ;
    outArgument3 = p->mProperty_mVariablesMap ;
    outArgument4 = p->mProperty_mNameList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::setter_removeKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_uint & outArgument1,
                                                GALGAS_uint & outArgument2,
                                                GALGAS_M_5F_variablesMap & outArgument3,
                                                GALGAS_stringlist & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "the '%K' machine is not defined" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mInputVariableCount ;
    outArgument2 = p->mProperty_mInputAndInternalVariableCount ;
    outArgument3 = p->mProperty_mVariablesMap ;
    outArgument4 = p->mProperty_mNameList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_machinesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_machinesMap::getter_mInputVariableCountForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mInputVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_machinesMap::getter_mInputAndInternalVariableCountForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mInputAndInternalVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_M_5F_machinesMap::getter_mVariablesMapForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_M_5F_variablesMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mVariablesMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_M_5F_machinesMap::getter_mNameListForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::setter_setMInputVariableCountForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mInputVariableCount = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::setter_setMInputAndInternalVariableCountForKey (GALGAS_uint inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mInputAndInternalVariableCount = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::setter_setMVariablesMapForKey (GALGAS_M_5F_variablesMap inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mVariablesMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap::setter_setMNameListForKey (GALGAS_stringlist inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mNameList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_M_5F_machinesMap * GALGAS_M_5F_machinesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * result = (cMapElement_M_5F_machinesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_machinesMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_M_5F_machinesMap::cEnumerator_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap_2D_element cEnumerator_M_5F_machinesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return GALGAS_M_5F_machinesMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mInputVariableCount, p->mProperty_mInputAndInternalVariableCount, p->mProperty_mVariablesMap, p->mProperty_mNameList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_M_5F_machinesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mInputVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mInputVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mInputAndInternalVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mInputAndInternalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap cEnumerator_M_5F_machinesMap::current_mVariablesMap (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mVariablesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cEnumerator_M_5F_machinesMap::current_mNameList (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mNameList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @M_machinesMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_machinesMap ("M_machinesMap",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_machinesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_machinesMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_machinesMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap result ;
  const GALGAS_M_5F_machinesMap * p = (const GALGAS_M_5F_machinesMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_machinesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_machinesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_componentsMap (),
mProperty_machinesMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_L_5F_jobList & inOperand0,
                                                const GALGAS_M_5F_machinesMap & inOperand1) :
mProperty_componentsMap (inOperand0),
mProperty_machinesMap (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_L_5F_jobList::constructor_emptyList (HERE),
                                 GALGAS_M_5F_machinesMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_L_5F_jobList & inOperand0,
                                                                const GALGAS_M_5F_machinesMap & inOperand1 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_componentsMap.objectCompare (inOperand.mProperty_componentsMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_machinesMap.objectCompare (inOperand.mProperty_machinesMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_componentsMap.isValid () && mProperty_machinesMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::drop (void) {
  mProperty_componentsMap.drop () ;
  mProperty_machinesMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_componentsMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_machinesMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList GALGAS_semanticContext::getter_componentsMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_componentsMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap GALGAS_semanticContext::getter_machinesMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_machinesMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_ (C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_semanticContext var_semanticContext_549 = GALGAS_semanticContext::constructor_new (GALGAS_L_5F_jobList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 13)), GALGAS_M_5F_machinesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 14))  COMMA_SOURCE_FILE ("sara_parser.galgas", 12)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_ (var_semanticContext_549, inCompiler) ;
    switch (select_sara_5F_parser_0 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  {
  routine_performComputations (var_semanticContext_549.getter_componentsMap (SOURCE_FILE ("sara_parser.galgas", 20)), inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 20)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_parse (inCompiler) ;
    switch (select_sara_5F_parser_0 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_909 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 27)) ;
  GALGAS_M_5F_stateMap var_statesMap_953 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 28)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_1003 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 32)) ;
  GALGAS_lstring var_machineName_1098 ;
  var_machineName_1098 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 35)) ;
  GALGAS_uint var_machineIndex_1191 ;
  GALGAS_uint joker_1265 ; // Joker input parameter
  GALGAS_uint joker_1268 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1271 ; // Joker input parameter
  GALGAS_stringlist joker_1274 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 38)).method_searchKey (var_machineName_1098, var_machineIndex_1191, joker_1265, joker_1268, joker_1271, joker_1274, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 38)) ;
  GALGAS_AC_5F_job var_job_1321 = GALGAS_C_5F_machineDisplayStates::constructor_new (var_machineIndex_1191  COMMA_SOURCE_FILE ("sara_parser.galgas", 40)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1321  COMMA_SOURCE_FILE ("sara_parser.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_1570 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 48)) ;
  GALGAS_M_5F_stateMap var_statesMap_1614 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 49)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_1664 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 53)) ;
  GALGAS_lstring var_machineName_1759 ;
  var_machineName_1759 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 56)) ;
  GALGAS_uint var_machineIndex_1852 ;
  GALGAS_uint joker_1926 ; // Joker input parameter
  GALGAS_uint joker_1929 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1932 ; // Joker input parameter
  GALGAS_stringlist joker_1935 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 59)).method_searchKey (var_machineName_1759, var_machineIndex_1852, joker_1926, joker_1929, joker_1932, joker_1935, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 59)) ;
  GALGAS_AC_5F_job var_job_1982 = GALGAS_C_5F_machineDisplayTransitions::constructor_new (var_machineIndex_1852  COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1982  COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_2236 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 69)) ;
  GALGAS_M_5F_stateMap var_statesMap_2280 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 70)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_2330 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 75)) ;
  GALGAS_lstring var_machineName_2435 ;
  var_machineName_2435 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  GALGAS_uint var_machineIndex_2528 ;
  GALGAS_uint joker_2602 ; // Joker input parameter
  GALGAS_uint joker_2605 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_2608 ; // Joker input parameter
  GALGAS_stringlist joker_2611 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 81)).method_searchKey (var_machineName_2435, var_machineIndex_2528, joker_2602, joker_2605, joker_2608, joker_2611, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
  GALGAS_AC_5F_job var_job_2658 = GALGAS_C_5F_machineDisplayInitialStates::constructor_new (var_machineIndex_2528  COMMA_SOURCE_FILE ("sara_parser.galgas", 83)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_2658  COMMA_SOURCE_FILE ("sara_parser.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_2914 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 91)) ;
  GALGAS_M_5F_stateMap var_statesMap_2958 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 92)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_3008 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 97)) ;
  GALGAS_lstring var_machineName_3112 ;
  var_machineName_3112 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 100)) ;
  GALGAS_uint var_machineIndex_3205 ;
  GALGAS_uint joker_3279 ; // Joker input parameter
  GALGAS_uint joker_3282 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3285 ; // Joker input parameter
  GALGAS_stringlist joker_3288 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 103)).method_searchKey (var_machineName_3112, var_machineIndex_3205, joker_3279, joker_3282, joker_3285, joker_3288, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 103)) ;
  GALGAS_AC_5F_job var_job_3335 = GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (var_machineIndex_3205  COMMA_SOURCE_FILE ("sara_parser.galgas", 105)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3335  COMMA_SOURCE_FILE ("sara_parser.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 97)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 100)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_3592 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 113)) ;
  GALGAS_M_5F_stateMap var_statesMap_3636 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 114)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_3686 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 117)) ;
  GALGAS_lstring var_machineName_3769 ;
  var_machineName_3769 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 120)) ;
  GALGAS_uint var_machineIndex_3862 ;
  GALGAS_uint joker_3936 ; // Joker input parameter
  GALGAS_uint joker_3939 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3942 ; // Joker input parameter
  GALGAS_stringlist joker_3945 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 123)).method_searchKey (var_machineName_3769, var_machineIndex_3862, joker_3936, joker_3939, joker_3942, joker_3945, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 123)) ;
  GALGAS_AC_5F_job var_job_3992 = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex_3862, GALGAS_bool (false)  COMMA_SOURCE_FILE ("sara_parser.galgas", 125)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3992  COMMA_SOURCE_FILE ("sara_parser.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 120)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_4240 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 133)) ;
  GALGAS_M_5F_stateMap var_statesMap_4284 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 134)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_4334 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 137)) ;
  GALGAS_lstring var_machineName_31__4427 ;
  var_machineName_31__4427 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 140)) ;
  GALGAS_lstring var_machineName_32__4487 ;
  var_machineName_32__4487 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 143)) ;
  GALGAS_uint var_machineIndex_31__4582 ;
  GALGAS_uint joker_4658 ; // Joker input parameter
  GALGAS_uint joker_4661 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_4664 ; // Joker input parameter
  GALGAS_stringlist joker_4667 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 146)).method_searchKey (var_machineName_31__4427, var_machineIndex_31__4582, joker_4658, joker_4661, joker_4664, joker_4667, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 146)) ;
  GALGAS_uint var_machineIndex_32__4728 ;
  GALGAS_uint joker_4804 ; // Joker input parameter
  GALGAS_uint joker_4807 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_4810 ; // Joker input parameter
  GALGAS_stringlist joker_4813 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 149)).method_searchKey (var_machineName_32__4487, var_machineIndex_32__4728, joker_4804, joker_4807, joker_4810, joker_4813, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 149)) ;
  GALGAS_AC_5F_job var_job_4860 = GALGAS_C_5F_machineCheckIdentical::constructor_new (var_machineIndex_31__4582, var_machineIndex_32__4728  COMMA_SOURCE_FILE ("sara_parser.galgas", 151)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_4860  COMMA_SOURCE_FILE ("sara_parser.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 137)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 143)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_5126 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 159)) ;
  GALGAS_M_5F_stateMap var_statesMap_5170 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 160)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_5220 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 163)) ;
  GALGAS_lstring var_machineName_5307 ;
  var_machineName_5307 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 166)) ;
  GALGAS_uint var_machineIndex_5400 ;
  GALGAS_uint joker_5474 ; // Joker input parameter
  GALGAS_uint joker_5477 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_5480 ; // Joker input parameter
  GALGAS_stringlist joker_5483 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 169)).method_searchKey (var_machineName_5307, var_machineIndex_5400, joker_5474, joker_5477, joker_5480, joker_5483, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 169)) ;
  GALGAS_AC_5F_job var_job_5530 = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex_5400, GALGAS_bool (true)  COMMA_SOURCE_FILE ("sara_parser.galgas", 171)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_5530  COMMA_SOURCE_FILE ("sara_parser.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 166)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_use_5F_and COMMA_SOURCE_FILE ("sara_parser.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 180)) ;
  GALGAS_AC_5F_job var_job_5790 = GALGAS_typeUse_5F_AND::constructor_new (SOURCE_FILE ("sara_parser.galgas", 181)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_5790  COMMA_SOURCE_FILE ("sara_parser.galgas", 182)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_use_5F_and COMMA_SOURCE_FILE ("sara_parser.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 180)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_use_5F_ite COMMA_SOURCE_FILE ("sara_parser.galgas", 189)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 190)) ;
  GALGAS_AC_5F_job var_job_6024 = GALGAS_typeUse_5F_ITE::constructor_new (SOURCE_FILE ("sara_parser.galgas", 191)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_6024  COMMA_SOURCE_FILE ("sara_parser.galgas", 192)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_use_5F_ite COMMA_SOURCE_FILE ("sara_parser.galgas", 189)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 190)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite COMMA_SOURCE_FILE ("sara_parser.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 200)) ;
  GALGAS_AC_5F_job var_job_6262 = GALGAS_typeUse_5F_AND_5F_ITE::constructor_new (SOURCE_FILE ("sara_parser.galgas", 201)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_6262  COMMA_SOURCE_FILE ("sara_parser.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite COMMA_SOURCE_FILE ("sara_parser.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 200)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_and_5F_cache COMMA_SOURCE_FILE ("sara_parser.galgas", 209)) ;
  GALGAS_luint var_size_6496 ;
  var_size_6496 = inCompiler->synthetizedAttribute_ulongValue () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 212)) ;
  GALGAS_AC_5F_job var_job_6543 = GALGAS_typeResize_5F_AND_5F_cache::constructor_new (var_size_6496  COMMA_SOURCE_FILE ("sara_parser.galgas", 213)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_6543  COMMA_SOURCE_FILE ("sara_parser.galgas", 214)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_and_5F_cache COMMA_SOURCE_FILE ("sara_parser.galgas", 209)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 212)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_ite_5F_cache COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  GALGAS_luint var_size_6790 ;
  var_size_6790 = inCompiler->synthetizedAttribute_ulongValue () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 222)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 223)) ;
  GALGAS_AC_5F_job var_job_6837 = GALGAS_typeResize_5F_ITE_5F_cache::constructor_new (var_size_6790  COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_6837  COMMA_SOURCE_FILE ("sara_parser.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_ite_5F_cache COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 222)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 223)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i13_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_map COMMA_SOURCE_FILE ("sara_parser.galgas", 232)) ;
  GALGAS_luint var_size_7079 ;
  var_size_7079 = inCompiler->synthetizedAttribute_ulongValue () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 235)) ;
  GALGAS_AC_5F_job var_job_7126 = GALGAS_typeResizeMap::constructor_new (var_size_7079  COMMA_SOURCE_FILE ("sara_parser.galgas", 236)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_7126  COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i13_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_map COMMA_SOURCE_FILE ("sara_parser.galgas", 232)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 235)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i14_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 245)) ;
  GALGAS_AC_5F_job var_job_7367 = GALGAS_typeDisplayBDDstats::constructor_new (SOURCE_FILE ("sara_parser.galgas", 246)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_7367  COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i14_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 245)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i15_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_7596 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 254)) ;
  GALGAS_M_5F_stateMap var_statesMap_7640 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 255)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_7690 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 256)) ;
  GALGAS_stringlist var_nameList_7737 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 257)) ;
  GALGAS_lstring var_machineName_7803 ;
  var_machineName_7803 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 260)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 261)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_7900 ;
    var_inputVarName_7900 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 265)) ;
    {
    var_variablesMap_7596.setter_insertKey (var_inputVarName_7900, var_variablesMap_7596.getter_count (SOURCE_FILE ("sara_parser.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 266)) ;
    }
    var_nameList_7737.addAssign_operation (var_inputVarName_7900.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 267)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 269)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_8086 = var_variablesMap_7596.getter_count (SOURCE_FILE ("sara_parser.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 274)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_8205 ;
      var_outputVarName_8205 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 279)) ;
      {
      var_variablesMap_7596.setter_insertKey (var_outputVarName_8205, var_variablesMap_7596.getter_count (SOURCE_FILE ("sara_parser.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 280)) ;
      }
      var_nameList_7737.addAssign_operation (var_outputVarName_8205.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 281)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 286)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_8429 = var_variablesMap_7596.getter_count (SOURCE_FILE ("sara_parser.galgas", 287)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_8522 ;
    var_outputVarName_8522 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 292)) ;
    {
    var_variablesMap_7596.setter_insertKey (var_outputVarName_8522, var_variablesMap_7596.getter_count (SOURCE_FILE ("sara_parser.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 293)) ;
    }
    var_nameList_7737.addAssign_operation (var_outputVarName_8522.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 298)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 299)) ;
  GALGAS_AC_5F_machineDefinition var_definition_8755 ;
  nt_definition_5F_expression_ (ioArgument_ioSemanticContext, var_variablesMap_7596, var_definition_8755, inCompiler) ;
  GALGAS_uint var_machineIndex_8889 = ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 304)).getter_count (SOURCE_FILE ("sara_parser.galgas", 304)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_7803, var_machineIndex_8889, var_inputVariablesCount_8086, var_inputAndInternalVariablesCount_8429, var_variablesMap_7596, var_nameList_7737, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 305)) ;
  }
  GALGAS_AC_5F_job var_machine_9157 = GALGAS_C_5F_machineComponent::constructor_new (var_machineName_7803, var_machineIndex_8889, var_inputVariablesCount_8086, var_inputAndInternalVariablesCount_8429, var_variablesMap_7596, var_nameList_7737, var_definition_8755  COMMA_SOURCE_FILE ("sara_parser.galgas", 314)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_9157  COMMA_SOURCE_FILE ("sara_parser.galgas", 315)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i15_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 260)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 261)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 265)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 269)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 274)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 279)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 286)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 292)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 298)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 299)) ;
  nt_definition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i16_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_9514 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 323)) ;
  GALGAS_M_5F_stateMap var_statesMap_9558 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 324)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_9608 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 325)) ;
  GALGAS_stringlist var_nameList_9655 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 326)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 328)) ;
  GALGAS_lstring var_machineName_9738 ;
  var_machineName_9738 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 330)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 331)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_9835 ;
    var_inputVarName_9835 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 335)) ;
    {
    var_variablesMap_9514.setter_insertKey (var_inputVarName_9835, var_variablesMap_9514.getter_count (SOURCE_FILE ("sara_parser.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 336)) ;
    }
    var_nameList_9655.addAssign_operation (var_inputVarName_9835.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 337)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_10021 = var_variablesMap_9514.getter_count (SOURCE_FILE ("sara_parser.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 344)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_10140 ;
      var_outputVarName_10140 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
      {
      var_variablesMap_9514.setter_insertKey (var_outputVarName_10140, var_variablesMap_9514.getter_count (SOURCE_FILE ("sara_parser.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
      }
      var_nameList_9655.addAssign_operation (var_outputVarName_10140.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 353)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 356)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_10364 = var_variablesMap_9514.getter_count (SOURCE_FILE ("sara_parser.galgas", 357)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 359)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_10457 ;
    var_outputVarName_10457 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 362)) ;
    {
    var_variablesMap_9514.setter_insertKey (var_outputVarName_10457, var_variablesMap_9514.getter_count (SOURCE_FILE ("sara_parser.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
    }
    var_nameList_9655.addAssign_operation (var_outputVarName_10457.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 364)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 366)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 368)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 369)) ;
  GALGAS_M_5F_modesMap var_modeMap_10677 ;
  GALGAS_ListForModes var_inclusionList_10707 ;
  nt_modalcompadd_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_9514, var_modeMap_10677, var_inclusionList_10707, inCompiler) ;
  GALGAS_uint var_machineIndex_10871 = ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 379)).getter_count (SOURCE_FILE ("sara_parser.galgas", 379)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_9738, var_machineIndex_10871, var_inputVariablesCount_10021, var_inputAndInternalVariablesCount_10364, var_variablesMap_9514, var_nameList_9655, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 380)) ;
  }
  GALGAS_AC_5F_job var_machine_11112 = GALGAS_C_5F_machineDefinedByAdditiveModalComp::constructor_new (var_machineName_9738, var_machineIndex_10871, var_inputVariablesCount_10021, var_inputAndInternalVariablesCount_10364, var_variablesMap_9514, var_modeMap_10677, var_inclusionList_10707  COMMA_SOURCE_FILE ("sara_parser.galgas", 382)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_11112  COMMA_SOURCE_FILE ("sara_parser.galgas", 390)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i16_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 328)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 330)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 331)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 335)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 344)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 353)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 356)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 359)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 362)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 366)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 368)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 369)) ;
  nt_modalcompadd_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 391)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i17_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_11509 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 398)) ;
  GALGAS_M_5F_stateMap var_statesMap_11553 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 399)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_11603 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 400)) ;
  GALGAS_stringlist var_nameList_11650 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 401)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 403)) ;
  GALGAS_lstring var_machineName_11733 ;
  var_machineName_11733 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 405)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_11830 ;
    var_inputVarName_11830 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
    {
    var_variablesMap_11509.setter_insertKey (var_inputVarName_11830, var_variablesMap_11509.getter_count (SOURCE_FILE ("sara_parser.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 411)) ;
    }
    var_nameList_11650.addAssign_operation (var_inputVarName_11830.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 412)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 414)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_12016 = var_variablesMap_11509.getter_count (SOURCE_FILE ("sara_parser.galgas", 416)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_12135 ;
      var_outputVarName_12135 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 424)) ;
      {
      var_variablesMap_11509.setter_insertKey (var_outputVarName_12135, var_variablesMap_11509.getter_count (SOURCE_FILE ("sara_parser.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
      }
      var_nameList_11650.addAssign_operation (var_outputVarName_12135.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 426)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 428)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 431)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_12359 = var_variablesMap_11509.getter_count (SOURCE_FILE ("sara_parser.galgas", 432)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 434)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_12452 ;
    var_outputVarName_12452 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 437)) ;
    {
    var_variablesMap_11509.setter_insertKey (var_outputVarName_12452, var_variablesMap_11509.getter_count (SOURCE_FILE ("sara_parser.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 438)) ;
    }
    var_nameList_11650.addAssign_operation (var_outputVarName_12452.getter_string (HERE)  COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 441)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 443)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 444)) ;
  GALGAS_M_5F_modesMap var_modeMap_12672 ;
  GALGAS_ListForModes var_exclusionList_12702 ;
  nt_modalcompsub_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_11509, var_modeMap_12672, var_exclusionList_12702, inCompiler) ;
  GALGAS_uint var_machineIndex_12866 = ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 454)).getter_count (SOURCE_FILE ("sara_parser.galgas", 454)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_11733, var_machineIndex_12866, var_inputVariablesCount_12016, var_inputAndInternalVariablesCount_12359, var_variablesMap_11509, var_nameList_11650, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
  }
  GALGAS_AC_5F_job var_machine_13107 = GALGAS_C_5F_machineDefinedBySubstractiveModalComp::constructor_new (var_machineName_11733, var_machineIndex_12866, var_inputVariablesCount_12016, var_inputAndInternalVariablesCount_12359, var_variablesMap_11509, var_modeMap_12672, var_exclusionList_12702  COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_13107  COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 466)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i17_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 403)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 405)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 414)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 424)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 428)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 431)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 434)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 437)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 441)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 443)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 444)) ;
  nt_modalcompsub_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 466)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i18_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
  GALGAS_M_5F_variablesMap var_variablesMap_13519 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 472)) ;
  GALGAS_M_5F_stateMap var_statesMap_13563 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 473)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_13613 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 474)) ;
  GALGAS_lstring var_machineName_13686 ;
  var_machineName_13686 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 477)) ;
  GALGAS_uint var_machineIndex_13773 ;
  GALGAS_uint var_inputVariablesCountFromDefinition_13815 ;
  GALGAS_uint var_inputAndInternalVariablesCountFromDefinition_13868 ;
  GALGAS_M_5F_variablesMap var_variablesMapFromDefinition_13913 ;
  GALGAS_stringlist joker_14096 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 483)).method_searchKey (var_machineName_13686, var_machineIndex_13773, var_inputVariablesCountFromDefinition_13815, var_inputAndInternalVariablesCountFromDefinition_13868, var_variablesMapFromDefinition_13913, joker_14096, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_14166 ;
    var_inputVarName_14166 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    {
    var_variablesMap_13519.setter_insertKey (var_inputVarName_14166, var_variablesMap_13519.getter_count (SOURCE_FILE ("sara_parser.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 489)) ;
    }
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 491)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_14315 = var_variablesMap_13519.getter_count (SOURCE_FILE ("sara_parser.galgas", 493)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 494)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCountFromDefinition_13815.objectCompare (var_inputVariablesCount_14315)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 497)), GALGAS_string ("This declaration names ").add_operation (var_inputVariablesCount_14315.getter_string (SOURCE_FILE ("sara_parser.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 497)).add_operation (GALGAS_string (" input variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 497)).add_operation (var_inputVariablesCountFromDefinition_13815.getter_string (SOURCE_FILE ("sara_parser.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 498)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 498)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 497)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 501)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_outputVarName_14764 ;
      var_outputVarName_14764 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 506)) ;
      {
      var_variablesMap_13519.setter_insertKey (var_outputVarName_14764, var_variablesMap_13519.getter_count (SOURCE_FILE ("sara_parser.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      }
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 509)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 512)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_14996 = var_variablesMap_13519.getter_count (SOURCE_FILE ("sara_parser.galgas", 514)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCountFromDefinition_13868.objectCompare (var_inputAndInternalVariablesCount_14996)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 516)), GALGAS_string ("This declaration names ").add_operation (var_inputAndInternalVariablesCount_14996.getter_string (SOURCE_FILE ("sara_parser.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 516)).add_operation (GALGAS_string (" input and internal variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 516)).add_operation (var_inputAndInternalVariablesCountFromDefinition_13868.getter_string (SOURCE_FILE ("sara_parser.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 517)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 517)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 516)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 520)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVarName_15444 ;
    var_outputVarName_15444 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 523)) ;
    {
    var_variablesMap_13519.setter_insertKey (var_outputVarName_15444, var_variablesMap_13519.getter_count (SOURCE_FILE ("sara_parser.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 524)) ;
    }
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 526)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 528)) ;
  GALGAS_uint var_outputVariablesCount_15650 = var_variablesMap_13519.getter_count (SOURCE_FILE ("sara_parser.galgas", 530)) ;
  GALGAS_uint var_outputVariablesCountFromDefinition_15716 = var_variablesMapFromDefinition_13913.getter_count (SOURCE_FILE ("sara_parser.galgas", 531)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_outputVariablesCountFromDefinition_15716.objectCompare (var_outputVariablesCount_15650)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 533)), GALGAS_string ("This declaration names ").add_operation (var_outputVariablesCount_15650.getter_string (SOURCE_FILE ("sara_parser.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 533)).add_operation (GALGAS_string (" variables, but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 533)).add_operation (var_outputVariablesCountFromDefinition_15716.getter_string (SOURCE_FILE ("sara_parser.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 534)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 534)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 533)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 536)) ;
  GALGAS_L_5F_scenarioList var_scenarioList_16051 = GALGAS_L_5F_scenarioList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 537)) ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GALGAS_lstring var_scenarioTitle_16116 ;
    var_scenarioTitle_16116 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 540)) ;
    GALGAS_L_5F_inputScenario var_inputScenario_16175 = GALGAS_L_5F_inputScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 541)) ;
    bool repeatFlag_10 = true ;
    while (repeatFlag_10) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 543)) ;
      GALGAS_L_5F_inputConfigurationForScenario var_inputConfigurationForScenario_16266 = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 544)) ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GALGAS_luint var_v_16341 ;
        var_v_16341 = inCompiler->synthetizedAttribute_ulongValue () ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 547)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsStrictSup, var_v_16341.getter_uint (SOURCE_FILE ("sara_parser.galgas", 548)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (var_v_16341.getter_location (SOURCE_FILE ("sara_parser.galgas", 549)), GALGAS_string ("this value is not a  binary digit"), fixItArray13  COMMA_SOURCE_FILE ("sara_parser.galgas", 549)) ;
          }
        }
        var_inputConfigurationForScenario_16266.addAssign_operation (var_v_16341  COMMA_SOURCE_FILE ("sara_parser.galgas", 551)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 553)) ;
        } break ;
        default:
          repeatFlag_11 = false ;
          break ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_14315.objectCompare (var_inputConfigurationForScenario_16266.getter_length (SOURCE_FILE ("sara_parser.galgas", 555)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 556)), GALGAS_string ("this input configuration names ").add_operation (var_inputConfigurationForScenario_16266.getter_length (SOURCE_FILE ("sara_parser.galgas", 556)).getter_string (SOURCE_FILE ("sara_parser.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 556)).add_operation (GALGAS_string (" input variable(s), instead of "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 556)).add_operation (var_inputVariablesCount_14315.getter_string (SOURCE_FILE ("sara_parser.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 556)), fixItArray15  COMMA_SOURCE_FILE ("sara_parser.galgas", 556)) ;
        }
      }
      var_inputScenario_16175.addAssign_operation (var_inputConfigurationForScenario_16266  COMMA_SOURCE_FILE ("sara_parser.galgas", 558)) ;
      switch (select_sara_5F_parser_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_10 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 561)) ;
    var_scenarioList_16051.addAssign_operation (var_scenarioTitle_16116, var_inputScenario_16175  COMMA_SOURCE_FILE ("sara_parser.galgas", 562)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_9 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 565)) ;
  GALGAS_AC_5F_job var_machine_17007 = GALGAS_C_5F_scenarioComponent::constructor_new (var_machineIndex_13773, var_inputVariablesCount_14315, var_inputAndInternalVariablesCount_14996, var_variablesMap_13519, var_scenarioList_16051  COMMA_SOURCE_FILE ("sara_parser.galgas", 567)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_17007  COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i18_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 477)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 491)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 494)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 501)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 506)) ;
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 509)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 512)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 520)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 523)) ;
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 526)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 528)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 536)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 540)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 543)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 547)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 553)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      switch (select_sara_5F_parser_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 561)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 565)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i19_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                                GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 580)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_17527 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_17527, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_orExpression::constructor_new (outArgument_outExpression, var_rightExpression_17527  COMMA_SOURCE_FILE ("sara_parser.galgas", 583)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 585)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_17731 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_17731, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_xorExpression::constructor_new (outArgument_outExpression, var_rightExpression_17731  COMMA_SOURCE_FILE ("sara_parser.galgas", 588)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 590)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_17937 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_17937, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_impliesExpression::constructor_new (outArgument_outExpression, var_rightExpression_17937  COMMA_SOURCE_FILE ("sara_parser.galgas", 593)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 595)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_18146 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_18146, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_equalExpression::constructor_new (outArgument_outExpression, var_rightExpression_18146  COMMA_SOURCE_FILE ("sara_parser.galgas", 598)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i19_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_and_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 580)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 585)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 590)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 595)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i20_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                               GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                               GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                               C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_18645 ;
      nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_18645, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_andExpression::constructor_new (outArgument_outExpression, var_rightExpression_18645  COMMA_SOURCE_FILE ("sara_parser.galgas", 614)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i20_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
      nt_io_5F_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i21_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 624)) ;
  nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i21_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 624)) ;
  nt_io_5F_bool_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i22_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_inputVarName_19324 ;
  var_inputVarName_19324 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  GALGAS_uint var_inputVarIndex_19376 ;
  ioArgument_ioVarMap.method_searchKey (var_inputVarName_19324, var_inputVarIndex_19376, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
  outArgument_outExpression = GALGAS_C_5F_VariableExpression::constructor_new (var_inputVarIndex_19376  COMMA_SOURCE_FILE ("sara_parser.galgas", 639)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i22_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i23_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
  GALGAS_AC_5F_boolExpression var_expression_19738 ;
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_expression_19738, inCompiler) ;
  outArgument_outExpression = GALGAS_C_5F_notExpression::constructor_new (var_expression_19738  COMMA_SOURCE_FILE ("sara_parser.galgas", 651)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i23_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
  nt_io_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i24_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 660)) ;
  outArgument_outExpression = GALGAS_C_5F_falseExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 661)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i24_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 660)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i25_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 670)) ;
  outArgument_outExpression = GALGAS_C_5F_trueExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 671)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i25_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 670)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i26_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_machineIdentifier_20641 ;
  var_machineIdentifier_20641 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 681)) ;
  GALGAS_uint var_machineInputVariableCount_20710 ;
  GALGAS_uint var_machineInputAndInternalVariableCount_20755 ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap_20793 ;
  GALGAS_uint var_indexOfImportedMachine_20824 ;
  GALGAS_stringlist joker_21000 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 686)).method_searchKey (var_machineIdentifier_20641, var_indexOfImportedMachine_20824, var_machineInputVariableCount_20710, var_machineInputAndInternalVariableCount_20755, var_machineVariablesMap_20793, joker_21000, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 686)) ;
  GALGAS_L_5F_translationVector var_translationVector_21026 = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 687)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 689)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar_21124 ;
    var_inputVar_21124 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 692)) ;
    GALGAS_uint var_inputVarIndex_21176 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_21124, var_inputVarIndex_21176, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 694)) ;
    var_translationVector_21026.addAssign_operation (var_inputVarIndex_21176  COMMA_SOURCE_FILE ("sara_parser.galgas", 695)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 697)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 699)) ;
  GALGAS_uint var_inputVariablesCount_21322 = var_translationVector_21026.getter_length (SOURCE_FILE ("sara_parser.galgas", 700)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_21322.objectCompare (var_machineInputVariableCount_20710)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 702)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_20641.getter_string (SOURCE_FILE ("sara_parser.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (var_machineInputVariableCount_20710.getter_string (SOURCE_FILE ("sara_parser.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (var_inputVariablesCount_21322.getter_string (SOURCE_FILE ("sara_parser.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 703)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 703)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 702)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 706)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_internalVar_21728 ;
      var_internalVar_21728 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 711)) ;
      GALGAS_uint var_internalVarIndex_21790 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_21728, var_internalVarIndex_21790, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
      var_translationVector_21026.addAssign_operation (var_internalVarIndex_21790  COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 716)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 719)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_21973 = var_translationVector_21026.getter_length (SOURCE_FILE ("sara_parser.galgas", 720)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount_21973.objectCompare (var_machineInputAndInternalVariableCount_20755)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 722)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_20641.getter_string (SOURCE_FILE ("sara_parser.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (var_machineInputAndInternalVariableCount_20755.getter_string (SOURCE_FILE ("sara_parser.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (var_inputAndInternalVariablesCount_21973.getter_string (SOURCE_FILE ("sara_parser.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 723)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 723)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVar_22436 ;
    var_outputVar_22436 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 729)) ;
    GALGAS_uint var_outputVarIndex_22490 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_22436, var_outputVarIndex_22490, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 731)) ;
    var_translationVector_21026.addAssign_operation (var_outputVarIndex_22490  COMMA_SOURCE_FILE ("sara_parser.galgas", 732)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 734)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 736)) ;
  GALGAS_uint var_allVariablesCount_22637 = var_translationVector_21026.getter_length (SOURCE_FILE ("sara_parser.galgas", 737)) ;
  GALGAS_uint var_machineAllVariablesCount_22699 = var_machineVariablesMap_20793.getter_count (SOURCE_FILE ("sara_parser.galgas", 738)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_allVariablesCount_22637.objectCompare (var_machineAllVariablesCount_22699)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 740)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_20641.getter_string (SOURCE_FILE ("sara_parser.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (var_machineAllVariablesCount_22699.getter_string (SOURCE_FILE ("sara_parser.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (var_allVariablesCount_22637.getter_string (SOURCE_FILE ("sara_parser.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 741)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 741)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 740)) ;
    }
  }
  outArgument_outExpression = GALGAS_C_5F_importBoolMachine::constructor_new (var_indexOfImportedMachine_20824, var_machineIdentifier_20641.getter_location (SOURCE_FILE ("sara_parser.galgas", 745)), var_translationVector_21026  COMMA_SOURCE_FILE ("sara_parser.galgas", 743)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i26_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 681)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 689)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 692)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 697)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 699)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 706)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 711)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 716)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 719)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 729)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 734)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 736)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i27_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_23663 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_23718 ;
      nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_23718, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_orComposition::constructor_new (var_leftOperand_23663, var_rightOperand_23718  COMMA_SOURCE_FILE ("sara_parser.galgas", 764)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i27_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      nt_definition_5F_expression_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i28_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                        GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                        GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                        C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 777)) ;
      GALGAS_location var_errorLocation_24246 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 778)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_24301 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_24356 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_24356, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_strongModalComposition::constructor_new (var_leftOperand_24301, var_errorLocation_24246, var_rightOperand_24356  COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 784)) ;
      GALGAS_location var_errorLocation_24581 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 785)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_24636 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_24691 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_24691, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_weakModalComposition::constructor_new (var_leftOperand_24636, var_errorLocation_24581, var_rightOperand_24691  COMMA_SOURCE_FILE ("sara_parser.galgas", 789)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_24924 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_24979 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_24979, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_parallelComposition::constructor_new (var_leftOperand_24924, var_rightOperand_24979  COMMA_SOURCE_FILE ("sara_parser.galgas", 795)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i28_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 777)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 784)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i29_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                  GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GALGAS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GALGAS_ListForModes & outArgument_outInclusionList,
                                                                                  C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outInclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GALGAS_M_5F_modesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 806)) ;
  outArgument_outInclusionList = GALGAS_ListForModes::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 807)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_modeName_25511 ;
    var_modeName_25511 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 810)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
    GALGAS_AC_5F_machineDefinition var_def_25577 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_25577, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_25511, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 814)), var_def_25577, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    switch (select_sara_5F_parser_28 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_sara_5F_parser_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
      GALGAS_lstring var_sourceModeName_25789 ;
      var_sourceModeName_25789 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 822)) ;
      GALGAS_uint var_sourceModeIndex_25849 ;
      GALGAS_AC_5F_machineDefinition joker_25910 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_25789, var_sourceModeIndex_25849, joker_25910, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 825)) ;
      GALGAS_lstring var_targetModeName_25949 ;
      var_targetModeName_25949 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 827)) ;
      GALGAS_uint var_targetModeIndex_26009 ;
      GALGAS_AC_5F_machineDefinition joker_26070 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_25949, var_targetModeIndex_26009, joker_26070, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 830)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex_25849.objectCompare (var_targetModeIndex_26009)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_25949.getter_location (SOURCE_FILE ("sara_parser.galgas", 832)), GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
        }
      }
      if (kBoolFalse == test_2) {
        outArgument_outInclusionList.addAssign_operation (var_sourceModeIndex_25849, var_targetModeIndex_26009  COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i29_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 810)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    switch (select_sara_5F_parser_28 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_sara_5F_parser_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 822)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 825)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 827)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 830)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i30_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                  GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GALGAS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GALGAS_ListForModes & outArgument_outExclusionList,
                                                                                  C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outExclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GALGAS_M_5F_modesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 846)) ;
  outArgument_outExclusionList = GALGAS_ListForModes::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 847)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_modeName_26728 ;
    var_modeName_26728 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    GALGAS_AC_5F_machineDefinition var_def_26794 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26794, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_26728, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 854)), var_def_26794, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 854)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 855)) ;
    switch (select_sara_5F_parser_30 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_sara_5F_parser_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
      GALGAS_lstring var_sourceModeName_27006 ;
      var_sourceModeName_27006 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 862)) ;
      GALGAS_uint var_sourceModeIndex_27066 ;
      GALGAS_AC_5F_machineDefinition joker_27127 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_27006, var_sourceModeIndex_27066, joker_27127, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 864)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
      GALGAS_lstring var_targetModeName_27166 ;
      var_targetModeName_27166 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 867)) ;
      GALGAS_uint var_targetModeIndex_27226 ;
      GALGAS_AC_5F_machineDefinition joker_27287 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_27166, var_targetModeIndex_27226, joker_27287, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 869)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 870)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex_27066.objectCompare (var_targetModeIndex_27226)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_27166.getter_location (SOURCE_FILE ("sara_parser.galgas", 872)), GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 872)) ;
        }
      }
      if (kBoolFalse == test_2) {
        outArgument_outExclusionList.addAssign_operation (var_sourceModeIndex_27066, var_targetModeIndex_27226  COMMA_SOURCE_FILE ("sara_parser.galgas", 874)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i30_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 855)) ;
    switch (select_sara_5F_parser_30 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_sara_5F_parser_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 862)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 867)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 870)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                          GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                          GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                          C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 890)) ;
  } break ;
  case 3: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap_28043 = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount_28090 = var_extendedVariablesMap_28043.getter_count (SOURCE_FILE ("sara_parser.galgas", 893)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 894)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_variableName_28168 ;
      var_variableName_28168 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 897)) ;
      {
      var_extendedVariablesMap_28043.setter_insertKey (var_variableName_28168, var_extendedVariablesMap_28043.getter_count (SOURCE_FILE ("sara_parser.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 898)) ;
      }
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 900)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount_28345 = var_extendedVariablesMap_28043.getter_count (SOURCE_FILE ("sara_parser.galgas", 902)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
    GALGAS_AC_5F_machineDefinition var_def_28414 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_28043, var_def_28414, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
    outArgument_outDefinition = GALGAS_C_5F_existsDefinition::constructor_new (var_previousVariableCount_28090, var_actualVariableCount_28345, var_def_28414  COMMA_SOURCE_FILE ("sara_parser.galgas", 907)) ;
  } break ;
  case 4: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap_28640 = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount_28687 = var_extendedVariablesMap_28640.getter_count (SOURCE_FILE ("sara_parser.galgas", 910)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 911)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_variableName_28765 ;
      var_variableName_28765 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 914)) ;
      {
      var_extendedVariablesMap_28640.setter_insertKey (var_variableName_28765, var_extendedVariablesMap_28640.getter_count (SOURCE_FILE ("sara_parser.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
      }
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 917)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount_28942 = var_extendedVariablesMap_28640.getter_count (SOURCE_FILE ("sara_parser.galgas", 919)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 920)) ;
    GALGAS_AC_5F_machineDefinition var_def_29011 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_28640, var_def_29011, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 923)) ;
    outArgument_outDefinition = GALGAS_C_5F_forallDefinition::constructor_new (var_previousVariableCount_28687, var_actualVariableCount_28942, var_def_29011  COMMA_SOURCE_FILE ("sara_parser.galgas", 924)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 926)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 927)) ;
    GALGAS_AC_5F_boolExpression var_def_29242 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_29242, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_boolToSeqExpression::constructor_new (var_def_29242  COMMA_SOURCE_FILE ("sara_parser.galgas", 930)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 931)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 933)) ;
    GALGAS_AC_5F_machineDefinition var_def_29413 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_29413, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_fullSaturationOperation::constructor_new (var_def_29413  COMMA_SOURCE_FILE ("sara_parser.galgas", 936)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 938)) ;
    GALGAS_AC_5F_machineDefinition var_def_29591 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_29591, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_complementationOperation::constructor_new (var_def_29591  COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 943)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
    GALGAS_AC_5F_machineDefinition var_def_29784 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_29784, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressInitialStatesOperation::constructor_new (var_def_29784  COMMA_SOURCE_FILE ("sara_parser.galgas", 947)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 948)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 950)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
    GALGAS_AC_5F_machineDefinition var_def_29983 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_29983, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressTerminalStatesOperation::constructor_new (var_def_29983  COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 955)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 957)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 958)) ;
    GALGAS_M_5F_modesMap var_modeMap_30183 ;
    GALGAS_ListForModes var_inclusionList_30215 ;
    nt_modalcompadd_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_30183, var_inclusionList_30215, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 966)) ;
    outArgument_outDefinition = GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (var_modeMap_30183, var_inclusionList_30215  COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 970)) ;
    GALGAS_M_5F_modesMap var_modeMap_30480 ;
    GALGAS_ListForModes var_exclusionList_30512 ;
    nt_modalcompsub_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_30480, var_exclusionList_30512, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 978)) ;
    outArgument_outDefinition = GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (var_modeMap_30480, var_exclusionList_30512  COMMA_SOURCE_FILE ("sara_parser.galgas", 979)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 982)) ;
    GALGAS_AC_5F_boolExpression var_sourceExpression_30790 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_sourceExpression_30790, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 985)) ;
    GALGAS_AC_5F_boolExpression var_targetExpression_30916 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_targetExpression_30916, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    outArgument_outDefinition = GALGAS_C_5F_trans::constructor_new (var_sourceExpression_30790, var_targetExpression_30916  COMMA_SOURCE_FILE ("sara_parser.galgas", 989)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 890)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 894)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 897)) ;
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 900)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 911)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 914)) ;
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 917)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 920)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 923)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 926)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 927)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 931)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 933)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 938)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 943)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 948)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 950)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 955)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 957)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 958)) ;
    nt_modalcompadd_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 966)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 970)) ;
    nt_modalcompsub_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 978)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 982)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 985)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                          GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                                          GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                          C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GALGAS_lstring var_machineIdentifier_31339 ;
  var_machineIdentifier_31339 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 1000)) ;
  GALGAS_uint var_machineInputVariableCount_31408 ;
  GALGAS_uint var_machineInputAndInternalVariableCount_31453 ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap_31491 ;
  GALGAS_uint var_indexOfImportedMachine_31522 ;
  GALGAS_stringlist joker_31698 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 1005)).method_searchKey (var_machineIdentifier_31339, var_indexOfImportedMachine_31522, var_machineInputVariableCount_31408, var_machineInputAndInternalVariableCount_31453, var_machineVariablesMap_31491, joker_31698, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1005)) ;
  GALGAS_L_5F_translationVector var_translationVector_31724 = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1006)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1008)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar_31822 ;
    var_inputVar_31822 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1011)) ;
    GALGAS_uint var_inputVarIndex_31874 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_31822, var_inputVarIndex_31874, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
    var_translationVector_31724.addAssign_operation (var_inputVarIndex_31874  COMMA_SOURCE_FILE ("sara_parser.galgas", 1014)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1016)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1018)) ;
  GALGAS_uint var_inputVariablesCount_32020 = var_translationVector_31724.getter_length (SOURCE_FILE ("sara_parser.galgas", 1019)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_32020.objectCompare (var_machineInputVariableCount_31408)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_31339.getter_string (SOURCE_FILE ("sara_parser.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (var_machineInputVariableCount_31408.getter_string (SOURCE_FILE ("sara_parser.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (var_inputVariablesCount_32020.getter_string (SOURCE_FILE ("sara_parser.galgas", 1022)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1022)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1022)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1025)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_internalVar_32435 ;
      var_internalVar_32435 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1030)) ;
      GALGAS_uint var_internalVarIndex_32497 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_32435, var_internalVarIndex_32497, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1032)) ;
      var_translationVector_31724.addAssign_operation (var_internalVarIndex_32497  COMMA_SOURCE_FILE ("sara_parser.galgas", 1033)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1035)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1038)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_32680 = var_translationVector_31724.getter_length (SOURCE_FILE ("sara_parser.galgas", 1039)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount_32680.objectCompare (var_machineInputAndInternalVariableCount_31453)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_31339.getter_string (SOURCE_FILE ("sara_parser.galgas", 1041)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (var_machineInputAndInternalVariableCount_31453.getter_string (SOURCE_FILE ("sara_parser.galgas", 1041)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (var_inputAndInternalVariablesCount_32680.getter_string (SOURCE_FILE ("sara_parser.galgas", 1042)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1042)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1042)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1045)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVar_33143 ;
    var_outputVar_33143 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1048)) ;
    GALGAS_uint var_outputVarIndex_33197 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_33143, var_outputVarIndex_33197, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1050)) ;
    var_translationVector_31724.addAssign_operation (var_outputVarIndex_33197  COMMA_SOURCE_FILE ("sara_parser.galgas", 1051)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1053)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1055)) ;
  GALGAS_uint var_allVariablesCount_33344 = var_translationVector_31724.getter_length (SOURCE_FILE ("sara_parser.galgas", 1056)) ;
  GALGAS_uint var_machineAllVariablesCount_33406 = var_machineVariablesMap_31491.getter_count (SOURCE_FILE ("sara_parser.galgas", 1057)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_allVariablesCount_33344.objectCompare (var_machineAllVariablesCount_33406)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_31339.getter_string (SOURCE_FILE ("sara_parser.galgas", 1059)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (var_machineAllVariablesCount_33406.getter_string (SOURCE_FILE ("sara_parser.galgas", 1059)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (var_allVariablesCount_33344.getter_string (SOURCE_FILE ("sara_parser.galgas", 1060)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1060)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1060)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)) ;
    }
  }
  outArgument_outDefinition = GALGAS_C_5F_importMachine::constructor_new (var_indexOfImportedMachine_31522, var_translationVector_31724  COMMA_SOURCE_FILE ("sara_parser.galgas", 1062)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 1000)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1008)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1011)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1016)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1018)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1025)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1030)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1035)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1038)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1045)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1048)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1053)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1055)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i33_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                             GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                             GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                             C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GALGAS_M_5F_stateMap var_statesMap_34194 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 1073)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_34244 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1074)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 1075)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1076)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 1078)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_stateName_34357 ;
    var_stateName_34357 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1081)) ;
    {
    var_statesMap_34194.setter_insertKey (var_stateName_34357, var_statesMap_34194.getter_count (SOURCE_FILE ("sara_parser.galgas", 1082)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1082)) ;
    }
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1084)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1086)) ;
  GALGAS_L_5F_statesDefinitionList var_initialStatesDefinitionList_34526 = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1088)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 1089)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_initialState_34608 ;
    var_initialState_34608 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1092)) ;
    GALGAS_uint var_initialStateIndex_34668 ;
    var_statesMap_34194.method_searchKey (var_initialState_34608, var_initialStateIndex_34668, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1094)) ;
    var_initialStatesDefinitionList_34526.addAssign_operation (var_initialStateIndex_34668, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1095))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1095)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1097)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1099)) ;
  GALGAS_L_5F_statesDefinitionList var_terminalStatesDefinitionList_34881 = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1101)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 1104)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_terminalState_34983 ;
      var_terminalState_34983 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1107)) ;
      GALGAS_uint var_terminalStateIndex_35049 ;
      var_statesMap_34194.method_searchKey (var_terminalState_34983, var_terminalStateIndex_35049, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1109)) ;
      var_terminalStatesDefinitionList_34881.addAssign_operation (var_terminalStateIndex_35049, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1110))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1110)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1112)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1114)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_M_5F_stateMap var_stateDefinitionMap_35283 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 1117)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GALGAS_lstring var_stateName_35360 ;
    var_stateName_35360 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1121)) ;
    GALGAS_uint var_stateIndex_35410 ;
    var_statesMap_34194.method_searchKey (var_stateName_35360, var_stateIndex_35410, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1123)) ;
    {
    var_stateDefinitionMap_35283.setter_defineState (var_stateName_35360, var_stateDefinitionMap_35283.getter_count (SOURCE_FILE ("sara_parser.galgas", 1124)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1124)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1125)) ;
    GALGAS_AC_5F_boolExpression var_stateExpression_35614 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_stateExpression_35614, inCompiler) ;
    GALGAS_location var_endOfStateExpression_35725 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1129)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1130)) ;
    GALGAS_L_5F_transitionDefinition var_transitionsList_35804 = GALGAS_L_5F_transitionDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1132)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        GALGAS_AC_5F_boolExpression var_transitionInputExpression_35913 ;
        nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_transitionInputExpression_35913, inCompiler) ;
        GALGAS_location var_endOfExpression_36033 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1137)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 1138)) ;
        GALGAS_lstring var_targetStateName_36094 ;
        var_targetStateName_36094 = inCompiler->synthetizedAttribute_identifierString () ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1140)) ;
        GALGAS_uint var_targetStateIndex_36160 ;
        var_statesMap_34194.method_searchKey (var_targetStateName_36094, var_targetStateIndex_36160, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1142)) ;
        var_transitionsList_35804.addAssign_operation (var_transitionInputExpression_35913, var_endOfExpression_36033, var_targetStateIndex_36160  COMMA_SOURCE_FILE ("sara_parser.galgas", 1143)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1144)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1146)) ;
    var_stateDefinitionList_34244.addAssign_operation (var_stateIndex_35410, var_stateExpression_35614, var_endOfStateExpression_35725, var_transitionsList_35804  COMMA_SOURCE_FILE ("sara_parser.galgas", 1147)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  cEnumerator_M_5F_stateMap enumerator_36529 (var_statesMap_34194, kENUMERATION_UP) ;
  while (enumerator_36529.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_stateDefinitionMap_35283.getter_hasKey (enumerator_36529.current_lkey (HERE).getter_string (SOURCE_FILE ("sara_parser.galgas", 1153)) COMMA_SOURCE_FILE ("sara_parser.galgas", 1153)).operator_not (SOURCE_FILE ("sara_parser.galgas", 1153)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1154)), GALGAS_string ("'").add_operation (enumerator_36529.current_lkey (HERE).getter_string (SOURCE_FILE ("sara_parser.galgas", 1154)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1154)).add_operation (GALGAS_string ("' state is not described"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1154)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas", 1154)) ;
      }
    }
    enumerator_36529.gotoNextObject () ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1158)) ;
  outArgument_outDefinition = GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (var_statesMap_34194, var_initialStatesDefinitionList_34526, var_terminalStatesDefinitionList_34881, var_stateDefinitionList_34244, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1159))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i33_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 1075)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1076)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 1078)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1081)) ;
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1084)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1086)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 1089)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1092)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1097)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1099)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 1104)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1107)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1112)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1114)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1121)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1125)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1130)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        nt_io_5F_bool_5F_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 1138)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1140)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1144)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1146)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1158)) ;
  inCompiler->resetTemplateString () ;
}

