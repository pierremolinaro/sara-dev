#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                        const GGS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__32_lstringlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue0:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_30_.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue1:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_31_.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element element (inOperand0, inOperand1) ;
  GGS__32_lstringlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue_31_ ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

 GGS_stringlist Lexique_sara_5F_scanner::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("machineIdf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("auto") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("state") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("first") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("last") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("goto") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("true") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nofirst") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nolast") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("modalcompadd") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("exclude") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("modalcompsub") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("include") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("to") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("scenario") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("trans") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("display") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bdd") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bool") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("map") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("check") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checkbool") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checkidentical") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("**") COMMA_HERE) ;
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



//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_ (Lexique_sara_5F_scanner * inCompiler) {
  GGS_semanticContext var_semanticContext_541 = GGS_semanticContext::init_21__21_ (GGS_L_5F_jobList::init (inCompiler COMMA_HERE), GGS_M_5F_machinesMap::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_ (var_semanticContext_541, inCompiler) ;
    if (select_sara_5F_parser_0 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  {
  routine_performComputations_3F_ (var_semanticContext_541.readProperty_componentsMap (), inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 20)) ;
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
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 29)) ;
  GGS_lstring var_machineName_940 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  GGS_uint var_machineIndex_1057 ;
  GGS_uint joker_1070 ; // Joker input parameter
  GGS_uint joker_1073 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_1076 ; // Joker input parameter
  GGS_stringlist joker_1079 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_940, var_machineIndex_1057, joker_1070, joker_1073, joker_1076, joker_1079, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 33)) ;
  GGS_AC_5F_job var_job_1129 = GGS_C_5F_machineDisplayStates::init_21_ (var_machineIndex_1057, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_1129  COMMA_SOURCE_FILE ("sara_parser.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 45)) ;
  GGS_lstring var_machineName_1420 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 47)) ;
  GGS_uint var_machineIndex_1537 ;
  GGS_uint joker_1550 ; // Joker input parameter
  GGS_uint joker_1553 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_1556 ; // Joker input parameter
  GGS_stringlist joker_1559 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1420, var_machineIndex_1537, joker_1550, joker_1553, joker_1556, joker_1559, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 49)) ;
  GGS_AC_5F_job var_job_1609 = GGS_C_5F_machineDisplayTransitions::init_21_ (var_machineIndex_1537, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_1609  COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
  GGS_lstring var_machineName_1915 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 64)) ;
  GGS_uint var_machineIndex_2032 ;
  GGS_uint joker_2045 ; // Joker input parameter
  GGS_uint joker_2048 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_2051 ; // Joker input parameter
  GGS_stringlist joker_2054 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1915, var_machineIndex_2032, joker_2045, joker_2048, joker_2051, joker_2054, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 66)) ;
  GGS_AC_5F_job var_job_2104 = GGS_C_5F_machineDisplayInitialStates::init_21_ (var_machineIndex_2032, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_2104  COMMA_SOURCE_FILE ("sara_parser.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 79)) ;
  GGS_lstring var_machineName_2411 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
  GGS_uint var_machineIndex_2528 ;
  GGS_uint joker_2541 ; // Joker input parameter
  GGS_uint joker_2544 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_2547 ; // Joker input parameter
  GGS_stringlist joker_2550 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2411, var_machineIndex_2528, joker_2541, joker_2544, joker_2547, joker_2550, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 83)) ;
  GGS_AC_5F_job var_job_2600 = GGS_C_5F_machineDisplayTerminalStates::init_21_ (var_machineIndex_2528, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_2600  COMMA_SOURCE_FILE ("sara_parser.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 94)) ;
  GGS_lstring var_machineName_2887 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  GGS_uint var_machineIndex_3004 ;
  GGS_uint joker_3017 ; // Joker input parameter
  GGS_uint joker_3020 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3023 ; // Joker input parameter
  GGS_stringlist joker_3026 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2887, var_machineIndex_3004, joker_3017, joker_3020, joker_3023, joker_3026, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 98)) ;
  GGS_AC_5F_job var_job_3076 = GGS_C_5F_machineCheck::init_21__21_ (var_machineIndex_3004, GGS_bool (false), inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_3076  COMMA_SOURCE_FILE ("sara_parser.galgas", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  GGS_lstring var_machineName_31__3363 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  GGS_lstring var_machineName_32__3402 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
  GGS_uint var_machineIndex_31__3521 ;
  GGS_uint joker_3535 ; // Joker input parameter
  GGS_uint joker_3538 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3541 ; // Joker input parameter
  GGS_stringlist joker_3544 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_31__3363, var_machineIndex_31__3521, joker_3535, joker_3538, joker_3541, joker_3544, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 115)) ;
  GGS_uint var_machineIndex_32__3648 ;
  GGS_uint joker_3662 ; // Joker input parameter
  GGS_uint joker_3665 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3668 ; // Joker input parameter
  GGS_stringlist joker_3671 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_32__3402, var_machineIndex_32__3648, joker_3662, joker_3665, joker_3668, joker_3671, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 117)) ;
  GGS_AC_5F_job var_job_3721 = GGS_C_5F_machineCheckIdentical::init_21__21_ (var_machineIndex_31__3521, var_machineIndex_32__3648, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_3721  COMMA_SOURCE_FILE ("sara_parser.galgas", 120)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  GGS_lstring var_machineName_4021 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
  GGS_uint var_machineIndex_4138 ;
  GGS_uint joker_4151 ; // Joker input parameter
  GGS_uint joker_4154 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_4157 ; // Joker input parameter
  GGS_stringlist joker_4160 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_4021, var_machineIndex_4138, joker_4151, joker_4154, joker_4157, joker_4160, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 132)) ;
  GGS_AC_5F_job var_job_4210 = GGS_C_5F_machineCheck::init_21__21_ (var_machineIndex_4138, GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_4210  COMMA_SOURCE_FILE ("sara_parser.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 143)) ;
  GGS_AC_5F_job var_job_4466 = GGS_typeDisplayBDDstats::init (inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_job_4466  COMMA_SOURCE_FILE ("sara_parser.galgas", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap var_variablesMap_4685 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_nameList_4724 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_machineName_4788 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 155)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 156)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_4865 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 159)) ;
    {
    var_variablesMap_4685.setter_insertKey (var_inputVarName_4865, var_variablesMap_4685.getter_count (SOURCE_FILE ("sara_parser.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 160)) ;
    }
    var_nameList_4724.addAssignOperation (var_inputVarName_4865.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 161)) ;
    if (select_sara_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 163)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_5016 = var_variablesMap_4685.getter_count (SOURCE_FILE ("sara_parser.galgas", 165)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 168)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_outputVarName_5151 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 172)) ;
      {
      var_variablesMap_4685.setter_insertKey (var_outputVarName_5151, var_variablesMap_4685.getter_count (SOURCE_FILE ("sara_parser.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 173)) ;
      }
      var_nameList_4724.addAssignOperation (var_outputVarName_5151.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 174)) ;
      if (select_sara_5F_parser_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 176)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 179)) ;
  GGS_uint var_inputAndInternalVariablesCount_5327 = var_variablesMap_4685.getter_count (SOURCE_FILE ("sara_parser.galgas", 180)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 182)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_outputVarName_5447 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 184)) ;
    {
    var_variablesMap_4685.setter_insertKey (var_outputVarName_5447, var_variablesMap_4685.getter_count (SOURCE_FILE ("sara_parser.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 185)) ;
    }
    var_nameList_4724.addAssignOperation (var_outputVarName_5447.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 186)) ;
    if (select_sara_5F_parser_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 188)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 190)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 191)) ;
  GGS_AC_5F_machineDefinition var_definition_5692 ;
  nt_definition_5F_expression_ (ioArgument_ioSemanticContext, var_variablesMap_4685, var_definition_5692, inCompiler) ;
  GGS_uint var_machineIndex_5753 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 195)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_4788, var_machineIndex_5753, var_inputVariablesCount_5016, var_inputAndInternalVariablesCount_5327, var_variablesMap_4685, var_nameList_4724, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 196)) ;
  }
  GGS_AC_5F_job var_machine_6029 = GGS_C_5F_machineComponent::init_21__21__21__21__21__21__21_ (var_machineName_4788, var_machineIndex_5753, var_inputVariablesCount_5016, var_inputAndInternalVariablesCount_5327, var_variablesMap_4685, var_nameList_4724, var_definition_5692, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_machine_6029  COMMA_SOURCE_FILE ("sara_parser.galgas", 206)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 155)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 156)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 159)) ;
    if (select_sara_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 163)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 168)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 172)) ;
      if (select_sara_5F_parser_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 176)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 182)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 184)) ;
    if (select_sara_5F_parser_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 188)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 190)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 191)) ;
  nt_definition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap var_variablesMap_6377 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_nameList_6416 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 217)) ;
  GGS_lstring var_machineName_6497 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 218)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 219)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_6574 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 222)) ;
    {
    var_variablesMap_6377.setter_insertKey (var_inputVarName_6574, var_variablesMap_6377.getter_count (SOURCE_FILE ("sara_parser.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 223)) ;
    }
    var_nameList_6416.addAssignOperation (var_inputVarName_6574.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
    if (select_sara_5F_parser_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 226)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_6725 = var_variablesMap_6377.getter_count (SOURCE_FILE ("sara_parser.galgas", 228)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 229)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_outputVarName_6860 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 235)) ;
      {
      var_variablesMap_6377.setter_insertKey (var_outputVarName_6860, var_variablesMap_6377.getter_count (SOURCE_FILE ("sara_parser.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 236)) ;
      }
      var_nameList_6416.addAssignOperation (var_outputVarName_6860.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
      if (select_sara_5F_parser_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 239)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 242)) ;
  GGS_uint var_inputAndInternalVariablesCount_7036 = var_variablesMap_6377.getter_count (SOURCE_FILE ("sara_parser.galgas", 243)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 245)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_outputVarName_7157 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
    {
    var_variablesMap_6377.setter_insertKey (var_outputVarName_7157, var_variablesMap_6377.getter_count (SOURCE_FILE ("sara_parser.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 248)) ;
    }
    var_nameList_6416.addAssignOperation (var_outputVarName_7157.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    if (select_sara_5F_parser_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 251)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 254)) ;
  GGS_M_5F_modesMap var_modeMap_7416 ;
  GGS_ListForModes var_inclusionList_7433 ;
  nt_modalcompadd_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_6377, var_modeMap_7416, var_inclusionList_7433, inCompiler) ;
  GGS_uint var_machineIndex_7497 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 262)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_6497, var_machineIndex_7497, var_inputVariablesCount_6725, var_inputAndInternalVariablesCount_7036, var_variablesMap_6377, var_nameList_6416, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 263)) ;
  }
  GGS_AC_5F_job var_machine_7746 = GGS_C_5F_machineDefinedByAdditiveModalComp::init_21__21__21__21__21__21__21_ (var_machineName_6497, var_machineIndex_7497, var_inputVariablesCount_6725, var_inputAndInternalVariablesCount_7036, var_variablesMap_6377, var_modeMap_7416, var_inclusionList_7433, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_machine_7746  COMMA_SOURCE_FILE ("sara_parser.galgas", 273)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 217)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 218)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 219)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 222)) ;
    if (select_sara_5F_parser_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 226)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 229)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 235)) ;
      if (select_sara_5F_parser_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 239)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 242)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 245)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
    if (select_sara_5F_parser_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 251)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 254)) ;
  nt_modalcompadd_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap var_variablesMap_8134 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_nameList_8173 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  GGS_lstring var_machineName_8254 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 285)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_8331 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
    {
    var_variablesMap_8134.setter_insertKey (var_inputVarName_8331, var_variablesMap_8134.getter_count (SOURCE_FILE ("sara_parser.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 290)) ;
    }
    var_nameList_8173.addAssignOperation (var_inputVarName_8331.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 291)) ;
    if (select_sara_5F_parser_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 293)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_8482 = var_variablesMap_8134.getter_count (SOURCE_FILE ("sara_parser.galgas", 295)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 298)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_outputVarName_8617 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 302)) ;
      {
      var_variablesMap_8134.setter_insertKey (var_outputVarName_8617, var_variablesMap_8134.getter_count (SOURCE_FILE ("sara_parser.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 303)) ;
      }
      var_nameList_8173.addAssignOperation (var_outputVarName_8617.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 304)) ;
      if (select_sara_5F_parser_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 306)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 309)) ;
  GGS_uint var_inputAndInternalVariablesCount_8793 = var_variablesMap_8134.getter_count (SOURCE_FILE ("sara_parser.galgas", 310)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_outputVarName_8913 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 314)) ;
    {
    var_variablesMap_8134.setter_insertKey (var_outputVarName_8913, var_variablesMap_8134.getter_count (SOURCE_FILE ("sara_parser.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 315)) ;
    }
    var_nameList_8173.addAssignOperation (var_outputVarName_8913.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    if (select_sara_5F_parser_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 320)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 321)) ;
  GGS_M_5F_modesMap var_modeMap_9172 ;
  GGS_ListForModes var_exclusionList_9189 ;
  nt_modalcompsub_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_8134, var_modeMap_9172, var_exclusionList_9189, inCompiler) ;
  GGS_uint var_machineIndex_9253 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 329)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_8254, var_machineIndex_9253, var_inputVariablesCount_8482, var_inputAndInternalVariablesCount_8793, var_variablesMap_8134, var_nameList_8173, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 330)) ;
  }
  GGS_AC_5F_job var_machine_9502 = GGS_C_5F_machineDefinedBySubstractiveModalComp::init_21__21__21__21__21__21__21_ (var_machineName_8254, var_machineIndex_9253, var_inputVariablesCount_8482, var_inputAndInternalVariablesCount_8793, var_variablesMap_8134, var_modeMap_9172, var_exclusionList_9189, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_machine_9502  COMMA_SOURCE_FILE ("sara_parser.galgas", 340)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 341)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 285)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
    if (select_sara_5F_parser_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 293)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 298)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 302)) ;
      if (select_sara_5F_parser_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 306)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 309)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 314)) ;
    if (select_sara_5F_parser_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 320)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 321)) ;
  nt_modalcompsub_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 341)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 345)) ;
  GGS_M_5F_variablesMap var_variablesMap_9903 = GGS_M_5F_variablesMap::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_machineName_9975 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 348)) ;
  GGS_uint var_machineIndex_10086 ;
  GGS_uint var_inputVariablesCountFromDefinition_10104 ;
  GGS_uint var_inputAndInternalVariablesCountFromDefinition_10143 ;
  GGS_M_5F_variablesMap var_variablesMapFromDefinition_10193 ;
  GGS_stringlist joker_10220 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_9975, var_machineIndex_10086, var_inputVariablesCountFromDefinition_10104, var_inputAndInternalVariablesCountFromDefinition_10143, var_variablesMapFromDefinition_10193, joker_10220, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 352)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVarName_10289 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    {
    var_variablesMap_9903.setter_insertKey (var_inputVarName_10289, var_variablesMap_9903.getter_count (SOURCE_FILE ("sara_parser.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 355)) ;
    }
    if (select_sara_5F_parser_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 357)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_10403 = var_variablesMap_9903.getter_count (SOURCE_FILE ("sara_parser.galgas", 359)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 360)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCountFromDefinition_10104.objectCompare (var_inputVariablesCount_10403)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 363)), GGS_string ("This declaration names ").add_operation (var_inputVariablesCount_10403.getter_string (SOURCE_FILE ("sara_parser.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 363)).add_operation (GGS_string (" input variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 363)).add_operation (var_inputVariablesCountFromDefinition_10104.getter_string (SOURCE_FILE ("sara_parser.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 364)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 364)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_outputVarName_10869 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
      {
      var_variablesMap_9903.setter_insertKey (var_outputVarName_10869, var_variablesMap_9903.getter_count (SOURCE_FILE ("sara_parser.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 372)) ;
      }
      if (select_sara_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  GGS_uint var_inputAndInternalVariablesCount_11054 = var_variablesMap_9903.getter_count (SOURCE_FILE ("sara_parser.galgas", 379)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCountFromDefinition_10143.objectCompare (var_inputAndInternalVariablesCount_11054)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 381)), GGS_string ("This declaration names ").add_operation (var_inputAndInternalVariablesCount_11054.getter_string (SOURCE_FILE ("sara_parser.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 381)).add_operation (GGS_string (" input and internal variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 381)).add_operation (var_inputAndInternalVariablesCountFromDefinition_10143.getter_string (SOURCE_FILE ("sara_parser.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 382)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 382)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 381)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GGS_lstring var_outputVarName_11529 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 387)) ;
    {
    var_variablesMap_9903.setter_insertKey (var_outputVarName_11529, var_variablesMap_9903.getter_count (SOURCE_FILE ("sara_parser.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 388)) ;
    }
    if (select_sara_5F_parser_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 390)) ;
    }else{
      repeatFlag_6 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 392)) ;
  GGS_uint var_outputVariablesCount_11700 = var_variablesMap_9903.getter_count (SOURCE_FILE ("sara_parser.galgas", 394)) ;
  GGS_uint var_outputVariablesCountFromDefinition_11756 = var_variablesMapFromDefinition_10193.getter_count (SOURCE_FILE ("sara_parser.galgas", 395)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_outputVariablesCountFromDefinition_11756.objectCompare (var_outputVariablesCount_11700)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 397)), GGS_string ("This declaration names ").add_operation (var_outputVariablesCount_11700.getter_string (SOURCE_FILE ("sara_parser.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 397)).add_operation (GGS_string (" variables, but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 397)).add_operation (var_outputVariablesCountFromDefinition_11756.getter_string (SOURCE_FILE ("sara_parser.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 398)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 398)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 397)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 400)) ;
  GGS_L_5F_scenarioList var_scenarioList_12113 = GGS_L_5F_scenarioList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GGS_lstring var_scenarioTitle_12182 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 403)) ;
    GGS_L_5F_inputScenario var_inputScenario_12204 = GGS_L_5F_inputScenario::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_10 = true ;
    while (repeatFlag_10) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
      GGS_L_5F_inputConfigurationForScenario var_inputConfigurationForScenario_12270 = GGS_L_5F_inputConfigurationForScenario::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GGS_luint var_v_12382 = inCompiler->synthetizedAttribute_ulongValue () ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 409)) ;
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = GGS_bool (ComparisonKind::greaterThan, var_v_12382.readProperty_uint ().objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (var_v_12382.readProperty_location (), GGS_string ("this value is not a  binary digit"), fixItArray13  COMMA_SOURCE_FILE ("sara_parser.galgas", 411)) ;
          }
        }
        var_inputConfigurationForScenario_12270.addAssignOperation (var_v_12382  COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
        if (select_sara_5F_parser_19 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 415)) ;
        }else{
          repeatFlag_11 = false ;
        }
      }
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_10403.objectCompare (var_inputConfigurationForScenario_12270.getter_count (SOURCE_FILE ("sara_parser.galgas", 417)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 418)), GGS_string ("this input configuration names ").add_operation (var_inputConfigurationForScenario_12270.getter_count (SOURCE_FILE ("sara_parser.galgas", 418)).getter_string (SOURCE_FILE ("sara_parser.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 418)).add_operation (GGS_string (" input variable(s), instead of "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 418)).add_operation (var_inputVariablesCount_10403.getter_string (SOURCE_FILE ("sara_parser.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 418)), fixItArray15  COMMA_SOURCE_FILE ("sara_parser.galgas", 418)) ;
        }
      }
      var_inputScenario_12204.addAssignOperation (var_inputConfigurationForScenario_12270  COMMA_SOURCE_FILE ("sara_parser.galgas", 420)) ;
      if (select_sara_5F_parser_18 (inCompiler) == 2) {
      }else{
        repeatFlag_10 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 423)) ;
    var_scenarioList_12113.addAssignOperation (var_scenarioTitle_12182, var_inputScenario_12204  COMMA_SOURCE_FILE ("sara_parser.galgas", 424)) ;
    if (select_sara_5F_parser_17 (inCompiler) == 2) {
    }else{
      repeatFlag_9 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 427)) ;
  GGS_AC_5F_job var_machine_13013 = GGS_C_5F_scenarioComponent::init_21__21__21__21__21_ (var_machineIndex_10086, var_inputVariablesCount_10403, var_inputAndInternalVariablesCount_11054, var_variablesMap_9903, var_scenarioList_12113, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssignOperation (var_machine_13013  COMMA_SOURCE_FILE ("sara_parser.galgas", 430)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 345)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 348)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 352)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    if (select_sara_5F_parser_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 357)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
      if (select_sara_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 387)) ;
    if (select_sara_5F_parser_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 390)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 392)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 400)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 403)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 409)) ;
        if (select_sara_5F_parser_19 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 415)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      if (select_sara_5F_parser_18 (inCompiler) == 2) {
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 423)) ;
    if (select_sara_5F_parser_17 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 427)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
      GGS_AC_5F_boolExpression var_rightExpression_13557 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_13557, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_orExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_13557, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 446)) ;
      GGS_AC_5F_boolExpression var_rightExpression_13721 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_13721, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_xorExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_13721, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
      GGS_AC_5F_boolExpression var_rightExpression_13887 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_13887, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_impliesExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_13887, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 454)) ;
      GGS_AC_5F_boolExpression var_rightExpression_14056 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_14056, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_equalExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_14056, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 446)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 454)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 469)) ;
      GGS_AC_5F_boolExpression var_rightExpression_14509 ;
      nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_14509, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_andExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_14509, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 469)) ;
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
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 481)) ;
  nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 483)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 481)) ;
  nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 483)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_inputVarName_15133 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
  GGS_uint var_inputVarIndex_15186 ;
  ioArgument_ioVarMap.method_searchKey (var_inputVarName_15133, var_inputVarIndex_15186, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 493)) ;
  outArgument_outExpression = GGS_C_5F_VariableExpression::init_21_ (var_inputVarIndex_15186, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 503)) ;
  GGS_AC_5F_boolExpression var_expression_15526 ;
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_expression_15526, inCompiler) ;
  outArgument_outExpression = GGS_C_5F_notExpression::init_21_ (var_expression_15526, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 503)) ;
  nt_io_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 514)) ;
  outArgument_outExpression = GGS_C_5F_falseExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 524)) ;
  outArgument_outExpression = GGS_C_5F_trueExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_machineIdentifier_16367 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
  GGS_uint var_indexOfImportedMachine_16452 ;
  GGS_uint var_machineInputVariableCount_16480 ;
  GGS_uint var_machineInputAndInternalVariableCount_16511 ;
  GGS_M_5F_variablesMap var_machineVariablesMap_16553 ;
  GGS_stringlist joker_16573 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_16367, var_indexOfImportedMachine_16452, var_machineInputVariableCount_16480, var_machineInputAndInternalVariableCount_16511, var_machineVariablesMap_16553, joker_16573, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 535)) ;
  GGS_L_5F_translationVector var_translationVector_16583 = GGS_L_5F_translationVector::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 538)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVar_16691 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 540)) ;
    GGS_uint var_inputVarIndex_16739 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_16691, var_inputVarIndex_16739, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 541)) ;
    var_translationVector_16583.addAssignOperation (var_inputVarIndex_16739  COMMA_SOURCE_FILE ("sara_parser.galgas", 542)) ;
    if (select_sara_5F_parser_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 544)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  GGS_uint var_inputVariablesCount_16834 = var_translationVector_16583.getter_count (SOURCE_FILE ("sara_parser.galgas", 547)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_16834.objectCompare (var_machineInputVariableCount_16480)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 549)), GGS_string ("The '$").add_operation (var_machineIdentifier_16367.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 549)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 549)).add_operation (var_machineInputVariableCount_16480.getter_string (SOURCE_FILE ("sara_parser.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 549)).add_operation (GGS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 549)).add_operation (var_inputVariablesCount_16834.getter_string (SOURCE_FILE ("sara_parser.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 550)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 550)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 549)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 553)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_internalVar_17257 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
      GGS_uint var_internalVarIndex_17313 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_17257, var_internalVarIndex_17313, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 558)) ;
      var_translationVector_16583.addAssignOperation (var_internalVarIndex_17313  COMMA_SOURCE_FILE ("sara_parser.galgas", 559)) ;
      if (select_sara_5F_parser_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 561)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 564)) ;
  GGS_uint var_inputAndInternalVariablesCount_17429 = var_translationVector_16583.getter_count (SOURCE_FILE ("sara_parser.galgas", 565)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCount_17429.objectCompare (var_machineInputAndInternalVariableCount_16511)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 567)), GGS_string ("The '$").add_operation (var_machineIdentifier_16367.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 567)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 567)).add_operation (var_machineInputAndInternalVariableCount_16511.getter_string (SOURCE_FILE ("sara_parser.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 567)).add_operation (GGS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 567)).add_operation (var_inputAndInternalVariablesCount_17429.getter_string (SOURCE_FILE ("sara_parser.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 568)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 568)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 567)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 571)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GGS_lstring var_outputVar_17920 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 573)) ;
    GGS_uint var_outputVarIndex_17970 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_17920, var_outputVarIndex_17970, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 574)) ;
    var_translationVector_16583.addAssignOperation (var_outputVarIndex_17970  COMMA_SOURCE_FILE ("sara_parser.galgas", 575)) ;
    if (select_sara_5F_parser_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 577)) ;
    }else{
      repeatFlag_6 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
  GGS_uint var_allVariablesCount_18067 = var_translationVector_16583.getter_count (SOURCE_FILE ("sara_parser.galgas", 580)) ;
  GGS_uint var_machineAllVariablesCount_18125 = var_machineVariablesMap_16553.getter_count (SOURCE_FILE ("sara_parser.galgas", 581)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_allVariablesCount_18067.objectCompare (var_machineAllVariablesCount_18125)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 583)), GGS_string ("The '$").add_operation (var_machineIdentifier_16367.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 583)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 583)).add_operation (var_machineAllVariablesCount_18125.getter_string (SOURCE_FILE ("sara_parser.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 583)).add_operation (GGS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 583)).add_operation (var_allVariablesCount_18067.getter_string (SOURCE_FILE ("sara_parser.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 584)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 584)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 583)) ;
    }
  }
  outArgument_outExpression = GGS_C_5F_importBoolMachine::init_21__21__21_ (var_indexOfImportedMachine_16452, var_machineIdentifier_16367.readProperty_location (), var_translationVector_16583, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 538)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 540)) ;
    if (select_sara_5F_parser_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 544)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 553)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
      if (select_sara_5F_parser_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 561)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 564)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 571)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 573)) ;
    if (select_sara_5F_parser_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 577)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_19100 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_19201 ;
      nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_19201, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_orComposition::init_21__21_ (var_leftOperand_19100, var_rightOperand_19201, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 619)) ;
      GGS_location var_errorLocation_19646 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 620)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_19707 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_19810 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_19810, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_strongModalComposition::init_21__21__21_ (var_leftOperand_19707, var_errorLocation_19646, var_rightOperand_19810, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 625)) ;
      GGS_location var_errorLocation_19949 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_20010 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_20113 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_20113, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_weakModalComposition::init_21__21__21_ (var_leftOperand_20010, var_errorLocation_19949, var_rightOperand_20113, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 631)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_20262 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_20365 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_20365, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_parallelComposition::init_21__21_ (var_leftOperand_20262, var_rightOperand_20365, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 619)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 625)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 631)) ;
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
    GGS_lstring var_modeName_20807 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 649)) ;
    GGS_AC_5F_machineDefinition var_def_20891 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_20891, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_20807, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 651)), var_def_20891, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 651)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 652)) ;
    if (select_sara_5F_parser_28 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 657)) ;
      GGS_lstring var_sourceModeName_21034 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 658)) ;
      GGS_uint var_sourceModeIndex_21096 ;
      GGS_AC_5F_machineDefinition joker_21112 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_21034, var_sourceModeIndex_21096, joker_21112, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 659)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 660)) ;
      GGS_lstring var_targetModeName_21147 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 661)) ;
      GGS_uint var_targetModeIndex_21209 ;
      GGS_AC_5F_machineDefinition joker_21225 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_21147, var_targetModeIndex_21209, joker_21225, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 662)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 663)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_sourceModeIndex_21096.objectCompare (var_targetModeIndex_21209)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_21147.readProperty_location (), GGS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 665)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        outArgument_outInclusionList.addAssignOperation (var_sourceModeIndex_21096, var_targetModeIndex_21209  COMMA_SOURCE_FILE ("sara_parser.galgas", 667)) ;
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
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 649)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 652)) ;
    if (select_sara_5F_parser_28 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 657)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 658)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 660)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 661)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 663)) ;
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
    GGS_lstring var_modeName_21871 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 682)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 683)) ;
    GGS_AC_5F_machineDefinition var_def_21955 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_21955, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_21871, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 685)), var_def_21955, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 685)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 686)) ;
    if (select_sara_5F_parser_30 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 691)) ;
      GGS_lstring var_sourceModeName_22098 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 692)) ;
      GGS_uint var_sourceModeIndex_22160 ;
      GGS_AC_5F_machineDefinition joker_22176 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_22098, var_sourceModeIndex_22160, joker_22176, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 693)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 694)) ;
      GGS_lstring var_targetModeName_22211 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 695)) ;
      GGS_uint var_targetModeIndex_22273 ;
      GGS_AC_5F_machineDefinition joker_22289 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_22211, var_targetModeIndex_22273, joker_22289, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 696)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 697)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_sourceModeIndex_22160.objectCompare (var_targetModeIndex_22273)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_22211.readProperty_location (), GGS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 699)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        outArgument_outExclusionList.addAssignOperation (var_sourceModeIndex_22160, var_targetModeIndex_22273  COMMA_SOURCE_FILE ("sara_parser.galgas", 701)) ;
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
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 682)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 683)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 686)) ;
    if (select_sara_5F_parser_30 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 691)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 692)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 694)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 695)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 697)) ;
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
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 715)) ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
  } break ;
  case 3: {
    GGS_M_5F_variablesMap var_extendedVariablesMap_23031 = ioArgument_variablesMap ;
    GGS_uint var_previousVariableCount_23081 = var_extendedVariablesMap_23031.getter_count (SOURCE_FILE ("sara_parser.galgas", 720)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 721)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_variableName_23177 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      {
      var_extendedVariablesMap_23031.setter_insertKey (var_variableName_23177, var_extendedVariablesMap_23031.getter_count (SOURCE_FILE ("sara_parser.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 724)) ;
      }
      if (select_sara_5F_parser_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    GGS_uint var_actualVariableCount_23317 = var_extendedVariablesMap_23031.getter_count (SOURCE_FILE ("sara_parser.galgas", 728)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 729)) ;
    GGS_AC_5F_machineDefinition var_def_23451 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_23031, var_def_23451, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 731)) ;
    outArgument_outDefinition = GGS_C_5F_existsDefinition::init_21__21__21_ (var_previousVariableCount_23081, var_actualVariableCount_23317, var_def_23451, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_M_5F_variablesMap var_extendedVariablesMap_23584 = ioArgument_variablesMap ;
    GGS_uint var_previousVariableCount_23634 = var_extendedVariablesMap_23584.getter_count (SOURCE_FILE ("sara_parser.galgas", 735)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 736)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_variableName_23730 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 738)) ;
      {
      var_extendedVariablesMap_23584.setter_insertKey (var_variableName_23730, var_extendedVariablesMap_23584.getter_count (SOURCE_FILE ("sara_parser.galgas", 739)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 739)) ;
      }
      if (select_sara_5F_parser_34 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 741)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_uint var_actualVariableCount_23870 = var_extendedVariablesMap_23584.getter_count (SOURCE_FILE ("sara_parser.galgas", 743)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 744)) ;
    GGS_AC_5F_machineDefinition var_def_24004 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_23584, var_def_24004, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 746)) ;
    outArgument_outDefinition = GGS_C_5F_forallDefinition::init_21__21__21_ (var_previousVariableCount_23634, var_actualVariableCount_23870, var_def_24004, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 749)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 750)) ;
    GGS_AC_5F_boolExpression var_def_24196 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24196, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_boolToSeqExpression::init_21_ (var_def_24196, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 753)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 755)) ;
    GGS_AC_5F_machineDefinition var_def_24347 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24347, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_fullSaturationOperation::init_21_ (var_def_24347, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
    GGS_AC_5F_machineDefinition var_def_24494 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24494, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_complementationOperation::init_21_ (var_def_24494, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 763)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 764)) ;
    GGS_AC_5F_machineDefinition var_def_24649 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24649, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_suppressInitialStatesOperation::init_21_ (var_def_24649, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 769)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 770)) ;
    GGS_AC_5F_machineDefinition var_def_24817 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24817, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_suppressTerminalStatesOperation::init_21_ (var_def_24817, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 773)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 775)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 776)) ;
    GGS_M_5F_modesMap var_modeMap_25011 ;
    GGS_ListForModes var_inclusionList_25030 ;
    nt_modalcompadd_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_25011, var_inclusionList_25030, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
    outArgument_outDefinition = GGS_C_5F_additiveModalCompositionComponent::init_21__21_ (var_modeMap_25011, var_inclusionList_25030, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 785)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    GGS_M_5F_modesMap var_modeMap_25255 ;
    GGS_ListForModes var_exclusionList_25274 ;
    nt_modalcompsub_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_25255, var_exclusionList_25274, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 792)) ;
    outArgument_outDefinition = GGS_C_5F_substractiveModalCompositionComponent::init_21__21_ (var_modeMap_25255, var_exclusionList_25274, inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 795)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
    GGS_AC_5F_boolExpression var_sourceExpression_25473 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_sourceExpression_25473, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 798)) ;
    GGS_AC_5F_boolExpression var_targetExpression_25563 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_targetExpression_25563, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 800)) ;
    outArgument_outDefinition = GGS_C_5F_trans::init_21__21_ (var_sourceExpression_25473, var_targetExpression_25563, inCompiler COMMA_HERE) ;
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
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 715)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 721)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      if (select_sara_5F_parser_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 729)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 731)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 736)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 738)) ;
      if (select_sara_5F_parser_34 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 741)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 744)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 746)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 749)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 750)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 753)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 755)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 763)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 764)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 769)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 770)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 773)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 775)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 776)) ;
    nt_modalcompadd_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 785)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    nt_modalcompsub_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 792)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 795)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 798)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 800)) ;
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
  GGS_lstring var_machineIdentifier_25913 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
  GGS_uint var_indexOfImportedMachine_25998 ;
  GGS_uint var_machineInputVariableCount_26026 ;
  GGS_uint var_machineInputAndInternalVariableCount_26057 ;
  GGS_M_5F_variablesMap var_machineVariablesMap_26099 ;
  GGS_stringlist joker_26119 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_25913, var_indexOfImportedMachine_25998, var_machineInputVariableCount_26026, var_machineInputAndInternalVariableCount_26057, var_machineVariablesMap_26099, joker_26119, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 812)) ;
  GGS_L_5F_translationVector var_translationVector_26129 = GGS_L_5F_translationVector::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_inputVar_26237 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 817)) ;
    GGS_uint var_inputVarIndex_26285 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_26237, var_inputVarIndex_26285, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
    var_translationVector_26129.addAssignOperation (var_inputVarIndex_26285  COMMA_SOURCE_FILE ("sara_parser.galgas", 819)) ;
    if (select_sara_5F_parser_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 821)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 823)) ;
  GGS_uint var_inputVariablesCount_26380 = var_translationVector_26129.getter_count (SOURCE_FILE ("sara_parser.galgas", 824)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_26380.objectCompare (var_machineInputVariableCount_26026)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 826)), GGS_string ("The '$").add_operation (var_machineIdentifier_25913.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 826)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 826)).add_operation (var_machineInputVariableCount_26026.getter_string (SOURCE_FILE ("sara_parser.galgas", 826)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 826)).add_operation (GGS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 826)).add_operation (var_inputVariablesCount_26380.getter_string (SOURCE_FILE ("sara_parser.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 827)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 827)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 826)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 830)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_internalVar_26810 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
      GGS_uint var_internalVarIndex_26866 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_26810, var_internalVarIndex_26866, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 835)) ;
      var_translationVector_26129.addAssignOperation (var_internalVarIndex_26866  COMMA_SOURCE_FILE ("sara_parser.galgas", 836)) ;
      if (select_sara_5F_parser_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
  GGS_uint var_inputAndInternalVariablesCount_26982 = var_translationVector_26129.getter_count (SOURCE_FILE ("sara_parser.galgas", 842)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCount_26982.objectCompare (var_machineInputAndInternalVariableCount_26057)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 844)), GGS_string ("The '$").add_operation (var_machineIdentifier_25913.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 844)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 844)).add_operation (var_machineInputAndInternalVariableCount_26057.getter_string (SOURCE_FILE ("sara_parser.galgas", 844)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 844)).add_operation (GGS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 844)).add_operation (var_inputAndInternalVariablesCount_26982.getter_string (SOURCE_FILE ("sara_parser.galgas", 845)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 845)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 845)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 844)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 848)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GGS_lstring var_outputVar_27473 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    GGS_uint var_outputVarIndex_27523 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_27473, var_outputVarIndex_27523, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    var_translationVector_26129.addAssignOperation (var_outputVarIndex_27523  COMMA_SOURCE_FILE ("sara_parser.galgas", 852)) ;
    if (select_sara_5F_parser_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 854)) ;
    }else{
      repeatFlag_6 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 856)) ;
  GGS_uint var_allVariablesCount_27620 = var_translationVector_26129.getter_count (SOURCE_FILE ("sara_parser.galgas", 857)) ;
  GGS_uint var_machineAllVariablesCount_27678 = var_machineVariablesMap_26099.getter_count (SOURCE_FILE ("sara_parser.galgas", 858)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_allVariablesCount_27620.objectCompare (var_machineAllVariablesCount_27678)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 860)), GGS_string ("The '$").add_operation (var_machineIdentifier_25913.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 860)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 860)).add_operation (var_machineAllVariablesCount_27678.getter_string (SOURCE_FILE ("sara_parser.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 860)).add_operation (GGS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 860)).add_operation (var_allVariablesCount_27620.getter_string (SOURCE_FILE ("sara_parser.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 861)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 861)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
    }
  }
  outArgument_outDefinition = GGS_C_5F_importMachine::init_21__21_ (var_indexOfImportedMachine_25998, var_translationVector_26129, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 817)) ;
    if (select_sara_5F_parser_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 821)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 823)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 830)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
      if (select_sara_5F_parser_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 848)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    if (select_sara_5F_parser_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 854)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 856)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                             GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                             GGS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                             Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GGS_M_5F_stateMap var_statesMap_28477 = GGS_M_5F_stateMap::init (inCompiler COMMA_HERE) ;
  GGS_L_5F_stateDefinition var_stateDefinitionList_28509 = GGS_L_5F_stateDefinition::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 877)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 879)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_stateName_28633 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 881)) ;
    {
    var_statesMap_28477.setter_insertKey (var_stateName_28633, var_statesMap_28477.getter_count (SOURCE_FILE ("sara_parser.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 882)) ;
    }
    if (select_sara_5F_parser_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 884)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
  GGS_L_5F_statesDefinitionList var_initialStatesDefinitionList_28756 = GGS_L_5F_statesDefinitionList::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 889)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_initialState_28853 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 891)) ;
    GGS_uint var_initialStateIndex_28910 ;
    var_statesMap_28477.method_searchKey (var_initialState_28853, var_initialStateIndex_28910, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 892)) ;
    var_initialStatesDefinitionList_28756.addAssignOperation (var_initialStateIndex_28910, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 893))  COMMA_SOURCE_FILE ("sara_parser.galgas", 893)) ;
    if (select_sara_5F_parser_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 897)) ;
  GGS_L_5F_statesDefinitionList var_terminalStatesDefinitionList_29055 = GGS_L_5F_statesDefinitionList::init (inCompiler COMMA_HERE) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 902)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GGS_lstring var_terminalState_29172 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 904)) ;
      GGS_uint var_terminalStateIndex_29233 ;
      var_statesMap_28477.method_searchKey (var_terminalState_29172, var_terminalStateIndex_29233, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 905)) ;
      var_terminalStatesDefinitionList_29055.addAssignOperation (var_terminalStateIndex_29233, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 906))  COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
      if (select_sara_5F_parser_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 908)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 910)) ;
  } break ;
  default:
    break ;
  }
  GGS_M_5F_stateMap var_stateDefinitionMap_29406 = GGS_M_5F_stateMap::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GGS_lstring var_stateName_29494 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 916)) ;
    GGS_uint var_stateIndex_29545 ;
    var_statesMap_28477.method_searchKey (var_stateName_29494, var_stateIndex_29545, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 917)) ;
    {
    var_stateDefinitionMap_29406.setter_defineState (var_stateName_29494, var_stateDefinitionMap_29406.getter_count (SOURCE_FILE ("sara_parser.galgas", 918)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 918)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    GGS_AC_5F_boolExpression var_stateExpression_29738 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_stateExpression_29738, inCompiler) ;
    GGS_location var_endOfStateExpression_29772 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 922)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 923)) ;
    GGS_L_5F_transitionDefinition var_transitionsList_29857 = GGS_L_5F_transitionDefinition::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      if (select_sara_5F_parser_44 (inCompiler) == 2) {
        GGS_AC_5F_boolExpression var_transitionInputExpression_29988 ;
        nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_transitionInputExpression_29988, inCompiler) ;
        GGS_location var_endOfExpression_30034 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 929)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 930)) ;
        GGS_lstring var_targetStateName_30104 = inCompiler->synthetizedAttribute_identifierString () ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 931)) ;
        GGS_uint var_targetStateIndex_30169 ;
        var_statesMap_28477.method_searchKey (var_targetStateName_30104, var_targetStateIndex_30169, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 932)) ;
        var_transitionsList_29857.addAssignOperation (var_transitionInputExpression_29988, var_endOfExpression_30034, var_targetStateIndex_30169  COMMA_SOURCE_FILE ("sara_parser.galgas", 933)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 934)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 936)) ;
    var_stateDefinitionList_28509.addAssignOperation (var_stateIndex_29545, var_stateExpression_29738, var_endOfStateExpression_29772, var_transitionsList_29857  COMMA_SOURCE_FILE ("sara_parser.galgas", 937)) ;
    if (select_sara_5F_parser_43 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  UpEnumerator_M_5F_stateMap enumerator_30483 (var_statesMap_28477) ;
  while (enumerator_30483.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_stateDefinitionMap_29406.getter_hasKey (enumerator_30483.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("sara_parser.galgas", 943)).operator_not (SOURCE_FILE ("sara_parser.galgas", 943)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 944)), GGS_string ("'").add_operation (enumerator_30483.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 944)).add_operation (GGS_string ("' state is not described"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 944)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
      }
    }
    enumerator_30483.gotoNextObject () ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 948)) ;
  outArgument_outDefinition = GGS_C_5F_explicitAutomatonDefinition::init_21__21__21__21__21_ (var_statesMap_28477, var_initialStatesDefinitionList_28756, var_terminalStatesDefinitionList_29055, var_stateDefinitionList_28509, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 949)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 877)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 879)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 881)) ;
    if (select_sara_5F_parser_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 884)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 889)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 891)) ;
    if (select_sara_5F_parser_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 897)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 902)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 904)) ;
      if (select_sara_5F_parser_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 908)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 910)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 916)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 923)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      if (select_sara_5F_parser_44 (inCompiler) == 2) {
        nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 930)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 931)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 934)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 936)) ;
    if (select_sara_5F_parser_43 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 948)) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @M_5F_variablesMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap::GGS_M_5F_variablesMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap::~ GGS_M_5F_variablesMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap::GGS_M_5F_variablesMap (const GGS_M_5F_variablesMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap & GGS_M_5F_variablesMap::operator = (const GGS_M_5F_variablesMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_variablesMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_variablesMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_variablesMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_variablesMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_variablesMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_M_5F_variablesMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_M_5F_variablesMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_variablesMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_variablesMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::performInsert (const GGS_M_5F_variablesMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_M_5F_variablesMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>
GGS_M_5F_variablesMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_M_5F_variablesMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>>
GGS_M_5F_variablesMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_M_5F_variablesMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_ GGS_M_5F_variablesMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_variablesMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_M_5F_variablesMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_variablesMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::class_func_mapWithMapToOverride (const GGS_M_5F_variablesMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_M_5F_variablesMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_variablesMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_M_5F_variablesMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_uint inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_M_5F_variablesMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' variable has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_uint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' variable is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_variablesMap::getter_mIndexForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::setter_setMIndexForKey (GGS_uint inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_variablesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_M_5F_variablesMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_variablesMap_2E_element>> array = sortedInfoArray () ;
    GGS_M_5F_variablesMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_M_5F_variablesMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_M_5F_variablesMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @M_5F_variablesMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_M_5F_variablesMap::DownEnumerator_M_5F_variablesMap (const GGS_M_5F_variablesMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element DownEnumerator_M_5F_variablesMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_M_5F_variablesMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_variablesMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @M_5F_variablesMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_M_5F_variablesMap::UpEnumerator_M_5F_variablesMap (const GGS_M_5F_variablesMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element UpEnumerator_M_5F_variablesMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_M_5F_variablesMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_variablesMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @M_variablesMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap ("M_variablesMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_variablesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_variablesMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_variablesMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_M_5F_variablesMap result ;
  const GGS_M_5F_variablesMap * p = (const GGS_M_5F_variablesMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_variablesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_variablesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @M_5F_stateMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap::GGS_M_5F_stateMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap::~ GGS_M_5F_stateMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap::GGS_M_5F_stateMap (const GGS_M_5F_stateMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap & GGS_M_5F_stateMap::operator = (const GGS_M_5F_stateMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_stateMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_stateMap::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_stateMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_stateMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_stateMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_M_5F_stateMap::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_M_5F_stateMap::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_stateMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_stateMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::performInsert (const GGS_M_5F_stateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_M_5F_stateMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>
GGS_M_5F_stateMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_M_5F_stateMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>>
GGS_M_5F_stateMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_M_5F_stateMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_ GGS_M_5F_stateMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_stateMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_M_5F_stateMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_stateMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::class_func_mapWithMapToOverride (const GGS_M_5F_stateMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_M_5F_stateMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_stateMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_M_5F_stateMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::setter_insertKey (GGS_lstring inLKey,
                                          GGS_uint inArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_M_5F_stateMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' state has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::setter_defineState (GGS_lstring inLKey,
                                            GGS_uint inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_M_5F_stateMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' state has been already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::method_searchKey (GGS_lstring inLKey,
                                          GGS_uint & outArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' state is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_stateMap::getter_mIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::setter_setMIndexForKey (GGS_uint inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_stateMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_M_5F_stateMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_stateMap_2E_element>> array = sortedInfoArray () ;
    GGS_M_5F_stateMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_M_5F_stateMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_M_5F_stateMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @M_5F_stateMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_M_5F_stateMap::DownEnumerator_M_5F_stateMap (const GGS_M_5F_stateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element DownEnumerator_M_5F_stateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_M_5F_stateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_stateMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @M_5F_stateMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_M_5F_stateMap::UpEnumerator_M_5F_stateMap (const GGS_M_5F_stateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element UpEnumerator_M_5F_stateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_M_5F_stateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_stateMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @M_stateMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap ("M_stateMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_stateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_stateMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_stateMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_M_5F_stateMap result ;
  const GGS_M_5F_stateMap * p = (const GGS_M_5F_stateMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_stateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_stateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@L_5F_translationVector' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_translationVector : public cCollectionElement {
  public: GGS_L_5F_translationVector_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_translationVector (const GGS_uint & in_mTargetSlot
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_translationVector (const GGS_L_5F_translationVector_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_translationVector::cCollectionElement_L_5F_translationVector (const GGS_uint & in_mTargetSlot
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetSlot) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_translationVector::cCollectionElement_L_5F_translationVector (const GGS_L_5F_translationVector_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetSlot) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_translationVector::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_translationVector::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_translationVector (mObject.mProperty_mTargetSlot COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @L_5F_translationVector
//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector::GGS_L_5F_translationVector (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector::GGS_L_5F_translationVector (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    const GGS_L_5F_translationVector_2E_element element (p->mObject.mProperty_mTargetSlot) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_uint & in_mTargetSlot
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_translationVector * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_translationVector (in_mTargetSlot COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_translationVector::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_translationVector::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetSlot:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetSlot.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_translationVector result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::plusPlusAssignOperation (const GGS_L_5F_translationVector_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::class_func_listWithValue (const GGS_uint & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_L_5F_translationVector_2E_element element (inOperand0) ;
  GGS_L_5F_translationVector result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::addAssignOperation (const GGS_uint & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  const GGS_L_5F_translationVector_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_append (const GGS_uint inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_L_5F_translationVector_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_insertAtIndex (const GGS_uint inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_L_5F_translationVector_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_removeAtIndex (GGS_uint & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTargetSlot ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_popFirst (GGS_uint & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetSlot ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_popLast (GGS_uint & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetSlot ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::method_first (GGS_uint & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetSlot ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::method_last (GGS_uint & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetSlot ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::add_operation (const GGS_L_5F_translationVector & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::plusAssignOperation (const GGS_L_5F_translationVector inList,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_setMTargetSlotAtIndex (GGS_uint inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetSlot = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_L_5F_translationVector::getter_mTargetSlotAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetSlot ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_translationVector
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_translationVector::DownEnumerator_L_5F_translationVector (const GGS_L_5F_translationVector & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element DownEnumerator_L_5F_translationVector::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_translationVector::current_mTargetSlot (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetSlot ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_translationVector
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_translationVector::UpEnumerator_L_5F_translationVector (const GGS_L_5F_translationVector & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element UpEnumerator_L_5F_translationVector::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_translationVector::current_mTargetSlot (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetSlot ;
}




//--------------------------------------------------------------------------------------------------
//     @L_translationVector generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_translationVector ("L_translationVector",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_translationVector::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_translationVector::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_translationVector (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_L_5F_translationVector result ;
  const GGS_L_5F_translationVector * p = (const GGS_L_5F_translationVector *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_translationVector *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_translationVector", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @AC_5F_boolExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_AC_5F_boolExpression::objectCompare (const GGS_AC_5F_boolExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression::GGS_AC_5F_boolExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_AC_5F_boolExpression::
AC_5F_boolExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression::GGS_AC_5F_boolExpression (const cPtr_AC_5F_boolExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_boolExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @AC_boolExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_AC_5F_boolExpression::cPtr_AC_5F_boolExpression (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @AC_boolExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression ("AC_boolExpression",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AC_5F_boolExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_boolExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AC_5F_boolExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AC_5F_boolExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_AC_5F_boolExpression::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_AC_5F_boolExpression result ;
  const GGS_AC_5F_boolExpression * p = (const GGS_AC_5F_boolExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AC_5F_boolExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_boolExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_AC_5F_boolExpression_2E_weak::objectCompare (const GGS_AC_5F_boolExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression_2E_weak::GGS_AC_5F_boolExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression_2E_weak & GGS_AC_5F_boolExpression_2E_weak::operator = (const GGS_AC_5F_boolExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression_2E_weak::GGS_AC_5F_boolExpression_2E_weak (const GGS_AC_5F_boolExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression_2E_weak GGS_AC_5F_boolExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_AC_5F_boolExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_AC_5F_boolExpression_2E_weak::unwrappedValue (void) const {
  GGS_AC_5F_boolExpression result ;
  if (isValid ()) {
    const cPtr_AC_5F_boolExpression * p = (cPtr_AC_5F_boolExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_AC_5F_boolExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_AC_5F_boolExpression_2E_weak::bang_AC_5F_boolExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_AC_5F_boolExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_AC_5F_boolExpression) ;
      result = GGS_AC_5F_boolExpression ((cPtr_AC_5F_boolExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @AC_boolExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak ("AC_boolExpression.weak",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AC_5F_boolExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AC_5F_boolExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AC_5F_boolExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression_2E_weak GGS_AC_5F_boolExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_AC_5F_boolExpression_2E_weak result ;
  const GGS_AC_5F_boolExpression_2E_weak * p = (const GGS_AC_5F_boolExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AC_5F_boolExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_boolExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_importBoolMachine_2E_weak::objectCompare (const GGS_C_5F_importBoolMachine_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine_2E_weak::GGS_C_5F_importBoolMachine_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine_2E_weak & GGS_C_5F_importBoolMachine_2E_weak::operator = (const GGS_C_5F_importBoolMachine & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine_2E_weak::GGS_C_5F_importBoolMachine_2E_weak (const GGS_C_5F_importBoolMachine & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine_2E_weak GGS_C_5F_importBoolMachine_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_importBoolMachine_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine GGS_C_5F_importBoolMachine_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_importBoolMachine result ;
  if (isValid ()) {
    const cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_importBoolMachine (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine GGS_C_5F_importBoolMachine_2E_weak::bang_C_5F_importBoolMachine_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_importBoolMachine result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_importBoolMachine) ;
      result = GGS_C_5F_importBoolMachine ((cPtr_C_5F_importBoolMachine *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_importBoolMachine.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2E_weak ("C_importBoolMachine.weak",
                                                                                   & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_importBoolMachine_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_importBoolMachine_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_importBoolMachine_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine_2E_weak GGS_C_5F_importBoolMachine_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_importBoolMachine_2E_weak result ;
  const GGS_C_5F_importBoolMachine_2E_weak * p = (const GGS_C_5F_importBoolMachine_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_importBoolMachine_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importBoolMachine.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_andExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_andExpression::objectCompare (const GGS_C_5F_andExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression::GGS_C_5F_andExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_andExpression GGS_C_5F_andExpression::
init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
              const GGS_AC_5F_boolExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_andExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_andExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_andExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_C_5F_andExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_andExpression::
C_5F_andExpression_init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                 const GGS_AC_5F_boolExpression & in_mRightExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression::GGS_C_5F_andExpression (const cPtr_C_5F_andExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_andExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_andExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_andExpression::setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_andExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_andExpression::setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_andExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_andExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_andExpression::cPtr_C_5F_andExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_andExpression::cPtr_C_5F_andExpression (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_andExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression ;
}

void cPtr_C_5F_andExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@C_andExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_andExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_andExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_andExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_andExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_andExpression ("C_andExpression",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_andExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression GGS_C_5F_andExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_andExpression result ;
  const GGS_C_5F_andExpression * p = (const GGS_C_5F_andExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_andExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_andExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_andExpression_2E_weak::objectCompare (const GGS_C_5F_andExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression_2E_weak::GGS_C_5F_andExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression_2E_weak & GGS_C_5F_andExpression_2E_weak::operator = (const GGS_C_5F_andExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression_2E_weak::GGS_C_5F_andExpression_2E_weak (const GGS_C_5F_andExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression_2E_weak GGS_C_5F_andExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_andExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression GGS_C_5F_andExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_andExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_andExpression * p = (cPtr_C_5F_andExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_andExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression GGS_C_5F_andExpression_2E_weak::bang_C_5F_andExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_andExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_andExpression) ;
      result = GGS_C_5F_andExpression ((cPtr_C_5F_andExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_andExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_andExpression_2E_weak ("C_andExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_andExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_andExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_andExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_andExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_andExpression_2E_weak GGS_C_5F_andExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_andExpression_2E_weak result ;
  const GGS_C_5F_andExpression_2E_weak * p = (const GGS_C_5F_andExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_andExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_andExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_orExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_orExpression::objectCompare (const GGS_C_5F_orExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression::GGS_C_5F_orExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_orExpression GGS_C_5F_orExpression::
init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
              const GGS_AC_5F_boolExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_orExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_orExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_orExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_C_5F_orExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_orExpression::
C_5F_orExpression_init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                const GGS_AC_5F_boolExpression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression::GGS_C_5F_orExpression (const cPtr_C_5F_orExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_orExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_orExpression::setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_orExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_orExpression::setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_orExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_orExpression::cPtr_C_5F_orExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_orExpression::cPtr_C_5F_orExpression (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_orExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression ;
}

void cPtr_C_5F_orExpression::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@C_orExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_orExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_orExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_orExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_orExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orExpression ("C_orExpression",
                                                                      & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_orExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression GGS_C_5F_orExpression::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_orExpression result ;
  const GGS_C_5F_orExpression * p = (const GGS_C_5F_orExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_orExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_orExpression_2E_weak::objectCompare (const GGS_C_5F_orExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression_2E_weak::GGS_C_5F_orExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression_2E_weak & GGS_C_5F_orExpression_2E_weak::operator = (const GGS_C_5F_orExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression_2E_weak::GGS_C_5F_orExpression_2E_weak (const GGS_C_5F_orExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression_2E_weak GGS_C_5F_orExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_orExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression GGS_C_5F_orExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_orExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_orExpression * p = (cPtr_C_5F_orExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_orExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression GGS_C_5F_orExpression_2E_weak::bang_C_5F_orExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_orExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_orExpression) ;
      result = GGS_C_5F_orExpression ((cPtr_C_5F_orExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_orExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orExpression_2E_weak ("C_orExpression.weak",
                                                                              & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_orExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_orExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_orExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orExpression_2E_weak GGS_C_5F_orExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_orExpression_2E_weak result ;
  const GGS_C_5F_orExpression_2E_weak * p = (const GGS_C_5F_orExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_orExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_xorExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_xorExpression::objectCompare (const GGS_C_5F_xorExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression::GGS_C_5F_xorExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_xorExpression GGS_C_5F_xorExpression::
init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
              const GGS_AC_5F_boolExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_xorExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_xorExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_xorExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_C_5F_xorExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_xorExpression::
C_5F_xorExpression_init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                 const GGS_AC_5F_boolExpression & in_mRightExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression::GGS_C_5F_xorExpression (const cPtr_C_5F_xorExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_xorExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_xorExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_xorExpression::setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_xorExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_xorExpression::setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_xorExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_xorExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_xorExpression::cPtr_C_5F_xorExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_xorExpression::cPtr_C_5F_xorExpression (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                  const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_xorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression ;
}

void cPtr_C_5F_xorExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@C_xorExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_xorExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_xorExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_xorExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_xorExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_xorExpression ("C_xorExpression",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_xorExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression GGS_C_5F_xorExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_xorExpression result ;
  const GGS_C_5F_xorExpression * p = (const GGS_C_5F_xorExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_xorExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_xorExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_xorExpression_2E_weak::objectCompare (const GGS_C_5F_xorExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression_2E_weak::GGS_C_5F_xorExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression_2E_weak & GGS_C_5F_xorExpression_2E_weak::operator = (const GGS_C_5F_xorExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression_2E_weak::GGS_C_5F_xorExpression_2E_weak (const GGS_C_5F_xorExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression_2E_weak GGS_C_5F_xorExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_xorExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression GGS_C_5F_xorExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_xorExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_xorExpression * p = (cPtr_C_5F_xorExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_xorExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression GGS_C_5F_xorExpression_2E_weak::bang_C_5F_xorExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_xorExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_xorExpression) ;
      result = GGS_C_5F_xorExpression ((cPtr_C_5F_xorExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_xorExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_xorExpression_2E_weak ("C_xorExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_xorExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_xorExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_xorExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_xorExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_xorExpression_2E_weak GGS_C_5F_xorExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_xorExpression_2E_weak result ;
  const GGS_C_5F_xorExpression_2E_weak * p = (const GGS_C_5F_xorExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_xorExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_xorExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_impliesExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_impliesExpression::objectCompare (const GGS_C_5F_impliesExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression::GGS_C_5F_impliesExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_impliesExpression GGS_C_5F_impliesExpression::
init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
              const GGS_AC_5F_boolExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_impliesExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_impliesExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_impliesExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_C_5F_impliesExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_impliesExpression::
C_5F_impliesExpression_init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                     const GGS_AC_5F_boolExpression & in_mRightExpression,
                                     Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression::GGS_C_5F_impliesExpression (const cPtr_C_5F_impliesExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_impliesExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_impliesExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_impliesExpression::setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_impliesExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_impliesExpression::setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_impliesExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_impliesExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_impliesExpression::cPtr_C_5F_impliesExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_impliesExpression::cPtr_C_5F_impliesExpression (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                          const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_impliesExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression ;
}

void cPtr_C_5F_impliesExpression::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@C_impliesExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_impliesExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_impliesExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_impliesExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_impliesExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression ("C_impliesExpression",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_impliesExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression GGS_C_5F_impliesExpression::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_impliesExpression result ;
  const GGS_C_5F_impliesExpression * p = (const GGS_C_5F_impliesExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_impliesExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_impliesExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_impliesExpression_2E_weak::objectCompare (const GGS_C_5F_impliesExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression_2E_weak::GGS_C_5F_impliesExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression_2E_weak & GGS_C_5F_impliesExpression_2E_weak::operator = (const GGS_C_5F_impliesExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression_2E_weak::GGS_C_5F_impliesExpression_2E_weak (const GGS_C_5F_impliesExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression_2E_weak GGS_C_5F_impliesExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_impliesExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression GGS_C_5F_impliesExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_impliesExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_impliesExpression * p = (cPtr_C_5F_impliesExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_impliesExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression GGS_C_5F_impliesExpression_2E_weak::bang_C_5F_impliesExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_impliesExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_impliesExpression) ;
      result = GGS_C_5F_impliesExpression ((cPtr_C_5F_impliesExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_impliesExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression_2E_weak ("C_impliesExpression.weak",
                                                                                   & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_impliesExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_impliesExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_impliesExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_impliesExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_impliesExpression_2E_weak GGS_C_5F_impliesExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_impliesExpression_2E_weak result ;
  const GGS_C_5F_impliesExpression_2E_weak * p = (const GGS_C_5F_impliesExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_impliesExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_impliesExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_equalExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_equalExpression::objectCompare (const GGS_C_5F_equalExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression::GGS_C_5F_equalExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_equalExpression GGS_C_5F_equalExpression::
init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
              const GGS_AC_5F_boolExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_equalExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_equalExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_equalExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_C_5F_equalExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_equalExpression::
C_5F_equalExpression_init_21__21_ (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                   const GGS_AC_5F_boolExpression & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression::GGS_C_5F_equalExpression (const cPtr_C_5F_equalExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_equalExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_equalExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_equalExpression::setProperty_mLeftExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_equalExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_equalExpression::setProperty_mRightExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_equalExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_equalExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_equalExpression::cPtr_C_5F_equalExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_equalExpression::cPtr_C_5F_equalExpression (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                      const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_equalExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression ;
}

void cPtr_C_5F_equalExpression::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@C_equalExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_equalExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_equalExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_equalExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_equalExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_equalExpression ("C_equalExpression",
                                                                         & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_equalExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression GGS_C_5F_equalExpression::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_equalExpression result ;
  const GGS_C_5F_equalExpression * p = (const GGS_C_5F_equalExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_equalExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_equalExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_equalExpression_2E_weak::objectCompare (const GGS_C_5F_equalExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression_2E_weak::GGS_C_5F_equalExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression_2E_weak & GGS_C_5F_equalExpression_2E_weak::operator = (const GGS_C_5F_equalExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression_2E_weak::GGS_C_5F_equalExpression_2E_weak (const GGS_C_5F_equalExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression_2E_weak GGS_C_5F_equalExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_equalExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression GGS_C_5F_equalExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_equalExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_equalExpression * p = (cPtr_C_5F_equalExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_equalExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression GGS_C_5F_equalExpression_2E_weak::bang_C_5F_equalExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_equalExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_equalExpression) ;
      result = GGS_C_5F_equalExpression ((cPtr_C_5F_equalExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_equalExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_equalExpression_2E_weak ("C_equalExpression.weak",
                                                                                 & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_equalExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_equalExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_equalExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_equalExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_equalExpression_2E_weak GGS_C_5F_equalExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_equalExpression_2E_weak result ;
  const GGS_C_5F_equalExpression_2E_weak * p = (const GGS_C_5F_equalExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_equalExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_equalExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_notExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_notExpression::objectCompare (const GGS_C_5F_notExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression::GGS_C_5F_notExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_notExpression GGS_C_5F_notExpression::
init_21_ (const GGS_AC_5F_boolExpression & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_notExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_notExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_notExpression_init_21_ (in_mExpression, inCompiler) ;
  const GGS_C_5F_notExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_notExpression::
C_5F_notExpression_init_21_ (const GGS_AC_5F_boolExpression & in_mExpression,
                             Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression::GGS_C_5F_notExpression (const cPtr_C_5F_notExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_notExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_notExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_notExpression * p = (cPtr_C_5F_notExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_notExpression::setProperty_mExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_notExpression * p = (cPtr_C_5F_notExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_notExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_notExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_notExpression::cPtr_C_5F_notExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_notExpression::cPtr_C_5F_notExpression (const GGS_AC_5F_boolExpression & in_mExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_notExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

void cPtr_C_5F_notExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@C_notExpression:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_notExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_notExpression (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_notExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_notExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_notExpression ("C_notExpression",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_notExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_notExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_notExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression GGS_C_5F_notExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_notExpression result ;
  const GGS_C_5F_notExpression * p = (const GGS_C_5F_notExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_notExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_notExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_notExpression_2E_weak::objectCompare (const GGS_C_5F_notExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression_2E_weak::GGS_C_5F_notExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression_2E_weak & GGS_C_5F_notExpression_2E_weak::operator = (const GGS_C_5F_notExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression_2E_weak::GGS_C_5F_notExpression_2E_weak (const GGS_C_5F_notExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression_2E_weak GGS_C_5F_notExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_notExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression GGS_C_5F_notExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_notExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_notExpression * p = (cPtr_C_5F_notExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_notExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression GGS_C_5F_notExpression_2E_weak::bang_C_5F_notExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_notExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_notExpression) ;
      result = GGS_C_5F_notExpression ((cPtr_C_5F_notExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_notExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_notExpression_2E_weak ("C_notExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_notExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_notExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_notExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_notExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_notExpression_2E_weak GGS_C_5F_notExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_notExpression_2E_weak result ;
  const GGS_C_5F_notExpression_2E_weak * p = (const GGS_C_5F_notExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_notExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_notExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_VariableExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_VariableExpression::objectCompare (const GGS_C_5F_VariableExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression::GGS_C_5F_VariableExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_VariableExpression GGS_C_5F_VariableExpression::
init_21_ (const GGS_uint & in_mInputVarIndex,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_VariableExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_VariableExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_VariableExpression_init_21_ (in_mInputVarIndex, inCompiler) ;
  const GGS_C_5F_VariableExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_VariableExpression::
C_5F_VariableExpression_init_21_ (const GGS_uint & in_mInputVarIndex,
                                  Compiler * /* inCompiler */) {
  mProperty_mInputVarIndex = in_mInputVarIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression::GGS_C_5F_VariableExpression (const cPtr_C_5F_VariableExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_VariableExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_VariableExpression::readProperty_mInputVarIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_VariableExpression * p = (cPtr_C_5F_VariableExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
    return p->mProperty_mInputVarIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_VariableExpression::setProperty_mInputVarIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_VariableExpression * p = (cPtr_C_5F_VariableExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_VariableExpression) ;
    p->mProperty_mInputVarIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_VariableExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_VariableExpression::cPtr_C_5F_VariableExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mInputVarIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_VariableExpression::cPtr_C_5F_VariableExpression (const GGS_uint & in_mInputVarIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mInputVarIndex () {
  mProperty_mInputVarIndex = in_mInputVarIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_VariableExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

void cPtr_C_5F_VariableExpression::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@C_VariableExpression:") ;
  mProperty_mInputVarIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_VariableExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_VariableExpression (mProperty_mInputVarIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_VariableExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mInputVarIndex.printNonNullClassInstanceProperties ("mInputVarIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_VariableExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression ("C_VariableExpression",
                                                                            & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_VariableExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_VariableExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_VariableExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression GGS_C_5F_VariableExpression::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_C_5F_VariableExpression result ;
  const GGS_C_5F_VariableExpression * p = (const GGS_C_5F_VariableExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_VariableExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_VariableExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_VariableExpression_2E_weak::objectCompare (const GGS_C_5F_VariableExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression_2E_weak::GGS_C_5F_VariableExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression_2E_weak & GGS_C_5F_VariableExpression_2E_weak::operator = (const GGS_C_5F_VariableExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression_2E_weak::GGS_C_5F_VariableExpression_2E_weak (const GGS_C_5F_VariableExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression_2E_weak GGS_C_5F_VariableExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_VariableExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression GGS_C_5F_VariableExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_VariableExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_VariableExpression * p = (cPtr_C_5F_VariableExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_VariableExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression GGS_C_5F_VariableExpression_2E_weak::bang_C_5F_VariableExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_VariableExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_VariableExpression) ;
      result = GGS_C_5F_VariableExpression ((cPtr_C_5F_VariableExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_VariableExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression_2E_weak ("C_VariableExpression.weak",
                                                                                    & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_VariableExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_VariableExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_VariableExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_VariableExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_VariableExpression_2E_weak GGS_C_5F_VariableExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_C_5F_VariableExpression_2E_weak result ;
  const GGS_C_5F_VariableExpression_2E_weak * p = (const GGS_C_5F_VariableExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_VariableExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_VariableExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_trueExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_trueExpression::objectCompare (const GGS_C_5F_trueExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression::GGS_C_5F_trueExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_trueExpression GGS_C_5F_trueExpression::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_trueExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_trueExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_trueExpression_init (inCompiler) ;
  const GGS_C_5F_trueExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_trueExpression::
C_5F_trueExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression::GGS_C_5F_trueExpression (const cPtr_C_5F_trueExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trueExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @C_trueExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_C_5F_trueExpression::cPtr_C_5F_trueExpression (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

void cPtr_C_5F_trueExpression::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@C_trueExpression]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_trueExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_trueExpression (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_trueExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_trueExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trueExpression ("C_trueExpression",
                                                                        & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_trueExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression GGS_C_5F_trueExpression::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_C_5F_trueExpression result ;
  const GGS_C_5F_trueExpression * p = (const GGS_C_5F_trueExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_trueExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trueExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_trueExpression_2E_weak::objectCompare (const GGS_C_5F_trueExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression_2E_weak::GGS_C_5F_trueExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression_2E_weak & GGS_C_5F_trueExpression_2E_weak::operator = (const GGS_C_5F_trueExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression_2E_weak::GGS_C_5F_trueExpression_2E_weak (const GGS_C_5F_trueExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression_2E_weak GGS_C_5F_trueExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_trueExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression GGS_C_5F_trueExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_trueExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_trueExpression * p = (cPtr_C_5F_trueExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_trueExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression GGS_C_5F_trueExpression_2E_weak::bang_C_5F_trueExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_trueExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_trueExpression) ;
      result = GGS_C_5F_trueExpression ((cPtr_C_5F_trueExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_trueExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trueExpression_2E_weak ("C_trueExpression.weak",
                                                                                & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_trueExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trueExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_trueExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_trueExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trueExpression_2E_weak GGS_C_5F_trueExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_C_5F_trueExpression_2E_weak result ;
  const GGS_C_5F_trueExpression_2E_weak * p = (const GGS_C_5F_trueExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_trueExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trueExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_falseExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_falseExpression::objectCompare (const GGS_C_5F_falseExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression::GGS_C_5F_falseExpression (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_falseExpression GGS_C_5F_falseExpression::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_falseExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_falseExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_falseExpression_init (inCompiler) ;
  const GGS_C_5F_falseExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_falseExpression::
C_5F_falseExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression::GGS_C_5F_falseExpression (const cPtr_C_5F_falseExpression * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_falseExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @C_falseExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_C_5F_falseExpression::cPtr_C_5F_falseExpression (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

void cPtr_C_5F_falseExpression::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@C_falseExpression]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_falseExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_falseExpression (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_falseExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_falseExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_falseExpression ("C_falseExpression",
                                                                         & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_falseExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression GGS_C_5F_falseExpression::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_falseExpression result ;
  const GGS_C_5F_falseExpression * p = (const GGS_C_5F_falseExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_falseExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_falseExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_falseExpression_2E_weak::objectCompare (const GGS_C_5F_falseExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression_2E_weak::GGS_C_5F_falseExpression_2E_weak (void) :
GGS_AC_5F_boolExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression_2E_weak & GGS_C_5F_falseExpression_2E_weak::operator = (const GGS_C_5F_falseExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression_2E_weak::GGS_C_5F_falseExpression_2E_weak (const GGS_C_5F_falseExpression & inSource) :
GGS_AC_5F_boolExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression_2E_weak GGS_C_5F_falseExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_falseExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression GGS_C_5F_falseExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_falseExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_falseExpression * p = (cPtr_C_5F_falseExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_falseExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression GGS_C_5F_falseExpression_2E_weak::bang_C_5F_falseExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_falseExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_falseExpression) ;
      result = GGS_C_5F_falseExpression ((cPtr_C_5F_falseExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_falseExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_falseExpression_2E_weak ("C_falseExpression.weak",
                                                                                 & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_falseExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_falseExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_falseExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_falseExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_falseExpression_2E_weak GGS_C_5F_falseExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_falseExpression_2E_weak result ;
  const GGS_C_5F_falseExpression_2E_weak * p = (const GGS_C_5F_falseExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_falseExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_falseExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@L_5F_transitionDefinition' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_transitionDefinition : public cCollectionElement {
  public: GGS_L_5F_transitionDefinition_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_transitionDefinition (const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                        const GGS_location & in_mEndOfExpression,
                                                        const GGS_uint & in_mTargetStateIndex
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_transitionDefinition::cCollectionElement_L_5F_transitionDefinition (const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                                                            const GGS_location & in_mEndOfExpression,
                                                                                            const GGS_uint & in_mTargetStateIndex
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActionExpression, in_mEndOfExpression, in_mTargetStateIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_transitionDefinition::cCollectionElement_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActionExpression, inElement.mProperty_mEndOfExpression, inElement.mProperty_mTargetStateIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_transitionDefinition::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_transitionDefinition::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_transitionDefinition (mObject.mProperty_mActionExpression, mObject.mProperty_mEndOfExpression, mObject.mProperty_mTargetStateIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @L_5F_transitionDefinition
//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition::GGS_L_5F_transitionDefinition (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition::GGS_L_5F_transitionDefinition (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    const GGS_L_5F_transitionDefinition_2E_element element (p->mObject.mProperty_mActionExpression, p->mObject.mProperty_mEndOfExpression, p->mObject.mProperty_mTargetStateIndex) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                               const GGS_location & in_mEndOfExpression,
                                                               const GGS_uint & in_mTargetStateIndex
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (in_mActionExpression, in_mEndOfExpression, in_mTargetStateIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_transitionDefinition::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_transitionDefinition::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mActionExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActionExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetStateIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetStateIndex.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_transitionDefinition result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::plusPlusAssignOperation (const GGS_L_5F_transitionDefinition_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::class_func_listWithValue (const GGS_AC_5F_boolExpression & inOperand0,
                                                                                       const GGS_location & inOperand1,
                                                                                       const GGS_uint & inOperand2
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_L_5F_transitionDefinition_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_L_5F_transitionDefinition result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::addAssignOperation (const GGS_AC_5F_boolExpression & inOperand0,
                                                        const GGS_location & inOperand1,
                                                        const GGS_uint & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  const GGS_L_5F_transitionDefinition_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_append (const GGS_AC_5F_boolExpression inOperand0,
                                                   const GGS_location inOperand1,
                                                   const GGS_uint inOperand2,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_L_5F_transitionDefinition_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_insertAtIndex (const GGS_AC_5F_boolExpression inOperand0,
                                                          const GGS_location inOperand1,
                                                          const GGS_uint inOperand2,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_L_5F_transitionDefinition_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_removeAtIndex (GGS_AC_5F_boolExpression & outOperand0,
                                                          GGS_location & outOperand1,
                                                          GGS_uint & outOperand2,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mActionExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOfExpression ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mTargetStateIndex ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_popFirst (GGS_AC_5F_boolExpression & outOperand0,
                                                     GGS_location & outOperand1,
                                                     GGS_uint & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActionExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTargetStateIndex ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_popLast (GGS_AC_5F_boolExpression & outOperand0,
                                                    GGS_location & outOperand1,
                                                    GGS_uint & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActionExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTargetStateIndex ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::method_first (GGS_AC_5F_boolExpression & outOperand0,
                                                  GGS_location & outOperand1,
                                                  GGS_uint & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActionExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTargetStateIndex ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::method_last (GGS_AC_5F_boolExpression & outOperand0,
                                                 GGS_location & outOperand1,
                                                 GGS_uint & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActionExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTargetStateIndex ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::add_operation (const GGS_L_5F_transitionDefinition & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::plusAssignOperation (const GGS_L_5F_transitionDefinition inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_setMActionExpressionAtIndex (GGS_AC_5F_boolExpression inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActionExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_AC_5F_boolExpression GGS_L_5F_transitionDefinition::getter_mActionExpressionAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_AC_5F_boolExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActionExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_setMEndOfExpressionAtIndex (GGS_location inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_L_5F_transitionDefinition::getter_mEndOfExpressionAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_setMTargetStateIndexAtIndex (GGS_uint inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetStateIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_L_5F_transitionDefinition::getter_mTargetStateIndexAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetStateIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_transitionDefinition
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_transitionDefinition::DownEnumerator_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element DownEnumerator_L_5F_transitionDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression DownEnumerator_L_5F_transitionDefinition::current_mActionExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActionExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_L_5F_transitionDefinition::current_mEndOfExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_transitionDefinition::current_mTargetStateIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetStateIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_transitionDefinition
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_transitionDefinition::UpEnumerator_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element UpEnumerator_L_5F_transitionDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression UpEnumerator_L_5F_transitionDefinition::current_mActionExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActionExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_L_5F_transitionDefinition::current_mEndOfExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_transitionDefinition::current_mTargetStateIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetStateIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @L_transitionDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition ("L_transitionDefinition",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_transitionDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_transitionDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_transitionDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_L_5F_transitionDefinition result ;
  const GGS_L_5F_transitionDefinition * p = (const GGS_L_5F_transitionDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_transitionDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_transitionDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@L_5F_stateDefinition' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_stateDefinition : public cCollectionElement {
  public: GGS_L_5F_stateDefinition_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_stateDefinition (const GGS_uint & in_mStateIndex,
                                                   const GGS_AC_5F_boolExpression & in_mStateExpression,
                                                   const GGS_location & in_mEndOfStateExpression,
                                                   const GGS_L_5F_transitionDefinition & in_mTransitionsList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_stateDefinition (const GGS_L_5F_stateDefinition_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_stateDefinition::cCollectionElement_L_5F_stateDefinition (const GGS_uint & in_mStateIndex,
                                                                                  const GGS_AC_5F_boolExpression & in_mStateExpression,
                                                                                  const GGS_location & in_mEndOfStateExpression,
                                                                                  const GGS_L_5F_transitionDefinition & in_mTransitionsList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateExpression, in_mEndOfStateExpression, in_mTransitionsList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_stateDefinition::cCollectionElement_L_5F_stateDefinition (const GGS_L_5F_stateDefinition_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStateIndex, inElement.mProperty_mStateExpression, inElement.mProperty_mEndOfStateExpression, inElement.mProperty_mTransitionsList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_stateDefinition::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_stateDefinition::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_stateDefinition (mObject.mProperty_mStateIndex, mObject.mProperty_mStateExpression, mObject.mProperty_mEndOfStateExpression, mObject.mProperty_mTransitionsList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @L_5F_stateDefinition
//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition::GGS_L_5F_stateDefinition (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition::GGS_L_5F_stateDefinition (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    const GGS_L_5F_stateDefinition_2E_element element (p->mObject.mProperty_mStateIndex, p->mObject.mProperty_mStateExpression, p->mObject.mProperty_mEndOfStateExpression, p->mObject.mProperty_mTransitionsList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_uint & in_mStateIndex,
                                                          const GGS_AC_5F_boolExpression & in_mStateExpression,
                                                          const GGS_location & in_mEndOfStateExpression,
                                                          const GGS_L_5F_transitionDefinition & in_mTransitionsList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_stateDefinition (in_mStateIndex, in_mStateExpression, in_mEndOfStateExpression, in_mTransitionsList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_stateDefinition::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_stateDefinition::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStateIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStateIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStateExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStateExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfStateExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfStateExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTransitionsList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTransitionsList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_stateDefinition result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::plusPlusAssignOperation (const GGS_L_5F_stateDefinition_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                             const GGS_AC_5F_boolExpression & inOperand1,
                                                                             const GGS_location & inOperand2,
                                                                             const GGS_L_5F_transitionDefinition & inOperand3
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_L_5F_stateDefinition_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_L_5F_stateDefinition result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::addAssignOperation (const GGS_uint & inOperand0,
                                                   const GGS_AC_5F_boolExpression & inOperand1,
                                                   const GGS_location & inOperand2,
                                                   const GGS_L_5F_transitionDefinition & inOperand3
                                                   COMMA_LOCATION_ARGS) {
  const GGS_L_5F_stateDefinition_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_append (const GGS_uint inOperand0,
                                              const GGS_AC_5F_boolExpression inOperand1,
                                              const GGS_location inOperand2,
                                              const GGS_L_5F_transitionDefinition inOperand3,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_L_5F_stateDefinition_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_insertAtIndex (const GGS_uint inOperand0,
                                                     const GGS_AC_5F_boolExpression inOperand1,
                                                     const GGS_location inOperand2,
                                                     const GGS_L_5F_transitionDefinition inOperand3,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_L_5F_stateDefinition_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_removeAtIndex (GGS_uint & outOperand0,
                                                     GGS_AC_5F_boolExpression & outOperand1,
                                                     GGS_location & outOperand2,
                                                     GGS_L_5F_transitionDefinition & outOperand3,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mStateIndex ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mStateExpression ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfStateExpression ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mTransitionsList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_popFirst (GGS_uint & outOperand0,
                                                GGS_AC_5F_boolExpression & outOperand1,
                                                GGS_location & outOperand2,
                                                GGS_L_5F_transitionDefinition & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStateIndex ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStateExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfStateExpression ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTransitionsList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_popLast (GGS_uint & outOperand0,
                                               GGS_AC_5F_boolExpression & outOperand1,
                                               GGS_location & outOperand2,
                                               GGS_L_5F_transitionDefinition & outOperand3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStateIndex ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStateExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfStateExpression ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTransitionsList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::method_first (GGS_uint & outOperand0,
                                             GGS_AC_5F_boolExpression & outOperand1,
                                             GGS_location & outOperand2,
                                             GGS_L_5F_transitionDefinition & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStateIndex ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStateExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfStateExpression ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTransitionsList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::method_last (GGS_uint & outOperand0,
                                            GGS_AC_5F_boolExpression & outOperand1,
                                            GGS_location & outOperand2,
                                            GGS_L_5F_transitionDefinition & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStateIndex ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStateExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfStateExpression ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTransitionsList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::add_operation (const GGS_L_5F_stateDefinition & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::plusAssignOperation (const GGS_L_5F_stateDefinition inList,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMStateIndexAtIndex (GGS_uint inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStateIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_L_5F_stateDefinition::getter_mStateIndexAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStateIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMStateExpressionAtIndex (GGS_AC_5F_boolExpression inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStateExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_AC_5F_boolExpression GGS_L_5F_stateDefinition::getter_mStateExpressionAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_AC_5F_boolExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStateExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMEndOfStateExpressionAtIndex (GGS_location inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfStateExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_L_5F_stateDefinition::getter_mEndOfStateExpressionAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfStateExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMTransitionsListAtIndex (GGS_L_5F_transitionDefinition inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTransitionsList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_L_5F_transitionDefinition GGS_L_5F_stateDefinition::getter_mTransitionsListAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTransitionsList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_stateDefinition
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_stateDefinition::DownEnumerator_L_5F_stateDefinition (const GGS_L_5F_stateDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element DownEnumerator_L_5F_stateDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_stateDefinition::current_mStateIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression DownEnumerator_L_5F_stateDefinition::current_mStateExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_L_5F_stateDefinition::current_mEndOfStateExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition DownEnumerator_L_5F_stateDefinition::current_mTransitionsList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTransitionsList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_stateDefinition
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_stateDefinition::UpEnumerator_L_5F_stateDefinition (const GGS_L_5F_stateDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element UpEnumerator_L_5F_stateDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_stateDefinition::current_mStateIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression UpEnumerator_L_5F_stateDefinition::current_mStateExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_L_5F_stateDefinition::current_mEndOfStateExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition UpEnumerator_L_5F_stateDefinition::current_mTransitionsList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTransitionsList ;
}




//--------------------------------------------------------------------------------------------------
//     @L_stateDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition ("L_stateDefinition",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_stateDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_stateDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_stateDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_L_5F_stateDefinition result ;
  const GGS_L_5F_stateDefinition * p = (const GGS_L_5F_stateDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_stateDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_stateDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@L_5F_statesDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_statesDefinitionList : public cCollectionElement {
  public: GGS_L_5F_statesDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_statesDefinitionList (const GGS_uint & in_mStateIndex,
                                                        const GGS_location & in_mStateLocation
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_statesDefinitionList::cCollectionElement_L_5F_statesDefinitionList (const GGS_uint & in_mStateIndex,
                                                                                            const GGS_location & in_mStateLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateIndex, in_mStateLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_statesDefinitionList::cCollectionElement_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStateIndex, inElement.mProperty_mStateLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_statesDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_statesDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_statesDefinitionList (mObject.mProperty_mStateIndex, mObject.mProperty_mStateLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @L_5F_statesDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList::GGS_L_5F_statesDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList::GGS_L_5F_statesDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    const GGS_L_5F_statesDefinitionList_2E_element element (p->mObject.mProperty_mStateIndex, p->mObject.mProperty_mStateLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_uint & in_mStateIndex,
                                                               const GGS_location & in_mStateLocation
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (in_mStateIndex, in_mStateLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_statesDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_statesDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStateIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStateIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStateLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStateLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_statesDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::plusPlusAssignOperation (const GGS_L_5F_statesDefinitionList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                                       const GGS_location & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_L_5F_statesDefinitionList_2E_element element (inOperand0, inOperand1) ;
  GGS_L_5F_statesDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::addAssignOperation (const GGS_uint & inOperand0,
                                                        const GGS_location & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  const GGS_L_5F_statesDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_append (const GGS_uint inOperand0,
                                                   const GGS_location inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_L_5F_statesDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_insertAtIndex (const GGS_uint inOperand0,
                                                          const GGS_location inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_L_5F_statesDefinitionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_removeAtIndex (GGS_uint & outOperand0,
                                                          GGS_location & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mStateIndex ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mStateLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_popFirst (GGS_uint & outOperand0,
                                                     GGS_location & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStateIndex ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStateLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_popLast (GGS_uint & outOperand0,
                                                    GGS_location & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStateIndex ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStateLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::method_first (GGS_uint & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStateIndex ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStateLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::method_last (GGS_uint & outOperand0,
                                                 GGS_location & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStateIndex ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStateLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::add_operation (const GGS_L_5F_statesDefinitionList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::plusAssignOperation (const GGS_L_5F_statesDefinitionList inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_setMStateIndexAtIndex (GGS_uint inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStateIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_L_5F_statesDefinitionList::getter_mStateIndexAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStateIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_setMStateLocationAtIndex (GGS_location inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStateLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_L_5F_statesDefinitionList::getter_mStateLocationAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStateLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_statesDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_statesDefinitionList::DownEnumerator_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element DownEnumerator_L_5F_statesDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_statesDefinitionList::current_mStateIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_L_5F_statesDefinitionList::current_mStateLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_statesDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_statesDefinitionList::UpEnumerator_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element UpEnumerator_L_5F_statesDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_statesDefinitionList::current_mStateIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_L_5F_statesDefinitionList::current_mStateLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStateLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @L_statesDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ("L_statesDefinitionList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_statesDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_statesDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_statesDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_L_5F_statesDefinitionList result ;
  const GGS_L_5F_statesDefinitionList * p = (const GGS_L_5F_statesDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_statesDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_statesDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @AC_5F_machineDefinition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_AC_5F_machineDefinition::objectCompare (const GGS_AC_5F_machineDefinition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition::GGS_AC_5F_machineDefinition (void) :
AC_GALGAS_reference_class () {
}


void cPtr_AC_5F_machineDefinition::
AC_5F_machineDefinition_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition::GGS_AC_5F_machineDefinition (const cPtr_AC_5F_machineDefinition * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_machineDefinition) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @AC_machineDefinition class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_AC_5F_machineDefinition::cPtr_AC_5F_machineDefinition (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @AC_machineDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition ("AC_machineDefinition",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AC_5F_machineDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_machineDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AC_5F_machineDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AC_5F_machineDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_AC_5F_machineDefinition::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_AC_5F_machineDefinition result ;
  const GGS_AC_5F_machineDefinition * p = (const GGS_AC_5F_machineDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AC_5F_machineDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_machineDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_AC_5F_machineDefinition_2E_weak::objectCompare (const GGS_AC_5F_machineDefinition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition_2E_weak::GGS_AC_5F_machineDefinition_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition_2E_weak & GGS_AC_5F_machineDefinition_2E_weak::operator = (const GGS_AC_5F_machineDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition_2E_weak::GGS_AC_5F_machineDefinition_2E_weak (const GGS_AC_5F_machineDefinition & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition_2E_weak GGS_AC_5F_machineDefinition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_AC_5F_machineDefinition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_AC_5F_machineDefinition_2E_weak::unwrappedValue (void) const {
  GGS_AC_5F_machineDefinition result ;
  if (isValid ()) {
    const cPtr_AC_5F_machineDefinition * p = (cPtr_AC_5F_machineDefinition *) ptr () ;
    if (nullptr != p) {
      result = GGS_AC_5F_machineDefinition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_AC_5F_machineDefinition_2E_weak::bang_AC_5F_machineDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_AC_5F_machineDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_AC_5F_machineDefinition) ;
      result = GGS_AC_5F_machineDefinition ((cPtr_AC_5F_machineDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @AC_machineDefinition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak ("AC_machineDefinition.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AC_5F_machineDefinition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AC_5F_machineDefinition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AC_5F_machineDefinition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition_2E_weak GGS_AC_5F_machineDefinition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_AC_5F_machineDefinition_2E_weak result ;
  const GGS_AC_5F_machineDefinition_2E_weak * p = (const GGS_AC_5F_machineDefinition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AC_5F_machineDefinition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_machineDefinition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @M_5F_modesMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap::GGS_M_5F_modesMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap::~ GGS_M_5F_modesMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap::GGS_M_5F_modesMap (const GGS_M_5F_modesMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap & GGS_M_5F_modesMap::operator = (const GGS_M_5F_modesMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_modesMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_modesMap::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_modesMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_modesMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_modesMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_M_5F_modesMap::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_M_5F_modesMap::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_modesMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_modesMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::performInsert (const GGS_M_5F_modesMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_M_5F_modesMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>
GGS_M_5F_modesMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_M_5F_modesMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>>
GGS_M_5F_modesMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_M_5F_modesMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_ GGS_M_5F_modesMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_modesMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_M_5F_modesMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_modesMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      element.mProperty_mModeDefinition = info->mProperty_mModeDefinition ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::class_func_mapWithMapToOverride (const GGS_M_5F_modesMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_M_5F_modesMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_modesMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_M_5F_modesMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::setter_insertKey (GGS_lstring inLKey,
                                          GGS_uint inArgument0,
                                          GGS_AC_5F_machineDefinition inArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_M_5F_modesMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' mode has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::method_searchKey (GGS_lstring inLKey,
                                          GGS_uint & outArgument0,
                                          GGS_AC_5F_machineDefinition & outArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' mode is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mModeDefinition ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_modesMap::getter_mIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_M_5F_modesMap::getter_mModeDefinitionForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_AC_5F_machineDefinition result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mModeDefinition ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::setter_setMIndexForKey (GGS_uint inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_modesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::setter_setMModeDefinitionForKey (GGS_AC_5F_machineDefinition inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_modesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mModeDefinition = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_M_5F_modesMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mModeDefinition:") ;
    inArray (i COMMA_HERE)->mProperty_mModeDefinition.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_modesMap_2E_element>> array = sortedInfoArray () ;
    GGS_M_5F_modesMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_M_5F_modesMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_M_5F_modesMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @M_5F_modesMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_M_5F_modesMap::DownEnumerator_M_5F_modesMap (const GGS_M_5F_modesMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element DownEnumerator_M_5F_modesMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_M_5F_modesMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_modesMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition DownEnumerator_M_5F_modesMap::current_mModeDefinition (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mModeDefinition ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @M_5F_modesMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_M_5F_modesMap::UpEnumerator_M_5F_modesMap (const GGS_M_5F_modesMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element UpEnumerator_M_5F_modesMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_M_5F_modesMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_modesMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition UpEnumerator_M_5F_modesMap::current_mModeDefinition (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mModeDefinition ;
}


//--------------------------------------------------------------------------------------------------
//     @M_modesMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap ("M_modesMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_modesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_modesMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_modesMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_M_5F_modesMap result ;
  const GGS_M_5F_modesMap * p = (const GGS_M_5F_modesMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_modesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_modesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ListForModes' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ListForModes : public cCollectionElement {
  public: GGS_ListForModes_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ListForModes (const GGS_uint & in_mSourceMode,
                                           const GGS_uint & in_mTargetMode
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ListForModes (const GGS_ListForModes_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ListForModes::cCollectionElement_ListForModes (const GGS_uint & in_mSourceMode,
                                                                  const GGS_uint & in_mTargetMode
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSourceMode, in_mTargetMode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ListForModes::cCollectionElement_ListForModes (const GGS_ListForModes_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSourceMode, inElement.mProperty_mTargetMode) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ListForModes::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ListForModes::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ListForModes (mObject.mProperty_mSourceMode, mObject.mProperty_mTargetMode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ListForModes
//--------------------------------------------------------------------------------------------------

GGS_ListForModes::GGS_ListForModes (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes::GGS_ListForModes (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    const GGS_ListForModes_2E_element element (p->mObject.mProperty_mSourceMode, p->mObject.mProperty_mTargetMode) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_uint & in_mSourceMode,
                                                  const GGS_uint & in_mTargetMode
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = nullptr ;
  macroMyNew (p, cCollectionElement_ListForModes (in_mSourceMode, in_mTargetMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ListForModes::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ListForModes::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceMode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetMode.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ListForModes result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::plusPlusAssignOperation (const GGS_ListForModes_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::class_func_listWithValue (const GGS_uint & inOperand0,
                                                             const GGS_uint & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  const GGS_ListForModes_2E_element element (inOperand0, inOperand1) ;
  GGS_ListForModes result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::addAssignOperation (const GGS_uint & inOperand0,
                                           const GGS_uint & inOperand1
                                           COMMA_LOCATION_ARGS) {
  const GGS_ListForModes_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_append (const GGS_uint inOperand0,
                                      const GGS_uint inOperand1,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_ListForModes_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_insertAtIndex (const GGS_uint inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_ListForModes_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_removeAtIndex (GGS_uint & outOperand0,
                                             GGS_uint & outOperand1,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSourceMode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetMode ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_popFirst (GGS_uint & outOperand0,
                                        GGS_uint & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSourceMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetMode ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_popLast (GGS_uint & outOperand0,
                                       GGS_uint & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSourceMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetMode ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::method_first (GGS_uint & outOperand0,
                                     GGS_uint & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSourceMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetMode ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::method_last (GGS_uint & outOperand0,
                                    GGS_uint & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSourceMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetMode ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::add_operation (const GGS_ListForModes & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ListForModes result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_ListForModes result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_ListForModes result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_ListForModes result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_ListForModes result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::plusAssignOperation (const GGS_ListForModes inList,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_setMSourceModeAtIndex (GGS_uint inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceMode = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_ListForModes::getter_mSourceModeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceMode ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_setMTargetModeAtIndex (GGS_uint inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetMode = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_ListForModes::getter_mTargetModeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetMode ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ListForModes
//--------------------------------------------------------------------------------------------------

DownEnumerator_ListForModes::DownEnumerator_ListForModes (const GGS_ListForModes & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element DownEnumerator_ListForModes::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ListForModes::current_mSourceMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ListForModes::current_mTargetMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetMode ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ListForModes
//--------------------------------------------------------------------------------------------------

UpEnumerator_ListForModes::UpEnumerator_ListForModes (const GGS_ListForModes & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element UpEnumerator_ListForModes::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ListForModes::current_mSourceMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ListForModes::current_mTargetMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetMode ;
}




//--------------------------------------------------------------------------------------------------
//     @ListForModes generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ListForModes ("ListForModes",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ListForModes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ListForModes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ListForModes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_ListForModes result ;
  const GGS_ListForModes * p = (const GGS_ListForModes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ListForModes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ListForModes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_substractiveModalCompositionComponent reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_substractiveModalCompositionComponent::objectCompare (const GGS_C_5F_substractiveModalCompositionComponent & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent::GGS_C_5F_substractiveModalCompositionComponent (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent GGS_C_5F_substractiveModalCompositionComponent::
init_21__21_ (const GGS_M_5F_modesMap & in_mModeMap,
              const GGS_ListForModes & in_mExclusionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_substractiveModalCompositionComponent * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_substractiveModalCompositionComponent (inCompiler COMMA_THERE)) ;
  object->C_5F_substractiveModalCompositionComponent_init_21__21_ (in_mModeMap, in_mExclusionList, inCompiler) ;
  const GGS_C_5F_substractiveModalCompositionComponent result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_substractiveModalCompositionComponent::
C_5F_substractiveModalCompositionComponent_init_21__21_ (const GGS_M_5F_modesMap & in_mModeMap,
                                                         const GGS_ListForModes & in_mExclusionList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mExclusionList = in_mExclusionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent::GGS_C_5F_substractiveModalCompositionComponent (const cPtr_C_5F_substractiveModalCompositionComponent * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_substractiveModalCompositionComponent) ;
}
//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_C_5F_substractiveModalCompositionComponent::readProperty_mModeMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    return p->mProperty_mModeMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_substractiveModalCompositionComponent::setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_C_5F_substractiveModalCompositionComponent::readProperty_mExclusionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ListForModes () ;
  }else{
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    return p->mProperty_mExclusionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_substractiveModalCompositionComponent::setProperty_mExclusionList (const GGS_ListForModes & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    p->mProperty_mExclusionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_substractiveModalCompositionComponent class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_substractiveModalCompositionComponent::cPtr_C_5F_substractiveModalCompositionComponent (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mModeMap (),
mProperty_mExclusionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_substractiveModalCompositionComponent::cPtr_C_5F_substractiveModalCompositionComponent (const GGS_M_5F_modesMap & in_mModeMap,
                                                                                                  const GGS_ListForModes & in_mExclusionList,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mModeMap (),
mProperty_mExclusionList () {
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mExclusionList = in_mExclusionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_substractiveModalCompositionComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;
}

void cPtr_C_5F_substractiveModalCompositionComponent::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@C_substractiveModalCompositionComponent:") ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExclusionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_substractiveModalCompositionComponent::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_substractiveModalCompositionComponent (mProperty_mModeMap, mProperty_mExclusionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_substractiveModalCompositionComponent::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mModeMap.printNonNullClassInstanceProperties ("mModeMap") ;
    mProperty_mExclusionList.printNonNullClassInstanceProperties ("mExclusionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_substractiveModalCompositionComponent generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ("C_substractiveModalCompositionComponent",
                                                                                               & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_substractiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_substractiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_substractiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent GGS_C_5F_substractiveModalCompositionComponent::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_substractiveModalCompositionComponent result ;
  const GGS_C_5F_substractiveModalCompositionComponent * p = (const GGS_C_5F_substractiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_substractiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_substractiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_substractiveModalCompositionComponent_2E_weak::objectCompare (const GGS_C_5F_substractiveModalCompositionComponent_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent_2E_weak::GGS_C_5F_substractiveModalCompositionComponent_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent_2E_weak & GGS_C_5F_substractiveModalCompositionComponent_2E_weak::operator = (const GGS_C_5F_substractiveModalCompositionComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent_2E_weak::GGS_C_5F_substractiveModalCompositionComponent_2E_weak (const GGS_C_5F_substractiveModalCompositionComponent & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent_2E_weak GGS_C_5F_substractiveModalCompositionComponent_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_substractiveModalCompositionComponent_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent GGS_C_5F_substractiveModalCompositionComponent_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_substractiveModalCompositionComponent result ;
  if (isValid ()) {
    const cPtr_C_5F_substractiveModalCompositionComponent * p = (cPtr_C_5F_substractiveModalCompositionComponent *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_substractiveModalCompositionComponent (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent GGS_C_5F_substractiveModalCompositionComponent_2E_weak::bang_C_5F_substractiveModalCompositionComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_substractiveModalCompositionComponent result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_substractiveModalCompositionComponent) ;
      result = GGS_C_5F_substractiveModalCompositionComponent ((cPtr_C_5F_substractiveModalCompositionComponent *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_substractiveModalCompositionComponent.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent_2E_weak ("C_substractiveModalCompositionComponent.weak",
                                                                                                       & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_substractiveModalCompositionComponent_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_substractiveModalCompositionComponent_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_substractiveModalCompositionComponent_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_substractiveModalCompositionComponent_2E_weak GGS_C_5F_substractiveModalCompositionComponent_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_substractiveModalCompositionComponent_2E_weak result ;
  const GGS_C_5F_substractiveModalCompositionComponent_2E_weak * p = (const GGS_C_5F_substractiveModalCompositionComponent_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_substractiveModalCompositionComponent_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_substractiveModalCompositionComponent.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_additiveModalCompositionComponent reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_additiveModalCompositionComponent::objectCompare (const GGS_C_5F_additiveModalCompositionComponent & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent::GGS_C_5F_additiveModalCompositionComponent (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent GGS_C_5F_additiveModalCompositionComponent::
init_21__21_ (const GGS_M_5F_modesMap & in_mModeMap,
              const GGS_ListForModes & in_mInclusionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_additiveModalCompositionComponent * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_additiveModalCompositionComponent (inCompiler COMMA_THERE)) ;
  object->C_5F_additiveModalCompositionComponent_init_21__21_ (in_mModeMap, in_mInclusionList, inCompiler) ;
  const GGS_C_5F_additiveModalCompositionComponent result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_additiveModalCompositionComponent::
C_5F_additiveModalCompositionComponent_init_21__21_ (const GGS_M_5F_modesMap & in_mModeMap,
                                                     const GGS_ListForModes & in_mInclusionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mInclusionList = in_mInclusionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent::GGS_C_5F_additiveModalCompositionComponent (const cPtr_C_5F_additiveModalCompositionComponent * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_additiveModalCompositionComponent) ;
}
//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_C_5F_additiveModalCompositionComponent::readProperty_mModeMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    return p->mProperty_mModeMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_additiveModalCompositionComponent::setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_C_5F_additiveModalCompositionComponent::readProperty_mInclusionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ListForModes () ;
  }else{
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    return p->mProperty_mInclusionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_additiveModalCompositionComponent::setProperty_mInclusionList (const GGS_ListForModes & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    p->mProperty_mInclusionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_additiveModalCompositionComponent class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_additiveModalCompositionComponent::cPtr_C_5F_additiveModalCompositionComponent (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mModeMap (),
mProperty_mInclusionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_additiveModalCompositionComponent::cPtr_C_5F_additiveModalCompositionComponent (const GGS_M_5F_modesMap & in_mModeMap,
                                                                                          const GGS_ListForModes & in_mInclusionList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mModeMap (),
mProperty_mInclusionList () {
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mInclusionList = in_mInclusionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_additiveModalCompositionComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;
}

void cPtr_C_5F_additiveModalCompositionComponent::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@C_additiveModalCompositionComponent:") ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInclusionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_additiveModalCompositionComponent::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_additiveModalCompositionComponent (mProperty_mModeMap, mProperty_mInclusionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_additiveModalCompositionComponent::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mModeMap.printNonNullClassInstanceProperties ("mModeMap") ;
    mProperty_mInclusionList.printNonNullClassInstanceProperties ("mInclusionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_additiveModalCompositionComponent generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ("C_additiveModalCompositionComponent",
                                                                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_additiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_additiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_additiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent GGS_C_5F_additiveModalCompositionComponent::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_additiveModalCompositionComponent result ;
  const GGS_C_5F_additiveModalCompositionComponent * p = (const GGS_C_5F_additiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_additiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_additiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_additiveModalCompositionComponent_2E_weak::objectCompare (const GGS_C_5F_additiveModalCompositionComponent_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent_2E_weak::GGS_C_5F_additiveModalCompositionComponent_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent_2E_weak & GGS_C_5F_additiveModalCompositionComponent_2E_weak::operator = (const GGS_C_5F_additiveModalCompositionComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent_2E_weak::GGS_C_5F_additiveModalCompositionComponent_2E_weak (const GGS_C_5F_additiveModalCompositionComponent & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent_2E_weak GGS_C_5F_additiveModalCompositionComponent_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_additiveModalCompositionComponent_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent GGS_C_5F_additiveModalCompositionComponent_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_additiveModalCompositionComponent result ;
  if (isValid ()) {
    const cPtr_C_5F_additiveModalCompositionComponent * p = (cPtr_C_5F_additiveModalCompositionComponent *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_additiveModalCompositionComponent (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent GGS_C_5F_additiveModalCompositionComponent_2E_weak::bang_C_5F_additiveModalCompositionComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_additiveModalCompositionComponent result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_additiveModalCompositionComponent) ;
      result = GGS_C_5F_additiveModalCompositionComponent ((cPtr_C_5F_additiveModalCompositionComponent *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_additiveModalCompositionComponent.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent_2E_weak ("C_additiveModalCompositionComponent.weak",
                                                                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_additiveModalCompositionComponent_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_additiveModalCompositionComponent_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_additiveModalCompositionComponent_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_additiveModalCompositionComponent_2E_weak GGS_C_5F_additiveModalCompositionComponent_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_additiveModalCompositionComponent_2E_weak result ;
  const GGS_C_5F_additiveModalCompositionComponent_2E_weak * p = (const GGS_C_5F_additiveModalCompositionComponent_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_additiveModalCompositionComponent_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_additiveModalCompositionComponent.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_trans reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_trans::objectCompare (const GGS_C_5F_trans & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans::GGS_C_5F_trans (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_trans GGS_C_5F_trans::
init_21__21_ (const GGS_AC_5F_boolExpression & in_mSourceStateExpression,
              const GGS_AC_5F_boolExpression & in_mTargetStateExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_trans * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_trans (inCompiler COMMA_THERE)) ;
  object->C_5F_trans_init_21__21_ (in_mSourceStateExpression, in_mTargetStateExpression, inCompiler) ;
  const GGS_C_5F_trans result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_trans::
C_5F_trans_init_21__21_ (const GGS_AC_5F_boolExpression & in_mSourceStateExpression,
                         const GGS_AC_5F_boolExpression & in_mTargetStateExpression,
                         Compiler * /* inCompiler */) {
  mProperty_mSourceStateExpression = in_mSourceStateExpression ;
  mProperty_mTargetStateExpression = in_mTargetStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans::GGS_C_5F_trans (const cPtr_C_5F_trans * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trans) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_trans::readProperty_mSourceStateExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    return p->mProperty_mSourceStateExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_trans::setProperty_mSourceStateExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    p->mProperty_mSourceStateExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_trans::readProperty_mTargetStateExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    return p->mProperty_mTargetStateExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_trans::setProperty_mTargetStateExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    p->mProperty_mTargetStateExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_trans class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_trans::cPtr_C_5F_trans (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mSourceStateExpression (),
mProperty_mTargetStateExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_trans::cPtr_C_5F_trans (const GGS_AC_5F_boolExpression & in_mSourceStateExpression,
                                  const GGS_AC_5F_boolExpression & in_mTargetStateExpression,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mSourceStateExpression (),
mProperty_mTargetStateExpression () {
  mProperty_mSourceStateExpression = in_mSourceStateExpression ;
  mProperty_mTargetStateExpression = in_mTargetStateExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_trans::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans ;
}

void cPtr_C_5F_trans::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@C_trans:") ;
  mProperty_mSourceStateExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetStateExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_trans::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_trans (mProperty_mSourceStateExpression, mProperty_mTargetStateExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_trans::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mSourceStateExpression.printNonNullClassInstanceProperties ("mSourceStateExpression") ;
    mProperty_mTargetStateExpression.printNonNullClassInstanceProperties ("mTargetStateExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_trans generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trans ("C_trans",
                                                               & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_trans::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_trans::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_trans (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans GGS_C_5F_trans::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_trans result ;
  const GGS_C_5F_trans * p = (const GGS_C_5F_trans *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_trans *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trans", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_trans_2E_weak::objectCompare (const GGS_C_5F_trans_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans_2E_weak::GGS_C_5F_trans_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans_2E_weak & GGS_C_5F_trans_2E_weak::operator = (const GGS_C_5F_trans & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans_2E_weak::GGS_C_5F_trans_2E_weak (const GGS_C_5F_trans & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans_2E_weak GGS_C_5F_trans_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_trans_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans GGS_C_5F_trans_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_trans result ;
  if (isValid ()) {
    const cPtr_C_5F_trans * p = (cPtr_C_5F_trans *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_trans (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans GGS_C_5F_trans_2E_weak::bang_C_5F_trans_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_trans result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_trans) ;
      result = GGS_C_5F_trans ((cPtr_C_5F_trans *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_trans.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_trans_2E_weak ("C_trans.weak",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_trans_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_trans_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_trans_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_trans_2E_weak GGS_C_5F_trans_2E_weak::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_trans_2E_weak result ;
  const GGS_C_5F_trans_2E_weak * p = (const GGS_C_5F_trans_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_trans_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trans.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_importMachine reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_importMachine::objectCompare (const GGS_C_5F_importMachine & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine::GGS_C_5F_importMachine (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_importMachine GGS_C_5F_importMachine::
init_21__21_ (const GGS_uint & in_mIndexOfImportedMachine,
              const GGS_L_5F_translationVector & in_mTranslationVector,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_importMachine * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_importMachine (inCompiler COMMA_THERE)) ;
  object->C_5F_importMachine_init_21__21_ (in_mIndexOfImportedMachine, in_mTranslationVector, inCompiler) ;
  const GGS_C_5F_importMachine result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_importMachine::
C_5F_importMachine_init_21__21_ (const GGS_uint & in_mIndexOfImportedMachine,
                                 const GGS_L_5F_translationVector & in_mTranslationVector,
                                 Compiler * /* inCompiler */) {
  mProperty_mIndexOfImportedMachine = in_mIndexOfImportedMachine ;
  mProperty_mTranslationVector = in_mTranslationVector ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine::GGS_C_5F_importMachine (const cPtr_C_5F_importMachine * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importMachine) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_importMachine::readProperty_mIndexOfImportedMachine (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    return p->mProperty_mIndexOfImportedMachine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_importMachine::setProperty_mIndexOfImportedMachine (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    p->mProperty_mIndexOfImportedMachine = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_C_5F_importMachine::readProperty_mTranslationVector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_L_5F_translationVector () ;
  }else{
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    return p->mProperty_mTranslationVector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_importMachine::setProperty_mTranslationVector (const GGS_L_5F_translationVector & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    p->mProperty_mTranslationVector = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_importMachine class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_importMachine::cPtr_C_5F_importMachine (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mIndexOfImportedMachine (),
mProperty_mTranslationVector () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_importMachine::cPtr_C_5F_importMachine (const GGS_uint & in_mIndexOfImportedMachine,
                                                  const GGS_L_5F_translationVector & in_mTranslationVector,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mIndexOfImportedMachine (),
mProperty_mTranslationVector () {
  mProperty_mIndexOfImportedMachine = in_mIndexOfImportedMachine ;
  mProperty_mTranslationVector = in_mTranslationVector ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_importMachine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine ;
}

void cPtr_C_5F_importMachine::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@C_importMachine:") ;
  mProperty_mIndexOfImportedMachine.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTranslationVector.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_importMachine::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_importMachine (mProperty_mIndexOfImportedMachine, mProperty_mTranslationVector, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_importMachine::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mIndexOfImportedMachine.printNonNullClassInstanceProperties ("mIndexOfImportedMachine") ;
    mProperty_mTranslationVector.printNonNullClassInstanceProperties ("mTranslationVector") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_importMachine generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importMachine ("C_importMachine",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_importMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_importMachine::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_importMachine (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine GGS_C_5F_importMachine::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_importMachine result ;
  const GGS_C_5F_importMachine * p = (const GGS_C_5F_importMachine *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_importMachine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importMachine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_importMachine_2E_weak::objectCompare (const GGS_C_5F_importMachine_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine_2E_weak::GGS_C_5F_importMachine_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine_2E_weak & GGS_C_5F_importMachine_2E_weak::operator = (const GGS_C_5F_importMachine & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine_2E_weak::GGS_C_5F_importMachine_2E_weak (const GGS_C_5F_importMachine & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine_2E_weak GGS_C_5F_importMachine_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_importMachine_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine GGS_C_5F_importMachine_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_importMachine result ;
  if (isValid ()) {
    const cPtr_C_5F_importMachine * p = (cPtr_C_5F_importMachine *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_importMachine (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine GGS_C_5F_importMachine_2E_weak::bang_C_5F_importMachine_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_importMachine result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_importMachine) ;
      result = GGS_C_5F_importMachine ((cPtr_C_5F_importMachine *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_importMachine.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importMachine_2E_weak ("C_importMachine.weak",
                                                                               & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_importMachine_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_importMachine_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_importMachine_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importMachine_2E_weak GGS_C_5F_importMachine_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_importMachine_2E_weak result ;
  const GGS_C_5F_importMachine_2E_weak * p = (const GGS_C_5F_importMachine_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_importMachine_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importMachine.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_explicitAutomatonDefinition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_explicitAutomatonDefinition::objectCompare (const GGS_C_5F_explicitAutomatonDefinition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition::GGS_C_5F_explicitAutomatonDefinition (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition GGS_C_5F_explicitAutomatonDefinition::
init_21__21__21__21__21_ (const GGS_M_5F_stateMap & in_mStatesMap,
                          const GGS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                          const GGS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                          const GGS_L_5F_stateDefinition & in_mStateDefinitionList,
                          const GGS_location & in_mEndOfDefinition,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_explicitAutomatonDefinition * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_explicitAutomatonDefinition (inCompiler COMMA_THERE)) ;
  object->C_5F_explicitAutomatonDefinition_init_21__21__21__21__21_ (in_mStatesMap, in_mInitialStatesDefinitionList, in_mTerminalStatesDefinitionList, in_mStateDefinitionList, in_mEndOfDefinition, inCompiler) ;
  const GGS_C_5F_explicitAutomatonDefinition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_explicitAutomatonDefinition::
C_5F_explicitAutomatonDefinition_init_21__21__21__21__21_ (const GGS_M_5F_stateMap & in_mStatesMap,
                                                           const GGS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                           const GGS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                           const GGS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                           const GGS_location & in_mEndOfDefinition,
                                                           Compiler * /* inCompiler */) {
  mProperty_mStatesMap = in_mStatesMap ;
  mProperty_mInitialStatesDefinitionList = in_mInitialStatesDefinitionList ;
  mProperty_mTerminalStatesDefinitionList = in_mTerminalStatesDefinitionList ;
  mProperty_mStateDefinitionList = in_mStateDefinitionList ;
  mProperty_mEndOfDefinition = in_mEndOfDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition::GGS_C_5F_explicitAutomatonDefinition (const cPtr_C_5F_explicitAutomatonDefinition * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_explicitAutomatonDefinition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_C_5F_explicitAutomatonDefinition::readProperty_mStatesMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_stateMap () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mStatesMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_explicitAutomatonDefinition::setProperty_mStatesMap (const GGS_M_5F_stateMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mStatesMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_C_5F_explicitAutomatonDefinition::readProperty_mInitialStatesDefinitionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_L_5F_statesDefinitionList () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mInitialStatesDefinitionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_explicitAutomatonDefinition::setProperty_mInitialStatesDefinitionList (const GGS_L_5F_statesDefinitionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mInitialStatesDefinitionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_C_5F_explicitAutomatonDefinition::readProperty_mTerminalStatesDefinitionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_L_5F_statesDefinitionList () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mTerminalStatesDefinitionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_explicitAutomatonDefinition::setProperty_mTerminalStatesDefinitionList (const GGS_L_5F_statesDefinitionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mTerminalStatesDefinitionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_C_5F_explicitAutomatonDefinition::readProperty_mStateDefinitionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_L_5F_stateDefinition () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mStateDefinitionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_explicitAutomatonDefinition::setProperty_mStateDefinitionList (const GGS_L_5F_stateDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mStateDefinitionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_C_5F_explicitAutomatonDefinition::readProperty_mEndOfDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    return p->mProperty_mEndOfDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_explicitAutomatonDefinition::setProperty_mEndOfDefinition (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    p->mProperty_mEndOfDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_explicitAutomatonDefinition class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_explicitAutomatonDefinition::cPtr_C_5F_explicitAutomatonDefinition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mStatesMap (),
mProperty_mInitialStatesDefinitionList (),
mProperty_mTerminalStatesDefinitionList (),
mProperty_mStateDefinitionList (),
mProperty_mEndOfDefinition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_explicitAutomatonDefinition::cPtr_C_5F_explicitAutomatonDefinition (const GGS_M_5F_stateMap & in_mStatesMap,
                                                                              const GGS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                                              const GGS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                                              const GGS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                                              const GGS_location & in_mEndOfDefinition,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mStatesMap (),
mProperty_mInitialStatesDefinitionList (),
mProperty_mTerminalStatesDefinitionList (),
mProperty_mStateDefinitionList (),
mProperty_mEndOfDefinition () {
  mProperty_mStatesMap = in_mStatesMap ;
  mProperty_mInitialStatesDefinitionList = in_mInitialStatesDefinitionList ;
  mProperty_mTerminalStatesDefinitionList = in_mTerminalStatesDefinitionList ;
  mProperty_mStateDefinitionList = in_mStateDefinitionList ;
  mProperty_mEndOfDefinition = in_mEndOfDefinition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_explicitAutomatonDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;
}

void cPtr_C_5F_explicitAutomatonDefinition::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@C_explicitAutomatonDefinition:") ;
  mProperty_mStatesMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInitialStatesDefinitionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalStatesDefinitionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStateDefinitionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_explicitAutomatonDefinition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_explicitAutomatonDefinition (mProperty_mStatesMap, mProperty_mInitialStatesDefinitionList, mProperty_mTerminalStatesDefinitionList, mProperty_mStateDefinitionList, mProperty_mEndOfDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//     @C_explicitAutomatonDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ("C_explicitAutomatonDefinition",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_explicitAutomatonDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_explicitAutomatonDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_explicitAutomatonDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition GGS_C_5F_explicitAutomatonDefinition::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_explicitAutomatonDefinition result ;
  const GGS_C_5F_explicitAutomatonDefinition * p = (const GGS_C_5F_explicitAutomatonDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_explicitAutomatonDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_explicitAutomatonDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_explicitAutomatonDefinition_2E_weak::objectCompare (const GGS_C_5F_explicitAutomatonDefinition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition_2E_weak::GGS_C_5F_explicitAutomatonDefinition_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition_2E_weak & GGS_C_5F_explicitAutomatonDefinition_2E_weak::operator = (const GGS_C_5F_explicitAutomatonDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition_2E_weak::GGS_C_5F_explicitAutomatonDefinition_2E_weak (const GGS_C_5F_explicitAutomatonDefinition & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition_2E_weak GGS_C_5F_explicitAutomatonDefinition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_explicitAutomatonDefinition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition GGS_C_5F_explicitAutomatonDefinition_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_explicitAutomatonDefinition result ;
  if (isValid ()) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (cPtr_C_5F_explicitAutomatonDefinition *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_explicitAutomatonDefinition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition GGS_C_5F_explicitAutomatonDefinition_2E_weak::bang_C_5F_explicitAutomatonDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_explicitAutomatonDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_explicitAutomatonDefinition) ;
      result = GGS_C_5F_explicitAutomatonDefinition ((cPtr_C_5F_explicitAutomatonDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_explicitAutomatonDefinition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition_2E_weak ("C_explicitAutomatonDefinition.weak",
                                                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_explicitAutomatonDefinition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_explicitAutomatonDefinition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_explicitAutomatonDefinition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_explicitAutomatonDefinition_2E_weak GGS_C_5F_explicitAutomatonDefinition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_explicitAutomatonDefinition_2E_weak result ;
  const GGS_C_5F_explicitAutomatonDefinition_2E_weak * p = (const GGS_C_5F_explicitAutomatonDefinition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_explicitAutomatonDefinition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_explicitAutomatonDefinition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_boolToSeqExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_boolToSeqExpression::objectCompare (const GGS_C_5F_boolToSeqExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression::GGS_C_5F_boolToSeqExpression (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression GGS_C_5F_boolToSeqExpression::
init_21_ (const GGS_AC_5F_boolExpression & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_boolToSeqExpression * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_boolToSeqExpression (inCompiler COMMA_THERE)) ;
  object->C_5F_boolToSeqExpression_init_21_ (in_mExpression, inCompiler) ;
  const GGS_C_5F_boolToSeqExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_boolToSeqExpression::
C_5F_boolToSeqExpression_init_21_ (const GGS_AC_5F_boolExpression & in_mExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression::GGS_C_5F_boolToSeqExpression (const cPtr_C_5F_boolToSeqExpression * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_boolToSeqExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_C_5F_boolToSeqExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_boolExpression () ;
  }else{
    cPtr_C_5F_boolToSeqExpression * p = (cPtr_C_5F_boolToSeqExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_boolToSeqExpression::setProperty_mExpression (const GGS_AC_5F_boolExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_boolToSeqExpression * p = (cPtr_C_5F_boolToSeqExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_boolToSeqExpression class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_boolToSeqExpression::cPtr_C_5F_boolToSeqExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_boolToSeqExpression::cPtr_C_5F_boolToSeqExpression (const GGS_AC_5F_boolExpression & in_mExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_boolToSeqExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

void cPtr_C_5F_boolToSeqExpression::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@C_boolToSeqExpression:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_boolToSeqExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_boolToSeqExpression (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_boolToSeqExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_boolToSeqExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ("C_boolToSeqExpression",
                                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_boolToSeqExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_boolToSeqExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_boolToSeqExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression GGS_C_5F_boolToSeqExpression::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_boolToSeqExpression result ;
  const GGS_C_5F_boolToSeqExpression * p = (const GGS_C_5F_boolToSeqExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_boolToSeqExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_boolToSeqExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_boolToSeqExpression_2E_weak::objectCompare (const GGS_C_5F_boolToSeqExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression_2E_weak::GGS_C_5F_boolToSeqExpression_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression_2E_weak & GGS_C_5F_boolToSeqExpression_2E_weak::operator = (const GGS_C_5F_boolToSeqExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression_2E_weak::GGS_C_5F_boolToSeqExpression_2E_weak (const GGS_C_5F_boolToSeqExpression & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression_2E_weak GGS_C_5F_boolToSeqExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_boolToSeqExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression GGS_C_5F_boolToSeqExpression_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_boolToSeqExpression result ;
  if (isValid ()) {
    const cPtr_C_5F_boolToSeqExpression * p = (cPtr_C_5F_boolToSeqExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_boolToSeqExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression GGS_C_5F_boolToSeqExpression_2E_weak::bang_C_5F_boolToSeqExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_boolToSeqExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_boolToSeqExpression) ;
      result = GGS_C_5F_boolToSeqExpression ((cPtr_C_5F_boolToSeqExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_boolToSeqExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression_2E_weak ("C_boolToSeqExpression.weak",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_boolToSeqExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_boolToSeqExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_boolToSeqExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_boolToSeqExpression_2E_weak GGS_C_5F_boolToSeqExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_boolToSeqExpression_2E_weak result ;
  const GGS_C_5F_boolToSeqExpression_2E_weak * p = (const GGS_C_5F_boolToSeqExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_boolToSeqExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_boolToSeqExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_existsDefinition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_existsDefinition::objectCompare (const GGS_C_5F_existsDefinition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition::GGS_C_5F_existsDefinition (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_existsDefinition GGS_C_5F_existsDefinition::
init_21__21__21_ (const GGS_uint & in_mPreviousVariableCount,
                  const GGS_uint & in_mTotalVariableCount,
                  const GGS_AC_5F_machineDefinition & in_mOperand,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_existsDefinition * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_existsDefinition (inCompiler COMMA_THERE)) ;
  object->C_5F_existsDefinition_init_21__21__21_ (in_mPreviousVariableCount, in_mTotalVariableCount, in_mOperand, inCompiler) ;
  const GGS_C_5F_existsDefinition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_existsDefinition::
C_5F_existsDefinition_init_21__21__21_ (const GGS_uint & in_mPreviousVariableCount,
                                        const GGS_uint & in_mTotalVariableCount,
                                        const GGS_AC_5F_machineDefinition & in_mOperand,
                                        Compiler * /* inCompiler */) {
  mProperty_mPreviousVariableCount = in_mPreviousVariableCount ;
  mProperty_mTotalVariableCount = in_mTotalVariableCount ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition::GGS_C_5F_existsDefinition (const cPtr_C_5F_existsDefinition * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_existsDefinition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_existsDefinition::readProperty_mPreviousVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    return p->mProperty_mPreviousVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_existsDefinition::setProperty_mPreviousVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    p->mProperty_mPreviousVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_existsDefinition::readProperty_mTotalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    return p->mProperty_mTotalVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_existsDefinition::setProperty_mTotalVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    p->mProperty_mTotalVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_existsDefinition::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_existsDefinition::setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_existsDefinition class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_existsDefinition::cPtr_C_5F_existsDefinition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mPreviousVariableCount (),
mProperty_mTotalVariableCount (),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_existsDefinition::cPtr_C_5F_existsDefinition (const GGS_uint & in_mPreviousVariableCount,
                                                        const GGS_uint & in_mTotalVariableCount,
                                                        const GGS_AC_5F_machineDefinition & in_mOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mPreviousVariableCount (),
mProperty_mTotalVariableCount (),
mProperty_mOperand () {
  mProperty_mPreviousVariableCount = in_mPreviousVariableCount ;
  mProperty_mTotalVariableCount = in_mTotalVariableCount ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_existsDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition ;
}

void cPtr_C_5F_existsDefinition::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@C_existsDefinition:") ;
  mProperty_mPreviousVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTotalVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_existsDefinition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_existsDefinition (mProperty_mPreviousVariableCount, mProperty_mTotalVariableCount, mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_existsDefinition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mPreviousVariableCount.printNonNullClassInstanceProperties ("mPreviousVariableCount") ;
    mProperty_mTotalVariableCount.printNonNullClassInstanceProperties ("mTotalVariableCount") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_existsDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition ("C_existsDefinition",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_existsDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_existsDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_existsDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition GGS_C_5F_existsDefinition::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_existsDefinition result ;
  const GGS_C_5F_existsDefinition * p = (const GGS_C_5F_existsDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_existsDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_existsDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_existsDefinition_2E_weak::objectCompare (const GGS_C_5F_existsDefinition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition_2E_weak::GGS_C_5F_existsDefinition_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition_2E_weak & GGS_C_5F_existsDefinition_2E_weak::operator = (const GGS_C_5F_existsDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition_2E_weak::GGS_C_5F_existsDefinition_2E_weak (const GGS_C_5F_existsDefinition & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition_2E_weak GGS_C_5F_existsDefinition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_existsDefinition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition GGS_C_5F_existsDefinition_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_existsDefinition result ;
  if (isValid ()) {
    const cPtr_C_5F_existsDefinition * p = (cPtr_C_5F_existsDefinition *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_existsDefinition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition GGS_C_5F_existsDefinition_2E_weak::bang_C_5F_existsDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_existsDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_existsDefinition) ;
      result = GGS_C_5F_existsDefinition ((cPtr_C_5F_existsDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_existsDefinition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition_2E_weak ("C_existsDefinition.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_existsDefinition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_existsDefinition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_existsDefinition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_existsDefinition_2E_weak GGS_C_5F_existsDefinition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_existsDefinition_2E_weak result ;
  const GGS_C_5F_existsDefinition_2E_weak * p = (const GGS_C_5F_existsDefinition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_existsDefinition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_existsDefinition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_forallDefinition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_forallDefinition::objectCompare (const GGS_C_5F_forallDefinition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition::GGS_C_5F_forallDefinition (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_forallDefinition GGS_C_5F_forallDefinition::
init_21__21__21_ (const GGS_uint & in_mPreviousVariableCount,
                  const GGS_uint & in_mTotalVariableCount,
                  const GGS_AC_5F_machineDefinition & in_mOperand,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_forallDefinition * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_forallDefinition (inCompiler COMMA_THERE)) ;
  object->C_5F_forallDefinition_init_21__21__21_ (in_mPreviousVariableCount, in_mTotalVariableCount, in_mOperand, inCompiler) ;
  const GGS_C_5F_forallDefinition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_forallDefinition::
C_5F_forallDefinition_init_21__21__21_ (const GGS_uint & in_mPreviousVariableCount,
                                        const GGS_uint & in_mTotalVariableCount,
                                        const GGS_AC_5F_machineDefinition & in_mOperand,
                                        Compiler * /* inCompiler */) {
  mProperty_mPreviousVariableCount = in_mPreviousVariableCount ;
  mProperty_mTotalVariableCount = in_mTotalVariableCount ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition::GGS_C_5F_forallDefinition (const cPtr_C_5F_forallDefinition * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_forallDefinition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_forallDefinition::readProperty_mPreviousVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    return p->mProperty_mPreviousVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_forallDefinition::setProperty_mPreviousVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    p->mProperty_mPreviousVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_forallDefinition::readProperty_mTotalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    return p->mProperty_mTotalVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_forallDefinition::setProperty_mTotalVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    p->mProperty_mTotalVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_forallDefinition::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_forallDefinition::setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_forallDefinition class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_forallDefinition::cPtr_C_5F_forallDefinition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mPreviousVariableCount (),
mProperty_mTotalVariableCount (),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_forallDefinition::cPtr_C_5F_forallDefinition (const GGS_uint & in_mPreviousVariableCount,
                                                        const GGS_uint & in_mTotalVariableCount,
                                                        const GGS_AC_5F_machineDefinition & in_mOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mPreviousVariableCount (),
mProperty_mTotalVariableCount (),
mProperty_mOperand () {
  mProperty_mPreviousVariableCount = in_mPreviousVariableCount ;
  mProperty_mTotalVariableCount = in_mTotalVariableCount ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_forallDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition ;
}

void cPtr_C_5F_forallDefinition::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@C_forallDefinition:") ;
  mProperty_mPreviousVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTotalVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_forallDefinition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_forallDefinition (mProperty_mPreviousVariableCount, mProperty_mTotalVariableCount, mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_forallDefinition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mPreviousVariableCount.printNonNullClassInstanceProperties ("mPreviousVariableCount") ;
    mProperty_mTotalVariableCount.printNonNullClassInstanceProperties ("mTotalVariableCount") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_forallDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition ("C_forallDefinition",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_forallDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_forallDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_forallDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition GGS_C_5F_forallDefinition::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_forallDefinition result ;
  const GGS_C_5F_forallDefinition * p = (const GGS_C_5F_forallDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_forallDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_forallDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_forallDefinition_2E_weak::objectCompare (const GGS_C_5F_forallDefinition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition_2E_weak::GGS_C_5F_forallDefinition_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition_2E_weak & GGS_C_5F_forallDefinition_2E_weak::operator = (const GGS_C_5F_forallDefinition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition_2E_weak::GGS_C_5F_forallDefinition_2E_weak (const GGS_C_5F_forallDefinition & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition_2E_weak GGS_C_5F_forallDefinition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_forallDefinition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition GGS_C_5F_forallDefinition_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_forallDefinition result ;
  if (isValid ()) {
    const cPtr_C_5F_forallDefinition * p = (cPtr_C_5F_forallDefinition *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_forallDefinition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition GGS_C_5F_forallDefinition_2E_weak::bang_C_5F_forallDefinition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_forallDefinition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_forallDefinition) ;
      result = GGS_C_5F_forallDefinition ((cPtr_C_5F_forallDefinition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_forallDefinition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition_2E_weak ("C_forallDefinition.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_forallDefinition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_forallDefinition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_forallDefinition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_forallDefinition_2E_weak GGS_C_5F_forallDefinition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_forallDefinition_2E_weak result ;
  const GGS_C_5F_forallDefinition_2E_weak * p = (const GGS_C_5F_forallDefinition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_forallDefinition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_forallDefinition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_parallelComposition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_parallelComposition::objectCompare (const GGS_C_5F_parallelComposition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition::GGS_C_5F_parallelComposition (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_parallelComposition GGS_C_5F_parallelComposition::
init_21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
              const GGS_AC_5F_machineDefinition & in_mRightOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_parallelComposition * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_parallelComposition (inCompiler COMMA_THERE)) ;
  object->C_5F_parallelComposition_init_21__21_ (in_mLeftOperand, in_mRightOperand, inCompiler) ;
  const GGS_C_5F_parallelComposition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_parallelComposition::
C_5F_parallelComposition_init_21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                       const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition::GGS_C_5F_parallelComposition (const cPtr_C_5F_parallelComposition * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_parallelComposition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_parallelComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_parallelComposition::setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_parallelComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_parallelComposition::setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_parallelComposition class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_parallelComposition::cPtr_C_5F_parallelComposition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_parallelComposition::cPtr_C_5F_parallelComposition (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                              const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_parallelComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition ;
}

void cPtr_C_5F_parallelComposition::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@C_parallelComposition:") ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_parallelComposition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_parallelComposition (mProperty_mLeftOperand, mProperty_mRightOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_parallelComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_parallelComposition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition ("C_parallelComposition",
                                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_parallelComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_parallelComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_parallelComposition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition GGS_C_5F_parallelComposition::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_parallelComposition result ;
  const GGS_C_5F_parallelComposition * p = (const GGS_C_5F_parallelComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_parallelComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_parallelComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_parallelComposition_2E_weak::objectCompare (const GGS_C_5F_parallelComposition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition_2E_weak::GGS_C_5F_parallelComposition_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition_2E_weak & GGS_C_5F_parallelComposition_2E_weak::operator = (const GGS_C_5F_parallelComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition_2E_weak::GGS_C_5F_parallelComposition_2E_weak (const GGS_C_5F_parallelComposition & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition_2E_weak GGS_C_5F_parallelComposition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_parallelComposition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition GGS_C_5F_parallelComposition_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_parallelComposition result ;
  if (isValid ()) {
    const cPtr_C_5F_parallelComposition * p = (cPtr_C_5F_parallelComposition *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_parallelComposition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition GGS_C_5F_parallelComposition_2E_weak::bang_C_5F_parallelComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_parallelComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_parallelComposition) ;
      result = GGS_C_5F_parallelComposition ((cPtr_C_5F_parallelComposition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_parallelComposition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition_2E_weak ("C_parallelComposition.weak",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_parallelComposition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_parallelComposition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_parallelComposition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_parallelComposition_2E_weak GGS_C_5F_parallelComposition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_parallelComposition_2E_weak result ;
  const GGS_C_5F_parallelComposition_2E_weak * p = (const GGS_C_5F_parallelComposition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_parallelComposition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_parallelComposition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_orComposition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_orComposition::objectCompare (const GGS_C_5F_orComposition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition::GGS_C_5F_orComposition (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_orComposition GGS_C_5F_orComposition::
init_21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
              const GGS_AC_5F_machineDefinition & in_mRightOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_orComposition * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_orComposition (inCompiler COMMA_THERE)) ;
  object->C_5F_orComposition_init_21__21_ (in_mLeftOperand, in_mRightOperand, inCompiler) ;
  const GGS_C_5F_orComposition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_orComposition::
C_5F_orComposition_init_21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                 const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                 Compiler * /* inCompiler */) {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition::GGS_C_5F_orComposition (const cPtr_C_5F_orComposition * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orComposition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_orComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_orComposition::setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_orComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_orComposition::setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_orComposition class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_orComposition::cPtr_C_5F_orComposition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_orComposition::cPtr_C_5F_orComposition (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                  const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_orComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition ;
}

void cPtr_C_5F_orComposition::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@C_orComposition:") ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_orComposition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_orComposition (mProperty_mLeftOperand, mProperty_mRightOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_orComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_orComposition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orComposition ("C_orComposition",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_orComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_orComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_orComposition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition GGS_C_5F_orComposition::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_orComposition result ;
  const GGS_C_5F_orComposition * p = (const GGS_C_5F_orComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_orComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_orComposition_2E_weak::objectCompare (const GGS_C_5F_orComposition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition_2E_weak::GGS_C_5F_orComposition_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition_2E_weak & GGS_C_5F_orComposition_2E_weak::operator = (const GGS_C_5F_orComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition_2E_weak::GGS_C_5F_orComposition_2E_weak (const GGS_C_5F_orComposition & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition_2E_weak GGS_C_5F_orComposition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_orComposition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition GGS_C_5F_orComposition_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_orComposition result ;
  if (isValid ()) {
    const cPtr_C_5F_orComposition * p = (cPtr_C_5F_orComposition *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_orComposition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition GGS_C_5F_orComposition_2E_weak::bang_C_5F_orComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_orComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_orComposition) ;
      result = GGS_C_5F_orComposition ((cPtr_C_5F_orComposition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_orComposition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_orComposition_2E_weak ("C_orComposition.weak",
                                                                               & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_orComposition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_orComposition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_orComposition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_orComposition_2E_weak GGS_C_5F_orComposition_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_orComposition_2E_weak result ;
  const GGS_C_5F_orComposition_2E_weak * p = (const GGS_C_5F_orComposition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_orComposition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orComposition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_strongModalComposition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_strongModalComposition::objectCompare (const GGS_C_5F_strongModalComposition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition::GGS_C_5F_strongModalComposition (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_strongModalComposition GGS_C_5F_strongModalComposition::
init_21__21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                  const GGS_location & in_mErrorLocation,
                  const GGS_AC_5F_machineDefinition & in_mRightOperand,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_strongModalComposition * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_strongModalComposition (inCompiler COMMA_THERE)) ;
  object->C_5F_strongModalComposition_init_21__21__21_ (in_mLeftOperand, in_mErrorLocation, in_mRightOperand, inCompiler) ;
  const GGS_C_5F_strongModalComposition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_strongModalComposition::
C_5F_strongModalComposition_init_21__21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                              const GGS_location & in_mErrorLocation,
                                              const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                              Compiler * /* inCompiler */) {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition::GGS_C_5F_strongModalComposition (const cPtr_C_5F_strongModalComposition * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_strongModalComposition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_strongModalComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_strongModalComposition::setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_C_5F_strongModalComposition::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_strongModalComposition::setProperty_mErrorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_strongModalComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_strongModalComposition::setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_strongModalComposition class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_strongModalComposition::cPtr_C_5F_strongModalComposition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mErrorLocation (),
mProperty_mRightOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_strongModalComposition::cPtr_C_5F_strongModalComposition (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                    const GGS_location & in_mErrorLocation,
                                                                    const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mErrorLocation (),
mProperty_mRightOperand () {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_strongModalComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;
}

void cPtr_C_5F_strongModalComposition::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@C_strongModalComposition:") ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_strongModalComposition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_strongModalComposition (mProperty_mLeftOperand, mProperty_mErrorLocation, mProperty_mRightOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_strongModalComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_strongModalComposition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition ("C_strongModalComposition",
                                                                                & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_strongModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_strongModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_strongModalComposition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition GGS_C_5F_strongModalComposition::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_C_5F_strongModalComposition result ;
  const GGS_C_5F_strongModalComposition * p = (const GGS_C_5F_strongModalComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_strongModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_strongModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_strongModalComposition_2E_weak::objectCompare (const GGS_C_5F_strongModalComposition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition_2E_weak::GGS_C_5F_strongModalComposition_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition_2E_weak & GGS_C_5F_strongModalComposition_2E_weak::operator = (const GGS_C_5F_strongModalComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition_2E_weak::GGS_C_5F_strongModalComposition_2E_weak (const GGS_C_5F_strongModalComposition & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition_2E_weak GGS_C_5F_strongModalComposition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_strongModalComposition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition GGS_C_5F_strongModalComposition_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_strongModalComposition result ;
  if (isValid ()) {
    const cPtr_C_5F_strongModalComposition * p = (cPtr_C_5F_strongModalComposition *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_strongModalComposition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition GGS_C_5F_strongModalComposition_2E_weak::bang_C_5F_strongModalComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_strongModalComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_strongModalComposition) ;
      result = GGS_C_5F_strongModalComposition ((cPtr_C_5F_strongModalComposition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_strongModalComposition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition_2E_weak ("C_strongModalComposition.weak",
                                                                                        & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_strongModalComposition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_strongModalComposition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_strongModalComposition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_strongModalComposition_2E_weak GGS_C_5F_strongModalComposition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_C_5F_strongModalComposition_2E_weak result ;
  const GGS_C_5F_strongModalComposition_2E_weak * p = (const GGS_C_5F_strongModalComposition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_strongModalComposition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_strongModalComposition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_weakModalComposition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_weakModalComposition::objectCompare (const GGS_C_5F_weakModalComposition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition::GGS_C_5F_weakModalComposition (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_weakModalComposition GGS_C_5F_weakModalComposition::
init_21__21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                  const GGS_location & in_mErrorLocation,
                  const GGS_AC_5F_machineDefinition & in_mRightOperand,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_weakModalComposition * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_weakModalComposition (inCompiler COMMA_THERE)) ;
  object->C_5F_weakModalComposition_init_21__21__21_ (in_mLeftOperand, in_mErrorLocation, in_mRightOperand, inCompiler) ;
  const GGS_C_5F_weakModalComposition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_weakModalComposition::
C_5F_weakModalComposition_init_21__21__21_ (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                            const GGS_location & in_mErrorLocation,
                                            const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                            Compiler * /* inCompiler */) {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition::GGS_C_5F_weakModalComposition (const cPtr_C_5F_weakModalComposition * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_weakModalComposition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_weakModalComposition::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    return p->mProperty_mLeftOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_weakModalComposition::setProperty_mLeftOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_C_5F_weakModalComposition::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_weakModalComposition::setProperty_mErrorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_weakModalComposition::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    return p->mProperty_mRightOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_weakModalComposition::setProperty_mRightOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_weakModalComposition class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_weakModalComposition::cPtr_C_5F_weakModalComposition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mErrorLocation (),
mProperty_mRightOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_weakModalComposition::cPtr_C_5F_weakModalComposition (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                const GGS_location & in_mErrorLocation,
                                                                const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mErrorLocation (),
mProperty_mRightOperand () {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_weakModalComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;
}

void cPtr_C_5F_weakModalComposition::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@C_weakModalComposition:") ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_weakModalComposition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_weakModalComposition (mProperty_mLeftOperand, mProperty_mErrorLocation, mProperty_mRightOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_weakModalComposition::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_weakModalComposition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition ("C_weakModalComposition",
                                                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_weakModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_weakModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_weakModalComposition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition GGS_C_5F_weakModalComposition::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_weakModalComposition result ;
  const GGS_C_5F_weakModalComposition * p = (const GGS_C_5F_weakModalComposition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_weakModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_weakModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_weakModalComposition_2E_weak::objectCompare (const GGS_C_5F_weakModalComposition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition_2E_weak::GGS_C_5F_weakModalComposition_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition_2E_weak & GGS_C_5F_weakModalComposition_2E_weak::operator = (const GGS_C_5F_weakModalComposition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition_2E_weak::GGS_C_5F_weakModalComposition_2E_weak (const GGS_C_5F_weakModalComposition & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition_2E_weak GGS_C_5F_weakModalComposition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_weakModalComposition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition GGS_C_5F_weakModalComposition_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_weakModalComposition result ;
  if (isValid ()) {
    const cPtr_C_5F_weakModalComposition * p = (cPtr_C_5F_weakModalComposition *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_weakModalComposition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition GGS_C_5F_weakModalComposition_2E_weak::bang_C_5F_weakModalComposition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_weakModalComposition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_weakModalComposition) ;
      result = GGS_C_5F_weakModalComposition ((cPtr_C_5F_weakModalComposition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_weakModalComposition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition_2E_weak ("C_weakModalComposition.weak",
                                                                                      & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_weakModalComposition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_weakModalComposition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_weakModalComposition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_weakModalComposition_2E_weak GGS_C_5F_weakModalComposition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_weakModalComposition_2E_weak result ;
  const GGS_C_5F_weakModalComposition_2E_weak * p = (const GGS_C_5F_weakModalComposition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_weakModalComposition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_weakModalComposition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_fullSaturationOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_fullSaturationOperation::objectCompare (const GGS_C_5F_fullSaturationOperation & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation::GGS_C_5F_fullSaturationOperation (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation GGS_C_5F_fullSaturationOperation::
init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_fullSaturationOperation * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_fullSaturationOperation (inCompiler COMMA_THERE)) ;
  object->C_5F_fullSaturationOperation_init_21_ (in_mOperand, inCompiler) ;
  const GGS_C_5F_fullSaturationOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_fullSaturationOperation::
C_5F_fullSaturationOperation_init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
                                       Compiler * /* inCompiler */) {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation::GGS_C_5F_fullSaturationOperation (const cPtr_C_5F_fullSaturationOperation * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_fullSaturationOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_fullSaturationOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_fullSaturationOperation * p = (cPtr_C_5F_fullSaturationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_fullSaturationOperation::setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_fullSaturationOperation * p = (cPtr_C_5F_fullSaturationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_fullSaturationOperation class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_fullSaturationOperation::cPtr_C_5F_fullSaturationOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_fullSaturationOperation::cPtr_C_5F_fullSaturationOperation (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_fullSaturationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

void cPtr_C_5F_fullSaturationOperation::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@C_fullSaturationOperation:") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_fullSaturationOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_fullSaturationOperation (mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_fullSaturationOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_fullSaturationOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ("C_fullSaturationOperation",
                                                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_fullSaturationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_fullSaturationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_fullSaturationOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation GGS_C_5F_fullSaturationOperation::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_fullSaturationOperation result ;
  const GGS_C_5F_fullSaturationOperation * p = (const GGS_C_5F_fullSaturationOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_fullSaturationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_fullSaturationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_fullSaturationOperation_2E_weak::objectCompare (const GGS_C_5F_fullSaturationOperation_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation_2E_weak::GGS_C_5F_fullSaturationOperation_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation_2E_weak & GGS_C_5F_fullSaturationOperation_2E_weak::operator = (const GGS_C_5F_fullSaturationOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation_2E_weak::GGS_C_5F_fullSaturationOperation_2E_weak (const GGS_C_5F_fullSaturationOperation & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation_2E_weak GGS_C_5F_fullSaturationOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_fullSaturationOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation GGS_C_5F_fullSaturationOperation_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_fullSaturationOperation result ;
  if (isValid ()) {
    const cPtr_C_5F_fullSaturationOperation * p = (cPtr_C_5F_fullSaturationOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_fullSaturationOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation GGS_C_5F_fullSaturationOperation_2E_weak::bang_C_5F_fullSaturationOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_fullSaturationOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_fullSaturationOperation) ;
      result = GGS_C_5F_fullSaturationOperation ((cPtr_C_5F_fullSaturationOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_fullSaturationOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation_2E_weak ("C_fullSaturationOperation.weak",
                                                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_fullSaturationOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_fullSaturationOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_fullSaturationOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_fullSaturationOperation_2E_weak GGS_C_5F_fullSaturationOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_fullSaturationOperation_2E_weak result ;
  const GGS_C_5F_fullSaturationOperation_2E_weak * p = (const GGS_C_5F_fullSaturationOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_fullSaturationOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_fullSaturationOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_complementationOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_complementationOperation::objectCompare (const GGS_C_5F_complementationOperation & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation::GGS_C_5F_complementationOperation (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_complementationOperation GGS_C_5F_complementationOperation::
init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_complementationOperation * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_complementationOperation (inCompiler COMMA_THERE)) ;
  object->C_5F_complementationOperation_init_21_ (in_mOperand, inCompiler) ;
  const GGS_C_5F_complementationOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_complementationOperation::
C_5F_complementationOperation_init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation::GGS_C_5F_complementationOperation (const cPtr_C_5F_complementationOperation * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_complementationOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_complementationOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_complementationOperation * p = (cPtr_C_5F_complementationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_complementationOperation::setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_complementationOperation * p = (cPtr_C_5F_complementationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_complementationOperation class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_complementationOperation::cPtr_C_5F_complementationOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_complementationOperation::cPtr_C_5F_complementationOperation (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_complementationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

void cPtr_C_5F_complementationOperation::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@C_complementationOperation:") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_complementationOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_complementationOperation (mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_complementationOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_complementationOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation ("C_complementationOperation",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_complementationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_complementationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_complementationOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation GGS_C_5F_complementationOperation::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_complementationOperation result ;
  const GGS_C_5F_complementationOperation * p = (const GGS_C_5F_complementationOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_complementationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_complementationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_complementationOperation_2E_weak::objectCompare (const GGS_C_5F_complementationOperation_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation_2E_weak::GGS_C_5F_complementationOperation_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation_2E_weak & GGS_C_5F_complementationOperation_2E_weak::operator = (const GGS_C_5F_complementationOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation_2E_weak::GGS_C_5F_complementationOperation_2E_weak (const GGS_C_5F_complementationOperation & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation_2E_weak GGS_C_5F_complementationOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_complementationOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation GGS_C_5F_complementationOperation_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_complementationOperation result ;
  if (isValid ()) {
    const cPtr_C_5F_complementationOperation * p = (cPtr_C_5F_complementationOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_complementationOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation GGS_C_5F_complementationOperation_2E_weak::bang_C_5F_complementationOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_complementationOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_complementationOperation) ;
      result = GGS_C_5F_complementationOperation ((cPtr_C_5F_complementationOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_complementationOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation_2E_weak ("C_complementationOperation.weak",
                                                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_complementationOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_complementationOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_complementationOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_complementationOperation_2E_weak GGS_C_5F_complementationOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_complementationOperation_2E_weak result ;
  const GGS_C_5F_complementationOperation_2E_weak * p = (const GGS_C_5F_complementationOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_complementationOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_complementationOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_suppressTerminalStatesOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_suppressTerminalStatesOperation::objectCompare (const GGS_C_5F_suppressTerminalStatesOperation & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation::GGS_C_5F_suppressTerminalStatesOperation (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation GGS_C_5F_suppressTerminalStatesOperation::
init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_suppressTerminalStatesOperation * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_suppressTerminalStatesOperation (inCompiler COMMA_THERE)) ;
  object->C_5F_suppressTerminalStatesOperation_init_21_ (in_mOperand, inCompiler) ;
  const GGS_C_5F_suppressTerminalStatesOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_suppressTerminalStatesOperation::
C_5F_suppressTerminalStatesOperation_init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
                                               Compiler * /* inCompiler */) {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation::GGS_C_5F_suppressTerminalStatesOperation (const cPtr_C_5F_suppressTerminalStatesOperation * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressTerminalStatesOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_suppressTerminalStatesOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_suppressTerminalStatesOperation * p = (cPtr_C_5F_suppressTerminalStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_suppressTerminalStatesOperation::setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_suppressTerminalStatesOperation * p = (cPtr_C_5F_suppressTerminalStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_suppressTerminalStatesOperation class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_suppressTerminalStatesOperation::cPtr_C_5F_suppressTerminalStatesOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_suppressTerminalStatesOperation::cPtr_C_5F_suppressTerminalStatesOperation (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_suppressTerminalStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

void cPtr_C_5F_suppressTerminalStatesOperation::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@C_suppressTerminalStatesOperation:") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_suppressTerminalStatesOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_suppressTerminalStatesOperation (mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_suppressTerminalStatesOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_suppressTerminalStatesOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ("C_suppressTerminalStatesOperation",
                                                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_suppressTerminalStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_suppressTerminalStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_suppressTerminalStatesOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation GGS_C_5F_suppressTerminalStatesOperation::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_suppressTerminalStatesOperation result ;
  const GGS_C_5F_suppressTerminalStatesOperation * p = (const GGS_C_5F_suppressTerminalStatesOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_suppressTerminalStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressTerminalStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

