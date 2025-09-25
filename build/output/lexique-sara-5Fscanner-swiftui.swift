//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE sara_scanner
//--------------------------------------------------------------------------------------------------

import SwiftUI
import AppKit

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_sara_scanner : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_sara_scanner")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_sara_scanner")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_sara_scanner")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_sara_scanner-identifier")
  private var mColorFor_identifier : Color = .black

  @AppStorage("BoldFor_sara_scanner-identifier")
  private var mBoldFor_identifier : Bool = false

  @AppStorage("ItalicFor_sara_scanner-identifier")
  private var mItalicFor_identifier : Bool = false

  @AppStorage("ColorFor_sara_scanner-keyWords")
  private var mColorFor_keyWords : Color = .black

  @AppStorage("BoldFor_sara_scanner-keyWords")
  private var mBoldFor_keyWords : Bool = false

  @AppStorage("ItalicFor_sara_scanner-keyWords")
  private var mItalicFor_keyWords : Bool = false

  @AppStorage("ColorFor_sara_scanner-machineNameStyle")
  private var mColorFor_machineNameStyle : Color = .black

  @AppStorage("BoldFor_sara_scanner-machineNameStyle")
  private var mBoldFor_machineNameStyle : Bool = false

  @AppStorage("ItalicFor_sara_scanner-machineNameStyle")
  private var mItalicFor_machineNameStyle : Bool = false

  @AppStorage("ColorFor_sara_scanner-delimitors")
  private var mColorFor_delimitors : Color = .black

  @AppStorage("BoldFor_sara_scanner-delimitors")
  private var mBoldFor_delimitors : Bool = false

  @AppStorage("ItalicFor_sara_scanner-delimitors")
  private var mItalicFor_delimitors : Bool = false

  @AppStorage("ColorFor_sara_scanner-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_sara_scanner-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_sara_scanner-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_sara_scanner-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_sara_scanner-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_sara_scanner-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_sara_scanner-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_sara_scanner-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_sara_scanner-commentStyle")
  private var mItalicFor_commentStyle : Bool = false


  @AppStorage("ColorFor_sara_scanner_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_sara_scanner_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_sara_scanner_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_sara_scanner_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_sara_scanner_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_sara_scanner_template")
  private var mItalicFor_template : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    Form {
      LabeledContent ("Font") { CustomFontPicker (fontBinding: self.$mFont) }
      Picker("Line Height", selection: self.$mLineHeight) {
        Text("1.0").tag(10)
        Text("1.1").tag(11)
        Text("1.2").tag(12)
        Text("1.5").tag(15)
        Text("1.7").tag(17)
        Text("2.0").tag(20)
      }.pickerStyle(.automatic)
      ColorPicker ("Default Color", selection: self.$mDefaultColor)
      LabeledContent ("Identifiers") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_identifier).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_identifier)
          Toggle ("Italic", isOn: self.$mItalicFor_identifier)
        }
      }
      LabeledContent ("Key words") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_keyWords).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_keyWords)
          Toggle ("Italic", isOn: self.$mItalicFor_keyWords)
        }
      }
      LabeledContent ("Machine names") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_machineNameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_machineNameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_machineNameStyle)
        }
      }
      LabeledContent ("Delimitors") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitors).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitors)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitors)
        }
      }
      LabeledContent ("Integer constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_integerStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_integerStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_integerStyle)
        }
      }
      LabeledContent ("Character strings") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_stringStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_stringStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_stringStyle)
        }
      }
      LabeledContent ("Comments") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Lexical Error") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_lexical_error).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_lexical_error)
          Toggle ("Italic", isOn: self.$mItalicFor_lexical_error)
        }
      }
      LabeledContent ("Template") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_template).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_template)
          Toggle ("Italic", isOn: self.$mItalicFor_template)
        }
      }
    }.padding (20)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

#Preview {
  SettingViewFor_sara_scanner ()
}

//--------------------------------------------------------------------------------------------------

final class ScannerFor_sara_scanner : SWIFT_Scanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [SWIFT_Token] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity,
                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    var result = inTextViewComputedRange
    switch inGranularity {
    case .selectByCharacter :
      ()
    case .selectByWord :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found, self.atomicSelectionFor (token: token.tokenCode) {
          result = tokenRange
        }
      }
    case .selectByParagraph :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found {
          result = tokenRange
        }
      }
    @unknown default:
      ()
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Scanner
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

  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  private var mLineHeight : Int = 12
  private var mDefaultColor : Color = .black
  private var mColorFor_identifier : Color = .black
  private var mBoldFor_identifier : Bool = false
  private var mItalicFor_identifier : Bool = false
  private var mColorFor_keyWords : Color = .black
  private var mBoldFor_keyWords : Bool = false
  private var mItalicFor_keyWords : Bool = false
  private var mColorFor_machineNameStyle : Color = .black
  private var mBoldFor_machineNameStyle : Bool = false
  private var mItalicFor_machineNameStyle : Bool = false
  private var mColorFor_delimitors : Color = .black
  private var mBoldFor_delimitors : Bool = false
  private var mItalicFor_delimitors : Bool = false
  private var mColorFor_integerStyle : Color = .black
  private var mBoldFor_integerStyle : Bool = false
  private var mItalicFor_integerStyle : Bool = false
  private var mColorFor_stringStyle : Color = .black
  private var mBoldFor_stringStyle : Bool = false
  private var mItalicFor_stringStyle : Bool = false
  private var mColorFor_commentStyle : Color = .black
  private var mBoldFor_commentStyle : Bool = false
  private var mItalicFor_commentStyle : Bool = false
  private var mColorFor_lexical_error : Color = .red
  private var mBoldFor_lexical_error : Bool = false
  private var mItalicFor_lexical_error : Bool = false
  private var mColorFor_template : Color = .gray
  private var mBoldFor_template : Bool = false
  private var mItalicFor_template : Bool = false
  private var mTokenAttributeArray = [[NSAttributedString.Key : Any]?] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_galgasScanner3"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_galgasScanner3"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner3"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner-identifier"), let v = Color (rawValue: s) {
      if self.mColorFor_identifier != v {
        self.mColorFor_identifier = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner-identifier") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner-identifier")
      if self.mBoldFor_identifier != v {
        self.mBoldFor_identifier = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner-identifier") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner-identifier")
      if self.mItalicFor_identifier != v {
        self.mItalicFor_identifier = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner-keyWords"), let v = Color (rawValue: s) {
      if self.mColorFor_keyWords != v {
        self.mColorFor_keyWords = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner-keyWords") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner-keyWords")
      if self.mBoldFor_keyWords != v {
        self.mBoldFor_keyWords = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner-keyWords") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner-keyWords")
      if self.mItalicFor_keyWords != v {
        self.mItalicFor_keyWords = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner-machineNameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_machineNameStyle != v {
        self.mColorFor_machineNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner-machineNameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner-machineNameStyle")
      if self.mBoldFor_machineNameStyle != v {
        self.mBoldFor_machineNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner-machineNameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner-machineNameStyle")
      if self.mItalicFor_machineNameStyle != v {
        self.mItalicFor_machineNameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner-delimitors"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitors != v {
        self.mColorFor_delimitors = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner-delimitors") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner-delimitors")
      if self.mBoldFor_delimitors != v {
        self.mBoldFor_delimitors = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner-delimitors") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner-delimitors")
      if self.mItalicFor_delimitors != v {
        self.mItalicFor_delimitors = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_sara_scanner_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_sara_scanner_template") != nil {
      let v = ud.bool (forKey: "BoldFor_sara_scanner_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_sara_scanner_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_sara_scanner_template")
      if self.mItalicFor_template != v {
        self.mItalicFor_template = v
        ioStyleDidChange = true
      }
    }
  //--- Build token attribute array
    if ioStyleDidChange {
      let fontManager = NSFontManager.shared
      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)
      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)
      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)
      self.mTokenAttributeArray.removeAll (keepingCapacity: true)
      var attributes = [NSAttributedString.Key : Any] ()
    //--- Attributes for identifier
      if self.mColorFor_identifier != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_identifier)
      }
      if self.mBoldFor_identifier && self.mItalicFor_identifier {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_identifier {
        attributes [.font] = boldFont
      }else if self.mItalicFor_identifier {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for keyWords
      if self.mColorFor_keyWords != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_keyWords)
      }
      if self.mBoldFor_keyWords && self.mItalicFor_keyWords {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_keyWords {
        attributes [.font] = boldFont
      }else if self.mItalicFor_keyWords {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for machineNameStyle
      if self.mColorFor_machineNameStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_machineNameStyle)
      }
      if self.mBoldFor_machineNameStyle && self.mItalicFor_machineNameStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_machineNameStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_machineNameStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for delimitors
      if self.mColorFor_delimitors != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_delimitors)
      }
      if self.mBoldFor_delimitors && self.mItalicFor_delimitors {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_delimitors {
        attributes [.font] = boldFont
      }else if self.mItalicFor_delimitors {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for integerStyle
      if self.mColorFor_integerStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_integerStyle)
      }
      if self.mBoldFor_integerStyle && self.mItalicFor_integerStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_integerStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_integerStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for stringStyle
      if self.mColorFor_stringStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_stringStyle)
      }
      if self.mBoldFor_stringStyle && self.mItalicFor_stringStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_stringStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_stringStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for commentStyle
      if self.mColorFor_commentStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_commentStyle)
      }
      if self.mBoldFor_commentStyle && self.mItalicFor_commentStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_commentStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_commentStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Lexical error
      if self.mColorFor_lexical_error != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)
      }
      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_lexical_error {
        attributes [.font] = boldFont
      }else if self.mItalicFor_lexical_error {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Template
      if self.mColorFor_template != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_template)
      }
      if self.mBoldFor_template && self.mItalicFor_template {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_template {
        attributes [.font] = boldFont
      }else if self.mItalicFor_template {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {
    if self.mDebug { Swift.print ("performLexicalColoringAfterUserDefaultChange") }
    let start = Date ()
    var styleDidChange = false
    self.updateTokenStyleArrays (&styleDidChange)
    if styleDidChange {
      let nsString = inTextStorage.string as NSString
      let fullRange = NSRange (location: 0, length: nsString.length)
    //---- Apply default attributes
      let tsDelegate : NSTextStorageDelegate? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      inTextStorage.font = defaultFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      inTextStorage.setAttributes (defaultAttributes, range: fullRange)
    //--- Apply styles
      for token in self.mTokenArray {
        let idx = Int (self.styleIndexFor (token: token.tokenCode))
        if idx > 0, let attributes = self.mTokenAttributeArray [idx - 1] {
          inTextStorage.addAttributes (attributes, range: token.range)
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  done: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                                   editedRange inEditedRange : NSRange,
                                                   changeInLength inDelta : Int) {
    if self.mDebug { Swift.print ("performLexicalAnalysisAndColoring \(inEditedRange), delta \(inDelta)") }
    let nsString = inTextStorage.string as NSString
  //---
    var savedTokenCount = 0
    var found = false
    while savedTokenCount < self.mTokenArray.count, !found {
      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {
        savedTokenCount += 1
      }else{
        found = true
      }
    }
    if self.mDebug { Swift.print ("  savedTokenCount \(savedTokenCount), currently \(self.mTokenArray.count) tokens") }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end: \(self.mTokenArray.count) tokens") }
  //--- Translater les tokens suivants
    var i = savedTokenCount + 1
    while i < self.mTokenArray.count {
      let token = self.mTokenArray [i]
      let newToken = SWIFT_Token (
        range: NSRange (location: token.range.location + inDelta, length: token.range.length),
        tokenCode: token.tokenCode,
        templateDelimiterIndex: token.templateDelimiterIndex
      )
      self.mTokenArray [i] = newToken
      i += 1
    }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end, after delta correction: \(self.mTokenArray.count) tokens") }
  //--- Perform lexical analysis
    let start = Date ()
    if savedTokenCount == 0 {
      self.resetScannerLocation (withString: nsString)
    }else{
      self.resetScanner (
        withString: nsString,
        location: self.mTokenArray [savedTokenCount-1].range.upperBound,
        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex
      )
    }
    if self.mDebug { Swift.print ("  Scanning start location: \(self.currentLocation)") }
    var stop = false
    var insertionIndex = savedTokenCount
    while self.currentLocation < nsString.length, !stop {
      let token : SWIFT_Token = self.parseLexicalTokenForLexicalColoring ()
      if token.tokenCode > 0 { // For eliminating separators
        if self.mVerboseDebug { Swift.print ("  -> new token \(token.range) '\(nsString.substring (with: token.range))'") }
      //--- Eliminate previous tokens before new token location
        if insertionIndex < self.mTokenArray.count,
              self.mTokenArray [insertionIndex] == token,
              token.range.location > inEditedRange.upperBound {
          if self.mVerboseDebug { Swift.print ("    stop at \(insertionIndex)") }
          stop = true
        }else{
          while insertionIndex < self.mTokenArray.count,
                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {
            if self.mVerboseDebug { Swift.print ("    remove token \(self.mTokenArray [insertionIndex].range) at \(insertionIndex)") }
            self.mTokenArray.remove (at: insertionIndex)
          }
          if insertionIndex == self.mTokenArray.count {
            if self.mVerboseDebug { Swift.print ("    append token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.append (token)
            insertionIndex += 1
          }else{
            if self.mVerboseDebug {  Swift.print ("    insert token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.insert (token, at: insertionIndex)
            insertionIndex += 1
          }
        }
      }
    }
    if self.mDebug { Swift.print ("  Lexical analysis time: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  //---- Apply default attributes
    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0) ? 0 : self.mTokenArray [savedTokenCount - 1].range.upperBound)
    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)
       ? nsString.length
       : self.mTokenArray [insertionIndex].range.upperBound
    )
    if self.mDebug { Swift.print ("  Attributes will change from char index \(modificationStart) to \(modificationEnd)") }
    let start2 = Date ()
    if modificationStart < modificationEnd {
      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)
      let tsDelegate : NSTextStorageDelegate? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      if self.mVerboseDebug { Swift.print ("Apply default attributes \(modifiedRange)") }
      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply styles
      var idx = 0
      stop = false
      while idx < self.mTokenArray.count, !stop { // Apply token styles
        let token = self.mTokenArray [idx]
        idx += 1
        if token.range.lowerBound >= modifiedRange.upperBound {
          stop = true
        }else if token.range.upperBound > modifiedRange.lowerBound {
          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))
          if styleIndex > 0, let attributes = self.mTokenAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
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
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_sara_5F_scanner_keyWordList : [String : UInt16] = [
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

fileprivate func search_into_sara_5F_scanner_keyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_sara_5F_scanner_keyWordList [inSearchedString, default: sara_scanner_1_]
}



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

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


