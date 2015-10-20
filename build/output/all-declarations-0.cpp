#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"

//---------------------------------------------------------------------------------------------------------------------*

cTokenFor_sara_5F_scanner::cTokenFor_sara_5F_scanner (void) :
mLexicalAttribute_identifierString (),
mLexicalAttribute_ulongValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_sara_5F_scanner::C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                const C_String & inDependencyFileExtension,
                const C_String & inDependencyFilePath,
                const C_String & inSourceFileName
                COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_sara_5F_scanner::C_Lexique_sara_5F_scanner (C_Compiler * inCallerCompiler,
                const C_String & inSourceString,
                const C_String & inStringForError
                COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_sara_5F_scanner::indexingDirectory (void) const {
  return "" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Lexical error message list                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static const utf32 gLexicalMessage_sara_5F_scanner_decimalNumberTooLarge [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (' '),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (' '),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE (' '),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

static const utf32 gLexicalMessage_sara_5F_scanner_incorrectCharInString [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE (' '),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (' '),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (' '),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (' '),
  TO_UNICODE ('a'),
  TO_UNICODE (' '),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

static const utf32 gLexicalMessage_sara_5F_scanner_incorrectEndOfComment [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (' '),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (' '),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE (' '),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

static const utf32 gLexicalMessage_sara_5F_scanner_incorrectMachineNameBeginning [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (' '),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

static const utf32 gLexicalMessage_sara_5F_scanner_incorrectStringEnd [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (' '),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (' '),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('\"'),
  TO_UNICODE ('\''),
  TO_UNICODE (0)
} ;

static const utf32 gLexicalMessage_sara_5F_scanner_internalError [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (' '),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//          Syntax error messages, for every terminal symbol                                                           *
//---------------------------------------------------------------------------------------------------------------------*

//--- Syntax error message for terminal '$identifier$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_identifier [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE (' '),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$literal_string$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_literal_5F_string [] = {
  TO_UNICODE ('a'),
  TO_UNICODE (' '),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (' '),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (' '),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (' '),
  TO_UNICODE ('\"'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('\"'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$machineIdf$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_machineIdf [] = {
  TO_UNICODE ('a'),
  TO_UNICODE (' '),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('('),
  TO_UNICODE ('$'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$literal_integer$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_literal_5F_integer [] = {
  TO_UNICODE ('a'),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (' '),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$comment$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_comment [] = {
  TO_UNICODE ('a'),
  TO_UNICODE (' '),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$auto$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_auto [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$state$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_state [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$first$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_first [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$last$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_last [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$goto$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_goto [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('g'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$true$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$false$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_false [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$nofirst$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_nofirst [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$nolast$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_nolast [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$modalcompadd$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_modalcompadd [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
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
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$exclude$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_exclude [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$modalcompsub$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_modalcompsub [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
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
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$include$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_include [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$to$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_to [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$scenario$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_scenario [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('s'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$trans$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_trans [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$display$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_display [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$ite_cache$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_ite_5F_cache [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('_'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$and_cache$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_and_5F_cache [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('_'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$map$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_map [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$bdd$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_bdd [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('b'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$bool$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_bool [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$use_and$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_use_5F_and [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('_'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$use_ite$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_use_5F_ite [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('_'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$use_and_ite$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_use_5F_and_5F_ite [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
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
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$check$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_check [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$checkbool$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_checkbool [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$checkidentical$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner_checkidentical [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
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
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (' '),
  TO_UNICODE ('w'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$,$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__2C_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE (','),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$;$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__3B_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE (';'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$:$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__3A_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE (':'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '${$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__7B_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('{'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$}$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__7D_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('}'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$->$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__2D__3E_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$&$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__26_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('&'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$~$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__7E_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('~'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$?$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__3F_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('\?'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$!$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__21_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('!'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$|$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__7C_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('|'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$||$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__7C__7C_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$+$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__2B_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('+'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$($' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__28_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('('),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$)$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__29_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE (')'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$:=$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__3A__3D_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE (':'),
  TO_UNICODE ('='),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$^$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__5E_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('^'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$=$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__3D_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('='),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$*$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__2A_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('*'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$@$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__40_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('@'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Syntax error message for terminal '$**$' :
static const utf32 gSyntaxErrorMessage_sara_5F_scanner__2A__2A_ [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE (' '),
  TO_UNICODE ('\''),
  TO_UNICODE ('*'),
  TO_UNICODE ('*'),
  TO_UNICODE ('\''),
  TO_UNICODE (' '),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                getMessageForTerminal                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_sara_5F_scanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const utf32 * syntaxErrorMessageArray [55] = {kEndOfSourceLexicalErrorMessage,
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
    gSyntaxErrorMessage_sara_5F_scanner__2A__2A_} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      U N I C O D E    S T R I N G S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'delimitorsList'                            *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'keyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                          getCurrentTokenString                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                           Template Delimiters                                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                           Template Replacements                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//            Terminal Symbols as end of script in template mark                                                       *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//---------------------------------------------------------------------------------------------------------------------*

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
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if ((UNICODE_VALUE (mCurrentChar) == '\0') && (token.mTemplateStringBeforeToken.length () > 0)) {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         E N T E R    T O K E N                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

void C_Lexique_sara_5F_scanner::enterToken (const cTokenFor_sara_5F_scanner & inToken) {
  cTokenFor_sara_5F_scanner * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_sara_5F_scanner ()) ;
  ptr->mTokenCode = inToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;
  ptr->mLexicalAttribute_identifierString = inToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_ulongValue = inToken.mLexicalAttribute_ulongValue ;
  enterTokenFromPointer (ptr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               A T T R I B U T E   A C C E S S                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_sara_5F_scanner::attributeValue_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_identifierString ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_sara_5F_scanner::attributeValue_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_ulongValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_sara_5F_scanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint C_Lexique_sara_5F_scanner::synthetizedAttribute_ulongValue (void) const {
  cTokenFor_sara_5F_scanner * ptr = (cTokenFor_sara_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_sara_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_ulongValue) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         I N T R O S P E C T I O N                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_variablesMap::cMapElement_M_5F_variablesMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_uint & in_mIndex
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_M_5F_variablesMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_M_5F_variablesMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_variablesMap (mAttribute_lkey, mAttribute_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_M_5F_variablesMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_M_5F_variablesMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_variablesMap * operand = (cMapElement_M_5F_variablesMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap::GALGAS_M_5F_variablesMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap::GALGAS_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap & GALGAS_M_5F_variablesMap::operator = (const GALGAS_M_5F_variablesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_variablesMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap GALGAS_M_5F_variablesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_variablesMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_M_5F_variablesMap_searchKey = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_variablesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_variablesMap::modifier_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_variablesMap * p = (cMapElement_M_5F_variablesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_variablesMap * GALGAS_M_5F_variablesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * result = (cMapElement_M_5F_variablesMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_variablesMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_M_5F_variablesMap::cEnumerator_M_5F_variablesMap (const GALGAS_M_5F_variablesMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap_2D_element cEnumerator_M_5F_variablesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return GALGAS_M_5F_variablesMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_M_5F_variablesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_M_5F_variablesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return p->mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @M_variablesMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_variablesMap ("M_variablesMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_variablesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_variablesMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_variablesMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_stateMap::cMapElement_M_5F_stateMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mIndex
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_M_5F_stateMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_M_5F_stateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_stateMap (mAttribute_lkey, mAttribute_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_M_5F_stateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_M_5F_stateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_stateMap * operand = (cMapElement_M_5F_stateMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap::GALGAS_M_5F_stateMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap::GALGAS_M_5F_stateMap (const GALGAS_M_5F_stateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap & GALGAS_M_5F_stateMap::operator = (const GALGAS_M_5F_stateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_stateMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap GALGAS_M_5F_stateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_stateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_stateMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_stateMap::modifier_defineState (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_M_5F_stateMap_searchKey = "the '%K' state is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_stateMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_stateMap::modifier_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_stateMap * p = (cMapElement_M_5F_stateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_stateMap * GALGAS_M_5F_stateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * result = (cMapElement_M_5F_stateMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_stateMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_M_5F_stateMap::cEnumerator_M_5F_stateMap (const GALGAS_M_5F_stateMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap_2D_element cEnumerator_M_5F_stateMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return GALGAS_M_5F_stateMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_M_5F_stateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_M_5F_stateMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return p->mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @M_stateMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_stateMap ("M_stateMap",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_stateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_stateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_stateMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@L_5F_translationVector' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_translationVector : public cCollectionElement {
  public : GALGAS_L_5F_translationVector_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_translationVector (const GALGAS_uint & in_mTargetSlot
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_translationVector::cCollectionElement_L_5F_translationVector (const GALGAS_uint & in_mTargetSlot
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetSlot) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_translationVector::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_translationVector::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_translationVector (mObject.mAttribute_mTargetSlot COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_translationVector::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetSlot" ":" ;
  mObject.mAttribute_mTargetSlot.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_translationVector::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_translationVector * operand = (cCollectionElement_L_5F_translationVector *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_translationVector) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector::GALGAS_L_5F_translationVector (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector::GALGAS_L_5F_translationVector (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_translationVector result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::constructor_listWithValue (const GALGAS_uint & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_translationVector::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_uint & in_mTargetSlot
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_translationVector * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_translationVector (in_mTargetSlot COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector::addAssign_operation (const GALGAS_uint & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector::modifier_insertAtIndex (const GALGAS_uint inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector::modifier_removeAtIndex (GALGAS_uint & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mTargetSlot ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector::modifier_popFirst (GALGAS_uint & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mAttribute_mTargetSlot ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector::modifier_popLast (GALGAS_uint & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    outOperand0 = p->mObject.mAttribute_mTargetSlot ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTargetSlot ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTargetSlot ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::operator_concat (const GALGAS_L_5F_translationVector & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector GALGAS_L_5F_translationVector::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result = GALGAS_L_5F_translationVector::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector::dotAssign_operation (const GALGAS_L_5F_translationVector inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_translationVector::getter_mTargetSlotAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    result = p->mObject.mAttribute_mTargetSlot ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_translationVector::cEnumerator_L_5F_translationVector (const GALGAS_L_5F_translationVector & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector_2D_element cEnumerator_L_5F_translationVector::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_L_5F_translationVector::current_mTargetSlot (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject.mAttribute_mTargetSlot ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @L_translationVector type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_translationVector ("L_translationVector",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_translationVector::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_translationVector::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_translationVector (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@L_5F_transitionDefinition' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_transitionDefinition : public cCollectionElement {
  public : GALGAS_L_5F_transitionDefinition_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_transitionDefinition (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                         const GALGAS_location & in_mEndOfExpression,
                                                         const GALGAS_uint & in_mTargetStateIndex
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_transitionDefinition::cCollectionElement_L_5F_transitionDefinition (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                                                            const GALGAS_location & in_mEndOfExpression,
                                                                                            const GALGAS_uint & in_mTargetStateIndex
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActionExpression, in_mEndOfExpression, in_mTargetStateIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_transitionDefinition::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_transitionDefinition::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_transitionDefinition (mObject.mAttribute_mActionExpression, mObject.mAttribute_mEndOfExpression, mObject.mAttribute_mTargetStateIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_transitionDefinition::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionExpression" ":" ;
  mObject.mAttribute_mActionExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpression" ":" ;
  mObject.mAttribute_mEndOfExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateIndex" ":" ;
  mObject.mAttribute_mTargetStateIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_transitionDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_transitionDefinition * operand = (cCollectionElement_L_5F_transitionDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_transitionDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition::GALGAS_L_5F_transitionDefinition (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition::GALGAS_L_5F_transitionDefinition (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::constructor_listWithValue (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                              const GALGAS_location & inOperand1,
                                                                                              const GALGAS_uint & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_transitionDefinition::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_transitionDefinition::modifier_insertAtIndex (const GALGAS_AC_5F_boolExpression inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_transitionDefinition::modifier_removeAtIndex (GALGAS_AC_5F_boolExpression & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mActionExpression ;
      outOperand1 = p->mObject.mAttribute_mEndOfExpression ;
      outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_transitionDefinition::modifier_popFirst (GALGAS_AC_5F_boolExpression & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mActionExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpression ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_transitionDefinition::modifier_popLast (GALGAS_AC_5F_boolExpression & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mActionExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpression ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mActionExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpression ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mActionExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpression ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::operator_concat (const GALGAS_L_5F_transitionDefinition & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_transitionDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_transitionDefinition result = GALGAS_L_5F_transitionDefinition::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_transitionDefinition::dotAssign_operation (const GALGAS_L_5F_transitionDefinition inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_transitionDefinition::getter_mActionExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mAttribute_mActionExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_L_5F_transitionDefinition::getter_mEndOfExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mAttribute_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_transitionDefinition::getter_mTargetStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mAttribute_mTargetStateIndex ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_transitionDefinition::cEnumerator_L_5F_transitionDefinition (const GALGAS_L_5F_transitionDefinition & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition_2D_element cEnumerator_L_5F_transitionDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cEnumerator_L_5F_transitionDefinition::current_mActionExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mAttribute_mActionExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_L_5F_transitionDefinition::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mAttribute_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_L_5F_transitionDefinition::current_mTargetStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mAttribute_mTargetStateIndex ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @L_transitionDefinition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_transitionDefinition ("L_transitionDefinition",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_transitionDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_transitionDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_transitionDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@L_5F_stateDefinition' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_stateDefinition : public cCollectionElement {
  public : GALGAS_L_5F_stateDefinition_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_stateDefinition (const GALGAS_uint & in_mStateIndex,
                                                    const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                    const GALGAS_location & in_mEndOfStateExpression,
                                                    const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_stateDefinition::cCollectionElement_L_5F_stateDefinition (const GALGAS_uint & in_mStateIndex,
                                                                                  const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                                                  const GALGAS_location & in_mEndOfStateExpression,
                                                                                  const GALGAS_L_5F_transitionDefinition & in_mTransitionsList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateExpression, in_mEndOfStateExpression, in_mTransitionsList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_stateDefinition::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_stateDefinition::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_stateDefinition (mObject.mAttribute_mStateIndex, mObject.mAttribute_mStateExpression, mObject.mAttribute_mEndOfStateExpression, mObject.mAttribute_mTransitionsList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_stateDefinition::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mObject.mAttribute_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateExpression" ":" ;
  mObject.mAttribute_mStateExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfStateExpression" ":" ;
  mObject.mAttribute_mEndOfStateExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionsList" ":" ;
  mObject.mAttribute_mTransitionsList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_stateDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_stateDefinition * operand = (cCollectionElement_L_5F_stateDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_stateDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition::GALGAS_L_5F_stateDefinition (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition::GALGAS_L_5F_stateDefinition (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_AC_5F_boolExpression & inOperand1,
                                                                                    const GALGAS_location & inOperand2,
                                                                                    const GALGAS_L_5F_transitionDefinition & inOperand3
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_stateDefinition::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_stateDefinition::modifier_insertAtIndex (const GALGAS_uint inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_stateDefinition::modifier_removeAtIndex (GALGAS_uint & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mStateIndex ;
      outOperand1 = p->mObject.mAttribute_mStateExpression ;
      outOperand2 = p->mObject.mAttribute_mEndOfStateExpression ;
      outOperand3 = p->mObject.mAttribute_mTransitionsList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_stateDefinition::modifier_popFirst (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfStateExpression ;
    outOperand3 = p->mObject.mAttribute_mTransitionsList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_stateDefinition::modifier_popLast (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfStateExpression ;
    outOperand3 = p->mObject.mAttribute_mTransitionsList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfStateExpression ;
    outOperand3 = p->mObject.mAttribute_mTransitionsList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfStateExpression ;
    outOperand3 = p->mObject.mAttribute_mTransitionsList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::operator_concat (const GALGAS_L_5F_stateDefinition & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition GALGAS_L_5F_stateDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result = GALGAS_L_5F_stateDefinition::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_stateDefinition::dotAssign_operation (const GALGAS_L_5F_stateDefinition inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_stateDefinition::getter_mStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mAttribute_mStateIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_stateDefinition::getter_mStateExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mAttribute_mStateExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_L_5F_stateDefinition::getter_mEndOfStateExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mAttribute_mEndOfStateExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_stateDefinition::getter_mTransitionsListAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GALGAS_L_5F_transitionDefinition result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mAttribute_mTransitionsList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_stateDefinition::cEnumerator_L_5F_stateDefinition (const GALGAS_L_5F_stateDefinition & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition_2D_element cEnumerator_L_5F_stateDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_L_5F_stateDefinition::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cEnumerator_L_5F_stateDefinition::current_mStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mAttribute_mStateExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_L_5F_stateDefinition::current_mEndOfStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mAttribute_mEndOfStateExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition cEnumerator_L_5F_stateDefinition::current_mTransitionsList (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mAttribute_mTransitionsList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @L_stateDefinition type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_stateDefinition ("L_stateDefinition",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_stateDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_stateDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_stateDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@L_5F_statesDefinitionList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_statesDefinitionList : public cCollectionElement {
  public : GALGAS_L_5F_statesDefinitionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_statesDefinitionList (const GALGAS_uint & in_mStateIndex,
                                                         const GALGAS_location & in_mStateLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_statesDefinitionList::cCollectionElement_L_5F_statesDefinitionList (const GALGAS_uint & in_mStateIndex,
                                                                                            const GALGAS_location & in_mStateLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_statesDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_statesDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_statesDefinitionList (mObject.mAttribute_mStateIndex, mObject.mAttribute_mStateLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_statesDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mObject.mAttribute_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateLocation" ":" ;
  mObject.mAttribute_mStateLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_statesDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_statesDefinitionList * operand = (cCollectionElement_L_5F_statesDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_statesDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList::GALGAS_L_5F_statesDefinitionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList::GALGAS_L_5F_statesDefinitionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                              const GALGAS_location & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_statesDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                            const GALGAS_location & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList::modifier_insertAtIndex (const GALGAS_uint inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList::modifier_removeAtIndex (GALGAS_uint & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mStateIndex ;
      outOperand1 = p->mObject.mAttribute_mStateLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList::modifier_popFirst (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList::modifier_popLast (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::operator_concat (const GALGAS_L_5F_statesDefinitionList & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList GALGAS_L_5F_statesDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList::dotAssign_operation (const GALGAS_L_5F_statesDefinitionList inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_statesDefinitionList::getter_mStateIndexAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mAttribute_mStateIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_L_5F_statesDefinitionList::getter_mStateLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mAttribute_mStateLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_statesDefinitionList::cEnumerator_L_5F_statesDefinitionList (const GALGAS_L_5F_statesDefinitionList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList_2D_element cEnumerator_L_5F_statesDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_L_5F_statesDefinitionList::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_L_5F_statesDefinitionList::current_mStateLocation (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mAttribute_mStateLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @L_statesDefinitionList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ("L_statesDefinitionList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_statesDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_statesDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_statesDefinitionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_modesMap::cMapElement_M_5F_modesMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mIndex,
                                                      const GALGAS_AC_5F_machineDefinition & in_mModeDefinition
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mModeDefinition (in_mModeDefinition) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_M_5F_modesMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mModeDefinition.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_M_5F_modesMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_modesMap (mAttribute_lkey, mAttribute_mIndex, mAttribute_mModeDefinition COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_M_5F_modesMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModeDefinition" ":" ;
  mAttribute_mModeDefinition.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_M_5F_modesMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_modesMap * operand = (cMapElement_M_5F_modesMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModeDefinition.objectCompare (operand->mAttribute_mModeDefinition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap::GALGAS_M_5F_modesMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap::GALGAS_M_5F_modesMap (const GALGAS_M_5F_modesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap & GALGAS_M_5F_modesMap::operator = (const GALGAS_M_5F_modesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_modesMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap GALGAS_M_5F_modesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_modesMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_M_5F_modesMap_searchKey = "the '%K' mode is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mModeDefinition ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_modesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_M_5F_modesMap::getter_mModeDefinitionForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mAttribute_mModeDefinition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_modesMap::modifier_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_modesMap::modifier_setMModeDefinitionForKey (GALGAS_AC_5F_machineDefinition inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mAttribute_mModeDefinition = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_modesMap * GALGAS_M_5F_modesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * result = (cMapElement_M_5F_modesMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_modesMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_M_5F_modesMap::cEnumerator_M_5F_modesMap (const GALGAS_M_5F_modesMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap_2D_element cEnumerator_M_5F_modesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return GALGAS_M_5F_modesMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex, p->mAttribute_mModeDefinition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_M_5F_modesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_M_5F_modesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cEnumerator_M_5F_modesMap::current_mModeDefinition (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mAttribute_mModeDefinition ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @M_modesMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_modesMap ("M_modesMap",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_modesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_modesMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_modesMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@ListForModes' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_ListForModes : public cCollectionElement {
  public : GALGAS_ListForModes_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_ListForModes (const GALGAS_uint & in_mSourceMode,
                                            const GALGAS_uint & in_mTargetMode
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_ListForModes::cCollectionElement_ListForModes (const GALGAS_uint & in_mSourceMode,
                                                                  const GALGAS_uint & in_mTargetMode
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSourceMode, in_mTargetMode) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_ListForModes::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_ListForModes::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ListForModes (mObject.mAttribute_mSourceMode, mObject.mAttribute_mTargetMode COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_ListForModes::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceMode" ":" ;
  mObject.mAttribute_mSourceMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetMode" ":" ;
  mObject.mAttribute_mTargetMode.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_ListForModes::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ListForModes * operand = (cCollectionElement_ListForModes *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ListForModes) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes::GALGAS_ListForModes (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes::GALGAS_ListForModes (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes GALGAS_ListForModes::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_ListForModes result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes GALGAS_ListForModes::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_uint & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ListForModes result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_ListForModes::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes::addAssign_operation (const GALGAS_uint & inOperand0,
                                               const GALGAS_uint & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes::modifier_insertAtIndex (const GALGAS_uint inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes::modifier_removeAtIndex (GALGAS_uint & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mSourceMode ;
      outOperand1 = p->mObject.mAttribute_mTargetMode ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes::modifier_popFirst (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mSourceMode ;
    outOperand1 = p->mObject.mAttribute_mTargetMode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes::modifier_popLast (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mSourceMode ;
    outOperand1 = p->mObject.mAttribute_mTargetMode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mSourceMode ;
    outOperand1 = p->mObject.mAttribute_mTargetMode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mSourceMode ;
    outOperand1 = p->mObject.mAttribute_mTargetMode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes GALGAS_ListForModes::operator_concat (const GALGAS_ListForModes & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes GALGAS_ListForModes::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes GALGAS_ListForModes::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ListForModes result = GALGAS_ListForModes::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes::dotAssign_operation (const GALGAS_ListForModes inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ListForModes::getter_mSourceModeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mAttribute_mSourceMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ListForModes::getter_mTargetModeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mAttribute_mTargetMode ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_ListForModes::cEnumerator_ListForModes (const GALGAS_ListForModes & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes_2D_element cEnumerator_ListForModes::current (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_ListForModes::current_mSourceMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mAttribute_mSourceMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_ListForModes::current_mTargetMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mAttribute_mTargetMode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @ListForModes type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ListForModes ("ListForModes",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ListForModes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ListForModes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ListForModes (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@L_5F_inputConfigurationForScenario' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_inputConfigurationForScenario : public cCollectionElement {
  public : GALGAS_L_5F_inputConfigurationForScenario_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_luint & in_mInputValue
                                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_inputConfigurationForScenario::cCollectionElement_L_5F_inputConfigurationForScenario (const GALGAS_luint & in_mInputValue
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_inputConfigurationForScenario::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_inputConfigurationForScenario::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_inputConfigurationForScenario (mObject.mAttribute_mInputValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_inputConfigurationForScenario::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputValue" ":" ;
  mObject.mAttribute_mInputValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_inputConfigurationForScenario::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_inputConfigurationForScenario * operand = (cCollectionElement_L_5F_inputConfigurationForScenario *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario::GALGAS_L_5F_inputConfigurationForScenario (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario::GALGAS_L_5F_inputConfigurationForScenario (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::constructor_listWithValue (const GALGAS_luint & inOperand0
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_inputConfigurationForScenario::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_luint & in_mInputValue
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputConfigurationForScenario * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (in_mInputValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario::addAssign_operation (const GALGAS_luint & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario::modifier_insertAtIndex (const GALGAS_luint inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario::modifier_removeAtIndex (GALGAS_luint & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mInputValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario::modifier_popFirst (GALGAS_luint & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mAttribute_mInputValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario::modifier_popLast (GALGAS_luint & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    outOperand0 = p->mObject.mAttribute_mInputValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInputValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInputValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::operator_concat (const GALGAS_L_5F_inputConfigurationForScenario & inOperand
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputConfigurationForScenario::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputConfigurationForScenario result = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario::dotAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario inOperand
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_L_5F_inputConfigurationForScenario::getter_mInputValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    result = p->mObject.mAttribute_mInputValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_inputConfigurationForScenario::cEnumerator_L_5F_inputConfigurationForScenario (const GALGAS_L_5F_inputConfigurationForScenario & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario_2D_element cEnumerator_L_5F_inputConfigurationForScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cEnumerator_L_5F_inputConfigurationForScenario::current_mInputValue (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject.mAttribute_mInputValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @L_inputConfigurationForScenario type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ("L_inputConfigurationForScenario",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_inputConfigurationForScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_inputConfigurationForScenario::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputConfigurationForScenario (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@L_5F_inputScenario' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_inputScenario : public cCollectionElement {
  public : GALGAS_L_5F_inputScenario_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_inputScenario::cCollectionElement_L_5F_inputScenario (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputConfiguration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_inputScenario::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_inputScenario::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_inputScenario (mObject.mAttribute_mInputConfiguration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_inputScenario::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputConfiguration" ":" ;
  mObject.mAttribute_mInputConfiguration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_inputScenario::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_inputScenario * operand = (cCollectionElement_L_5F_inputScenario *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_inputScenario) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario::GALGAS_L_5F_inputScenario (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario::GALGAS_L_5F_inputScenario (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::constructor_listWithValue (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_inputScenario::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputScenario * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_inputScenario (in_mInputConfiguration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario::addAssign_operation (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario::modifier_insertAtIndex (const GALGAS_L_5F_inputConfigurationForScenario inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario::modifier_removeAtIndex (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mInputConfiguration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario::modifier_popFirst (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mAttribute_mInputConfiguration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario::modifier_popLast (GALGAS_L_5F_inputConfigurationForScenario & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    outOperand0 = p->mObject.mAttribute_mInputConfiguration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInputConfiguration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInputConfiguration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::operator_concat (const GALGAS_L_5F_inputScenario & inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario GALGAS_L_5F_inputScenario::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_inputScenario result = GALGAS_L_5F_inputScenario::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario::dotAssign_operation (const GALGAS_L_5F_inputScenario inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputScenario::getter_mInputConfigurationAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  GALGAS_L_5F_inputConfigurationForScenario result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    result = p->mObject.mAttribute_mInputConfiguration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_inputScenario::cEnumerator_L_5F_inputScenario (const GALGAS_L_5F_inputScenario & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario_2D_element cEnumerator_L_5F_inputScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario cEnumerator_L_5F_inputScenario::current_mInputConfiguration (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject.mAttribute_mInputConfiguration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @L_inputScenario type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputScenario ("L_inputScenario",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_inputScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_inputScenario::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputScenario (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@L_5F_scenarioList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_scenarioList : public cCollectionElement {
  public : GALGAS_L_5F_scenarioList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_scenarioList (const GALGAS_lstring & in_mScenarioTitle,
                                                 const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_scenarioList::cCollectionElement_L_5F_scenarioList (const GALGAS_lstring & in_mScenarioTitle,
                                                                            const GALGAS_L_5F_inputScenario & in_mInputScenario
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScenarioTitle, in_mInputScenario) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_scenarioList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_scenarioList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_scenarioList (mObject.mAttribute_mScenarioTitle, mObject.mAttribute_mInputScenario COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_scenarioList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mScenarioTitle" ":" ;
  mObject.mAttribute_mScenarioTitle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputScenario" ":" ;
  mObject.mAttribute_mInputScenario.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_scenarioList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_scenarioList * operand = (cCollectionElement_L_5F_scenarioList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_scenarioList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList::GALGAS_L_5F_scenarioList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList::GALGAS_L_5F_scenarioList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_L_5F_inputScenario & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_scenarioList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_L_5F_inputScenario & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_scenarioList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mScenarioTitle ;
      outOperand1 = p->mObject.mAttribute_mInputScenario ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mScenarioTitle ;
    outOperand1 = p->mObject.mAttribute_mInputScenario ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mScenarioTitle ;
    outOperand1 = p->mObject.mAttribute_mInputScenario ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mScenarioTitle ;
    outOperand1 = p->mObject.mAttribute_mInputScenario ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mScenarioTitle ;
    outOperand1 = p->mObject.mAttribute_mInputScenario ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::operator_concat (const GALGAS_L_5F_scenarioList & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList GALGAS_L_5F_scenarioList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result = GALGAS_L_5F_scenarioList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList::dotAssign_operation (const GALGAS_L_5F_scenarioList inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_L_5F_scenarioList::getter_mScenarioTitleAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    result = p->mObject.mAttribute_mScenarioTitle ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario GALGAS_L_5F_scenarioList::getter_mInputScenarioAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) attributes.ptr () ;
  GALGAS_L_5F_inputScenario result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    result = p->mObject.mAttribute_mInputScenario ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_scenarioList::cEnumerator_L_5F_scenarioList (const GALGAS_L_5F_scenarioList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList_2D_element cEnumerator_L_5F_scenarioList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_L_5F_scenarioList::current_mScenarioTitle (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject.mAttribute_mScenarioTitle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario cEnumerator_L_5F_scenarioList::current_mInputScenario (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_scenarioList * p = (const cCollectionElement_L_5F_scenarioList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
  return p->mObject.mAttribute_mInputScenario ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @L_scenarioList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_scenarioList ("L_scenarioList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_scenarioList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_scenarioList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_scenarioList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@L_5F_jobList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_L_5F_jobList : public cCollectionElement {
  public : GALGAS_L_5F_jobList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_L_5F_jobList (const GALGAS_AC_5F_job & in_mComponent
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_L_5F_jobList::cCollectionElement_L_5F_jobList (const GALGAS_AC_5F_job & in_mComponent
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mComponent) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_L_5F_jobList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_L_5F_jobList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_jobList (mObject.mAttribute_mComponent COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_L_5F_jobList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComponent" ":" ;
  mObject.mAttribute_mComponent.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_L_5F_jobList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_jobList * operand = (cCollectionElement_L_5F_jobList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_jobList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList::GALGAS_L_5F_jobList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList::GALGAS_L_5F_jobList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_L_5F_jobList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::constructor_listWithValue (const GALGAS_AC_5F_job & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_jobList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_jobList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_AC_5F_job & in_mComponent
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_jobList * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_jobList (in_mComponent COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList::addAssign_operation (const GALGAS_AC_5F_job & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList::modifier_insertAtIndex (const GALGAS_AC_5F_job inOperand0,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList::modifier_removeAtIndex (GALGAS_AC_5F_job & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mComponent ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList::modifier_popFirst (GALGAS_AC_5F_job & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mAttribute_mComponent ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList::modifier_popLast (GALGAS_AC_5F_job & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mAttribute_mComponent ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mComponent ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mComponent ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::operator_concat (const GALGAS_L_5F_jobList & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList::dotAssign_operation (const GALGAS_L_5F_jobList inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_job GALGAS_L_5F_jobList::getter_mComponentAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  GALGAS_AC_5F_job result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    result = p->mObject.mAttribute_mComponent ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_L_5F_jobList::cEnumerator_L_5F_jobList (const GALGAS_L_5F_jobList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList_2D_element cEnumerator_L_5F_jobList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_job cEnumerator_L_5F_jobList::current_mComponent (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject.mAttribute_mComponent ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @L_jobList type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_jobList ("L_jobList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_jobList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_jobList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_jobList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_machinesMap::cMapElement_M_5F_machinesMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_uint & in_mInputVariableCount,
                                                            const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                            const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                            const GALGAS_stringlist & in_mNameList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mInputVariableCount (in_mInputVariableCount),
mAttribute_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mAttribute_mVariablesMap (in_mVariablesMap),
mAttribute_mNameList (in_mNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_M_5F_machinesMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mInputVariableCount.isValid () && mAttribute_mInputAndInternalVariableCount.isValid () && mAttribute_mVariablesMap.isValid () && mAttribute_mNameList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_M_5F_machinesMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_machinesMap (mAttribute_lkey, mAttribute_mIndex, mAttribute_mInputVariableCount, mAttribute_mInputAndInternalVariableCount, mAttribute_mVariablesMap, mAttribute_mNameList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_M_5F_machinesMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputVariableCount" ":" ;
  mAttribute_mInputVariableCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputAndInternalVariableCount" ":" ;
  mAttribute_mInputAndInternalVariableCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVariablesMap" ":" ;
  mAttribute_mVariablesMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNameList" ":" ;
  mAttribute_mNameList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_M_5F_machinesMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_M_5F_machinesMap * operand = (cMapElement_M_5F_machinesMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputVariableCount.objectCompare (operand->mAttribute_mInputVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputAndInternalVariableCount.objectCompare (operand->mAttribute_mInputAndInternalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariablesMap.objectCompare (operand->mAttribute_mVariablesMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameList.objectCompare (operand->mAttribute_mNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap::GALGAS_M_5F_machinesMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap::GALGAS_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap & GALGAS_M_5F_machinesMap::operator = (const GALGAS_M_5F_machinesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_machinesMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_machinesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_M_5F_machinesMap_searchKey = "the '%K' machine is not defined" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mInputVariableCount ;
    outArgument2 = p->mAttribute_mInputAndInternalVariableCount ;
    outArgument3 = p->mAttribute_mVariablesMap ;
    outArgument4 = p->mAttribute_mNameList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap::modifier_removeKey (GALGAS_lstring inKey,
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
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mInputVariableCount ;
    outArgument2 = p->mAttribute_mInputAndInternalVariableCount ;
    outArgument3 = p->mAttribute_mVariablesMap ;
    outArgument4 = p->mAttribute_mNameList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_machinesMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_machinesMap::getter_mInputVariableCountForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mAttribute_mInputVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_machinesMap::getter_mInputAndInternalVariableCountForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mAttribute_mInputAndInternalVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap GALGAS_M_5F_machinesMap::getter_mVariablesMapForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_M_5F_variablesMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mAttribute_mVariablesMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_M_5F_machinesMap::getter_mNameListForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mAttribute_mNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap::modifier_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap::modifier_setMInputVariableCountForKey (GALGAS_uint inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mAttribute_mInputVariableCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap::modifier_setMInputAndInternalVariableCountForKey (GALGAS_uint inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mAttribute_mInputAndInternalVariableCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap::modifier_setMVariablesMapForKey (GALGAS_M_5F_variablesMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mAttribute_mVariablesMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap::modifier_setMNameListForKey (GALGAS_stringlist inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mAttribute_mNameList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_M_5F_machinesMap * GALGAS_M_5F_machinesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * result = (cMapElement_M_5F_machinesMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_machinesMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_M_5F_machinesMap::cEnumerator_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap_2D_element cEnumerator_M_5F_machinesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return GALGAS_M_5F_machinesMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex, p->mAttribute_mInputVariableCount, p->mAttribute_mInputAndInternalVariableCount, p->mAttribute_mVariablesMap, p->mAttribute_mNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_M_5F_machinesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mInputVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mAttribute_mInputVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mInputAndInternalVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mAttribute_mInputAndInternalVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap cEnumerator_M_5F_machinesMap::current_mVariablesMap (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mAttribute_mVariablesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_M_5F_machinesMap::current_mNameList (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mAttribute_mNameList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @M_machinesMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_machinesMap ("M_machinesMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_machinesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_machinesMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_machinesMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_ (C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_semanticContext var_semanticContext = GALGAS_semanticContext::constructor_new (GALGAS_L_5F_jobList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 13)), GALGAS_M_5F_machinesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 14))  COMMA_SOURCE_FILE ("sara_parser.galgas", 12)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_ (var_semanticContext, inCompiler) ;
    switch (select_sara_5F_parser_0 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  {
  routine_performComputations (var_semanticContext.getter_componentsMap (SOURCE_FILE ("sara_parser.galgas", 20)), inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 20)) ;
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
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 27)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 28)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 32)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 35)) ;
  GALGAS_uint var_machineIndex ;
  GALGAS_uint joker_1265 ; // Joker input parameter
  GALGAS_uint joker_1268 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1271 ; // Joker input parameter
  GALGAS_stringlist joker_1274 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 38)).method_searchKey (var_machineName, var_machineIndex, joker_1265, joker_1268, joker_1271, joker_1274, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 38)) ;
  GALGAS_AC_5F_job var_job = GALGAS_C_5F_machineDisplayStates::constructor_new (var_machineIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 40)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 48)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 49)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 50)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 53)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 55)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 56)) ;
  GALGAS_uint var_machineIndex ;
  GALGAS_uint joker_1926 ; // Joker input parameter
  GALGAS_uint joker_1929 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1932 ; // Joker input parameter
  GALGAS_stringlist joker_1935 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 59)).method_searchKey (var_machineName, var_machineIndex, joker_1926, joker_1929, joker_1932, joker_1935, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 59)) ;
  GALGAS_AC_5F_job var_job = GALGAS_C_5F_machineDisplayTransitions::constructor_new (var_machineIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 53)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 55)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 69)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 70)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 71)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) COMMA_SOURCE_FILE ("sara_parser.galgas", 73)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 74)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 75)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  GALGAS_uint var_machineIndex ;
  GALGAS_uint joker_2602 ; // Joker input parameter
  GALGAS_uint joker_2605 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_2608 ; // Joker input parameter
  GALGAS_stringlist joker_2611 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 81)).method_searchKey (var_machineName, var_machineIndex, joker_2602, joker_2605, joker_2608, joker_2611, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
  GALGAS_AC_5F_job var_job = GALGAS_C_5F_machineDisplayInitialStates::constructor_new (var_machineIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 83)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) COMMA_SOURCE_FILE ("sara_parser.galgas", 73)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 74)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 75)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 91)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 92)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 93)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 97)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 99)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 100)) ;
  GALGAS_uint var_machineIndex ;
  GALGAS_uint joker_3279 ; // Joker input parameter
  GALGAS_uint joker_3282 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3285 ; // Joker input parameter
  GALGAS_stringlist joker_3288 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 103)).method_searchKey (var_machineName, var_machineIndex, joker_3279, joker_3282, joker_3285, joker_3288, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 103)) ;
  GALGAS_AC_5F_job var_job = GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (var_machineIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 105)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("sara_parser.galgas", 97)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 99)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 100)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 113)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 114)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 115)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_check) COMMA_SOURCE_FILE ("sara_parser.galgas", 117)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 120)) ;
  GALGAS_uint var_machineIndex ;
  GALGAS_uint joker_3936 ; // Joker input parameter
  GALGAS_uint joker_3939 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3942 ; // Joker input parameter
  GALGAS_stringlist joker_3945 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 123)).method_searchKey (var_machineName, var_machineIndex, joker_3936, joker_3939, joker_3942, joker_3945, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 123)) ;
  GALGAS_AC_5F_job var_job = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex, GALGAS_bool (false)  COMMA_SOURCE_FILE ("sara_parser.galgas", 125)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_check) COMMA_SOURCE_FILE ("sara_parser.galgas", 117)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 119)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 120)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 133)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 134)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 135)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkidentical) COMMA_SOURCE_FILE ("sara_parser.galgas", 137)) ;
  GALGAS_lstring var_machineName_31_ ;
  var_machineName_31_ = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 139)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 140)) ;
  GALGAS_lstring var_machineName_32_ ;
  var_machineName_32_ = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 143)) ;
  GALGAS_uint var_machineIndex_31_ ;
  GALGAS_uint joker_4658 ; // Joker input parameter
  GALGAS_uint joker_4661 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_4664 ; // Joker input parameter
  GALGAS_stringlist joker_4667 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 146)).method_searchKey (var_machineName_31_, var_machineIndex_31_, joker_4658, joker_4661, joker_4664, joker_4667, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 146)) ;
  GALGAS_uint var_machineIndex_32_ ;
  GALGAS_uint joker_4804 ; // Joker input parameter
  GALGAS_uint joker_4807 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_4810 ; // Joker input parameter
  GALGAS_stringlist joker_4813 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 149)).method_searchKey (var_machineName_32_, var_machineIndex_32_, joker_4804, joker_4807, joker_4810, joker_4813, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 149)) ;
  GALGAS_AC_5F_job var_job = GALGAS_C_5F_machineCheckIdentical::constructor_new (var_machineIndex_31_, var_machineIndex_32_  COMMA_SOURCE_FILE ("sara_parser.galgas", 151)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkidentical) COMMA_SOURCE_FILE ("sara_parser.galgas", 137)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 139)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 140)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 143)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 159)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 160)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkbool) COMMA_SOURCE_FILE ("sara_parser.galgas", 163)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 165)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 166)) ;
  GALGAS_uint var_machineIndex ;
  GALGAS_uint joker_5474 ; // Joker input parameter
  GALGAS_uint joker_5477 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_5480 ; // Joker input parameter
  GALGAS_stringlist joker_5483 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 169)).method_searchKey (var_machineName, var_machineIndex, joker_5474, joker_5477, joker_5480, joker_5483, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 169)) ;
  GALGAS_AC_5F_job var_job = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex, GALGAS_bool (true)  COMMA_SOURCE_FILE ("sara_parser.galgas", 171)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkbool) COMMA_SOURCE_FILE ("sara_parser.galgas", 163)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 165)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 166)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and) COMMA_SOURCE_FILE ("sara_parser.galgas", 179)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 180)) ;
  GALGAS_AC_5F_job var_job = GALGAS_typeUse_5F_AND::constructor_new (SOURCE_FILE ("sara_parser.galgas", 181)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 182)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and) COMMA_SOURCE_FILE ("sara_parser.galgas", 179)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 180)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_ite) COMMA_SOURCE_FILE ("sara_parser.galgas", 189)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 190)) ;
  GALGAS_AC_5F_job var_job = GALGAS_typeUse_5F_ITE::constructor_new (SOURCE_FILE ("sara_parser.galgas", 191)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 192)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_ite) COMMA_SOURCE_FILE ("sara_parser.galgas", 189)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 190)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite) COMMA_SOURCE_FILE ("sara_parser.galgas", 199)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 200)) ;
  GALGAS_AC_5F_job var_job = GALGAS_typeUse_5F_AND_5F_ITE::constructor_new (SOURCE_FILE ("sara_parser.galgas", 201)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite) COMMA_SOURCE_FILE ("sara_parser.galgas", 199)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 200)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_and_5F_cache) COMMA_SOURCE_FILE ("sara_parser.galgas", 209)) ;
  GALGAS_luint var_size ;
  var_size = inCompiler->synthetizedAttribute_ulongValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 211)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 212)) ;
  GALGAS_AC_5F_job var_job = GALGAS_typeResize_5F_AND_5F_cache::constructor_new (var_size  COMMA_SOURCE_FILE ("sara_parser.galgas", 213)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 214)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_and_5F_cache) COMMA_SOURCE_FILE ("sara_parser.galgas", 209)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 211)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 212)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_ite_5F_cache) COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  GALGAS_luint var_size ;
  var_size = inCompiler->synthetizedAttribute_ulongValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 222)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 223)) ;
  GALGAS_AC_5F_job var_job = GALGAS_typeResize_5F_ITE_5F_cache::constructor_new (var_size  COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_ite_5F_cache) COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 222)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 223)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i13_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_map) COMMA_SOURCE_FILE ("sara_parser.galgas", 232)) ;
  GALGAS_luint var_size ;
  var_size = inCompiler->synthetizedAttribute_ulongValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 234)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 235)) ;
  GALGAS_AC_5F_job var_job = GALGAS_typeResizeMap::constructor_new (var_size  COMMA_SOURCE_FILE ("sara_parser.galgas", 236)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i13_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_map) COMMA_SOURCE_FILE ("sara_parser.galgas", 232)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 234)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 235)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i14_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_bdd) COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 245)) ;
  GALGAS_AC_5F_job var_job = GALGAS_typeDisplayBDDstats::constructor_new (SOURCE_FILE ("sara_parser.galgas", 246)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_job  COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i14_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_bdd) COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 245)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i15_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 254)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 255)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 256)) ;
  GALGAS_stringlist var_nameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 257)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 260)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 261)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName ;
    var_inputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 265)) ;
    {
    var_variablesMap.modifier_insertKey (var_inputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 266)) ;
    }
    var_nameList.addAssign_operation (var_inputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 267)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 269)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 271)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 274)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName ;
      var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 279)) ;
      {
      var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 280)) ;
      }
      var_nameList.addAssign_operation (var_outputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 281)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 286)) ;
  GALGAS_uint var_inputAndInternalVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 287)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName ;
    var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 292)) ;
    {
    var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 293)) ;
    }
    var_nameList.addAssign_operation (var_outputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 298)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 299)) ;
  GALGAS_AC_5F_machineDefinition var_definition ;
  nt_definition_5F_expression_ (ioArgument_ioSemanticContext, var_variablesMap, var_definition, inCompiler) ;
  GALGAS_uint var_machineIndex = ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 304)).getter_count (SOURCE_FILE ("sara_parser.galgas", 304)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_machinesMap.modifier_insertKey (var_machineName, var_machineIndex, var_inputVariablesCount, var_inputAndInternalVariablesCount, var_variablesMap, var_nameList, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 305)) ;
  }
  GALGAS_AC_5F_job var_machine = GALGAS_C_5F_machineComponent::constructor_new (var_machineName, var_machineIndex, var_inputVariablesCount, var_inputAndInternalVariablesCount, var_variablesMap, var_nameList, var_definition  COMMA_SOURCE_FILE ("sara_parser.galgas", 314)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_machine  COMMA_SOURCE_FILE ("sara_parser.galgas", 315)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i15_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 260)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 261)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 265)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 269)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 274)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 279)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 286)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 292)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 298)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 299)) ;
  nt_definition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i16_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 323)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 324)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 325)) ;
  GALGAS_stringlist var_nameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 326)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) COMMA_SOURCE_FILE ("sara_parser.galgas", 328)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 330)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 331)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName ;
    var_inputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 335)) ;
    {
    var_variablesMap.modifier_insertKey (var_inputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 336)) ;
    }
    var_nameList.addAssign_operation (var_inputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 337)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 341)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 342)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 344)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName ;
      var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
      {
      var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
      }
      var_nameList.addAssign_operation (var_outputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 353)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 356)) ;
  GALGAS_uint var_inputAndInternalVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 357)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 359)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName ;
    var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 362)) ;
    {
    var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
    }
    var_nameList.addAssign_operation (var_outputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 364)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 366)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 368)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 369)) ;
  GALGAS_M_5F_modesMap var_modeMap ;
  GALGAS_ListForModes var_inclusionList ;
  nt_modalcompadd_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap, var_modeMap, var_inclusionList, inCompiler) ;
  GALGAS_uint var_machineIndex = ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 379)).getter_count (SOURCE_FILE ("sara_parser.galgas", 379)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_machinesMap.modifier_insertKey (var_machineName, var_machineIndex, var_inputVariablesCount, var_inputAndInternalVariablesCount, var_variablesMap, var_nameList, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 380)) ;
  }
  GALGAS_AC_5F_job var_machine = GALGAS_C_5F_machineDefinedByAdditiveModalComp::constructor_new (var_machineName, var_machineIndex, var_inputVariablesCount, var_inputAndInternalVariablesCount, var_variablesMap, var_modeMap, var_inclusionList  COMMA_SOURCE_FILE ("sara_parser.galgas", 382)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_machine  COMMA_SOURCE_FILE ("sara_parser.galgas", 390)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i16_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) COMMA_SOURCE_FILE ("sara_parser.galgas", 328)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 330)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 331)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 335)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 342)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 344)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 353)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 356)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 359)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 362)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 366)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 368)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 369)) ;
  nt_modalcompadd_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 391)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i17_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 398)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 399)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 400)) ;
  GALGAS_stringlist var_nameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 401)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) COMMA_SOURCE_FILE ("sara_parser.galgas", 403)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 405)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName ;
    var_inputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
    {
    var_variablesMap.modifier_insertKey (var_inputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 411)) ;
    }
    var_nameList.addAssign_operation (var_inputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 412)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 414)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 416)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName ;
      var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 424)) ;
      {
      var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
      }
      var_nameList.addAssign_operation (var_outputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 426)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 428)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 431)) ;
  GALGAS_uint var_inputAndInternalVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 432)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 434)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName ;
    var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 437)) ;
    {
    var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 438)) ;
    }
    var_nameList.addAssign_operation (var_outputVarName.mAttribute_string  COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 441)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 443)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 444)) ;
  GALGAS_M_5F_modesMap var_modeMap ;
  GALGAS_ListForModes var_exclusionList ;
  nt_modalcompsub_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap, var_modeMap, var_exclusionList, inCompiler) ;
  GALGAS_uint var_machineIndex = ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 454)).getter_count (SOURCE_FILE ("sara_parser.galgas", 454)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_machinesMap.modifier_insertKey (var_machineName, var_machineIndex, var_inputVariablesCount, var_inputAndInternalVariablesCount, var_variablesMap, var_nameList, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
  }
  GALGAS_AC_5F_job var_machine = GALGAS_C_5F_machineDefinedBySubstractiveModalComp::constructor_new (var_machineName, var_machineIndex, var_inputVariablesCount, var_inputAndInternalVariablesCount, var_variablesMap, var_modeMap, var_exclusionList  COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_machine  COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 466)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i17_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) COMMA_SOURCE_FILE ("sara_parser.galgas", 403)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 405)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 414)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 424)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 428)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 431)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 434)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 437)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 441)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 443)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 444)) ;
  nt_modalcompsub_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 466)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i18_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_scenario) COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
  GALGAS_M_5F_variablesMap var_variablesMap = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 472)) ;
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 473)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 474)) ;
  GALGAS_lstring var_machineName ;
  var_machineName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 477)) ;
  GALGAS_uint var_machineIndex ;
  GALGAS_uint var_inputVariablesCountFromDefinition ;
  GALGAS_uint var_inputAndInternalVariablesCountFromDefinition ;
  GALGAS_M_5F_variablesMap var_variablesMapFromDefinition ;
  GALGAS_stringlist joker_14096 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 483)).method_searchKey (var_machineName, var_machineIndex, var_inputVariablesCountFromDefinition, var_inputAndInternalVariablesCountFromDefinition, var_variablesMapFromDefinition, joker_14096, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName ;
    var_inputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    {
    var_variablesMap.modifier_insertKey (var_inputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 489)) ;
    }
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 491)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 493)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 494)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCountFromDefinition.objectCompare (var_inputVariablesCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 497)), GALGAS_string ("This declaration names ").add_operation (var_inputVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 497)).add_operation (GALGAS_string (" input variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 497)).add_operation (var_inputVariablesCountFromDefinition.getter_string (SOURCE_FILE ("sara_parser.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 498)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 498))  COMMA_SOURCE_FILE ("sara_parser.galgas", 497)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 501)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_outputVarName ;
      var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 506)) ;
      {
      var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      }
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 509)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 512)) ;
  GALGAS_uint var_inputAndInternalVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 514)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCountFromDefinition.objectCompare (var_inputAndInternalVariablesCount)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 516)), GALGAS_string ("This declaration names ").add_operation (var_inputAndInternalVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 516)).add_operation (GALGAS_string (" input and internal variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 516)).add_operation (var_inputAndInternalVariablesCountFromDefinition.getter_string (SOURCE_FILE ("sara_parser.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 517)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 517))  COMMA_SOURCE_FILE ("sara_parser.galgas", 516)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 520)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    GALGAS_lstring var_outputVarName ;
    var_outputVarName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 523)) ;
    {
    var_variablesMap.modifier_insertKey (var_outputVarName, var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 524)) ;
    }
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 526)) ;
    } break ;
    default:
      repeatFlag_4 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 528)) ;
  GALGAS_uint var_outputVariablesCount = var_variablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 530)) ;
  GALGAS_uint var_outputVariablesCountFromDefinition = var_variablesMapFromDefinition.getter_count (SOURCE_FILE ("sara_parser.galgas", 531)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_outputVariablesCountFromDefinition.objectCompare (var_outputVariablesCount)).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 533)), GALGAS_string ("This declaration names ").add_operation (var_outputVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 533)).add_operation (GALGAS_string (" variables, but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 533)).add_operation (var_outputVariablesCountFromDefinition.getter_string (SOURCE_FILE ("sara_parser.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 534)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 534))  COMMA_SOURCE_FILE ("sara_parser.galgas", 533)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 536)) ;
  GALGAS_L_5F_scenarioList var_scenarioList = GALGAS_L_5F_scenarioList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 537)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_scenarioTitle ;
    var_scenarioTitle = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("sara_parser.galgas", 540)) ;
    GALGAS_L_5F_inputScenario var_inputScenario = GALGAS_L_5F_inputScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 541)) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 543)) ;
      GALGAS_L_5F_inputConfigurationForScenario var_inputConfigurationForScenario = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 544)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        GALGAS_luint var_v ;
        var_v = inCompiler->synthetizedAttribute_ulongValue () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 547)) ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_v.getter_uint (SOURCE_FILE ("sara_parser.galgas", 548)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (var_v.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("this value is not a  binary digit")  COMMA_SOURCE_FILE ("sara_parser.galgas", 549)) ;
        }
        var_inputConfigurationForScenario.addAssign_operation (var_v  COMMA_SOURCE_FILE ("sara_parser.galgas", 551)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 553)) ;
        } break ;
        default:
          repeatFlag_8 = false ;
          break ;
        }
      }
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount.objectCompare (var_inputConfigurationForScenario.getter_length (SOURCE_FILE ("sara_parser.galgas", 555)))).boolEnum () ;
      if (kBoolTrue == test_11) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 556)), GALGAS_string ("this input configuration names ").add_operation (var_inputConfigurationForScenario.getter_length (SOURCE_FILE ("sara_parser.galgas", 556)).getter_string (SOURCE_FILE ("sara_parser.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 556)).add_operation (GALGAS_string (" input variable(s), instead of "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 556)).add_operation (var_inputVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 556))  COMMA_SOURCE_FILE ("sara_parser.galgas", 556)) ;
      }
      var_inputScenario.addAssign_operation (var_inputConfigurationForScenario  COMMA_SOURCE_FILE ("sara_parser.galgas", 558)) ;
      switch (select_sara_5F_parser_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_7 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 561)) ;
    var_scenarioList.addAssign_operation (var_scenarioTitle, var_inputScenario  COMMA_SOURCE_FILE ("sara_parser.galgas", 562)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 565)) ;
  GALGAS_AC_5F_job var_machine = GALGAS_C_5F_scenarioComponent::constructor_new (var_machineIndex, var_inputVariablesCount, var_inputAndInternalVariablesCount, var_variablesMap, var_scenarioList  COMMA_SOURCE_FILE ("sara_parser.galgas", 567)) ;
  ioArgument_ioSemanticContext.mAttribute_componentsMap.addAssign_operation (var_machine  COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i18_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_scenario) COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 477)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 491)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 494)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 501)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 506)) ;
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 509)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 512)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 520)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 523)) ;
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 526)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 528)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 536)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("sara_parser.galgas", 540)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 543)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) COMMA_SOURCE_FILE ("sara_parser.galgas", 547)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 553)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 561)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 565)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 580)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_orExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("sara_parser.galgas", 583)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__5E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 585)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_xorExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("sara_parser.galgas", 588)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 590)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_impliesExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("sara_parser.galgas", 593)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 595)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_equalExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("sara_parser.galgas", 598)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 580)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__5E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 585)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 590)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 595)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__26_) COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression ;
      nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_andExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("sara_parser.galgas", 614)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__26_) COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 624)) ;
  nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i21_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 624)) ;
  nt_io_5F_bool_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i22_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_inputVarName ;
  var_inputVarName = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  GALGAS_uint var_inputVarIndex ;
  ioArgument_ioVarMap.method_searchKey (var_inputVarName, var_inputVarIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
  outArgument_outExpression = GALGAS_C_5F_VariableExpression::constructor_new (var_inputVarIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 639)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i22_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i23_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
  GALGAS_AC_5F_boolExpression var_expression ;
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_expression, inCompiler) ;
  outArgument_outExpression = GALGAS_C_5F_notExpression::constructor_new (var_expression  COMMA_SOURCE_FILE ("sara_parser.galgas", 651)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i23_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
  nt_io_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i24_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_false) COMMA_SOURCE_FILE ("sara_parser.galgas", 660)) ;
  outArgument_outExpression = GALGAS_C_5F_falseExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 661)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i24_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_false) COMMA_SOURCE_FILE ("sara_parser.galgas", 660)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i25_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_true) COMMA_SOURCE_FILE ("sara_parser.galgas", 670)) ;
  outArgument_outExpression = GALGAS_C_5F_trueExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 671)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i25_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_true) COMMA_SOURCE_FILE ("sara_parser.galgas", 670)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i26_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_machineIdentifier ;
  var_machineIdentifier = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 681)) ;
  GALGAS_uint var_machineInputVariableCount ;
  GALGAS_uint var_machineInputAndInternalVariableCount ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap ;
  GALGAS_uint var_indexOfImportedMachine ;
  GALGAS_stringlist joker_21000 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 686)).method_searchKey (var_machineIdentifier, var_indexOfImportedMachine, var_machineInputVariableCount, var_machineInputAndInternalVariableCount, var_machineVariablesMap, joker_21000, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 686)) ;
  GALGAS_L_5F_translationVector var_translationVector = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 687)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 689)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar ;
    var_inputVar = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 692)) ;
    GALGAS_uint var_inputVarIndex ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar, var_inputVarIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 694)) ;
    var_translationVector.addAssign_operation (var_inputVarIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 695)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 697)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 699)) ;
  GALGAS_uint var_inputVariablesCount = var_translationVector.getter_length (SOURCE_FILE ("sara_parser.galgas", 700)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount.objectCompare (var_machineInputVariableCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 702)), GALGAS_string ("The '$").add_operation (var_machineIdentifier.getter_string (SOURCE_FILE ("sara_parser.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (var_machineInputVariableCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 702)).add_operation (var_inputVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 703)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 703))  COMMA_SOURCE_FILE ("sara_parser.galgas", 702)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 706)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_internalVar ;
      var_internalVar = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 711)) ;
      GALGAS_uint var_internalVarIndex ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar, var_internalVarIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
      var_translationVector.addAssign_operation (var_internalVarIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 716)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 719)) ;
  GALGAS_uint var_inputAndInternalVariablesCount = var_translationVector.getter_length (SOURCE_FILE ("sara_parser.galgas", 720)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount.objectCompare (var_machineInputAndInternalVariableCount)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 722)), GALGAS_string ("The '$").add_operation (var_machineIdentifier.getter_string (SOURCE_FILE ("sara_parser.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (var_machineInputAndInternalVariableCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 722)).add_operation (var_inputAndInternalVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 723)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 723))  COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    GALGAS_lstring var_outputVar ;
    var_outputVar = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 729)) ;
    GALGAS_uint var_outputVarIndex ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar, var_outputVarIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 731)) ;
    var_translationVector.addAssign_operation (var_outputVarIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 732)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 734)) ;
    } break ;
    default:
      repeatFlag_4 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 736)) ;
  GALGAS_uint var_allVariablesCount = var_translationVector.getter_length (SOURCE_FILE ("sara_parser.galgas", 737)) ;
  GALGAS_uint var_machineAllVariablesCount = var_machineVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 738)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_allVariablesCount.objectCompare (var_machineAllVariablesCount)).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 740)), GALGAS_string ("The '$").add_operation (var_machineIdentifier.getter_string (SOURCE_FILE ("sara_parser.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (var_machineAllVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 740)).add_operation (var_allVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 741)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 741))  COMMA_SOURCE_FILE ("sara_parser.galgas", 740)) ;
  }
  outArgument_outExpression = GALGAS_C_5F_importBoolMachine::constructor_new (var_indexOfImportedMachine, var_machineIdentifier.getter_location (SOURCE_FILE ("sara_parser.galgas", 745)), var_translationVector  COMMA_SOURCE_FILE ("sara_parser.galgas", 743)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i26_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 681)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 689)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 692)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 697)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 699)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 706)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 711)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 716)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 719)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 729)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 734)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 736)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand ;
      nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_orComposition::constructor_new (var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("sara_parser.galgas", 764)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 777)) ;
      GALGAS_location var_errorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 778)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_strongModalComposition::constructor_new (var_leftOperand, var_errorLocation, var_rightOperand  COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A__2A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 784)) ;
      GALGAS_location var_errorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 785)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_weakModalComposition::constructor_new (var_leftOperand, var_errorLocation, var_rightOperand  COMMA_SOURCE_FILE ("sara_parser.galgas", 789)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_parallelComposition::constructor_new (var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("sara_parser.galgas", 795)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 777)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A__2A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 784)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
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
    GALGAS_lstring var_modeName ;
    var_modeName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 810)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def, inCompiler) ;
    {
    outArgument_outModeMap.modifier_insertKey (var_modeName, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 814)), var_def, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_include) COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
      GALGAS_lstring var_sourceModeName ;
      var_sourceModeName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 822)) ;
      GALGAS_uint var_sourceModeIndex ;
      GALGAS_AC_5F_machineDefinition joker_25910 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName, var_sourceModeIndex, joker_25910, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("sara_parser.galgas", 825)) ;
      GALGAS_lstring var_targetModeName ;
      var_targetModeName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 827)) ;
      GALGAS_uint var_targetModeIndex ;
      GALGAS_AC_5F_machineDefinition joker_26070 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName, var_targetModeIndex, joker_26070, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 830)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex.objectCompare (var_targetModeIndex)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (var_targetModeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticWarning (location_3, GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode")  COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
      }else if (kBoolFalse == test_2) {
        outArgument_outInclusionList.addAssign_operation (var_sourceModeIndex, var_targetModeIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 810)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_include) COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 822)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("sara_parser.galgas", 825)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 827)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 830)) ;
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
    GALGAS_lstring var_modeName ;
    var_modeName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def, inCompiler) ;
    {
    outArgument_outModeMap.modifier_insertKey (var_modeName, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 854)), var_def, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 854)) ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 855)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_exclude) COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
      GALGAS_lstring var_sourceModeName ;
      var_sourceModeName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 862)) ;
      GALGAS_uint var_sourceModeIndex ;
      GALGAS_AC_5F_machineDefinition joker_27127 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName, var_sourceModeIndex, joker_27127, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 864)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
      GALGAS_lstring var_targetModeName ;
      var_targetModeName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 867)) ;
      GALGAS_uint var_targetModeIndex ;
      GALGAS_AC_5F_machineDefinition joker_27287 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName, var_targetModeIndex, joker_27287, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 869)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 870)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex.objectCompare (var_targetModeIndex)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (var_targetModeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticWarning (location_3, GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode")  COMMA_SOURCE_FILE ("sara_parser.galgas", 872)) ;
      }else if (kBoolFalse == test_2) {
        outArgument_outExclusionList.addAssign_operation (var_sourceModeIndex, var_targetModeIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 874)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 855)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_exclude) COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 862)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 867)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 870)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 890)) ;
  } break ;
  case 3: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount = var_extendedVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 893)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3F_) COMMA_SOURCE_FILE ("sara_parser.galgas", 894)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_variableName ;
      var_variableName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 897)) ;
      {
      var_extendedVariablesMap.modifier_insertKey (var_variableName, var_extendedVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 898)) ;
      }
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 900)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount = var_extendedVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 902)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap, var_def, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
    outArgument_outDefinition = GALGAS_C_5F_existsDefinition::constructor_new (var_previousVariableCount, var_actualVariableCount, var_def  COMMA_SOURCE_FILE ("sara_parser.galgas", 907)) ;
  } break ;
  case 4: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount = var_extendedVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 910)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__21_) COMMA_SOURCE_FILE ("sara_parser.galgas", 911)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_variableName ;
      var_variableName = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 914)) ;
      {
      var_extendedVariablesMap.modifier_insertKey (var_variableName, var_extendedVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
      }
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 917)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount = var_extendedVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 919)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 920)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap, var_def, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 923)) ;
    outArgument_outDefinition = GALGAS_C_5F_forallDefinition::constructor_new (var_previousVariableCount, var_actualVariableCount, var_def  COMMA_SOURCE_FILE ("sara_parser.galgas", 924)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_bool) COMMA_SOURCE_FILE ("sara_parser.galgas", 926)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 927)) ;
    GALGAS_AC_5F_boolExpression var_def ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_boolToSeqExpression::constructor_new (var_def  COMMA_SOURCE_FILE ("sara_parser.galgas", 930)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 931)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__40_) COMMA_SOURCE_FILE ("sara_parser.galgas", 933)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_fullSaturationOperation::constructor_new (var_def  COMMA_SOURCE_FILE ("sara_parser.galgas", 936)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 938)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_complementationOperation::constructor_new (var_def  COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_nofirst) COMMA_SOURCE_FILE ("sara_parser.galgas", 943)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressInitialStatesOperation::constructor_new (var_def  COMMA_SOURCE_FILE ("sara_parser.galgas", 947)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 948)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_nolast) COMMA_SOURCE_FILE ("sara_parser.galgas", 950)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
    GALGAS_AC_5F_machineDefinition var_def ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressTerminalStatesOperation::constructor_new (var_def  COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 955)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) COMMA_SOURCE_FILE ("sara_parser.galgas", 957)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 958)) ;
    GALGAS_M_5F_modesMap var_modeMap ;
    GALGAS_ListForModes var_inclusionList ;
    nt_modalcompadd_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap, var_inclusionList, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 966)) ;
    outArgument_outDefinition = GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (var_modeMap, var_inclusionList  COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 970)) ;
    GALGAS_M_5F_modesMap var_modeMap ;
    GALGAS_ListForModes var_exclusionList ;
    nt_modalcompsub_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap, var_exclusionList, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 978)) ;
    outArgument_outDefinition = GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (var_modeMap, var_exclusionList  COMMA_SOURCE_FILE ("sara_parser.galgas", 979)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 982)) ;
    GALGAS_AC_5F_boolExpression var_sourceExpression ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_sourceExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("sara_parser.galgas", 985)) ;
    GALGAS_AC_5F_boolExpression var_targetExpression ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_targetExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    outArgument_outDefinition = GALGAS_C_5F_trans::constructor_new (var_sourceExpression, var_targetExpression  COMMA_SOURCE_FILE ("sara_parser.galgas", 989)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 890)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3F_) COMMA_SOURCE_FILE ("sara_parser.galgas", 894)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 897)) ;
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 900)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__21_) COMMA_SOURCE_FILE ("sara_parser.galgas", 911)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 914)) ;
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 917)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 920)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 923)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_bool) COMMA_SOURCE_FILE ("sara_parser.galgas", 926)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 927)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 931)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__40_) COMMA_SOURCE_FILE ("sara_parser.galgas", 933)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("sara_parser.galgas", 938)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_nofirst) COMMA_SOURCE_FILE ("sara_parser.galgas", 943)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 948)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_nolast) COMMA_SOURCE_FILE ("sara_parser.galgas", 950)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 955)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) COMMA_SOURCE_FILE ("sara_parser.galgas", 957)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 958)) ;
    nt_modalcompadd_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 966)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 970)) ;
    nt_modalcompsub_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 978)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 982)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("sara_parser.galgas", 985)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
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
  GALGAS_lstring var_machineIdentifier ;
  var_machineIdentifier = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 1000)) ;
  GALGAS_uint var_machineInputVariableCount ;
  GALGAS_uint var_machineInputAndInternalVariableCount ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap ;
  GALGAS_uint var_indexOfImportedMachine ;
  GALGAS_stringlist joker_31698 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_machinesMap (SOURCE_FILE ("sara_parser.galgas", 1005)).method_searchKey (var_machineIdentifier, var_indexOfImportedMachine, var_machineInputVariableCount, var_machineInputAndInternalVariableCount, var_machineVariablesMap, joker_31698, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1005)) ;
  GALGAS_L_5F_translationVector var_translationVector = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1006)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1008)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar ;
    var_inputVar = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1011)) ;
    GALGAS_uint var_inputVarIndex ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar, var_inputVarIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
    var_translationVector.addAssign_operation (var_inputVarIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 1014)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1016)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1018)) ;
  GALGAS_uint var_inputVariablesCount = var_translationVector.getter_length (SOURCE_FILE ("sara_parser.galgas", 1019)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount.objectCompare (var_machineInputVariableCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)), GALGAS_string ("The '$").add_operation (var_machineIdentifier.getter_string (SOURCE_FILE ("sara_parser.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (var_machineInputVariableCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)).add_operation (var_inputVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 1022)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1022)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1022))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1021)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1025)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_internalVar ;
      var_internalVar = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1030)) ;
      GALGAS_uint var_internalVarIndex ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar, var_internalVarIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1032)) ;
      var_translationVector.addAssign_operation (var_internalVarIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 1033)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1035)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1038)) ;
  GALGAS_uint var_inputAndInternalVariablesCount = var_translationVector.getter_length (SOURCE_FILE ("sara_parser.galgas", 1039)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount.objectCompare (var_machineInputAndInternalVariableCount)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)), GALGAS_string ("The '$").add_operation (var_machineIdentifier.getter_string (SOURCE_FILE ("sara_parser.galgas", 1041)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (var_machineInputAndInternalVariableCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 1041)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)).add_operation (var_inputAndInternalVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 1042)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1042)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1042))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1041)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1045)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    GALGAS_lstring var_outputVar ;
    var_outputVar = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1048)) ;
    GALGAS_uint var_outputVarIndex ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar, var_outputVarIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1050)) ;
    var_translationVector.addAssign_operation (var_outputVarIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 1051)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1053)) ;
    } break ;
    default:
      repeatFlag_4 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1055)) ;
  GALGAS_uint var_allVariablesCount = var_translationVector.getter_length (SOURCE_FILE ("sara_parser.galgas", 1056)) ;
  GALGAS_uint var_machineAllVariablesCount = var_machineVariablesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 1057)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_allVariablesCount.objectCompare (var_machineAllVariablesCount)).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)), GALGAS_string ("The '$").add_operation (var_machineIdentifier.getter_string (SOURCE_FILE ("sara_parser.galgas", 1059)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (var_machineAllVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 1059)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)).add_operation (var_allVariablesCount.getter_string (SOURCE_FILE ("sara_parser.galgas", 1060)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1060)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1060))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1059)) ;
  }
  outArgument_outDefinition = GALGAS_C_5F_importMachine::constructor_new (var_indexOfImportedMachine, var_translationVector  COMMA_SOURCE_FILE ("sara_parser.galgas", 1062)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) COMMA_SOURCE_FILE ("sara_parser.galgas", 1000)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1008)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1011)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1016)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1018)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1025)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1030)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1035)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1038)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1045)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1048)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1053)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1055)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i33_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                             GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                             GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                             C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GALGAS_M_5F_stateMap var_statesMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 1073)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1074)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_auto) COMMA_SOURCE_FILE ("sara_parser.galgas", 1075)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1076)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 1078)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_stateName ;
    var_stateName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1081)) ;
    {
    var_statesMap.modifier_insertKey (var_stateName, var_statesMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 1082)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1082)) ;
    }
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1084)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1086)) ;
  GALGAS_L_5F_statesDefinitionList var_initialStatesDefinitionList = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1088)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) COMMA_SOURCE_FILE ("sara_parser.galgas", 1089)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_initialState ;
    var_initialState = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1092)) ;
    GALGAS_uint var_initialStateIndex ;
    var_statesMap.method_searchKey (var_initialState, var_initialStateIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1094)) ;
    var_initialStatesDefinitionList.addAssign_operation (var_initialStateIndex, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1095))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1095)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1097)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1099)) ;
  GALGAS_L_5F_statesDefinitionList var_terminalStatesDefinitionList = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1101)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) COMMA_SOURCE_FILE ("sara_parser.galgas", 1104)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_terminalState ;
      var_terminalState = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1107)) ;
      GALGAS_uint var_terminalStateIndex ;
      var_statesMap.method_searchKey (var_terminalState, var_terminalStateIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1109)) ;
      var_terminalStatesDefinitionList.addAssign_operation (var_terminalStateIndex, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1110))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1110)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1112)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1114)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_M_5F_stateMap var_stateDefinitionMap = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 1117)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GALGAS_lstring var_stateName ;
    var_stateName = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1121)) ;
    GALGAS_uint var_stateIndex ;
    var_statesMap.method_searchKey (var_stateName, var_stateIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1123)) ;
    {
    var_stateDefinitionMap.modifier_defineState (var_stateName, var_stateDefinitionMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 1124)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1124)) ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1125)) ;
    GALGAS_AC_5F_boolExpression var_stateExpression ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_stateExpression, inCompiler) ;
    GALGAS_location var_endOfStateExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1129)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1130)) ;
    GALGAS_L_5F_transitionDefinition var_transitionsList = GALGAS_L_5F_transitionDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1132)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        GALGAS_AC_5F_boolExpression var_transitionInputExpression ;
        nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_transitionInputExpression, inCompiler) ;
        GALGAS_location var_endOfExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1137)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_goto) COMMA_SOURCE_FILE ("sara_parser.galgas", 1138)) ;
        GALGAS_lstring var_targetStateName ;
        var_targetStateName = inCompiler->synthetizedAttribute_identifierString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1140)) ;
        GALGAS_uint var_targetStateIndex ;
        var_statesMap.method_searchKey (var_targetStateName, var_targetStateIndex, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1142)) ;
        var_transitionsList.addAssign_operation (var_transitionInputExpression, var_endOfExpression, var_targetStateIndex  COMMA_SOURCE_FILE ("sara_parser.galgas", 1143)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1144)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1146)) ;
    var_stateDefinitionList.addAssign_operation (var_stateIndex, var_stateExpression, var_endOfStateExpression, var_transitionsList  COMMA_SOURCE_FILE ("sara_parser.galgas", 1147)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  cEnumerator_M_5F_stateMap enumerator_36529 (var_statesMap, kEnumeration_up) ;
  while (enumerator_36529.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_stateDefinitionMap.getter_hasKey (enumerator_36529.current_lkey (HERE).getter_string (SOURCE_FILE ("sara_parser.galgas", 1153)) COMMA_SOURCE_FILE ("sara_parser.galgas", 1153)).operator_not (SOURCE_FILE ("sara_parser.galgas", 1153)).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1154)), GALGAS_string ("'").add_operation (enumerator_36529.current_lkey (HERE).getter_string (SOURCE_FILE ("sara_parser.galgas", 1154)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1154)).add_operation (GALGAS_string ("' state is not described"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1154))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1154)) ;
    }
    enumerator_36529.gotoNextObject () ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1158)) ;
  outArgument_outDefinition = GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (var_statesMap, var_initialStatesDefinitionList, var_terminalStatesDefinitionList, var_stateDefinitionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1159))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i33_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_auto) COMMA_SOURCE_FILE ("sara_parser.galgas", 1075)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1076)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) COMMA_SOURCE_FILE ("sara_parser.galgas", 1078)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1081)) ;
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1084)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1086)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) COMMA_SOURCE_FILE ("sara_parser.galgas", 1089)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1092)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1097)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1099)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) COMMA_SOURCE_FILE ("sara_parser.galgas", 1104)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1107)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1112)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1114)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1121)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1125)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1130)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        nt_io_5F_bool_5F_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_goto) COMMA_SOURCE_FILE ("sara_parser.galgas", 1138)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("sara_parser.galgas", 1140)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1144)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1146)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("sara_parser.galgas", 1158)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_sara_grammar [] = {
// At index 0 : <start_symbol>, in file 'sara_parser.ggs', line 11
  NONTERMINAL (1) // <component>
, NONTERMINAL (11) // <select_sara_5F_parser_0>
, END_PRODUCTION
// At index 3 : <component>, in file 'sara_parser.ggs', line 25
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 8 : <component>, in file 'sara_parser.ggs', line 46
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 13 : <component>, in file 'sara_parser.ggs', line 67
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) // $first$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 19 : <component>, in file 'sara_parser.ggs', line 89
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 25 : <component>, in file 'sara_parser.ggs', line 111
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_check) // $check$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 29 : <component>, in file 'sara_parser.ggs', line 131
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkidentical) // $checkidentical$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 35 : <component>, in file 'sara_parser.ggs', line 157
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkbool) // $checkbool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 39 : <component>, in file 'sara_parser.ggs', line 177
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and) // $use_and$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 42 : <component>, in file 'sara_parser.ggs', line 187
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_ite) // $use_ite$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 45 : <component>, in file 'sara_parser.ggs', line 197
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite) // $use_and_ite$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 48 : <component>, in file 'sara_parser.ggs', line 207
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_and_5F_cache) // $and_cache$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 52 : <component>, in file 'sara_parser.ggs', line 218
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_ite_5F_cache) // $ite_cache$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 56 : <component>, in file 'sara_parser.ggs', line 230
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_map) // $map$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 60 : <component>, in file 'sara_parser.ggs', line 242
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bdd) // $bdd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 63 : <component>, in file 'sara_parser.ggs', line 252
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_sara_5F_parser_1>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (13) // <select_sara_5F_parser_2>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <select_sara_5F_parser_4>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 79 : <component>, in file 'sara_parser.ggs', line 321
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (16) // <select_sara_5F_parser_5>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (17) // <select_sara_5F_parser_6>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (19) // <select_sara_5F_parser_8>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (7) // <modalcompadd_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 96 : <component>, in file 'sara_parser.ggs', line 396
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (20) // <select_sara_5F_parser_9>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (21) // <select_sara_5F_parser_10>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (23) // <select_sara_5F_parser_12>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (8) // <modalcompsub_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 113 : <component>, in file 'sara_parser.ggs', line 469
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_scenario) // $scenario$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (24) // <select_sara_5F_parser_13>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (25) // <select_sara_5F_parser_14>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (27) // <select_sara_5F_parser_16>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (28) // <select_sara_5F_parser_17>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 136 : <io_bool_expression>, in file 'sara_parser.ggs', line 573
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 139 : <io_and_expression>, in file 'sara_parser.ggs', line 604
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 142 : <io_primary>, in file 'sara_parser.ggs', line 620
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 146 : <io_primary>, in file 'sara_parser.ggs', line 631
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 148 : <io_primary>, in file 'sara_parser.ggs', line 644
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (4) // <io_primary>
, END_PRODUCTION
// At index 151 : <io_primary>, in file 'sara_parser.ggs', line 656
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 153 : <io_primary>, in file 'sara_parser.ggs', line 666
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 155 : <io_primary>, in file 'sara_parser.ggs', line 676
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (33) // <select_sara_5F_parser_22>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (34) // <select_sara_5F_parser_23>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (36) // <select_sara_5F_parser_25>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 168 : <definition_expression>, in file 'sara_parser.ggs', line 753
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 171 : <definition_expression_term>, in file 'sara_parser.ggs', line 770
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 174 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 801
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 181 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 841
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 188 : <definition_expression_factor>, in file 'sara_parser.ggs', line 881
, NONTERMINAL (43) // <select_sara_5F_parser_32>
, END_PRODUCTION
// At index 190 : <definition_expression_factor>, in file 'sara_parser.ggs', line 995
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (46) // <select_sara_5F_parser_35>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (47) // <select_sara_5F_parser_36>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (49) // <select_sara_5F_parser_38>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 203 : <explicit_automaton>, in file 'sara_parser.ggs', line 1069
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_auto) // $auto$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (50) // <select_sara_5F_parser_39>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) // $first$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (51) // <select_sara_5F_parser_40>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (52) // <select_sara_5F_parser_41>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, NONTERMINAL (54) // <select_sara_5F_parser_43>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 223 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, END_PRODUCTION
// At index 224 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, NONTERMINAL (1) // <component>
, NONTERMINAL (11) // <select_sara_5F_parser_0>
, END_PRODUCTION
// At index 227 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
, END_PRODUCTION
// At index 228 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_sara_5F_parser_1>
, END_PRODUCTION
// At index 232 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
, END_PRODUCTION
// At index 233 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 236 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
, END_PRODUCTION
// At index 237 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 241 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
, END_PRODUCTION
// At index 242 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <select_sara_5F_parser_4>
, END_PRODUCTION
// At index 246 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
, END_PRODUCTION
// At index 247 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (16) // <select_sara_5F_parser_5>
, END_PRODUCTION
// At index 251 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
, END_PRODUCTION
// At index 252 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 255 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
, END_PRODUCTION
// At index 256 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 260 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
, END_PRODUCTION
// At index 261 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (19) // <select_sara_5F_parser_8>
, END_PRODUCTION
// At index 265 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
, END_PRODUCTION
// At index 266 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (20) // <select_sara_5F_parser_9>
, END_PRODUCTION
// At index 270 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
, END_PRODUCTION
// At index 271 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 274 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
, END_PRODUCTION
// At index 275 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 279 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
, END_PRODUCTION
// At index 280 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (23) // <select_sara_5F_parser_12>
, END_PRODUCTION
// At index 284 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
, END_PRODUCTION
// At index 285 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (24) // <select_sara_5F_parser_13>
, END_PRODUCTION
// At index 289 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
, END_PRODUCTION
// At index 290 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 293 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
, END_PRODUCTION
// At index 294 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 298 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
, END_PRODUCTION
// At index 299 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (27) // <select_sara_5F_parser_16>
, END_PRODUCTION
// At index 303 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
, END_PRODUCTION
// At index 304 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (28) // <select_sara_5F_parser_17>
, END_PRODUCTION
// At index 312 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
, END_PRODUCTION
// At index 313 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, END_PRODUCTION
// At index 318 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
, END_PRODUCTION
// At index 319 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, END_PRODUCTION
// At index 323 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, END_PRODUCTION
// At index 324 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 328 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 332 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2D__3E_) // $->$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 336 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3D_) // $=$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 340 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
, END_PRODUCTION
// At index 341 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 345 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
, END_PRODUCTION
// At index 346 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (33) // <select_sara_5F_parser_22>
, END_PRODUCTION
// At index 350 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
, END_PRODUCTION
// At index 351 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 354 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
, END_PRODUCTION
// At index 355 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 359 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
, END_PRODUCTION
// At index 360 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (36) // <select_sara_5F_parser_25>
, END_PRODUCTION
// At index 364 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
, END_PRODUCTION
// At index 365 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 369 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, END_PRODUCTION
// At index 370 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 374 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A__2A_) // $**$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 378 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C__7C_) // $||$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 382 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
, END_PRODUCTION
// At index 383 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, END_PRODUCTION
// At index 389 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
, END_PRODUCTION
// At index 390 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_include) // $include$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 397 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
, END_PRODUCTION
// At index 398 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, END_PRODUCTION
// At index 404 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
, END_PRODUCTION
// At index 405 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_exclude) // $exclude$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 412 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, NONTERMINAL (10) // <explicit_automaton>
, END_PRODUCTION
// At index 414 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 418 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3F_) // $?$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 425 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__21_) // $!$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 432 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bool) // $bool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 437 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__40_) // $@$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 440 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 443 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nofirst) // $nofirst$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 448 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nolast) // $nolast$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 453 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (7) // <modalcompadd_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 458 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (8) // <modalcompsub_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 463 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 470 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
, END_PRODUCTION
// At index 471 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, END_PRODUCTION
// At index 475 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
, END_PRODUCTION
// At index 476 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, END_PRODUCTION
// At index 480 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
, END_PRODUCTION
// At index 481 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (46) // <select_sara_5F_parser_35>
, END_PRODUCTION
// At index 485 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
, END_PRODUCTION
// At index 486 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 489 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
, END_PRODUCTION
// At index 490 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 494 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
, END_PRODUCTION
// At index 495 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (49) // <select_sara_5F_parser_38>
, END_PRODUCTION
// At index 499 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
, END_PRODUCTION
// At index 500 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (50) // <select_sara_5F_parser_39>
, END_PRODUCTION
// At index 504 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
, END_PRODUCTION
// At index 505 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (51) // <select_sara_5F_parser_40>
, END_PRODUCTION
// At index 509 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
, END_PRODUCTION
// At index 510 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 515 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
, END_PRODUCTION
// At index 516 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, END_PRODUCTION
// At index 520 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
, END_PRODUCTION
// At index 521 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, NONTERMINAL (54) // <select_sara_5F_parser_43>
, END_PRODUCTION
// At index 529 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
, END_PRODUCTION
// At index 530 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_goto) // $goto$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, END_PRODUCTION
// At index 536 : <>, in file '.ggs', line 0
, NONTERMINAL (0) // <start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          P R O D U C T I O N    N A M E S                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_sara_grammar [140] = {
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
 {"<component>", "sara_parser", 45}, // at index 10
 {"<component>", "sara_parser", 48}, // at index 11
 {"<component>", "sara_parser", 52}, // at index 12
 {"<component>", "sara_parser", 56}, // at index 13
 {"<component>", "sara_parser", 60}, // at index 14
 {"<component>", "sara_parser", 63}, // at index 15
 {"<component>", "sara_parser", 79}, // at index 16
 {"<component>", "sara_parser", 96}, // at index 17
 {"<component>", "sara_parser", 113}, // at index 18
 {"<io_bool_expression>", "sara_parser", 136}, // at index 19
 {"<io_and_expression>", "sara_parser", 139}, // at index 20
 {"<io_primary>", "sara_parser", 142}, // at index 21
 {"<io_primary>", "sara_parser", 146}, // at index 22
 {"<io_primary>", "sara_parser", 148}, // at index 23
 {"<io_primary>", "sara_parser", 151}, // at index 24
 {"<io_primary>", "sara_parser", 153}, // at index 25
 {"<io_primary>", "sara_parser", 155}, // at index 26
 {"<definition_expression>", "sara_parser", 168}, // at index 27
 {"<definition_expression_term>", "sara_parser", 171}, // at index 28
 {"<modalcompadd_definition>", "sara_parser", 174}, // at index 29
 {"<modalcompsub_definition>", "sara_parser", 181}, // at index 30
 {"<definition_expression_factor>", "sara_parser", 188}, // at index 31
 {"<definition_expression_factor>", "sara_parser", 190}, // at index 32
 {"<explicit_automaton>", "sara_parser", 203}, // at index 33
 {"<select_sara_5F_parser_0>", "sara_parser", 223}, // at index 34
 {"<select_sara_5F_parser_0>", "sara_parser", 224}, // at index 35
 {"<select_sara_5F_parser_1>", "sara_parser", 227}, // at index 36
 {"<select_sara_5F_parser_1>", "sara_parser", 228}, // at index 37
 {"<select_sara_5F_parser_2>", "sara_parser", 232}, // at index 38
 {"<select_sara_5F_parser_2>", "sara_parser", 233}, // at index 39
 {"<select_sara_5F_parser_3>", "sara_parser", 236}, // at index 40
 {"<select_sara_5F_parser_3>", "sara_parser", 237}, // at index 41
 {"<select_sara_5F_parser_4>", "sara_parser", 241}, // at index 42
 {"<select_sara_5F_parser_4>", "sara_parser", 242}, // at index 43
 {"<select_sara_5F_parser_5>", "sara_parser", 246}, // at index 44
 {"<select_sara_5F_parser_5>", "sara_parser", 247}, // at index 45
 {"<select_sara_5F_parser_6>", "sara_parser", 251}, // at index 46
 {"<select_sara_5F_parser_6>", "sara_parser", 252}, // at index 47
 {"<select_sara_5F_parser_7>", "sara_parser", 255}, // at index 48
 {"<select_sara_5F_parser_7>", "sara_parser", 256}, // at index 49
 {"<select_sara_5F_parser_8>", "sara_parser", 260}, // at index 50
 {"<select_sara_5F_parser_8>", "sara_parser", 261}, // at index 51
 {"<select_sara_5F_parser_9>", "sara_parser", 265}, // at index 52
 {"<select_sara_5F_parser_9>", "sara_parser", 266}, // at index 53
 {"<select_sara_5F_parser_10>", "sara_parser", 270}, // at index 54
 {"<select_sara_5F_parser_10>", "sara_parser", 271}, // at index 55
 {"<select_sara_5F_parser_11>", "sara_parser", 274}, // at index 56
 {"<select_sara_5F_parser_11>", "sara_parser", 275}, // at index 57
 {"<select_sara_5F_parser_12>", "sara_parser", 279}, // at index 58
 {"<select_sara_5F_parser_12>", "sara_parser", 280}, // at index 59
 {"<select_sara_5F_parser_13>", "sara_parser", 284}, // at index 60
 {"<select_sara_5F_parser_13>", "sara_parser", 285}, // at index 61
 {"<select_sara_5F_parser_14>", "sara_parser", 289}, // at index 62
 {"<select_sara_5F_parser_14>", "sara_parser", 290}, // at index 63
 {"<select_sara_5F_parser_15>", "sara_parser", 293}, // at index 64
 {"<select_sara_5F_parser_15>", "sara_parser", 294}, // at index 65
 {"<select_sara_5F_parser_16>", "sara_parser", 298}, // at index 66
 {"<select_sara_5F_parser_16>", "sara_parser", 299}, // at index 67
 {"<select_sara_5F_parser_17>", "sara_parser", 303}, // at index 68
 {"<select_sara_5F_parser_17>", "sara_parser", 304}, // at index 69
 {"<select_sara_5F_parser_18>", "sara_parser", 312}, // at index 70
 {"<select_sara_5F_parser_18>", "sara_parser", 313}, // at index 71
 {"<select_sara_5F_parser_19>", "sara_parser", 318}, // at index 72
 {"<select_sara_5F_parser_19>", "sara_parser", 319}, // at index 73
 {"<select_sara_5F_parser_20>", "sara_parser", 323}, // at index 74
 {"<select_sara_5F_parser_20>", "sara_parser", 324}, // at index 75
 {"<select_sara_5F_parser_20>", "sara_parser", 328}, // at index 76
 {"<select_sara_5F_parser_20>", "sara_parser", 332}, // at index 77
 {"<select_sara_5F_parser_20>", "sara_parser", 336}, // at index 78
 {"<select_sara_5F_parser_21>", "sara_parser", 340}, // at index 79
 {"<select_sara_5F_parser_21>", "sara_parser", 341}, // at index 80
 {"<select_sara_5F_parser_22>", "sara_parser", 345}, // at index 81
 {"<select_sara_5F_parser_22>", "sara_parser", 346}, // at index 82
 {"<select_sara_5F_parser_23>", "sara_parser", 350}, // at index 83
 {"<select_sara_5F_parser_23>", "sara_parser", 351}, // at index 84
 {"<select_sara_5F_parser_24>", "sara_parser", 354}, // at index 85
 {"<select_sara_5F_parser_24>", "sara_parser", 355}, // at index 86
 {"<select_sara_5F_parser_25>", "sara_parser", 359}, // at index 87
 {"<select_sara_5F_parser_25>", "sara_parser", 360}, // at index 88
 {"<select_sara_5F_parser_26>", "sara_parser", 364}, // at index 89
 {"<select_sara_5F_parser_26>", "sara_parser", 365}, // at index 90
 {"<select_sara_5F_parser_27>", "sara_parser", 369}, // at index 91
 {"<select_sara_5F_parser_27>", "sara_parser", 370}, // at index 92
 {"<select_sara_5F_parser_27>", "sara_parser", 374}, // at index 93
 {"<select_sara_5F_parser_27>", "sara_parser", 378}, // at index 94
 {"<select_sara_5F_parser_28>", "sara_parser", 382}, // at index 95
 {"<select_sara_5F_parser_28>", "sara_parser", 383}, // at index 96
 {"<select_sara_5F_parser_29>", "sara_parser", 389}, // at index 97
 {"<select_sara_5F_parser_29>", "sara_parser", 390}, // at index 98
 {"<select_sara_5F_parser_30>", "sara_parser", 397}, // at index 99
 {"<select_sara_5F_parser_30>", "sara_parser", 398}, // at index 100
 {"<select_sara_5F_parser_31>", "sara_parser", 404}, // at index 101
 {"<select_sara_5F_parser_31>", "sara_parser", 405}, // at index 102
 {"<select_sara_5F_parser_32>", "sara_parser", 412}, // at index 103
 {"<select_sara_5F_parser_32>", "sara_parser", 414}, // at index 104
 {"<select_sara_5F_parser_32>", "sara_parser", 418}, // at index 105
 {"<select_sara_5F_parser_32>", "sara_parser", 425}, // at index 106
 {"<select_sara_5F_parser_32>", "sara_parser", 432}, // at index 107
 {"<select_sara_5F_parser_32>", "sara_parser", 437}, // at index 108
 {"<select_sara_5F_parser_32>", "sara_parser", 440}, // at index 109
 {"<select_sara_5F_parser_32>", "sara_parser", 443}, // at index 110
 {"<select_sara_5F_parser_32>", "sara_parser", 448}, // at index 111
 {"<select_sara_5F_parser_32>", "sara_parser", 453}, // at index 112
 {"<select_sara_5F_parser_32>", "sara_parser", 458}, // at index 113
 {"<select_sara_5F_parser_32>", "sara_parser", 463}, // at index 114
 {"<select_sara_5F_parser_33>", "sara_parser", 470}, // at index 115
 {"<select_sara_5F_parser_33>", "sara_parser", 471}, // at index 116
 {"<select_sara_5F_parser_34>", "sara_parser", 475}, // at index 117
 {"<select_sara_5F_parser_34>", "sara_parser", 476}, // at index 118
 {"<select_sara_5F_parser_35>", "sara_parser", 480}, // at index 119
 {"<select_sara_5F_parser_35>", "sara_parser", 481}, // at index 120
 {"<select_sara_5F_parser_36>", "sara_parser", 485}, // at index 121
 {"<select_sara_5F_parser_36>", "sara_parser", 486}, // at index 122
 {"<select_sara_5F_parser_37>", "sara_parser", 489}, // at index 123
 {"<select_sara_5F_parser_37>", "sara_parser", 490}, // at index 124
 {"<select_sara_5F_parser_38>", "sara_parser", 494}, // at index 125
 {"<select_sara_5F_parser_38>", "sara_parser", 495}, // at index 126
 {"<select_sara_5F_parser_39>", "sara_parser", 499}, // at index 127
 {"<select_sara_5F_parser_39>", "sara_parser", 500}, // at index 128
 {"<select_sara_5F_parser_40>", "sara_parser", 504}, // at index 129
 {"<select_sara_5F_parser_40>", "sara_parser", 505}, // at index 130
 {"<select_sara_5F_parser_41>", "sara_parser", 509}, // at index 131
 {"<select_sara_5F_parser_41>", "sara_parser", 510}, // at index 132
 {"<select_sara_5F_parser_42>", "sara_parser", 515}, // at index 133
 {"<select_sara_5F_parser_42>", "sara_parser", 516}, // at index 134
 {"<select_sara_5F_parser_43>", "sara_parser", 520}, // at index 135
 {"<select_sara_5F_parser_43>", "sara_parser", 521}, // at index 136
 {"<select_sara_5F_parser_44>", "sara_parser", 529}, // at index 137
 {"<select_sara_5F_parser_44>", "sara_parser", 530}, // at index 138
 {"<>", "", 536} // at index 139
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_sara_grammar [140] = {
0, // index 0 : <start_symbol>, in file 'sara_parser.ggs', line 11
3, // index 1 : <component>, in file 'sara_parser.ggs', line 25
8, // index 2 : <component>, in file 'sara_parser.ggs', line 46
13, // index 3 : <component>, in file 'sara_parser.ggs', line 67
19, // index 4 : <component>, in file 'sara_parser.ggs', line 89
25, // index 5 : <component>, in file 'sara_parser.ggs', line 111
29, // index 6 : <component>, in file 'sara_parser.ggs', line 131
35, // index 7 : <component>, in file 'sara_parser.ggs', line 157
39, // index 8 : <component>, in file 'sara_parser.ggs', line 177
42, // index 9 : <component>, in file 'sara_parser.ggs', line 187
45, // index 10 : <component>, in file 'sara_parser.ggs', line 197
48, // index 11 : <component>, in file 'sara_parser.ggs', line 207
52, // index 12 : <component>, in file 'sara_parser.ggs', line 218
56, // index 13 : <component>, in file 'sara_parser.ggs', line 230
60, // index 14 : <component>, in file 'sara_parser.ggs', line 242
63, // index 15 : <component>, in file 'sara_parser.ggs', line 252
79, // index 16 : <component>, in file 'sara_parser.ggs', line 321
96, // index 17 : <component>, in file 'sara_parser.ggs', line 396
113, // index 18 : <component>, in file 'sara_parser.ggs', line 469
136, // index 19 : <io_bool_expression>, in file 'sara_parser.ggs', line 573
139, // index 20 : <io_and_expression>, in file 'sara_parser.ggs', line 604
142, // index 21 : <io_primary>, in file 'sara_parser.ggs', line 620
146, // index 22 : <io_primary>, in file 'sara_parser.ggs', line 631
148, // index 23 : <io_primary>, in file 'sara_parser.ggs', line 644
151, // index 24 : <io_primary>, in file 'sara_parser.ggs', line 656
153, // index 25 : <io_primary>, in file 'sara_parser.ggs', line 666
155, // index 26 : <io_primary>, in file 'sara_parser.ggs', line 676
168, // index 27 : <definition_expression>, in file 'sara_parser.ggs', line 753
171, // index 28 : <definition_expression_term>, in file 'sara_parser.ggs', line 770
174, // index 29 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 801
181, // index 30 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 841
188, // index 31 : <definition_expression_factor>, in file 'sara_parser.ggs', line 881
190, // index 32 : <definition_expression_factor>, in file 'sara_parser.ggs', line 995
203, // index 33 : <explicit_automaton>, in file 'sara_parser.ggs', line 1069
223, // index 34 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
224, // index 35 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
227, // index 36 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
228, // index 37 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
232, // index 38 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
233, // index 39 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
236, // index 40 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
237, // index 41 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
241, // index 42 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
242, // index 43 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
246, // index 44 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
247, // index 45 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
251, // index 46 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
252, // index 47 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
255, // index 48 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
256, // index 49 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
260, // index 50 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
261, // index 51 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
265, // index 52 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
266, // index 53 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
270, // index 54 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
271, // index 55 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
274, // index 56 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
275, // index 57 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
279, // index 58 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
280, // index 59 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
284, // index 60 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
285, // index 61 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
289, // index 62 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
290, // index 63 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
293, // index 64 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
294, // index 65 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
298, // index 66 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
299, // index 67 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
303, // index 68 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
304, // index 69 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
312, // index 70 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
313, // index 71 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
318, // index 72 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
319, // index 73 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
323, // index 74 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
324, // index 75 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
328, // index 76 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
332, // index 77 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
336, // index 78 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
340, // index 79 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
341, // index 80 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
345, // index 81 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
346, // index 82 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
350, // index 83 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
351, // index 84 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
354, // index 85 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
355, // index 86 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
359, // index 87 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
360, // index 88 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
364, // index 89 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
365, // index 90 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
369, // index 91 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
370, // index 92 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
374, // index 93 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
378, // index 94 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
382, // index 95 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
383, // index 96 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
389, // index 97 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
390, // index 98 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
397, // index 99 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
398, // index 100 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
404, // index 101 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
405, // index 102 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
412, // index 103 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
414, // index 104 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
418, // index 105 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
425, // index 106 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
432, // index 107 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
437, // index 108 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
440, // index 109 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
443, // index 110 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
448, // index 111 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
453, // index 112 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
458, // index 113 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
463, // index 114 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
470, // index 115 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
471, // index 116 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
475, // index 117 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
476, // index 118 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
480, // index 119 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
481, // index 120 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
485, // index 121 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
486, // index 122 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
489, // index 123 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
490, // index 124 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
494, // index 125 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
495, // index 126 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
499, // index 127 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
500, // index 128 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
504, // index 129 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
505, // index 130 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
509, // index 131 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
510, // index 132 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
515, // index 133 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
516, // index 134 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
520, // index 135 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
521, // index 136 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
529, // index 137 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
530, // index 138 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
536 // index 139 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_sara_grammar [58] = {
0, // at 0 : <start_symbol>
1, // at 1 : <component>
19, // at 2 : <io_bool_expression>
20, // at 3 : <io_and_expression>
21, // at 4 : <io_primary>
27, // at 5 : <definition_expression>
28, // at 6 : <definition_expression_term>
29, // at 7 : <modalcompadd_definition>
30, // at 8 : <modalcompsub_definition>
31, // at 9 : <definition_expression_factor>
33, // at 10 : <explicit_automaton>
34, // at 11 : <select_sara_5F_parser_0>
36, // at 12 : <select_sara_5F_parser_1>
38, // at 13 : <select_sara_5F_parser_2>
40, // at 14 : <select_sara_5F_parser_3>
42, // at 15 : <select_sara_5F_parser_4>
44, // at 16 : <select_sara_5F_parser_5>
46, // at 17 : <select_sara_5F_parser_6>
48, // at 18 : <select_sara_5F_parser_7>
50, // at 19 : <select_sara_5F_parser_8>
52, // at 20 : <select_sara_5F_parser_9>
54, // at 21 : <select_sara_5F_parser_10>
56, // at 22 : <select_sara_5F_parser_11>
58, // at 23 : <select_sara_5F_parser_12>
60, // at 24 : <select_sara_5F_parser_13>
62, // at 25 : <select_sara_5F_parser_14>
64, // at 26 : <select_sara_5F_parser_15>
66, // at 27 : <select_sara_5F_parser_16>
68, // at 28 : <select_sara_5F_parser_17>
70, // at 29 : <select_sara_5F_parser_18>
72, // at 30 : <select_sara_5F_parser_19>
74, // at 31 : <select_sara_5F_parser_20>
79, // at 32 : <select_sara_5F_parser_21>
81, // at 33 : <select_sara_5F_parser_22>
83, // at 34 : <select_sara_5F_parser_23>
85, // at 35 : <select_sara_5F_parser_24>
87, // at 36 : <select_sara_5F_parser_25>
89, // at 37 : <select_sara_5F_parser_26>
91, // at 38 : <select_sara_5F_parser_27>
95, // at 39 : <select_sara_5F_parser_28>
97, // at 40 : <select_sara_5F_parser_29>
99, // at 41 : <select_sara_5F_parser_30>
101, // at 42 : <select_sara_5F_parser_31>
103, // at 43 : <select_sara_5F_parser_32>
115, // at 44 : <select_sara_5F_parser_33>
117, // at 45 : <select_sara_5F_parser_34>
119, // at 46 : <select_sara_5F_parser_35>
121, // at 47 : <select_sara_5F_parser_36>
123, // at 48 : <select_sara_5F_parser_37>
125, // at 49 : <select_sara_5F_parser_38>
127, // at 50 : <select_sara_5F_parser_39>
129, // at 51 : <select_sara_5F_parser_40>
131, // at 52 : <select_sara_5F_parser_41>
133, // at 53 : <select_sara_5F_parser_42>
135, // at 54 : <select_sara_5F_parser_43>
137, // at 55 : <select_sara_5F_parser_44>
139, // at 56 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_sara_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
// At index 1 : <component>
C_Lexique_sara_5F_scanner::kToken_state, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_trans, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken_first, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken_last, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken_check, -1, // Choice 5
C_Lexique_sara_5F_scanner::kToken_checkidentical, -1, // Choice 6
C_Lexique_sara_5F_scanner::kToken_checkbool, -1, // Choice 7
C_Lexique_sara_5F_scanner::kToken_use_5F_and, -1, // Choice 8
C_Lexique_sara_5F_scanner::kToken_use_5F_ite, -1, // Choice 9
C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite, -1, // Choice 10
C_Lexique_sara_5F_scanner::kToken_and_5F_cache, -1, // Choice 11
C_Lexique_sara_5F_scanner::kToken_ite_5F_cache, -1, // Choice 12
C_Lexique_sara_5F_scanner::kToken_map, -1, // Choice 13
C_Lexique_sara_5F_scanner::kToken_bdd, -1, // Choice 14
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 15
C_Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 16
C_Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 17
C_Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 18
  -1,
// At index 38 : <io_bool_expression> only one production, no choice
  -1,
// At index 39 : <io_and_expression> only one production, no choice
  -1,
// At index 40 : <io_primary>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken_false, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken_true, -1, // Choice 5
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 6
  -1,
// At index 53 : <definition_expression> only one production, no choice
  -1,
// At index 54 : <definition_expression_term> only one production, no choice
  -1,
// At index 55 : <modalcompadd_definition> only one production, no choice
  -1,
// At index 56 : <modalcompsub_definition> only one production, no choice
  -1,
// At index 57 : <definition_expression_factor>
C_Lexique_sara_5F_scanner::kToken_trans, C_Lexique_sara_5F_scanner::kToken__28_, C_Lexique_sara_5F_scanner::kToken_modalcompadd, C_Lexique_sara_5F_scanner::kToken_modalcompsub, C_Lexique_sara_5F_scanner::kToken__7E_, C_Lexique_sara_5F_scanner::kToken__3F_, C_Lexique_sara_5F_scanner::kToken__21_, C_Lexique_sara_5F_scanner::kToken_bool, C_Lexique_sara_5F_scanner::kToken__40_, C_Lexique_sara_5F_scanner::kToken_nofirst, C_Lexique_sara_5F_scanner::kToken_nolast, C_Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 2
  -1,
// At index 73 : <explicit_automaton> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 74 : <select_sara_5F_parser_0>
C_Lexique_sara_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_state, C_Lexique_sara_5F_scanner::kToken_machineIdf, C_Lexique_sara_5F_scanner::kToken_trans, C_Lexique_sara_5F_scanner::kToken_first, C_Lexique_sara_5F_scanner::kToken_last, C_Lexique_sara_5F_scanner::kToken_check, C_Lexique_sara_5F_scanner::kToken_checkidentical, C_Lexique_sara_5F_scanner::kToken_checkbool, C_Lexique_sara_5F_scanner::kToken_use_5F_and, C_Lexique_sara_5F_scanner::kToken_use_5F_ite, C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite, C_Lexique_sara_5F_scanner::kToken_and_5F_cache, C_Lexique_sara_5F_scanner::kToken_ite_5F_cache, C_Lexique_sara_5F_scanner::kToken_map, C_Lexique_sara_5F_scanner::kToken_bdd, C_Lexique_sara_5F_scanner::kToken_modalcompadd, C_Lexique_sara_5F_scanner::kToken_modalcompsub, C_Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 2
  -1,
// At index 96 : <select_sara_5F_parser_1>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 101 : <select_sara_5F_parser_2>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 106 : <select_sara_5F_parser_3>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 111 : <select_sara_5F_parser_4>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 116 : <select_sara_5F_parser_5>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 121 : <select_sara_5F_parser_6>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 126 : <select_sara_5F_parser_7>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 131 : <select_sara_5F_parser_8>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 136 : <select_sara_5F_parser_9>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 141 : <select_sara_5F_parser_10>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 146 : <select_sara_5F_parser_11>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 151 : <select_sara_5F_parser_12>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 156 : <select_sara_5F_parser_13>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 161 : <select_sara_5F_parser_14>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 166 : <select_sara_5F_parser_15>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 171 : <select_sara_5F_parser_16>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 176 : <select_sara_5F_parser_17>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_literal_5F_string, -1, // Choice 2
  -1,
// At index 181 : <select_sara_5F_parser_18>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 186 : <select_sara_5F_parser_19>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 192 : <select_sara_5F_parser_20>
C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__7B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_to, C_Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__5E_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken__2D__3E_, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken__3D_, -1, // Choice 5
  -1,
// At index 207 : <select_sara_5F_parser_21>
C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__7B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken__7C_, C_Lexique_sara_5F_scanner::kToken__5E_, C_Lexique_sara_5F_scanner::kToken__2D__3E_, C_Lexique_sara_5F_scanner::kToken__3D_, C_Lexique_sara_5F_scanner::kToken_to, C_Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 220 : <select_sara_5F_parser_22>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 225 : <select_sara_5F_parser_23>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 230 : <select_sara_5F_parser_24>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 235 : <select_sara_5F_parser_25>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 240 : <select_sara_5F_parser_26>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 2
  -1,
// At index 246 : <select_sara_5F_parser_27>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__2A__2A_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken__7C__7C_, -1, // Choice 4
  -1,
// At index 257 : <select_sara_5F_parser_28>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_include, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 264 : <select_sara_5F_parser_29>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_include, -1, // Choice 2
  -1,
// At index 270 : <select_sara_5F_parser_30>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 277 : <select_sara_5F_parser_31>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 2
  -1,
// At index 283 : <select_sara_5F_parser_32>
C_Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__3F_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken__21_, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken_bool, -1, // Choice 5
C_Lexique_sara_5F_scanner::kToken__40_, -1, // Choice 6
C_Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 7
C_Lexique_sara_5F_scanner::kToken_nofirst, -1, // Choice 8
C_Lexique_sara_5F_scanner::kToken_nolast, -1, // Choice 9
C_Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 10
C_Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 11
C_Lexique_sara_5F_scanner::kToken_trans, -1, // Choice 12
  -1,
// At index 308 : <select_sara_5F_parser_33>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 313 : <select_sara_5F_parser_34>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 318 : <select_sara_5F_parser_35>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 323 : <select_sara_5F_parser_36>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 328 : <select_sara_5F_parser_37>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 333 : <select_sara_5F_parser_38>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 338 : <select_sara_5F_parser_39>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 343 : <select_sara_5F_parser_40>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 348 : <select_sara_5F_parser_41>
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_last, -1, // Choice 2
  -1,
// At index 353 : <select_sara_5F_parser_42>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 358 : <select_sara_5F_parser_43>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 363 : <select_sara_5F_parser_44>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_machineIdf, C_Lexique_sara_5F_scanner::kToken__28_, C_Lexique_sara_5F_scanner::kToken_identifier, C_Lexique_sara_5F_scanner::kToken__7E_, C_Lexique_sara_5F_scanner::kToken_false, C_Lexique_sara_5F_scanner::kToken_true, -1, // Choice 2
  -1,
// At index 373 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_sara_grammar [58] = {
0, // at 0 : <start_symbol>
1, // at 1 : <component>
38, // at 2 : <io_bool_expression>
39, // at 3 : <io_and_expression>
40, // at 4 : <io_primary>
53, // at 5 : <definition_expression>
54, // at 6 : <definition_expression_term>
55, // at 7 : <modalcompadd_definition>
56, // at 8 : <modalcompsub_definition>
57, // at 9 : <definition_expression_factor>
73, // at 10 : <explicit_automaton>
74, // at 11 : <select_sara_5F_parser_0>
96, // at 12 : <select_sara_5F_parser_1>
101, // at 13 : <select_sara_5F_parser_2>
106, // at 14 : <select_sara_5F_parser_3>
111, // at 15 : <select_sara_5F_parser_4>
116, // at 16 : <select_sara_5F_parser_5>
121, // at 17 : <select_sara_5F_parser_6>
126, // at 18 : <select_sara_5F_parser_7>
131, // at 19 : <select_sara_5F_parser_8>
136, // at 20 : <select_sara_5F_parser_9>
141, // at 21 : <select_sara_5F_parser_10>
146, // at 22 : <select_sara_5F_parser_11>
151, // at 23 : <select_sara_5F_parser_12>
156, // at 24 : <select_sara_5F_parser_13>
161, // at 25 : <select_sara_5F_parser_14>
166, // at 26 : <select_sara_5F_parser_15>
171, // at 27 : <select_sara_5F_parser_16>
176, // at 28 : <select_sara_5F_parser_17>
181, // at 29 : <select_sara_5F_parser_18>
186, // at 30 : <select_sara_5F_parser_19>
192, // at 31 : <select_sara_5F_parser_20>
207, // at 32 : <select_sara_5F_parser_21>
220, // at 33 : <select_sara_5F_parser_22>
225, // at 34 : <select_sara_5F_parser_23>
230, // at 35 : <select_sara_5F_parser_24>
235, // at 36 : <select_sara_5F_parser_25>
240, // at 37 : <select_sara_5F_parser_26>
246, // at 38 : <select_sara_5F_parser_27>
257, // at 39 : <select_sara_5F_parser_28>
264, // at 40 : <select_sara_5F_parser_29>
270, // at 41 : <select_sara_5F_parser_30>
277, // at 42 : <select_sara_5F_parser_31>
283, // at 43 : <select_sara_5F_parser_32>
308, // at 44 : <select_sara_5F_parser_33>
313, // at 45 : <select_sara_5F_parser_34>
318, // at 46 : <select_sara_5F_parser_35>
323, // at 47 : <select_sara_5F_parser_36>
328, // at 48 : <select_sara_5F_parser_37>
333, // at 49 : <select_sara_5F_parser_38>
338, // at 50 : <select_sara_5F_parser_39>
343, // at 51 : <select_sara_5F_parser_40>
348, // at 52 : <select_sara_5F_parser_41>
353, // at 53 : <select_sara_5F_parser_42>
358, // at 54 : <select_sara_5F_parser_43>
363, // at 55 : <select_sara_5F_parser_44>
373, // at 56 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     'start_symbol' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_ (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_(inLexique) ;
}

void cGrammar_sara_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_sara_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_sara_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_sara_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 536) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Grammar start symbol implementation                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_sara_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                      gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 536) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_sara_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_sara_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 536) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_sara_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      'component' non terminal implementation                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_component_parse (C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_component_i1_parse(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_component_i2_parse(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_component_i3_parse(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_component_i4_parse(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_component_i5_parse(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_component_i6_parse(inLexique) ;
    break ;
  case 7 :
    rule_sara_5F_parser_component_i7_parse(inLexique) ;
    break ;
  case 8 :
    rule_sara_5F_parser_component_i8_parse(inLexique) ;
    break ;
  case 9 :
    rule_sara_5F_parser_component_i9_parse(inLexique) ;
    break ;
  case 10 :
    rule_sara_5F_parser_component_i10_parse(inLexique) ;
    break ;
  case 11 :
    rule_sara_5F_parser_component_i11_parse(inLexique) ;
    break ;
  case 12 :
    rule_sara_5F_parser_component_i12_parse(inLexique) ;
    break ;
  case 13 :
    rule_sara_5F_parser_component_i13_parse(inLexique) ;
    break ;
  case 14 :
    rule_sara_5F_parser_component_i14_parse(inLexique) ;
    break ;
  case 15 :
    rule_sara_5F_parser_component_i15_parse(inLexique) ;
    break ;
  case 16 :
    rule_sara_5F_parser_component_i16_parse(inLexique) ;
    break ;
  case 17 :
    rule_sara_5F_parser_component_i17_parse(inLexique) ;
    break ;
  case 18 :
    rule_sara_5F_parser_component_i18_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_component_ (GALGAS_semanticContext & parameter_1,
                                C_Lexique_sara_5F_scanner * inLexique) {
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
  case 13 :
    rule_sara_5F_parser_component_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
    rule_sara_5F_parser_component_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
    rule_sara_5F_parser_component_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
    rule_sara_5F_parser_component_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
    rule_sara_5F_parser_component_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
    rule_sara_5F_parser_component_i18_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'io_bool_expression' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i19_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_boolExpression & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i19_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'io_and_expression' non terminal implementation                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i20_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_boolExpression & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i20_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      'io_primary' non terminal implementation                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_primary_parse (C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_io_5F_primary_i21_parse(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i22_parse(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i23_parse(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i24_parse(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i25_parse(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i26_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_io_5F_primary_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_boolExpression & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_io_5F_primary_i21_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i22_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i23_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i24_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i25_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i26_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                'definition_expression' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i27_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i27_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'definition_expression_term' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i28_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i28_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'modalcompadd_definition' non terminal implementation                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i29_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_M_5F_modesMap & parameter_3,
                                GALGAS_ListForModes & parameter_4,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i29_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'modalcompsub_definition' non terminal implementation                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i30_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_M_5F_modesMap & parameter_3,
                                GALGAS_ListForModes & parameter_4,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i30_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             'definition_expression_factor' non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_parse (C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_parse(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'explicit_automaton' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i33_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i33_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_0' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_0 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_1' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_1 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_2' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_2 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_3' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_3 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_4' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_4 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_5' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_5 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_6' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_6 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_7' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_7 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_8' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_8 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_9' added non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_9 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_10' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_10 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_11' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_11 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_12' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_12 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_13' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_13 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_14' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_14 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_15' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_15 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_16' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_16 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_17' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_17 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_18' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_18 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_19' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_19 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_20' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_20 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_21' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_21 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_22' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_22 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_23' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_23 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_24' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_24 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_25' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_25 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_26' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_26 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_27' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_27 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_28' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_28 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_29' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_29 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_30' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_30 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_31' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_31 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_32' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_32 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_33' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_33 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_34' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_34 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_35' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_35 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_36' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_36 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_37' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_37 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_38' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_38 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_39' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_39 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_40' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_40 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_41' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_41 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_42' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_42 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_43' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_43 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'select_sara_5F_parser_44' added non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_44 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvalues ("sara_cli_options",
                                         "displayBDDvalues",
                                         118,
                                         "display-bdd-values",
                                         "displays values for every BDD") ;

C_BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvaluesCount ("sara_cli_options",
                                         "displayBDDvaluesCount",
                                         99,
                                         "display-bdd-values-count",
                                         "displays values count for every BDD") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression::GALGAS_AC_5F_boolExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression::GALGAS_AC_5F_boolExpression (const cPtr_AC_5F_boolExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_boolExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @AC_boolExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_AC_5F_boolExpression::cPtr_AC_5F_boolExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @AC_boolExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_boolExpression ("AC_boolExpression",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_AC_5F_boolExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_boolExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_AC_5F_boolExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_boolExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_VariableExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_VariableExpression * p = (const cPtr_C_5F_VariableExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInputVarIndex.objectCompare (p->mAttribute_mInputVarIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_VariableExpression::GALGAS_C_5F_VariableExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_VariableExpression::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_VariableExpression::GALGAS_C_5F_VariableExpression (const cPtr_C_5F_VariableExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_VariableExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_VariableExpression GALGAS_C_5F_VariableExpression::constructor_new (const GALGAS_uint & inAttribute_mInputVarIndex
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_VariableExpression result ;
  if (inAttribute_mInputVarIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_VariableExpression (inAttribute_mInputVarIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_VariableExpression::getter_mInputVarIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_VariableExpression * p = (const cPtr_C_5F_VariableExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
    result = p->mAttribute_mInputVarIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_VariableExpression::getter_mInputVarIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputVarIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @C_VariableExpression class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_VariableExpression::cPtr_C_5F_VariableExpression (const GALGAS_uint & in_mInputVarIndex
                                                            COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mInputVarIndex (in_mInputVarIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_VariableExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

void cPtr_C_5F_VariableExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@C_VariableExpression:" ;
  mAttribute_mInputVarIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_VariableExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_VariableExpression (mAttribute_mInputVarIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @C_VariableExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_VariableExpression ("C_VariableExpression",
                                                & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_VariableExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_VariableExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_VariableExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_andExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_andExpression * p = (const cPtr_C_5F_andExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_andExpression::GALGAS_C_5F_andExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_andExpression::GALGAS_C_5F_andExpression (const cPtr_C_5F_andExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_andExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_andExpression GALGAS_C_5F_andExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_andExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_andExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_andExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_andExpression * p = (const cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_andExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_andExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_andExpression * p = (const cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_andExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @C_andExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_andExpression::cPtr_C_5F_andExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_andExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression ;
}

void cPtr_C_5F_andExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_andExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_andExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_andExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @C_andExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_andExpression ("C_andExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_andExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_equalExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_equalExpression * p = (const cPtr_C_5F_equalExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_equalExpression::GALGAS_C_5F_equalExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_equalExpression::GALGAS_C_5F_equalExpression (const cPtr_C_5F_equalExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_equalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_equalExpression GALGAS_C_5F_equalExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                          const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_equalExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_equalExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_equalExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_equalExpression * p = (const cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_equalExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_equalExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_equalExpression * p = (const cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_equalExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @C_equalExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_equalExpression::cPtr_C_5F_equalExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                      const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_equalExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression ;
}

void cPtr_C_5F_equalExpression::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@C_equalExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_equalExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_equalExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @C_equalExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_equalExpression ("C_equalExpression",
                                             & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_equalExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_falseExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_falseExpression::GALGAS_C_5F_falseExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_falseExpression::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_falseExpression::GALGAS_C_5F_falseExpression (const cPtr_C_5F_falseExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_falseExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_falseExpression GALGAS_C_5F_falseExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_C_5F_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_falseExpression (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @C_falseExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_falseExpression::cPtr_C_5F_falseExpression (LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

void cPtr_C_5F_falseExpression::description (C_String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString << "[@C_falseExpression]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_falseExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_falseExpression (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @C_falseExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_falseExpression ("C_falseExpression",
                                             & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_falseExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_impliesExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_impliesExpression * p = (const cPtr_C_5F_impliesExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_impliesExpression::GALGAS_C_5F_impliesExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_impliesExpression::GALGAS_C_5F_impliesExpression (const cPtr_C_5F_impliesExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_impliesExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_impliesExpression GALGAS_C_5F_impliesExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                              const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_impliesExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_impliesExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_impliesExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_impliesExpression * p = (const cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_impliesExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_impliesExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_impliesExpression * p = (const cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_impliesExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @C_impliesExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_impliesExpression::cPtr_C_5F_impliesExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                          const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_impliesExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression ;
}

void cPtr_C_5F_impliesExpression::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@C_impliesExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_impliesExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_impliesExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_impliesExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_impliesExpression ("C_impliesExpression",
                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_impliesExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_importBoolMachine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndexOfImportedMachine.objectCompare (p->mAttribute_mIndexOfImportedMachine) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorLocation.objectCompare (p->mAttribute_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTranslationVector.objectCompare (p->mAttribute_mTranslationVector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_importBoolMachine::objectCompare (const GALGAS_C_5F_importBoolMachine & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importBoolMachine::GALGAS_C_5F_importBoolMachine (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importBoolMachine GALGAS_C_5F_importBoolMachine::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_importBoolMachine::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_L_5F_translationVector::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importBoolMachine::GALGAS_C_5F_importBoolMachine (const cPtr_C_5F_importBoolMachine * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importBoolMachine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importBoolMachine GALGAS_C_5F_importBoolMachine::constructor_new (const GALGAS_uint & inAttribute_mIndexOfImportedMachine,
                                                                              const GALGAS_location & inAttribute_mErrorLocation,
                                                                              const GALGAS_L_5F_translationVector & inAttribute_mTranslationVector
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importBoolMachine result ;
  if (inAttribute_mIndexOfImportedMachine.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mTranslationVector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_importBoolMachine (inAttribute_mIndexOfImportedMachine, inAttribute_mErrorLocation, inAttribute_mTranslationVector COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_importBoolMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    result = p->mAttribute_mIndexOfImportedMachine ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_importBoolMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexOfImportedMachine ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_C_5F_importBoolMachine::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    result = p->mAttribute_mErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_C_5F_importBoolMachine::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector GALGAS_C_5F_importBoolMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    result = p->mAttribute_mTranslationVector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector cPtr_C_5F_importBoolMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTranslationVector ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @C_importBoolMachine class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_importBoolMachine::cPtr_C_5F_importBoolMachine (const GALGAS_uint & in_mIndexOfImportedMachine,
                                                          const GALGAS_location & in_mErrorLocation,
                                                          const GALGAS_L_5F_translationVector & in_mTranslationVector
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mIndexOfImportedMachine (in_mIndexOfImportedMachine),
mAttribute_mErrorLocation (in_mErrorLocation),
mAttribute_mTranslationVector (in_mTranslationVector) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_importBoolMachine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;
}

void cPtr_C_5F_importBoolMachine::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@C_importBoolMachine:" ;
  mAttribute_mIndexOfImportedMachine.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTranslationVector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_importBoolMachine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_importBoolMachine (mAttribute_mIndexOfImportedMachine, mAttribute_mErrorLocation, mAttribute_mTranslationVector COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_importBoolMachine type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importBoolMachine ("C_importBoolMachine",
                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_importBoolMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_importBoolMachine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importBoolMachine (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importBoolMachine GALGAS_C_5F_importBoolMachine::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importBoolMachine result ;
  const GALGAS_C_5F_importBoolMachine * p = (const GALGAS_C_5F_importBoolMachine *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_importBoolMachine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importBoolMachine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_notExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_notExpression * p = (const cPtr_C_5F_notExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_notExpression::GALGAS_C_5F_notExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_notExpression::GALGAS_C_5F_notExpression (const cPtr_C_5F_notExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_notExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_notExpression GALGAS_C_5F_notExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_notExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_notExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_notExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_notExpression * p = (const cPtr_C_5F_notExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_notExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @C_notExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_notExpression::cPtr_C_5F_notExpression (const GALGAS_AC_5F_boolExpression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_notExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

void cPtr_C_5F_notExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_notExpression:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_notExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_notExpression (mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @C_notExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_notExpression ("C_notExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_notExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_notExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_notExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_orExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_orExpression * p = (const cPtr_C_5F_orExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_orExpression::GALGAS_C_5F_orExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_orExpression::GALGAS_C_5F_orExpression (const cPtr_C_5F_orExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_orExpression GALGAS_C_5F_orExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                    const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_orExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_orExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orExpression * p = (const cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_orExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_orExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orExpression * p = (const cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_orExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @C_orExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_orExpression::cPtr_C_5F_orExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_orExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression ;
}

void cPtr_C_5F_orExpression::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@C_orExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_orExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_orExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @C_orExpression type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orExpression ("C_orExpression",
                                          & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_trueExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trueExpression::GALGAS_C_5F_trueExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_trueExpression::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trueExpression::GALGAS_C_5F_trueExpression (const cPtr_C_5F_trueExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trueExpression GALGAS_C_5F_trueExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_C_5F_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_trueExpression (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @C_trueExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_trueExpression::cPtr_C_5F_trueExpression (LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

void cPtr_C_5F_trueExpression::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "[@C_trueExpression]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_trueExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_trueExpression (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @C_trueExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trueExpression ("C_trueExpression",
                                            & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trueExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_xorExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_xorExpression * p = (const cPtr_C_5F_xorExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_xorExpression::GALGAS_C_5F_xorExpression (void) :
GALGAS_AC_5F_boolExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_xorExpression::GALGAS_C_5F_xorExpression (const cPtr_C_5F_xorExpression * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_xorExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_xorExpression GALGAS_C_5F_xorExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mLeftExpression,
                                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_xorExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_xorExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_xorExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_xorExpression * p = (const cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_xorExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_xorExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_xorExpression * p = (const cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_xorExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @C_xorExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_xorExpression::cPtr_C_5F_xorExpression (const GALGAS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GALGAS_AC_5F_boolExpression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_xorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression ;
}

void cPtr_C_5F_xorExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_xorExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_xorExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_xorExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @C_xorExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_xorExpression ("C_xorExpression",
                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_xorExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_job::GALGAS_AC_5F_job (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_job::GALGAS_AC_5F_job (const cPtr_AC_5F_job * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_job) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @AC_job class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_AC_5F_job::cPtr_AC_5F_job (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @AC_job type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_job ("AC_job",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_AC_5F_job::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_job ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_AC_5F_job::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_job (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_machineCheck::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineCheck * p = (const cPtr_C_5F_machineCheck *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex.objectCompare (p->mAttribute_mMachineIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCheckMachineIsBoolean.objectCompare (p->mAttribute_mCheckMachineIsBoolean) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_machineCheck::objectCompare (const GALGAS_C_5F_machineCheck & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheck::GALGAS_C_5F_machineCheck (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineCheck::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheck::GALGAS_C_5F_machineCheck (const cPtr_C_5F_machineCheck * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheck) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex,
                                                                    const GALGAS_bool & inAttribute_mCheckMachineIsBoolean
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck result ;
  if (inAttribute_mMachineIndex.isValid () && inAttribute_mCheckMachineIsBoolean.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheck (inAttribute_mMachineIndex, inAttribute_mCheckMachineIsBoolean COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineCheck::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheck * p = (const cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    result = p->mAttribute_mMachineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineCheck::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_C_5F_machineCheck::getter_mCheckMachineIsBoolean (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheck * p = (const cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    result = p->mAttribute_mCheckMachineIsBoolean ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_C_5F_machineCheck::getter_mCheckMachineIsBoolean (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCheckMachineIsBoolean ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @C_machineCheck class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_machineCheck::cPtr_C_5F_machineCheck (const GALGAS_uint & in_mMachineIndex,
                                                const GALGAS_bool & in_mCheckMachineIsBoolean
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineIndex (in_mMachineIndex),
mAttribute_mCheckMachineIsBoolean (in_mCheckMachineIsBoolean) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_machineCheck::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck ;
}

void cPtr_C_5F_machineCheck::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@C_machineCheck:" ;
  mAttribute_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCheckMachineIsBoolean.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_machineCheck::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineCheck (mAttribute_mMachineIndex, mAttribute_mCheckMachineIsBoolean COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @C_machineCheck type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheck ("C_machineCheck",
                                          & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheck::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_machineCheck::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheck (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck result ;
  const GALGAS_C_5F_machineCheck * p = (const GALGAS_C_5F_machineCheck *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineCheck *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheck", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_machineCheckIdentical::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineCheckIdentical * p = (const cPtr_C_5F_machineCheckIdentical *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex_31_.objectCompare (p->mAttribute_mMachineIndex_31_) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex_32_.objectCompare (p->mAttribute_mMachineIndex_32_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheckIdentical::GALGAS_C_5F_machineCheckIdentical (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineCheckIdentical::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                             GALGAS_uint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheckIdentical::GALGAS_C_5F_machineCheckIdentical (const cPtr_C_5F_machineCheckIdentical * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheckIdentical) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineCheckIdentical GALGAS_C_5F_machineCheckIdentical::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex_31_,
                                                                                      const GALGAS_uint & inAttribute_mMachineIndex_32_
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheckIdentical result ;
  if (inAttribute_mMachineIndex_31_.isValid () && inAttribute_mMachineIndex_32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheckIdentical (inAttribute_mMachineIndex_31_, inAttribute_mMachineIndex_32_ COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineCheckIdentical::getter_mMachineIndex_31_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheckIdentical * p = (const cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    result = p->mAttribute_mMachineIndex_31_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineCheckIdentical::getter_mMachineIndex_31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex_31_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineCheckIdentical::getter_mMachineIndex_32_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheckIdentical * p = (const cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    result = p->mAttribute_mMachineIndex_32_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineCheckIdentical::getter_mMachineIndex_32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex_32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @C_machineCheckIdentical class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_machineCheckIdentical::cPtr_C_5F_machineCheckIdentical (const GALGAS_uint & in_mMachineIndex_31_,
                                                                  const GALGAS_uint & in_mMachineIndex_32_
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineIndex_31_ (in_mMachineIndex_31_),
mAttribute_mMachineIndex_32_ (in_mMachineIndex_32_) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_machineCheckIdentical::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;
}

void cPtr_C_5F_machineCheckIdentical::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@C_machineCheckIdentical:" ;
  mAttribute_mMachineIndex_31_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMachineIndex_32_.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_machineCheckIdentical::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineCheckIdentical (mAttribute_mMachineIndex_31_, mAttribute_mMachineIndex_32_ COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_machineCheckIdentical type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ("C_machineCheckIdentical",
                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheckIdentical::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_machineCheckIdentical::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheckIdentical (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_machineComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineName.objectCompare (p->mAttribute_mMachineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex.objectCompare (p->mAttribute_mMachineIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputVariableCount.objectCompare (p->mAttribute_mInputVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputAndInternalVariableCount.objectCompare (p->mAttribute_mInputAndInternalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariablesMap.objectCompare (p->mAttribute_mVariablesMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameList.objectCompare (p->mAttribute_mNameList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefinition.objectCompare (p->mAttribute_mDefinition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_machineComponent::objectCompare (const GALGAS_C_5F_machineComponent & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineComponent::GALGAS_C_5F_machineComponent (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineComponent::GALGAS_C_5F_machineComponent (const cPtr_C_5F_machineComponent * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineComponent) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineComponent GALGAS_C_5F_machineComponent::constructor_new (const GALGAS_lstring & inAttribute_mMachineName,
                                                                            const GALGAS_uint & inAttribute_mMachineIndex,
                                                                            const GALGAS_uint & inAttribute_mInputVariableCount,
                                                                            const GALGAS_uint & inAttribute_mInputAndInternalVariableCount,
                                                                            const GALGAS_M_5F_variablesMap & inAttribute_mVariablesMap,
                                                                            const GALGAS_stringlist & inAttribute_mNameList,
                                                                            const GALGAS_AC_5F_machineDefinition & inAttribute_mDefinition
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineComponent result ;
  if (inAttribute_mMachineName.isValid () && inAttribute_mMachineIndex.isValid () && inAttribute_mInputVariableCount.isValid () && inAttribute_mInputAndInternalVariableCount.isValid () && inAttribute_mVariablesMap.isValid () && inAttribute_mNameList.isValid () && inAttribute_mDefinition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineComponent (inAttribute_mMachineName, inAttribute_mMachineIndex, inAttribute_mInputVariableCount, inAttribute_mInputAndInternalVariableCount, inAttribute_mVariablesMap, inAttribute_mNameList, inAttribute_mDefinition COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_C_5F_machineComponent::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mAttribute_mMachineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_C_5F_machineComponent::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mAttribute_mMachineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mAttribute_mInputVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mAttribute_mInputAndInternalVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputAndInternalVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap GALGAS_C_5F_machineComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mAttribute_mVariablesMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap cPtr_C_5F_machineComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariablesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_C_5F_machineComponent::getter_mNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mAttribute_mNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_C_5F_machineComponent::getter_mNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_machineComponent::getter_mDefinition (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mAttribute_mDefinition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_machineComponent::getter_mDefinition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @C_machineComponent class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_machineComponent::cPtr_C_5F_machineComponent (const GALGAS_lstring & in_mMachineName,
                                                        const GALGAS_uint & in_mMachineIndex,
                                                        const GALGAS_uint & in_mInputVariableCount,
                                                        const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                        const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                        const GALGAS_stringlist & in_mNameList,
                                                        const GALGAS_AC_5F_machineDefinition & in_mDefinition
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineName (in_mMachineName),
mAttribute_mMachineIndex (in_mMachineIndex),
mAttribute_mInputVariableCount (in_mInputVariableCount),
mAttribute_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mAttribute_mVariablesMap (in_mVariablesMap),
mAttribute_mNameList (in_mNameList),
mAttribute_mDefinition (in_mDefinition) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_machineComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent ;
}

void cPtr_C_5F_machineComponent::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@C_machineComponent:" ;
  mAttribute_mMachineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDefinition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_machineComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineComponent (mAttribute_mMachineName, mAttribute_mMachineIndex, mAttribute_mInputVariableCount, mAttribute_mInputAndInternalVariableCount, mAttribute_mVariablesMap, mAttribute_mNameList, mAttribute_mDefinition COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_machineComponent type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineComponent ("C_machineComponent",
                                              & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_machineComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_machineComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineComponent (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineComponent GALGAS_C_5F_machineComponent::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineComponent result ;
  const GALGAS_C_5F_machineComponent * p = (const GALGAS_C_5F_machineComponent *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

