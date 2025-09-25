//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//   LEXIQUE sara_scanner
//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gFont_sara_scanner = EBPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + sara_scanner_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gLineHeight_sara_scanner = EBPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + sara_scanner_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gColors_sara_scanner : [EBPreferenceProperty <NSColor>] = [
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner-identifier"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner-keyWords"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner-machineNameStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner-delimitors"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner-integerStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner-stringStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_sara_scanner-commentStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_sara_scanner_lexical_error"),
  EBPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_sara_scanner_template")
]

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gBoldStyle_sara_scanner : [EBPreferenceProperty <Bool>] = [
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner-identifier"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner-keyWords"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner-machineNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner-delimitors"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner-integerStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner-stringStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner-commentStyle"),
  EBPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_sara_scanner_lexical_error"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_sara_scanner_template")
]

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gItalicStyle_sara_scanner : [EBPreferenceProperty <Bool>] = [
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner-identifier"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner-keyWords"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner-machineNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner-delimitors"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner-integerStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner-stringStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner-commentStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner_lexical_error"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_sara_scanner_template")
]

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

let sara_scanner_1_ : UInt16 = 0
let sara_scanner_1_identifier : UInt16 = 1
let sara_scanner_1_literal_5F_string : UInt16 = 2
let sara_scanner_1_machineIdf : UInt16 = 3
let sara_scanner_1_literal_5F_integer : UInt16 = 4
let sara_scanner_1_comment : UInt16 = 5
let sara_scanner_1_auto : UInt16 = 6
let sara_scanner_1_state : UInt16 = 7
let sara_scanner_1_first : UInt16 = 8
let sara_scanner_1_last : UInt16 = 9
let sara_scanner_1_goto : UInt16 = 10
let sara_scanner_1_true : UInt16 = 11
let sara_scanner_1_false : UInt16 = 12
let sara_scanner_1_nofirst : UInt16 = 13
let sara_scanner_1_nolast : UInt16 = 14
let sara_scanner_1_modalcompadd : UInt16 = 15
let sara_scanner_1_exclude : UInt16 = 16
let sara_scanner_1_modalcompsub : UInt16 = 17
let sara_scanner_1_include : UInt16 = 18
let sara_scanner_1_to : UInt16 = 19
let sara_scanner_1_scenario : UInt16 = 20
let sara_scanner_1_trans : UInt16 = 21
let sara_scanner_1_display : UInt16 = 22
let sara_scanner_1_bdd : UInt16 = 23
let sara_scanner_1_bool : UInt16 = 24
let sara_scanner_1_map : UInt16 = 25
let sara_scanner_1_check : UInt16 = 26
let sara_scanner_1_checkbool : UInt16 = 27
let sara_scanner_1_checkidentical : UInt16 = 28
let sara_scanner_1__2C_ : UInt16 = 29
let sara_scanner_1__3B_ : UInt16 = 30
let sara_scanner_1__3A_ : UInt16 = 31
let sara_scanner_1__7B_ : UInt16 = 32
let sara_scanner_1__7D_ : UInt16 = 33
let sara_scanner_1__2D__3E_ : UInt16 = 34
let sara_scanner_1__26_ : UInt16 = 35
let sara_scanner_1__7E_ : UInt16 = 36
let sara_scanner_1__3F_ : UInt16 = 37
let sara_scanner_1__21_ : UInt16 = 38
let sara_scanner_1__7C_ : UInt16 = 39
let sara_scanner_1__7C__7C_ : UInt16 = 40
let sara_scanner_1__2B_ : UInt16 = 41
let sara_scanner_1__28_ : UInt16 = 42
let sara_scanner_1__29_ : UInt16 = 43
let sara_scanner_1__3A__3D_ : UInt16 = 44
let sara_scanner_1__5E_ : UInt16 = 45
let sara_scanner_1__3D_ : UInt16 = 46
let sara_scanner_1__2A_ : UInt16 = 47
let sara_scanner_1__40_ : UInt16 = 48
let sara_scanner_1__2A__2A_ : UInt16 = 49
let sara_scanner_2_ERROR : UInt16 = 50
let sara_scanner_2_TEMPLATE : UInt16 = 51

//--------------------------------------------------------------------------------------------------

func sara_scanner_lexiqueIdentifier () -> String {
  return "sara_scanner"
}

//--------------------------------------------------------------------------------------------------

func sara_scanner_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Identifiers", // 1
    "Key words", // 2
    "Machine names", // 3
    "Delimitors", // 4
    "Integer constants", // 5
    "Character strings", // 6
    "Comments", // 7
    "Lexical error", // 8
    "Template" // 9
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------

func sara_scanner_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "sara_scanner", // 0
    "sara_scanner-identifier", // 1
    "sara_scanner-keyWords", // 2
    "sara_scanner-machineNameStyle", // 3
    "sara_scanner-delimitors", // 4
    "sara_scanner-integerStyle", // 5
    "sara_scanner-stringStyle", // 6
    "sara_scanner-commentStyle", // 7
    "sara_scanner.ERROR", // 8
    "sara_scanner.TEMPLATE" // 9
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class SWIFT_Lexique_sara_scanner : SWIFT_Lexique {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_identifierString : String = ""
  private var mLexicalAttribute_ulongValue : UInt32 = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return sara_scanner_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 49
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBPreferenceProperty <NSFont> { return gFont_sara_scanner }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBPreferenceProperty <Int> { return gLineHeight_sara_scanner }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <NSColor> {
    return gColors_sara_scanner [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {
    return gBoldStyle_sara_scanner [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {
    return gItalicStyle_sara_scanner [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      1, // 1 : sara_scanner_1_identifier
      6, // 2 : sara_scanner_1_literal_5F_string
      3, // 3 : sara_scanner_1_machineIdf
      5, // 4 : sara_scanner_1_literal_5F_integer
      7, // 5 : sara_scanner_1_comment
      2, // 6 : sara_scanner_1_auto
      2, // 7 : sara_scanner_1_state
      2, // 8 : sara_scanner_1_first
      2, // 9 : sara_scanner_1_last
      2, // 10 : sara_scanner_1_goto
      2, // 11 : sara_scanner_1_true
      2, // 12 : sara_scanner_1_false
      2, // 13 : sara_scanner_1_nofirst
      2, // 14 : sara_scanner_1_nolast
      2, // 15 : sara_scanner_1_modalcompadd
      2, // 16 : sara_scanner_1_exclude
      2, // 17 : sara_scanner_1_modalcompsub
      2, // 18 : sara_scanner_1_include
      2, // 19 : sara_scanner_1_to
      2, // 20 : sara_scanner_1_scenario
      2, // 21 : sara_scanner_1_trans
      2, // 22 : sara_scanner_1_display
      2, // 23 : sara_scanner_1_bdd
      2, // 24 : sara_scanner_1_bool
      2, // 25 : sara_scanner_1_map
      2, // 26 : sara_scanner_1_check
      2, // 27 : sara_scanner_1_checkbool
      2, // 28 : sara_scanner_1_checkidentical
      4, // 29 : sara_scanner_1__2C_
      4, // 30 : sara_scanner_1__3B_
      4, // 31 : sara_scanner_1__3A_
      4, // 32 : sara_scanner_1__7B_
      4, // 33 : sara_scanner_1__7D_
      4, // 34 : sara_scanner_1__2D__3E_
      4, // 35 : sara_scanner_1__26_
      4, // 36 : sara_scanner_1__7E_
      4, // 37 : sara_scanner_1__3F_
      4, // 38 : sara_scanner_1__21_
      4, // 39 : sara_scanner_1__7C_
      4, // 40 : sara_scanner_1__7C__7C_
      4, // 41 : sara_scanner_1__2B_
      4, // 42 : sara_scanner_1__28_
      4, // 43 : sara_scanner_1__29_
      4, // 44 : sara_scanner_1__3A__3D_
      4, // 45 : sara_scanner_1__5E_
      4, // 46 : sara_scanner_1__3D_
      4, // 47 : sara_scanner_1__2A_
      4, // 48 : sara_scanner_1__40_
      4, // 49 : sara_scanner_1__2A__2A_
      8, // 50 : sara_scanner_2_ERROR
      9  // 51 : sara_scanner_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : sara_scanner_1_identifier
      false, // 2 : sara_scanner_1_literal_5F_string
      true, // 3 : sara_scanner_1_machineIdf
      true, // 4 : sara_scanner_1_literal_5F_integer
      false, // 5 : sara_scanner_1_comment
      true, // 6 : sara_scanner_1_auto
      true, // 7 : sara_scanner_1_state
      true, // 8 : sara_scanner_1_first
      true, // 9 : sara_scanner_1_last
      true, // 10 : sara_scanner_1_goto
      true, // 11 : sara_scanner_1_true
      true, // 12 : sara_scanner_1_false
      true, // 13 : sara_scanner_1_nofirst
      true, // 14 : sara_scanner_1_nolast
      true, // 15 : sara_scanner_1_modalcompadd
      true, // 16 : sara_scanner_1_exclude
      true, // 17 : sara_scanner_1_modalcompsub
      true, // 18 : sara_scanner_1_include
      true, // 19 : sara_scanner_1_to
      true, // 20 : sara_scanner_1_scenario
      true, // 21 : sara_scanner_1_trans
      true, // 22 : sara_scanner_1_display
      true, // 23 : sara_scanner_1_bdd
      true, // 24 : sara_scanner_1_bool
      true, // 25 : sara_scanner_1_map
      true, // 26 : sara_scanner_1_check
      true, // 27 : sara_scanner_1_checkbool
      true, // 28 : sara_scanner_1_checkidentical
      true, // 29 : sara_scanner_1__2C_
      true, // 30 : sara_scanner_1__3B_
      true, // 31 : sara_scanner_1__3A_
      true, // 32 : sara_scanner_1__7B_
      true, // 33 : sara_scanner_1__7D_
      true, // 34 : sara_scanner_1__2D__3E_
      true, // 35 : sara_scanner_1__26_
      true, // 36 : sara_scanner_1__7E_
      true, // 37 : sara_scanner_1__3F_
      true, // 38 : sara_scanner_1__21_
      true, // 39 : sara_scanner_1__7C_
      true, // 40 : sara_scanner_1__7C__7C_
      true, // 41 : sara_scanner_1__2B_
      true, // 42 : sara_scanner_1__28_
      true, // 43 : sara_scanner_1__29_
      true, // 44 : sara_scanner_1__3A__3D_
      true, // 45 : sara_scanner_1__5E_
      true, // 46 : sara_scanner_1__3D_
      true, // 47 : sara_scanner_1__2A_
      true, // 48 : sara_scanner_1__40_
      true, // 49 : sara_scanner_1__2A__2A_
      false, // 50 : sara_scanner_2_ERROR
      false  // 51 : sara_scanner_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {

    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 7
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return sara_scanner_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return sara_scanner_styleIdentifierFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_identifierString = ""
    self.mLexicalAttribute_ulongValue = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, self.previousChar)
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_sara_5F_scanner_keyWordList (mLexicalAttribute_identifierString) ;
      }
      if tokenCode == 0 {
        tokenCode = sara_scanner_1_identifier ;
      }
    }else if scanningOk && self.testForInputString ("||", advance: true) {
      tokenCode = sara_scanner_1__7C__7C_
    }else if scanningOk && self.testForInputString (":=", advance: true) {
      tokenCode = sara_scanner_1__3A__3D_
    }else if scanningOk && self.testForInputString ("->", advance: true) {
      tokenCode = sara_scanner_1__2D__3E_
    }else if scanningOk && self.testForInputString ("**", advance: true) {
      tokenCode = sara_scanner_1__2A__2A_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = sara_scanner_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = sara_scanner_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = sara_scanner_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = sara_scanner_1__7B_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = sara_scanner_1__5E_
    }else if scanningOk && self.testForInputString ("@", advance: true) {
      tokenCode = sara_scanner_1__40_
    }else if scanningOk && self.testForInputString ("?", advance: true) {
      tokenCode = sara_scanner_1__3F_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = sara_scanner_1__3D_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = sara_scanner_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = sara_scanner_1__3A_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = sara_scanner_1__2C_
    }else if scanningOk && self.testForInputString ("+", advance: true) {
      tokenCode = sara_scanner_1__2B_
    }else if scanningOk && self.testForInputString ("*", advance: true) {
      tokenCode = sara_scanner_1__2A_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = sara_scanner_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = sara_scanner_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = sara_scanner_1__26_
    }else if scanningOk && self.testForInputString ("!", advance: true) {
      tokenCode = sara_scanner_1__21_
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (92)) {
          if scanningOk && (self.testForInputChar (110)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, 10)
          }else if scanningOk && (self.testForInputChar (92)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, 92)
          }else if scanningOk && (self.testForInputChar (34)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, 34)
          }else{
            scanningOk = false
          }
        }else if scanningOk && (self.testForInputChar (32) || self.testForInputChar (33) || self.testForInputFromChar (35, toChar:126)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (34)) {
        tokenCode = sara_scanner_1_literal_5F_string
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputChar (36)) {
      if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, self.previousChar)
          if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      tokenCode = sara_scanner_1_machineIdf
    }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
      scanner_cocoa_routine_enterDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_ulongValue)
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_ulongValue)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = sara_scanner_1_literal_5F_integer
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if scanningOk && (self.testForInputChar (35)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputFromChar (11, toChar:65533)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (10)) {
      }else{
        scanningOk = false
      }
      tokenCode = sara_scanner_1_comment
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = sara_scanner_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = sara_scanner_2_TEMPLATE
      self.advance ()
    }
    return SWIFT_Token (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------

/* - (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_identifierString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_ulongValue = 0 ;
  }
  return self ;
} */

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------

/*

*/


//--------------------------------------------------------------------------------------------------
//
//             Key words table 'keyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_sara_5F_scanner_keyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "to" : sara_scanner_1_to,
    "bdd" : sara_scanner_1_bdd,
    "map" : sara_scanner_1_map,
    "auto" : sara_scanner_1_auto,
    "bool" : sara_scanner_1_bool,
    "goto" : sara_scanner_1_goto,
    "last" : sara_scanner_1_last,
    "true" : sara_scanner_1_true,
    "check" : sara_scanner_1_check,
    "false" : sara_scanner_1_false,
    "first" : sara_scanner_1_first,
    "state" : sara_scanner_1_state,
    "trans" : sara_scanner_1_trans,
    "nolast" : sara_scanner_1_nolast,
    "display" : sara_scanner_1_display,
    "exclude" : sara_scanner_1_exclude,
    "include" : sara_scanner_1_include,
    "nofirst" : sara_scanner_1_nofirst,
    "scenario" : sara_scanner_1_scenario,
    "checkbool" : sara_scanner_1_checkbool,
    "modalcompadd" : sara_scanner_1_modalcompadd,
    "modalcompsub" : sara_scanner_1_modalcompsub,
    "checkidentical" : sara_scanner_1_checkidentical
  ]
  return dictionary [inSearchedString, default: sara_scanner_1_]
}



//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


