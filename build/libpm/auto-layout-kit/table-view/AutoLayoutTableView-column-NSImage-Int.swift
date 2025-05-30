//
//  AutoLayoutTableView-column-NSImage_int.swift
//  ElCanari
//
//  Created by Pierre Molinaro on 16/12/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

extension AutoLayoutTableView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func addColumn_NSImage_Int (valueGetterDelegate inGetterDelegate : @escaping (_ inRow : Int) -> (Int?, NSImage?),
                              sortDelegate inSortDelegate : Optional < (_ inAscending : Bool) -> Void>,
                              title inTitle : String,
                              minWidth inMinWidth : Int,
                              maxWidth inMaxWidth : Int,
                              headerAlignment inHeaderAlignment : NSTextAlignment,
                              contentAlignment inContentAlignment : NSTextAlignment) {
    let column = InternalImageIntValueTableColumn (
      sortDelegate: inSortDelegate,
      title: inTitle,
      minWidth: inMinWidth,
      maxWidth: inMaxWidth,
      headerAlignment: inHeaderAlignment,
      contentAlignment: inContentAlignment,
      valueGetterDelegate: inGetterDelegate
    )
  //--- Add Column
    self.appendTableColumn (column)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
// InternalImageIntValueTableColumn
//--------------------------------------------------------------------------------------------------

fileprivate final class InternalImageIntValueTableColumn : AutoLayoutTableColumn {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mValueGetterDelegate : (_ inRow : Int) -> (Int?, NSImage?)
  private let mNumberFormatter = NumberFormatter ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // INIT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (sortDelegate inSortDelegate : Optional < (_ inAscending : Bool) -> Void>,
        title inTitle : String,
        minWidth inMinWidth : Int,
        maxWidth inMaxWidth : Int,
        headerAlignment inHeaderAlignment : NSTextAlignment,
        contentAlignment inContentAlignment : NSTextAlignment,
        valueGetterDelegate inGetterDelegate : @escaping (_ inRow : Int) -> (Int?, NSImage?) ) {
    self.mValueGetterDelegate = inGetterDelegate
    super.init (
      sortDelegate: inSortDelegate,
      title: inTitle,
      minWidth: inMinWidth,
      maxWidth: inMaxWidth,
      headerAlignment: inHeaderAlignment,
      contentAlignment: inContentAlignment
    )
    self.isEditable = false
  //--- Configure number formatter
    self.mNumberFormatter.formatterBehavior = .behavior10_4
    self.mNumberFormatter.numberStyle = .decimal
    self.mNumberFormatter.localizesFormat = true
    self.mNumberFormatter.minimumFractionDigits = 0
    self.mNumberFormatter.maximumFractionDigits = 0
    self.mNumberFormatter.isLenient = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor override func configureTableCellView (forRowIndex inRowIndex : Int) -> NSView? {
    let value : (Int?, NSImage?) = self.mValueGetterDelegate (inRowIndex)

    let imageView = NSImageView (frame: .zero)
    imageView.image = value.1

    let textField = NSTextField (frame: .zero)
    textField.translatesAutoresizingMaskIntoConstraints = false
    textField.isBezeled = false
    textField.isBordered = false
    textField.drawsBackground = false
    textField.isEnabled = true
    textField.isEditable = false
    textField.cell?.sendsActionOnEndEditing = true // Send an action when focus is lost
//-- DO NOT CHANGE controlSize and font, it makes text field not editable (???)
//    textField.controlSize = self.mTableView.controlSize
//    textField.font = self.mTableView.font
    textField.formatter = self.mNumberFormatter
    textField.alignment = self.mContentAlignment
    if let v = value.0 {
      textField.integerValue = v
    }
    return imageView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

