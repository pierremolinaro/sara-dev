//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum {sara_scanner_1_,
  sara_scanner_1_identifier,
  sara_scanner_1_literal_5F_string,
  sara_scanner_1_machineIdf,
  sara_scanner_1_literal_5F_integer,
  sara_scanner_1_comment,
  sara_scanner_1_auto,
  sara_scanner_1_state,
  sara_scanner_1_first,
  sara_scanner_1_last,
  sara_scanner_1_goto,
  sara_scanner_1_true,
  sara_scanner_1_false,
  sara_scanner_1_nofirst,
  sara_scanner_1_nolast,
  sara_scanner_1_modalcompadd,
  sara_scanner_1_exclude,
  sara_scanner_1_modalcompsub,
  sara_scanner_1_include,
  sara_scanner_1_to,
  sara_scanner_1_scenario,
  sara_scanner_1_trans,
  sara_scanner_1_display,
  sara_scanner_1_ite_5F_cache,
  sara_scanner_1_and_5F_cache,
  sara_scanner_1_map,
  sara_scanner_1_bdd,
  sara_scanner_1_bool,
  sara_scanner_1_use_5F_and,
  sara_scanner_1_use_5F_ite,
  sara_scanner_1_use_5F_and_5F_ite,
  sara_scanner_1_check,
  sara_scanner_1_checkbool,
  sara_scanner_1_checkidentical,
  sara_scanner_1__2C_,
  sara_scanner_1__3B_,
  sara_scanner_1__3A_,
  sara_scanner_1__7B_,
  sara_scanner_1__7D_,
  sara_scanner_1__2D__3E_,
  sara_scanner_1__26_,
  sara_scanner_1__7E_,
  sara_scanner_1__3F_,
  sara_scanner_1__21_,
  sara_scanner_1__7C_,
  sara_scanner_1__7C__7C_,
  sara_scanner_1__2B_,
  sara_scanner_1__28_,
  sara_scanner_1__29_,
  sara_scanner_1__3A__3D_,
  sara_scanner_1__5E_,
  sara_scanner_1__3D_,
  sara_scanner_1__2A_,
  sara_scanner_1__40_,
  sara_scanner_1__2A__2A_
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        U N I C O D E    T E S T    F U N C T I O N S                                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Lexique_sara_scanner : OC_Lexique {
//--- Attributes
  @private NSMutableString * mLexicalAttribute_identifierString ;
  @private UInt32 mLexicalAttribute_ulongValue ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//---------------------------------------------------------------------------------------------------------------------*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

