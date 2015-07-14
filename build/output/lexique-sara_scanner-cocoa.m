//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-sara_scanner-cocoa.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Lexique_sara_scanner

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Replacements                                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Delimiters                                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_identifierString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_ulongValue = 0 ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) indexingDirectory {
  return @"" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    T I T L E S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Terminal Symbols as end of script in template mark                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Key words table 'keyWordList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const C_cocoa_lexique_table_entry ktable_for_sara_5F_scanner_keyWordList [28] = {
  {"to", sara_scanner_1_to},
  {"bdd", sara_scanner_1_bdd},
  {"map", sara_scanner_1_map},
  {"auto", sara_scanner_1_auto},
  {"bool", sara_scanner_1_bool},
  {"goto", sara_scanner_1_goto},
  {"last", sara_scanner_1_last},
  {"true", sara_scanner_1_true},
  {"check", sara_scanner_1_check},
  {"false", sara_scanner_1_false},
  {"first", sara_scanner_1_first},
  {"state", sara_scanner_1_state},
  {"trans", sara_scanner_1_trans},
  {"nolast", sara_scanner_1_nolast},
  {"display", sara_scanner_1_display},
  {"exclude", sara_scanner_1_exclude},
  {"include", sara_scanner_1_include},
  {"nofirst", sara_scanner_1_nofirst},
  {"use_and", sara_scanner_1_use_5F_and},
  {"use_ite", sara_scanner_1_use_5F_ite},
  {"scenario", sara_scanner_1_scenario},
  {"and_cache", sara_scanner_1_and_5F_cache},
  {"checkbool", sara_scanner_1_checkbool},
  {"ite_cache", sara_scanner_1_ite_5F_cache},
  {"use_and_ite", sara_scanner_1_use_5F_and_5F_ite},
  {"modalcompadd", sara_scanner_1_modalcompadd},
  {"modalcompsub", sara_scanner_1_modalcompsub},
  {"checkidentical", sara_scanner_1_checkidentical}
} ;

static NSInteger search_into_sara_5F_scanner_keyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_sara_5F_scanner_keyWordList, 28) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               P A R S E    L E X I C A L    T O K E N                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (void) parseLexicalTokenForLexicalColoring {
  mLoop = YES ;
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
    [mLexicalAttribute_identifierString setString:@""] ;
    mLexicalAttribute_ulongValue = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (mTokenCode == 0) {
        mTokenCode = search_into_sara_5F_scanner_keyWordList (mLexicalAttribute_identifierString) ;
      }
      if (mTokenCode == 0) {
        mTokenCode = sara_scanner_1_identifier ;
      }
    }else if (scanningOk && [self testForInputString:@"||" advance:YES]) {
      mTokenCode = sara_scanner_1__7C__7C_ ;
    }else if (scanningOk && [self testForInputString:@":=" advance:YES]) {
      mTokenCode = sara_scanner_1__3A__3D_ ;
    }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
      mTokenCode = sara_scanner_1__2D__3E_ ;
    }else if (scanningOk && [self testForInputString:@"**" advance:YES]) {
      mTokenCode = sara_scanner_1__2A__2A_ ;
    }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
      mTokenCode = sara_scanner_1__7E_ ;
    }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
      mTokenCode = sara_scanner_1__7D_ ;
    }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
      mTokenCode = sara_scanner_1__7C_ ;
    }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
      mTokenCode = sara_scanner_1__7B_ ;
    }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
      mTokenCode = sara_scanner_1__5E_ ;
    }else if (scanningOk && [self testForInputString:@"@" advance:YES]) {
      mTokenCode = sara_scanner_1__40_ ;
    }else if (scanningOk && [self testForInputString:@"\?" advance:YES]) {
      mTokenCode = sara_scanner_1__3F_ ;
    }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
      mTokenCode = sara_scanner_1__3D_ ;
    }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
      mTokenCode = sara_scanner_1__3B_ ;
    }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
      mTokenCode = sara_scanner_1__3A_ ;
    }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
      mTokenCode = sara_scanner_1__2C_ ;
    }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
      mTokenCode = sara_scanner_1__2B_ ;
    }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
      mTokenCode = sara_scanner_1__2A_ ;
    }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
      mTokenCode = sara_scanner_1__29_ ;
    }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
      mTokenCode = sara_scanner_1__28_ ;
    }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
      mTokenCode = sara_scanner_1__26_ ;
    }else if (scanningOk && [self testForInputString:@"!" advance:YES]) {
      mTokenCode = sara_scanner_1__21_ ;
    }else if (scanningOk && ([self testForInputChar:34])) {
      do {
        if (scanningOk && ([self testForInputChar:92])) {
          if (scanningOk && ([self testForInputChar:110])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, 10) ;
          }else if (scanningOk && ([self testForInputChar:92])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, 92) ;
          }else if (scanningOk && ([self testForInputChar:34])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, 34) ;
          }else{
            scanningOk = NO ;
          }
        }else if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:126])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, mPreviousChar) ;
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:34])) {
        mTokenCode = sara_scanner_1_literal_5F_string ;
      }else{
        scanningOk = NO ;
      }
    }else if (scanningOk && ([self testForInputChar:36])) {
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
      }else{
        scanningOk = NO ;
      }
      mTokenCode = sara_scanner_1_machineIdf ;
    }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
      scanner_cocoa_routine_enterDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_ulongValue) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_ulongValue) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      mTokenCode = sara_scanner_1_literal_5F_integer ;
    }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
    }else if (scanningOk && ([self testForInputChar:35])) {
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputFromChar:11 toChar:65533])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:10])) {
      }else{
        scanningOk = NO ;
      }
      mTokenCode = sara_scanner_1_comment ;
    }else if ([self testForInputChar:'\0']) { // End of source text ? 
      mTokenCode = sara_scanner_1_ ; // Empty string code
    }else{ // Unknown input character
      scanningOk = NO ;
      [self advance] ;
    }
  //--- Error ?
    if (! scanningOk) {
      mTokenCode = -1 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   T E R M I N A L    C O U N T                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) terminalVocabularyCount {
  return 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S T Y L E   C O U N T                                                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleCount {
  return 8 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                I S    T E M P L A T E    L E X I Q U E                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) isTemplateLexique {
  return NO ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [55] = {0,
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
  return kTerminalSymbolStyles [inTerminal] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [55] = {NO,
    YES /* sara_scanner_1_identifier */,
    NO /* sara_scanner_1_literal_5F_string */,
    YES /* sara_scanner_1_machineIdf */,
    YES /* sara_scanner_1_literal_5F_integer */,
    NO /* sara_scanner_1_comment */,
    YES /* sara_scanner_1_auto */,
    YES /* sara_scanner_1_state */,
    YES /* sara_scanner_1_first */,
    YES /* sara_scanner_1_last */,
    YES /* sara_scanner_1_goto */,
    YES /* sara_scanner_1_true */,
    YES /* sara_scanner_1_false */,
    YES /* sara_scanner_1_nofirst */,
    YES /* sara_scanner_1_nolast */,
    YES /* sara_scanner_1_modalcompadd */,
    YES /* sara_scanner_1_exclude */,
    YES /* sara_scanner_1_modalcompsub */,
    YES /* sara_scanner_1_include */,
    YES /* sara_scanner_1_to */,
    YES /* sara_scanner_1_scenario */,
    YES /* sara_scanner_1_trans */,
    YES /* sara_scanner_1_display */,
    YES /* sara_scanner_1_ite_5F_cache */,
    YES /* sara_scanner_1_and_5F_cache */,
    YES /* sara_scanner_1_map */,
    YES /* sara_scanner_1_bdd */,
    YES /* sara_scanner_1_bool */,
    YES /* sara_scanner_1_use_5F_and */,
    YES /* sara_scanner_1_use_5F_ite */,
    YES /* sara_scanner_1_use_5F_and_5F_ite */,
    YES /* sara_scanner_1_check */,
    YES /* sara_scanner_1_checkbool */,
    YES /* sara_scanner_1_checkidentical */,
    YES /* sara_scanner_1__2C_ */,
    YES /* sara_scanner_1__3B_ */,
    YES /* sara_scanner_1__3A_ */,
    YES /* sara_scanner_1__7B_ */,
    YES /* sara_scanner_1__7D_ */,
    YES /* sara_scanner_1__2D__3E_ */,
    YES /* sara_scanner_1__26_ */,
    YES /* sara_scanner_1__7E_ */,
    YES /* sara_scanner_1__3F_ */,
    YES /* sara_scanner_1__21_ */,
    YES /* sara_scanner_1__7C_ */,
    YES /* sara_scanner_1__7C__7C_ */,
    YES /* sara_scanner_1__2B_ */,
    YES /* sara_scanner_1__28_ */,
    YES /* sara_scanner_1__29_ */,
    YES /* sara_scanner_1__3A__3D_ */,
    YES /* sara_scanner_1__5E_ */,
    YES /* sara_scanner_1__3D_ */,
    YES /* sara_scanner_1__2A_ */,
    YES /* sara_scanner_1__40_ */,
    YES /* sara_scanner_1__2A__2A_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             S T Y L E   N A M E    F O R    I N D E X                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 8)) {
    NSString * kStyleArray [8] = {
      @"Default Style",
      @"Identifiers",
      @"Key words",
      @"Machine names",
      @"Delimitors",
      @"Integer constants",
      @"Character strings",
      @"Comments"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 8)) {
    NSString * kStyleArray [8] = {
      @"sara_scanner",
      @"sara_scanner-identifier",
      @"sara_scanner-keyWords",
      @"sara_scanner-machineNameStyle",
      @"sara_scanner-delimitors",
      @"sara_scanner-integerStyle",
      @"sara_scanner-stringStyle",
      @"sara_scanner-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         L E X I Q U E   I D E N T I F I E R                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) lexiqueIdentifier {
  return @"sara_scanner" ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


