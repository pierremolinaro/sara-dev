//---------------------------------------------------------------------------*
//                                                                           *
//  'C_galgas_io'                                                            *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 1996, ..., 2011 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef GALGAS_IO_CLASS_DEFINED
#define GALGAS_IO_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include <typeinfo>

//---------------------------------------------------------------------------*

#include "strings/C_String.h"
#include "collections/TC_UniqueArray.h"
#include "galgas2/C_LocationInSource.h"
#include "galgas2/C_SourceTextInString.h"
#include "utilities/C_SharedObject.h"

//---------------------------------------------------------------------------*
//                                                                           *
//  Exception raised when maximum error count is reached                     *
//                                                                           *
//---------------------------------------------------------------------------*

class max_error_count_reached_exception : public M_STD_NAMESPACE exception {
  public : virtual const char * what (void) const throw () ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//  Exception raised when maximum warning count is reached                   *
//                                                                           *
//---------------------------------------------------------------------------*

class max_warning_count_reached_exception : public M_STD_NAMESPACE exception {
  public : virtual const char * what (void) const throw () ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//     Internal exception thrown when a lexical error has been detected      *
//                                                                           *
//---------------------------------------------------------------------------*

class C_lexicalErrorException {
} ;

//---------------------------------------------------------------------------*

class C_UserCancelException : public M_STD_NAMESPACE exception {
  public : C_UserCancelException (void) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//   Class used for defining a reserved words table entry                    *
//                                                                           *
//---------------------------------------------------------------------------*

class C_unicode_lexique_table_entry {
  public : const utf32 * mEntryString ;
  public : const PMSInt16 mEntryStringLength ;
  public : const PMSInt16 mTokenCode ;

//--- Constructor
  public : C_unicode_lexique_table_entry (const utf32 * inEntryString,
                                          const PMSInt16 inEntryStringLength,
                                          const PMSInt16 inTokenCode) ;
//--- No copy
  public : C_unicode_lexique_table_entry (const C_unicode_lexique_table_entry & inOperand) ;
  private : C_unicode_lexique_table_entry & operator = (const C_unicode_lexique_table_entry &) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                 Token class                                               *
//                                                                           *
//---------------------------------------------------------------------------*

class cToken {
  public : cToken * mNextToken ;
  public : C_LocationInSource mStartLocation ;
  public : C_LocationInSource mEndLocation ;
  public : C_String mTemplateStringBeforeToken ; // Template string before the token
  public : PMSInt16 mTokenCode ;

  public : cToken (void) ;
  public : virtual ~cToken (void) ;

//--- No copy
  private : cToken (const cToken &) ;
  private : cToken & operator = (const cToken &) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                 Class for handling parsing context                        *
//          (used by parse ... rewind ... end parse ; instruction)           *
//                                                                           *
//---------------------------------------------------------------------------*

class C_parsingContext {
  private : PMSInt32 mParsingArrayIndex ;
  private : C_LocationInSource mLocation ;
  private : cToken * mCurrentTokenPtr ;
  private : utf32 mCurrentChar ;
  private : utf32 mPreviousChar ;
  private : C_String mTemplateString ;

  friend class C_Lexique ;
  
  public : C_parsingContext (void) ;

//--- No copy
  public : C_parsingContext (const C_parsingContext & inSource) ;
  public : C_parsingContext & operator = (const C_parsingContext & inSource) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//         Abstract class for GALGAS input/output                            *
//                                                                           *
//---------------------------------------------------------------------------*

class C_galgas_io : public C_SharedObject {
  public : const PMSInt32 mMaxErrorCount ;
  public : const PMSInt32 mMaxWarningCount ;

//--- Constructor
  public : C_galgas_io (LOCATION_ARGS) ;

//--- No Copy
  private : C_galgas_io (C_galgas_io &) ;
  private : C_galgas_io & operator = (C_galgas_io &) ;

//--- File Generation : start directory
  public : TC_UniqueArray <C_String> mDirectoriesToExclude ;

  protected : C_String
  errorOrWarningLocationString (const C_LocationInSource & inErrorLocation,
                                const C_SourceTextInString * inSourceTextPtr) const ;

  protected : void
  constructErrorOrWarningLocationMessage (C_String & ioMessage, 
                                          const C_LocationInSource & inErrorLocation,
                                          const C_SourceTextInString * inSourceTextPtr) const ;

//--- Errors count
  public : inline PMSInt32 maxErrorCount (void) const {
    return mMaxErrorCount ;
  }

  private : PMSInt32 mErrorTotalCount ;

  public : inline PMSInt32 totalErrorCount (void) const {
    return mErrorTotalCount ;
  }

  private : PMSInt32 mCurrentFileErrorCount ;

  public : inline PMSInt32 currentFileErrorCount (void) const {
    return mCurrentFileErrorCount ;
  }

//--- Warnings count
  public : inline PMSInt32 maxWarningCount (void) const {
    return mMaxWarningCount ;
  }

  private : PMSInt32 mCurrentWarningCount ;

  public : inline PMSInt32 currentFileWarningCount (void) const {
    return mCurrentWarningCount ;
 }

  private : PMSInt32 mTotalWarningCount ;

  public : inline PMSInt32 totalWarningCount (void) const {
    return mTotalWarningCount ;
 }
 
//--- This method is called by a lexique instance for signaling a parsing error
  public : void signalParsingError (const C_SourceTextInString * inSourceTextPtr,
                                    const C_LocationInSource & inErrorLocation,
                                    const C_String & inFoundTokenMessage,
                                    const TC_UniqueArray <C_String> &
                                    COMMA_LOCATION_ARGS) ;

  public : void printFileErrorMessage (const C_String & inSourceFileName,
                                       const C_String & inErrorMessage
                                       COMMA_LOCATION_ARGS) ;

//--- This method is called by a GALGAS_location instance for signaling an extract error
  public : void
  signalExtractError (const C_SourceTextInString * inSourceTextPtr,
                      const C_LocationInSource & inErrorLocation,
                      const TC_UniqueArray <C_String> & inExpectedClassesErrorStringsArray,
                      const C_String & inActualFoundClassErrorString
                      COMMA_LOCATION_ARGS) ;
  public : void
  signalCastError (const C_SourceTextInString * inSourceTextPtr,
                   const C_LocationInSource & inErrorLocation,
                   const std::type_info * inBaseClass,
                   const bool inUseKindOfClass,
                   const C_String & inActualFoundClassErrorString
                   COMMA_LOCATION_ARGS) ;

  public : void signalLexicalWarning (const C_SourceTextInString * inSourceTextPtr,
                                      const C_LocationInSource & inWarningLocation,
                                      const C_String & inLexicalWarningMessage
                                      COMMA_LOCATION_ARGS) ;

  public : void signalLexicalError (const C_SourceTextInString * inSourceTextPtr,
                                    const C_LocationInSource & inErrorLocation,
                                    const C_String & inLexicalErrorMessage
                                    COMMA_LOCATION_ARGS) ;

  public : void signalSemanticWarning (const C_SourceTextInString * inSourceTextPtr,
                                       const C_LocationInSource & inWarningLocation,
                                       const C_String & inWarningMessage
                                       COMMA_LOCATION_ARGS) ;

  public : void signalSemanticError (const C_SourceTextInString * inSourceTextPtr,
                                     const C_LocationInSource & inErrorLocation,
                                     const C_String & inErrorMessage
                                     COMMA_LOCATION_ARGS) ;

  public : void signalRunTimeError (const C_String & inErrorMessage
                                    COMMA_LOCATION_ARGS) ;

  public : void signalRunTimeWarning (const C_String & inWarningMessage
                                      COMMA_LOCATION_ARGS) ;

//--- Method called for printing an error
  public : void ggs_printError (const C_String & inMessage) ;

//--- Method called for printing a warning
  public : void ggs_printWarning (const C_String & inMessage) ;

//--- Method called for printing a success message
  public : void ggs_printRewriteFileSuccess (const C_String & inMessage) ;
  public : void ggs_printCreatedFileSuccess (const C_String & inMessage) ;

//--- Method called for printing a message
  public : void ggs_printMessage (const C_String & inMessage) ;

//--- Private numbers (for generated code stats)
  protected : PMUInt32 mCheckedLines ;
  protected : PMUInt32 mGeneratedLines ;
  protected : PMUInt32 mPreservedLines ;
  protected : PMUInt32 mGeneratedFileCount ;
  public : inline PMUInt32 checkedLineCount (void) const { return mCheckedLines ; } ;
  public : inline PMUInt32 generatedLineCount (void) const { return mGeneratedLines ; } ;
  public : inline PMUInt32 preservedLineCount (void) const { return mPreservedLines ; } ;
  public : inline PMUInt32 generatedFileCount (void) const { return mGeneratedFileCount ; } ;

//--- Friend
  friend class C_Compiler ;
  friend class C_CompilerEx ;
} ;


//---------------------------------------------------------------------------*

#endif