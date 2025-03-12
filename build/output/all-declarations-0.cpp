#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@_32_lstringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement__32_lstringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::enterElement (const GGS__32_lstringlist_2E_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS__32_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssign_operation (const GGS_lstring & inOperand0,
                                               const GGS_lstring & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
      outOperand0 = p->mObject.mProperty_mValue_30_ ;
      outOperand1 = p->mObject.mProperty_mValue_31_ ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssign_operation (const GGS__32_lstringlist inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_30_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_31_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
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

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

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
  TO_UNICODE ('!'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__26_ = {
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__28_ = {
  TO_UNICODE ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__29_ = {
  TO_UNICODE (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2A_ = {
  TO_UNICODE ('*'),
} ;

//--- Unicode string for '$**$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2A__2A_ = {
  TO_UNICODE ('*'),
  TO_UNICODE ('*'),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2B_ = {
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2C_ = {
  TO_UNICODE (','),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__2D__3E_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3A_ = {
  TO_UNICODE (':'),
} ;

//--- Unicode string for '$:=$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3A__3D_ = {
  TO_UNICODE (':'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3B_ = {
  TO_UNICODE (';'),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3D_ = {
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$?$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__3F_ = {
  TO_UNICODE ('\?'),
} ;

//--- Unicode string for '$@$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__40_ = {
  TO_UNICODE ('@'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__5E_ = {
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$auto$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_auto = {
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$bdd$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_bdd = {
  TO_UNICODE ('b'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$bool$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_bool = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$check$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_check = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$checkbool$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_checkbool = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$checkidentical$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_checkidentical = {
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
} ;

//--- Unicode string for '$display$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_display = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$exclude$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_exclude = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_false = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$first$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_first = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$goto$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_goto = {
  TO_UNICODE ('g'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_include = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$last$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_last = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$map$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_map = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$modalcompadd$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_modalcompadd = {
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
} ;

//--- Unicode string for '$modalcompsub$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_modalcompsub = {
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
} ;

//--- Unicode string for '$nofirst$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_nofirst = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$nolast$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_nolast = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$scenario$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_scenario = {
  TO_UNICODE ('s'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$state$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_state = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$to$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_to = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$trans$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_trans = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner_true = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7B_ = {
  TO_UNICODE ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7C_ = {
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7C__7C_ = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7D_ = {
  TO_UNICODE ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_sara_5F_scanner__7E_ = {
  TO_UNICODE ('~'),
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
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_machineIdf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("machineIdf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_identifierString) ;
      break ;
    case kToken_literal_5F_integer:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_integer") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_ulongValue) ;
      break ;
    case kToken_comment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_auto:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("auto") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_state:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("state") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_first:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("first") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_last:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("last") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_goto:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("goto") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_nofirst:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("nofirst") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_nolast:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("nolast") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_modalcompadd:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("modalcompadd") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_exclude:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("exclude") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_modalcompsub:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("modalcompsub") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_to:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("to") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_scenario:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("scenario") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_trans:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("trans") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_display:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("display") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bdd:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bdd") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bool:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bool") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_map:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("map") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_check:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("check") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_checkbool:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("checkbool") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_checkidentical:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("checkidentical") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (",") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (";") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (")") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__40_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("@") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A__2A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("**") ;
      s.appendChar (TO_UNICODE ('$')) ;
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

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_sara_5F_scanner::parseLexicalToken (void) {
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
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("machineIdf") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("literal_integer") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("auto") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("state") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("first") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("last") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("goto") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("true") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("false") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("nofirst") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("nolast") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("modalcompadd") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("exclude") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("modalcompsub") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("include") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("to") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("scenario") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("trans") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("display") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("bdd") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("bool") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("map") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("check") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("checkbool") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("checkidentical") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("||") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("+") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("*") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("@") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("**") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_sara_5F_scanner (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("sara_scanner:delimitorsList") ;
  ioList.appendObject ("sara_scanner:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_sara_5F_scanner (const String & inIdentifier,
                                                      bool & ioFound,
                                                      TC_UniqueArray <String> & ioList) {
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

static cLexiqueIntrospection lexiqueIntrospection_sara_5F_scanner
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

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_variablesMap::cMapElement_M_5F_variablesMap (const GGS_M_5F_variablesMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_variablesMap::cMapElement_M_5F_variablesMap (const GGS_lstring & inKey,
                                                              const GGS_uint & in_mIndex
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_variablesMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_variablesMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_M_5F_variablesMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_M_5F_variablesMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap::GGS_M_5F_variablesMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap::GGS_M_5F_variablesMap (const GGS_M_5F_variablesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap & GGS_M_5F_variablesMap::operator = (const GGS_M_5F_variablesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_variablesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_M_5F_variablesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_ GGS_M_5F_variablesMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_variablesMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_M_5F_variablesMap * p = (cMapElement_M_5F_variablesMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_M_5F_variablesMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_variablesMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::class_func_mapWithMapToOverride (const GGS_M_5F_variablesMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_M_5F_variablesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_M_5F_variablesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::enterElement (const GGS_M_5F_variablesMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_variablesMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_variablesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_uint & inArgument0,
                                                 Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_variablesMap::add_operation (const GGS_M_5F_variablesMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_M_5F_variablesMap result = *this ;
  UpEnumerator_M_5F_variablesMap enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_uint inArgument0,
                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_variablesMap_searchKey = "the '%K' variable is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::method_searchKey (GGS_lstring inKey,
                                              GGS_uint & outArgument0,
                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_variablesMap::getter_mIndexForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_variablesMap * p = (cMapElement_M_5F_variablesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_variablesMap * GGS_M_5F_variablesMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_variablesMap * result = (cMapElement_M_5F_variablesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_variablesMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @M_5F_variablesMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_M_5F_variablesMap::DownEnumerator_M_5F_variablesMap (const GGS_M_5F_variablesMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element DownEnumerator_M_5F_variablesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return GGS_M_5F_variablesMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_M_5F_variablesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_variablesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @M_5F_variablesMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_M_5F_variablesMap::UpEnumerator_M_5F_variablesMap (const GGS_M_5F_variablesMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element UpEnumerator_M_5F_variablesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return GGS_M_5F_variablesMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_M_5F_variablesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_variablesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_variablesMap * p = (const cMapElement_M_5F_variablesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_variablesMap) ;
  return p->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @M_variablesMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_variablesMap ("M_variablesMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_variablesMap::staticTypeDescriptor (void) const {
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

cMapElement_M_5F_stateMap::cMapElement_M_5F_stateMap (const GGS_M_5F_stateMap_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_stateMap::cMapElement_M_5F_stateMap (const GGS_lstring & inKey,
                                                      const GGS_uint & in_mIndex
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_stateMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_stateMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_M_5F_stateMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_M_5F_stateMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap::GGS_M_5F_stateMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap::GGS_M_5F_stateMap (const GGS_M_5F_stateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap & GGS_M_5F_stateMap::operator = (const GGS_M_5F_stateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_stateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_M_5F_stateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_ GGS_M_5F_stateMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_stateMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_M_5F_stateMap * p = (cMapElement_M_5F_stateMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_M_5F_stateMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_stateMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::class_func_mapWithMapToOverride (const GGS_M_5F_stateMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_M_5F_stateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_M_5F_stateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::enterElement (const GGS_M_5F_stateMap_2E_element & inValue,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_stateMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_stateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::addAssign_operation (const GGS_lstring & inKey,
                                             const GGS_uint & inArgument0,
                                             Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap GGS_M_5F_stateMap::add_operation (const GGS_M_5F_stateMap & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_M_5F_stateMap result = *this ;
  UpEnumerator_M_5F_stateMap enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::setter_insertKey (GGS_lstring inKey,
                                          GGS_uint inArgument0,
                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::setter_defineState (GGS_lstring inKey,
                                            GGS_uint inArgument0,
                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_stateMap_searchKey = "the '%K' state is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::method_searchKey (GGS_lstring inKey,
                                          GGS_uint & outArgument0,
                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_stateMap::getter_mIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_stateMap * p = (cMapElement_M_5F_stateMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_stateMap * GGS_M_5F_stateMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                  const GGS_string & inKey
                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_stateMap * result = (cMapElement_M_5F_stateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_stateMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @M_5F_stateMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_M_5F_stateMap::DownEnumerator_M_5F_stateMap (const GGS_M_5F_stateMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element DownEnumerator_M_5F_stateMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return GGS_M_5F_stateMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_M_5F_stateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_stateMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @M_5F_stateMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_M_5F_stateMap::UpEnumerator_M_5F_stateMap (const GGS_M_5F_stateMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element UpEnumerator_M_5F_stateMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return GGS_M_5F_stateMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_M_5F_stateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_stateMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_stateMap * p = (const cMapElement_M_5F_stateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_stateMap) ;
  return p->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @M_stateMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_stateMap ("M_stateMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_stateMap::staticTypeDescriptor (void) const {
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
//
//Class for element of '@L_5F_translationVector' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_translationVector : public cCollectionElement {
  public: GGS_L_5F_translationVector_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_translationVector (const GGS_uint & in_mTargetSlot
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_translationVector (const GGS_L_5F_translationVector_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_L_5F_translationVector::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetSlot" ":") ;
  mObject.mProperty_mTargetSlot.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector::GGS_L_5F_translationVector (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector::GGS_L_5F_translationVector (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_translationVector (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_translationVector (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::enterElement (const GGS_L_5F_translationVector_2E_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_translationVector (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::class_func_listWithValue (const GGS_uint & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_L_5F_translationVector result ;
  if (inOperand0.isValid ()) {
    result = GGS_L_5F_translationVector (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_L_5F_translationVector::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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

void GGS_L_5F_translationVector::addAssign_operation (const GGS_uint & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_append (const GGS_uint inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_insertAtIndex (const GGS_uint inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_translationVector (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_removeAtIndex (GGS_uint & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
      outOperand0 = p->mObject.mProperty_mTargetSlot ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_popFirst (GGS_uint & outOperand0,
                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_popLast (GGS_uint & outOperand0,
                                                 Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::method_first (GGS_uint & outOperand0,
                                               Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::method_last (GGS_uint & outOperand0,
                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::add_operation (const GGS_L_5F_translationVector & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result = GGS_L_5F_translationVector::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result = GGS_L_5F_translationVector::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_L_5F_translationVector::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_L_5F_translationVector result = GGS_L_5F_translationVector::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::plusAssign_operation (const GGS_L_5F_translationVector inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector::setter_setMTargetSlotAtIndex (GGS_uint inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetSlot = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_translationVector::getter_mTargetSlotAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_translationVector * p = (cCollectionElement_L_5F_translationVector *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
    result = p->mObject.mProperty_mTargetSlot ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_translationVector
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_translationVector::DownEnumerator_L_5F_translationVector (const GGS_L_5F_translationVector & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element DownEnumerator_L_5F_translationVector::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_translationVector::current_mTargetSlot (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject.mProperty_mTargetSlot ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_translationVector
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_translationVector::UpEnumerator_L_5F_translationVector (const GGS_L_5F_translationVector & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element UpEnumerator_L_5F_translationVector::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_translationVector::current_mTargetSlot (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_translationVector * p = (const cCollectionElement_L_5F_translationVector *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_translationVector) ;
  return p->mObject.mProperty_mTargetSlot ;
}




//--------------------------------------------------------------------------------------------------
//     @L_translationVector generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_translationVector ("L_translationVector",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_translationVector::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression ("AC_boolExpression",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AC_5F_boolExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak ("AC_boolExpression.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AC_5F_boolExpression_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2E_weak ("C_importBoolMachine.weak",
                                                                                      & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_importBoolMachine_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_andExpression GGS_C_5F_andExpression::class_func_new (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                               const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_andExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_andExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_andExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_andExpression ("C_andExpression",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_andExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_andExpression_2E_weak ("C_andExpression.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_andExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_orExpression GGS_C_5F_orExpression::class_func_new (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                             const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_C_5F_orExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_orExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_orExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orExpression ("C_orExpression",
                                                                         & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_orExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orExpression_2E_weak ("C_orExpression.weak",
                                                                                 & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_orExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_xorExpression GGS_C_5F_xorExpression::class_func_new (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                               const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_xorExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_xorExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_xorExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_xorExpression ("C_xorExpression",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_xorExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_xorExpression_2E_weak ("C_xorExpression.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_xorExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_impliesExpression GGS_C_5F_impliesExpression::class_func_new (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                                       const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_impliesExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_impliesExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_impliesExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression ("C_impliesExpression",
                                                                              & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_impliesExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_impliesExpression_2E_weak ("C_impliesExpression.weak",
                                                                                      & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_impliesExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_equalExpression GGS_C_5F_equalExpression::class_func_new (const GGS_AC_5F_boolExpression & in_mLeftExpression,
                                                                   const GGS_AC_5F_boolExpression & in_mRightExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_C_5F_equalExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_equalExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_equalExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_equalExpression ("C_equalExpression",
                                                                            & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_equalExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_equalExpression_2E_weak ("C_equalExpression.weak",
                                                                                    & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_equalExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_notExpression GGS_C_5F_notExpression::class_func_new (const GGS_AC_5F_boolExpression & in_mExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_notExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_notExpression (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_notExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_notExpression ("C_notExpression",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_notExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_notExpression_2E_weak ("C_notExpression.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_notExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_VariableExpression GGS_C_5F_VariableExpression::class_func_new (const GGS_uint & in_mInputVarIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_C_5F_VariableExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_VariableExpression (in_mInputVarIndex,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_VariableExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression ("C_VariableExpression",
                                                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_VariableExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_VariableExpression_2E_weak ("C_VariableExpression.weak",
                                                                                       & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_VariableExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_trueExpression GGS_C_5F_trueExpression::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_C_5F_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_trueExpression (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_trueExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trueExpression ("C_trueExpression",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_trueExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trueExpression_2E_weak ("C_trueExpression.weak",
                                                                                   & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_trueExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_falseExpression GGS_C_5F_falseExpression::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_C_5F_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_falseExpression (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_falseExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_falseExpression ("C_falseExpression",
                                                                            & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_falseExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_falseExpression_2E_weak ("C_falseExpression.weak",
                                                                                    & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_falseExpression_2E_weak::staticTypeDescriptor (void) const {
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
//
//Class for element of '@L_5F_transitionDefinition' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_transitionDefinition : public cCollectionElement {
  public: GGS_L_5F_transitionDefinition_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_transitionDefinition (const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                        const GGS_location & in_mEndOfExpression,
                                                        const GGS_uint & in_mTargetStateIndex
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_L_5F_transitionDefinition::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActionExpression" ":") ;
  mObject.mProperty_mActionExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfExpression" ":") ;
  mObject.mProperty_mEndOfExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetStateIndex" ":") ;
  mObject.mProperty_mTargetStateIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition::GGS_L_5F_transitionDefinition (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition::GGS_L_5F_transitionDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_transitionDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_transitionDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::enterElement (const GGS_L_5F_transitionDefinition_2E_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::class_func_listWithValue (const GGS_AC_5F_boolExpression & inOperand0,
                                                                                       const GGS_location & inOperand1,
                                                                                       const GGS_uint & inOperand2
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_L_5F_transitionDefinition result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_L_5F_transitionDefinition (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_L_5F_transitionDefinition::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                               const GGS_location & in_mEndOfExpression,
                                                               const GGS_uint & in_mTargetStateIndex
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (in_mActionExpression,
                                                               in_mEndOfExpression,
                                                               in_mTargetStateIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::addAssign_operation (const GGS_AC_5F_boolExpression & inOperand0,
                                                         const GGS_location & inOperand1,
                                                         const GGS_uint & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_append (const GGS_AC_5F_boolExpression inOperand0,
                                                   const GGS_location inOperand1,
                                                   const GGS_uint inOperand2,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_insertAtIndex (const GGS_AC_5F_boolExpression inOperand0,
                                                          const GGS_location inOperand1,
                                                          const GGS_uint inOperand2,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_transitionDefinition (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_removeAtIndex (GGS_AC_5F_boolExpression & outOperand0,
                                                          GGS_location & outOperand1,
                                                          GGS_uint & outOperand2,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
      outOperand0 = p->mObject.mProperty_mActionExpression ;
      outOperand1 = p->mObject.mProperty_mEndOfExpression ;
      outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_popFirst (GGS_AC_5F_boolExpression & outOperand0,
                                                     GGS_location & outOperand1,
                                                     GGS_uint & outOperand2,
                                                     Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_popLast (GGS_AC_5F_boolExpression & outOperand0,
                                                    GGS_location & outOperand1,
                                                    GGS_uint & outOperand2,
                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::method_first (GGS_AC_5F_boolExpression & outOperand0,
                                                  GGS_location & outOperand1,
                                                  GGS_uint & outOperand2,
                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::method_last (GGS_AC_5F_boolExpression & outOperand0,
                                                 GGS_location & outOperand1,
                                                 GGS_uint & outOperand2,
                                                 Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::add_operation (const GGS_L_5F_transitionDefinition & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result = GGS_L_5F_transitionDefinition::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result = GGS_L_5F_transitionDefinition::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_transitionDefinition::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_L_5F_transitionDefinition result = GGS_L_5F_transitionDefinition::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::plusAssign_operation (const GGS_L_5F_transitionDefinition inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_setMActionExpressionAtIndex (GGS_AC_5F_boolExpression inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActionExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_L_5F_transitionDefinition::getter_mActionExpressionAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GGS_AC_5F_boolExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mActionExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_setMEndOfExpressionAtIndex (GGS_location inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_L_5F_transitionDefinition::getter_mEndOfExpressionAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition::setter_setMTargetStateIndexAtIndex (GGS_uint inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetStateIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_transitionDefinition::getter_mTargetStateIndexAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_transitionDefinition * p = (cCollectionElement_L_5F_transitionDefinition *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
    result = p->mObject.mProperty_mTargetStateIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_transitionDefinition
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_transitionDefinition::DownEnumerator_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element DownEnumerator_L_5F_transitionDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression DownEnumerator_L_5F_transitionDefinition::current_mActionExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mActionExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_L_5F_transitionDefinition::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_transitionDefinition::current_mTargetStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mTargetStateIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_transitionDefinition
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_transitionDefinition::UpEnumerator_L_5F_transitionDefinition (const GGS_L_5F_transitionDefinition & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element UpEnumerator_L_5F_transitionDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression UpEnumerator_L_5F_transitionDefinition::current_mActionExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mActionExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_L_5F_transitionDefinition::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_transitionDefinition::current_mTargetStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_transitionDefinition * p = (const cCollectionElement_L_5F_transitionDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_transitionDefinition) ;
  return p->mObject.mProperty_mTargetStateIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @L_transitionDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition ("L_transitionDefinition",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_transitionDefinition::staticTypeDescriptor (void) const {
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
//
//Class for element of '@L_5F_stateDefinition' list
//
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_L_5F_stateDefinition::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStateIndex" ":") ;
  mObject.mProperty_mStateIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStateExpression" ":") ;
  mObject.mProperty_mStateExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfStateExpression" ":") ;
  mObject.mProperty_mEndOfStateExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTransitionsList" ":") ;
  mObject.mProperty_mTransitionsList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition::GGS_L_5F_stateDefinition (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition::GGS_L_5F_stateDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_stateDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_stateDefinition (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::enterElement (const GGS_L_5F_stateDefinition_2E_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                             const GGS_AC_5F_boolExpression & inOperand1,
                                                                             const GGS_location & inOperand2,
                                                                             const GGS_L_5F_transitionDefinition & inOperand3
                                                                             COMMA_LOCATION_ARGS) {
  GGS_L_5F_stateDefinition result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_L_5F_stateDefinition (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_L_5F_stateDefinition::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_uint & in_mStateIndex,
                                                          const GGS_AC_5F_boolExpression & in_mStateExpression,
                                                          const GGS_location & in_mEndOfStateExpression,
                                                          const GGS_L_5F_transitionDefinition & in_mTransitionsList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_stateDefinition (in_mStateIndex,
                                                          in_mStateExpression,
                                                          in_mEndOfStateExpression,
                                                          in_mTransitionsList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::addAssign_operation (const GGS_uint & inOperand0,
                                                    const GGS_AC_5F_boolExpression & inOperand1,
                                                    const GGS_location & inOperand2,
                                                    const GGS_L_5F_transitionDefinition & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_append (const GGS_uint inOperand0,
                                              const GGS_AC_5F_boolExpression inOperand1,
                                              const GGS_location inOperand2,
                                              const GGS_L_5F_transitionDefinition inOperand3,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_stateDefinition (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
      outOperand0 = p->mObject.mProperty_mStateIndex ;
      outOperand1 = p->mObject.mProperty_mStateExpression ;
      outOperand2 = p->mObject.mProperty_mEndOfStateExpression ;
      outOperand3 = p->mObject.mProperty_mTransitionsList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_popFirst (GGS_uint & outOperand0,
                                                GGS_AC_5F_boolExpression & outOperand1,
                                                GGS_location & outOperand2,
                                                GGS_L_5F_transitionDefinition & outOperand3,
                                                Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_popLast (GGS_uint & outOperand0,
                                               GGS_AC_5F_boolExpression & outOperand1,
                                               GGS_location & outOperand2,
                                               GGS_L_5F_transitionDefinition & outOperand3,
                                               Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::method_first (GGS_uint & outOperand0,
                                             GGS_AC_5F_boolExpression & outOperand1,
                                             GGS_location & outOperand2,
                                             GGS_L_5F_transitionDefinition & outOperand3,
                                             Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::method_last (GGS_uint & outOperand0,
                                            GGS_AC_5F_boolExpression & outOperand1,
                                            GGS_location & outOperand2,
                                            GGS_L_5F_transitionDefinition & outOperand3,
                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::add_operation (const GGS_L_5F_stateDefinition & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result = GGS_L_5F_stateDefinition::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result = GGS_L_5F_stateDefinition::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition GGS_L_5F_stateDefinition::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_L_5F_stateDefinition result = GGS_L_5F_stateDefinition::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::plusAssign_operation (const GGS_L_5F_stateDefinition inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMStateIndexAtIndex (GGS_uint inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_stateDefinition::getter_mStateIndexAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mStateIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMStateExpressionAtIndex (GGS_AC_5F_boolExpression inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression GGS_L_5F_stateDefinition::getter_mStateExpressionAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GGS_AC_5F_boolExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mStateExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMEndOfStateExpressionAtIndex (GGS_location inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfStateExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_L_5F_stateDefinition::getter_mEndOfStateExpressionAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mEndOfStateExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition::setter_setMTransitionsListAtIndex (GGS_L_5F_transitionDefinition inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTransitionsList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition GGS_L_5F_stateDefinition::getter_mTransitionsListAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_stateDefinition * p = (cCollectionElement_L_5F_stateDefinition *) attributes.ptr () ;
  GGS_L_5F_transitionDefinition result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
    result = p->mObject.mProperty_mTransitionsList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_stateDefinition
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_stateDefinition::DownEnumerator_L_5F_stateDefinition (const GGS_L_5F_stateDefinition & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element DownEnumerator_L_5F_stateDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_stateDefinition::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression DownEnumerator_L_5F_stateDefinition::current_mStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_L_5F_stateDefinition::current_mEndOfStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mEndOfStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition DownEnumerator_L_5F_stateDefinition::current_mTransitionsList (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mTransitionsList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_stateDefinition
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_stateDefinition::UpEnumerator_L_5F_stateDefinition (const GGS_L_5F_stateDefinition & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element UpEnumerator_L_5F_stateDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_stateDefinition::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_boolExpression UpEnumerator_L_5F_stateDefinition::current_mStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_L_5F_stateDefinition::current_mEndOfStateExpression (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mEndOfStateExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition UpEnumerator_L_5F_stateDefinition::current_mTransitionsList (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_stateDefinition * p = (const cCollectionElement_L_5F_stateDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_stateDefinition) ;
  return p->mObject.mProperty_mTransitionsList ;
}




//--------------------------------------------------------------------------------------------------
//     @L_stateDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition ("L_stateDefinition",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_stateDefinition::staticTypeDescriptor (void) const {
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
//
//Class for element of '@L_5F_statesDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_statesDefinitionList : public cCollectionElement {
  public: GGS_L_5F_statesDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_statesDefinitionList (const GGS_uint & in_mStateIndex,
                                                        const GGS_location & in_mStateLocation
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_L_5F_statesDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStateIndex" ":") ;
  mObject.mProperty_mStateIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStateLocation" ":") ;
  mObject.mProperty_mStateLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList::GGS_L_5F_statesDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList::GGS_L_5F_statesDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_statesDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_statesDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::enterElement (const GGS_L_5F_statesDefinitionList_2E_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                                       const GGS_location & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_L_5F_statesDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_L_5F_statesDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_L_5F_statesDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_uint & in_mStateIndex,
                                                               const GGS_location & in_mStateLocation
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (in_mStateIndex,
                                                               in_mStateLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::addAssign_operation (const GGS_uint & inOperand0,
                                                         const GGS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_append (const GGS_uint inOperand0,
                                                   const GGS_location inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_insertAtIndex (const GGS_uint inOperand0,
                                                          const GGS_location inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_statesDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_removeAtIndex (GGS_uint & outOperand0,
                                                          GGS_location & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mStateIndex ;
      outOperand1 = p->mObject.mProperty_mStateLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_popFirst (GGS_uint & outOperand0,
                                                     GGS_location & outOperand1,
                                                     Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_popLast (GGS_uint & outOperand0,
                                                    GGS_location & outOperand1,
                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::method_first (GGS_uint & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::method_last (GGS_uint & outOperand0,
                                                 GGS_location & outOperand1,
                                                 Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::add_operation (const GGS_L_5F_statesDefinitionList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result = GGS_L_5F_statesDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result = GGS_L_5F_statesDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList GGS_L_5F_statesDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_L_5F_statesDefinitionList result = GGS_L_5F_statesDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::plusAssign_operation (const GGS_L_5F_statesDefinitionList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_setMStateIndexAtIndex (GGS_uint inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_statesDefinitionList::getter_mStateIndexAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mProperty_mStateIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList::setter_setMStateLocationAtIndex (GGS_location inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_L_5F_statesDefinitionList::getter_mStateLocationAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_statesDefinitionList * p = (cCollectionElement_L_5F_statesDefinitionList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
    result = p->mObject.mProperty_mStateLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_statesDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_statesDefinitionList::DownEnumerator_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element DownEnumerator_L_5F_statesDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_L_5F_statesDefinitionList::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_L_5F_statesDefinitionList::current_mStateLocation (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_statesDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_statesDefinitionList::UpEnumerator_L_5F_statesDefinitionList (const GGS_L_5F_statesDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element UpEnumerator_L_5F_statesDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_L_5F_statesDefinitionList::current_mStateIndex (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_L_5F_statesDefinitionList::current_mStateLocation (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_statesDefinitionList * p = (const cCollectionElement_L_5F_statesDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_statesDefinitionList) ;
  return p->mObject.mProperty_mStateLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @L_statesDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList ("L_statesDefinitionList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_statesDefinitionList::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition ("AC_machineDefinition",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AC_5F_machineDefinition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak ("AC_machineDefinition.weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AC_5F_machineDefinition_2E_weak::staticTypeDescriptor (void) const {
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

cMapElement_M_5F_modesMap::cMapElement_M_5F_modesMap (const GGS_M_5F_modesMap_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex),
mProperty_mModeDefinition (inValue.mProperty_mModeDefinition) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_modesMap::cMapElement_M_5F_modesMap (const GGS_lstring & inKey,
                                                      const GGS_uint & in_mIndex,
                                                      const GGS_AC_5F_machineDefinition & in_mModeDefinition
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mModeDefinition (in_mModeDefinition) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_modesMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_modesMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_M_5F_modesMap (mProperty_lkey, mProperty_mIndex, mProperty_mModeDefinition COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_M_5F_modesMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mModeDefinition" ":") ;
  mProperty_mModeDefinition.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap::GGS_M_5F_modesMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap::GGS_M_5F_modesMap (const GGS_M_5F_modesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap & GGS_M_5F_modesMap::operator = (const GGS_M_5F_modesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_modesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_M_5F_modesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_ GGS_M_5F_modesMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_modesMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_M_5F_modesMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_modesMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      element.mProperty_mModeDefinition = p->mProperty_mModeDefinition ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::class_func_mapWithMapToOverride (const GGS_M_5F_modesMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_M_5F_modesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_M_5F_modesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::enterElement (const GGS_M_5F_modesMap_2E_element & inValue,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_modesMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_modesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::addAssign_operation (const GGS_lstring & inKey,
                                             const GGS_uint & inArgument0,
                                             const GGS_AC_5F_machineDefinition & inArgument1,
                                             Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_M_5F_modesMap::add_operation (const GGS_M_5F_modesMap & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_M_5F_modesMap result = *this ;
  UpEnumerator_M_5F_modesMap enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mModeDefinition (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::setter_insertKey (GGS_lstring inKey,
                                          GGS_uint inArgument0,
                                          GGS_AC_5F_machineDefinition inArgument1,
                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_modesMap_searchKey = "the '%K' mode is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::method_searchKey (GGS_lstring inKey,
                                          GGS_uint & outArgument0,
                                          GGS_AC_5F_machineDefinition & outArgument1,
                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_modesMap::getter_mIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_M_5F_modesMap::getter_mModeDefinitionForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) attributes ;
  GGS_AC_5F_machineDefinition result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    result = p->mProperty_mModeDefinition ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap::setter_setMModeDefinitionForKey (GGS_AC_5F_machineDefinition inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_modesMap * p = (cMapElement_M_5F_modesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
    p->mProperty_mModeDefinition = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_modesMap * GGS_M_5F_modesMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                  const GGS_string & inKey
                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_modesMap * result = (cMapElement_M_5F_modesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_modesMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @M_5F_modesMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_M_5F_modesMap::DownEnumerator_M_5F_modesMap (const GGS_M_5F_modesMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element DownEnumerator_M_5F_modesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return GGS_M_5F_modesMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mModeDefinition) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_M_5F_modesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_modesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition DownEnumerator_M_5F_modesMap::current_mModeDefinition (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mModeDefinition ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @M_5F_modesMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_M_5F_modesMap::UpEnumerator_M_5F_modesMap (const GGS_M_5F_modesMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element UpEnumerator_M_5F_modesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return GGS_M_5F_modesMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mModeDefinition) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_M_5F_modesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_modesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition UpEnumerator_M_5F_modesMap::current_mModeDefinition (LOCATION_ARGS) const {
  const cMapElement_M_5F_modesMap * p = (const cMapElement_M_5F_modesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_modesMap) ;
  return p->mProperty_mModeDefinition ;
}


//--------------------------------------------------------------------------------------------------
//     @M_modesMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_modesMap ("M_modesMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_modesMap::staticTypeDescriptor (void) const {
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
//
//Class for element of '@ListForModes' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ListForModes : public cCollectionElement {
  public: GGS_ListForModes_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ListForModes (const GGS_uint & in_mSourceMode,
                                           const GGS_uint & in_mTargetMode
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ListForModes (const GGS_ListForModes_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_ListForModes::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceMode" ":") ;
  mObject.mProperty_mSourceMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetMode" ":") ;
  mObject.mProperty_mTargetMode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes::GGS_ListForModes (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes::GGS_ListForModes (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ListForModes (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ListForModes (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::enterElement (const GGS_ListForModes_2E_element & inValue,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ListForModes (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::class_func_listWithValue (const GGS_uint & inOperand0,
                                                             const GGS_uint & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  GGS_ListForModes result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_ListForModes (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ListForModes::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_uint & in_mSourceMode,
                                                  const GGS_uint & in_mTargetMode
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = nullptr ;
  macroMyNew (p, cCollectionElement_ListForModes (in_mSourceMode,
                                                  in_mTargetMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::addAssign_operation (const GGS_uint & inOperand0,
                                            const GGS_uint & inOperand1
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_append (const GGS_uint inOperand0,
                                      const GGS_uint inOperand1,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_insertAtIndex (const GGS_uint inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ListForModes (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_removeAtIndex (GGS_uint & outOperand0,
                                             GGS_uint & outOperand1,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ListForModes) ;
      outOperand0 = p->mObject.mProperty_mSourceMode ;
      outOperand1 = p->mObject.mProperty_mTargetMode ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_popFirst (GGS_uint & outOperand0,
                                        GGS_uint & outOperand1,
                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_popLast (GGS_uint & outOperand0,
                                       GGS_uint & outOperand1,
                                       Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::method_first (GGS_uint & outOperand0,
                                     GGS_uint & outOperand1,
                                     Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::method_last (GGS_uint & outOperand0,
                                    GGS_uint & outOperand1,
                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::add_operation (const GGS_ListForModes & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ListForModes result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_ListForModes result = GGS_ListForModes::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_ListForModes result = GGS_ListForModes::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_ListForModes::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_ListForModes result = GGS_ListForModes::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::plusAssign_operation (const GGS_ListForModes inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_setMSourceModeAtIndex (GGS_uint inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ListForModes::getter_mSourceModeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mProperty_mSourceMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes::setter_setMTargetModeAtIndex (GGS_uint inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ListForModes::getter_mTargetModeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ListForModes * p = (cCollectionElement_ListForModes *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ListForModes) ;
    result = p->mObject.mProperty_mTargetMode ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ListForModes
//--------------------------------------------------------------------------------------------------

DownEnumerator_ListForModes::DownEnumerator_ListForModes (const GGS_ListForModes & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element DownEnumerator_ListForModes::current (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ListForModes::current_mSourceMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mSourceMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ListForModes::current_mTargetMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mTargetMode ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ListForModes
//--------------------------------------------------------------------------------------------------

UpEnumerator_ListForModes::UpEnumerator_ListForModes (const GGS_ListForModes & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element UpEnumerator_ListForModes::current (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ListForModes::current_mSourceMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mSourceMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ListForModes::current_mTargetMode (LOCATION_ARGS) const {
  const cCollectionElement_ListForModes * p = (const cCollectionElement_ListForModes *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ListForModes) ;
  return p->mObject.mProperty_mTargetMode ;
}




//--------------------------------------------------------------------------------------------------
//     @ListForModes generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ListForModes ("ListForModes",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ListForModes::staticTypeDescriptor (void) const {
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

GGS_C_5F_substractiveModalCompositionComponent GGS_C_5F_substractiveModalCompositionComponent::class_func_new (const GGS_M_5F_modesMap & in_mModeMap,
                                                                                                               const GGS_ListForModes & in_mExclusionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_substractiveModalCompositionComponent result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_substractiveModalCompositionComponent (in_mModeMap, in_mExclusionList,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_substractiveModalCompositionComponent::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ("C_substractiveModalCompositionComponent",
                                                                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_substractiveModalCompositionComponent::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent_2E_weak ("C_substractiveModalCompositionComponent.weak",
                                                                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_substractiveModalCompositionComponent_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_additiveModalCompositionComponent GGS_C_5F_additiveModalCompositionComponent::class_func_new (const GGS_M_5F_modesMap & in_mModeMap,
                                                                                                       const GGS_ListForModes & in_mInclusionList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_additiveModalCompositionComponent result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_additiveModalCompositionComponent (in_mModeMap, in_mInclusionList,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_additiveModalCompositionComponent::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ("C_additiveModalCompositionComponent",
                                                                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_additiveModalCompositionComponent::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent_2E_weak ("C_additiveModalCompositionComponent.weak",
                                                                                                      & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_additiveModalCompositionComponent_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_trans GGS_C_5F_trans::class_func_new (const GGS_AC_5F_boolExpression & in_mSourceStateExpression,
                                               const GGS_AC_5F_boolExpression & in_mTargetStateExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_trans result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_trans (in_mSourceStateExpression, in_mTargetStateExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_trans::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trans ("C_trans",
                                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_trans::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_trans_2E_weak ("C_trans.weak",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_trans_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_importMachine GGS_C_5F_importMachine::class_func_new (const GGS_uint & in_mIndexOfImportedMachine,
                                                               const GGS_L_5F_translationVector & in_mTranslationVector,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_importMachine result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_importMachine (in_mIndexOfImportedMachine, in_mTranslationVector,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_importMachine::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importMachine ("C_importMachine",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_importMachine::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importMachine_2E_weak ("C_importMachine.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_importMachine_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_explicitAutomatonDefinition GGS_C_5F_explicitAutomatonDefinition::class_func_new (const GGS_M_5F_stateMap & in_mStatesMap,
                                                                                           const GGS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                                                           const GGS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                                                           const GGS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                                                           const GGS_location & in_mEndOfDefinition,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_C_5F_explicitAutomatonDefinition result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_explicitAutomatonDefinition (in_mStatesMap, in_mInitialStatesDefinitionList, in_mTerminalStatesDefinitionList, in_mStateDefinitionList, in_mEndOfDefinition,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_explicitAutomatonDefinition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ("C_explicitAutomatonDefinition",
                                                                                        & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_explicitAutomatonDefinition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition_2E_weak ("C_explicitAutomatonDefinition.weak",
                                                                                                & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_explicitAutomatonDefinition_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_boolToSeqExpression GGS_C_5F_boolToSeqExpression::class_func_new (const GGS_AC_5F_boolExpression & in_mExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_C_5F_boolToSeqExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_boolToSeqExpression (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_boolToSeqExpression::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ("C_boolToSeqExpression",
                                                                                & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_boolToSeqExpression::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression_2E_weak ("C_boolToSeqExpression.weak",
                                                                                        & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_boolToSeqExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_existsDefinition GGS_C_5F_existsDefinition::class_func_new (const GGS_uint & in_mPreviousVariableCount,
                                                                     const GGS_uint & in_mTotalVariableCount,
                                                                     const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_C_5F_existsDefinition result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_existsDefinition (in_mPreviousVariableCount, in_mTotalVariableCount, in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_existsDefinition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition ("C_existsDefinition",
                                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_existsDefinition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_existsDefinition_2E_weak ("C_existsDefinition.weak",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_existsDefinition_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_forallDefinition GGS_C_5F_forallDefinition::class_func_new (const GGS_uint & in_mPreviousVariableCount,
                                                                     const GGS_uint & in_mTotalVariableCount,
                                                                     const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_C_5F_forallDefinition result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_forallDefinition (in_mPreviousVariableCount, in_mTotalVariableCount, in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_forallDefinition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition ("C_forallDefinition",
                                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_forallDefinition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_forallDefinition_2E_weak ("C_forallDefinition.weak",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_forallDefinition_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_parallelComposition GGS_C_5F_parallelComposition::class_func_new (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                           const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_C_5F_parallelComposition result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_parallelComposition (in_mLeftOperand, in_mRightOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_parallelComposition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition ("C_parallelComposition",
                                                                                & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_parallelComposition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_parallelComposition_2E_weak ("C_parallelComposition.weak",
                                                                                        & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_parallelComposition_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_orComposition GGS_C_5F_orComposition::class_func_new (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                               const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_orComposition result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_orComposition (in_mLeftOperand, in_mRightOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_orComposition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orComposition ("C_orComposition",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_orComposition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_orComposition_2E_weak ("C_orComposition.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_orComposition_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_strongModalComposition GGS_C_5F_strongModalComposition::class_func_new (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                                 const GGS_location & in_mErrorLocation,
                                                                                 const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_C_5F_strongModalComposition result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_strongModalComposition (in_mLeftOperand, in_mErrorLocation, in_mRightOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_strongModalComposition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition ("C_strongModalComposition",
                                                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_strongModalComposition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_strongModalComposition_2E_weak ("C_strongModalComposition.weak",
                                                                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_strongModalComposition_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_weakModalComposition GGS_C_5F_weakModalComposition::class_func_new (const GGS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                             const GGS_location & in_mErrorLocation,
                                                                             const GGS_AC_5F_machineDefinition & in_mRightOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_C_5F_weakModalComposition result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_weakModalComposition (in_mLeftOperand, in_mErrorLocation, in_mRightOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_weakModalComposition::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition ("C_weakModalComposition",
                                                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_weakModalComposition::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_weakModalComposition_2E_weak ("C_weakModalComposition.weak",
                                                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_weakModalComposition_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_fullSaturationOperation GGS_C_5F_fullSaturationOperation::class_func_new (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_C_5F_fullSaturationOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_fullSaturationOperation (in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_fullSaturationOperation::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ("C_fullSaturationOperation",
                                                                                    & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_fullSaturationOperation::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation_2E_weak ("C_fullSaturationOperation.weak",
                                                                                            & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_fullSaturationOperation_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_complementationOperation GGS_C_5F_complementationOperation::class_func_new (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_C_5F_complementationOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_complementationOperation (in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_complementationOperation::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation ("C_complementationOperation",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_complementationOperation::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_complementationOperation_2E_weak ("C_complementationOperation.weak",
                                                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_complementationOperation_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_suppressTerminalStatesOperation GGS_C_5F_suppressTerminalStatesOperation::class_func_new (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_C_5F_suppressTerminalStatesOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressTerminalStatesOperation (in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_C_5F_suppressTerminalStatesOperation::classDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ("C_suppressTerminalStatesOperation",
                                                                                            & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_suppressTerminalStatesOperation::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_suppressTerminalStatesOperation_2E_weak::objectCompare (const GGS_C_5F_suppressTerminalStatesOperation_2E_weak & inOperand) const {
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

GGS_C_5F_suppressTerminalStatesOperation_2E_weak::GGS_C_5F_suppressTerminalStatesOperation_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation_2E_weak & GGS_C_5F_suppressTerminalStatesOperation_2E_weak::operator = (const GGS_C_5F_suppressTerminalStatesOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation_2E_weak::GGS_C_5F_suppressTerminalStatesOperation_2E_weak (const GGS_C_5F_suppressTerminalStatesOperation & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation_2E_weak GGS_C_5F_suppressTerminalStatesOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_suppressTerminalStatesOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation GGS_C_5F_suppressTerminalStatesOperation_2E_weak::bang_C_5F_suppressTerminalStatesOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_suppressTerminalStatesOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_suppressTerminalStatesOperation) ;
      result = GGS_C_5F_suppressTerminalStatesOperation ((cPtr_C_5F_suppressTerminalStatesOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_suppressTerminalStatesOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation_2E_weak ("C_suppressTerminalStatesOperation.weak",
                                                                                                    & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_suppressTerminalStatesOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_suppressTerminalStatesOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_suppressTerminalStatesOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressTerminalStatesOperation_2E_weak GGS_C_5F_suppressTerminalStatesOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_C_5F_suppressTerminalStatesOperation_2E_weak result ;
  const GGS_C_5F_suppressTerminalStatesOperation_2E_weak * p = (const GGS_C_5F_suppressTerminalStatesOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_suppressTerminalStatesOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressTerminalStatesOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_suppressInitialStatesOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_suppressInitialStatesOperation::objectCompare (const GGS_C_5F_suppressInitialStatesOperation & inOperand) const {
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

GGS_C_5F_suppressInitialStatesOperation::GGS_C_5F_suppressInitialStatesOperation (void) :
GGS_AC_5F_machineDefinition () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation GGS_C_5F_suppressInitialStatesOperation::
init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_suppressInitialStatesOperation * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_suppressInitialStatesOperation (inCompiler COMMA_THERE)) ;
  object->C_5F_suppressInitialStatesOperation_init_21_ (in_mOperand, inCompiler) ;
  const GGS_C_5F_suppressInitialStatesOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_suppressInitialStatesOperation::
C_5F_suppressInitialStatesOperation_init_21_ (const GGS_AC_5F_machineDefinition & in_mOperand,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation::GGS_C_5F_suppressInitialStatesOperation (const cPtr_C_5F_suppressInitialStatesOperation * inSourcePtr) :
GGS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressInitialStatesOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation GGS_C_5F_suppressInitialStatesOperation::class_func_new (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_C_5F_suppressInitialStatesOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressInitialStatesOperation (in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_suppressInitialStatesOperation::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_suppressInitialStatesOperation * p = (cPtr_C_5F_suppressInitialStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_suppressInitialStatesOperation::setProperty_mOperand (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_suppressInitialStatesOperation * p = (cPtr_C_5F_suppressInitialStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_suppressInitialStatesOperation class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_suppressInitialStatesOperation::cPtr_C_5F_suppressInitialStatesOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_suppressInitialStatesOperation::cPtr_C_5F_suppressInitialStatesOperation (const GGS_AC_5F_machineDefinition & in_mOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (inCompiler COMMA_THERE),
mProperty_mOperand () {
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_suppressInitialStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

void cPtr_C_5F_suppressInitialStatesOperation::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@C_suppressInitialStatesOperation:") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_suppressInitialStatesOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_suppressInitialStatesOperation (mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_suppressInitialStatesOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_machineDefinition::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_suppressInitialStatesOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ("C_suppressInitialStatesOperation",
                                                                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_suppressInitialStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_suppressInitialStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_suppressInitialStatesOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation GGS_C_5F_suppressInitialStatesOperation::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_C_5F_suppressInitialStatesOperation result ;
  const GGS_C_5F_suppressInitialStatesOperation * p = (const GGS_C_5F_suppressInitialStatesOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_suppressInitialStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressInitialStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_suppressInitialStatesOperation_2E_weak::objectCompare (const GGS_C_5F_suppressInitialStatesOperation_2E_weak & inOperand) const {
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

GGS_C_5F_suppressInitialStatesOperation_2E_weak::GGS_C_5F_suppressInitialStatesOperation_2E_weak (void) :
GGS_AC_5F_machineDefinition_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation_2E_weak & GGS_C_5F_suppressInitialStatesOperation_2E_weak::operator = (const GGS_C_5F_suppressInitialStatesOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation_2E_weak::GGS_C_5F_suppressInitialStatesOperation_2E_weak (const GGS_C_5F_suppressInitialStatesOperation & inSource) :
GGS_AC_5F_machineDefinition_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation_2E_weak GGS_C_5F_suppressInitialStatesOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_suppressInitialStatesOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation GGS_C_5F_suppressInitialStatesOperation_2E_weak::bang_C_5F_suppressInitialStatesOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_suppressInitialStatesOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_suppressInitialStatesOperation) ;
      result = GGS_C_5F_suppressInitialStatesOperation ((cPtr_C_5F_suppressInitialStatesOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_suppressInitialStatesOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation_2E_weak ("C_suppressInitialStatesOperation.weak",
                                                                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_suppressInitialStatesOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_suppressInitialStatesOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_suppressInitialStatesOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_suppressInitialStatesOperation_2E_weak GGS_C_5F_suppressInitialStatesOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_C_5F_suppressInitialStatesOperation_2E_weak result ;
  const GGS_C_5F_suppressInitialStatesOperation_2E_weak * p = (const GGS_C_5F_suppressInitialStatesOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_suppressInitialStatesOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressInitialStatesOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @AC_5F_job reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_AC_5F_job::objectCompare (const GGS_AC_5F_job & inOperand) const {
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

GGS_AC_5F_job::GGS_AC_5F_job (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job::GGS_AC_5F_job (const cPtr_AC_5F_job * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_job) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @AC_job class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_AC_5F_job::cPtr_AC_5F_job (Compiler * inCompiler
                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_AC_5F_job::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @AC_job generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_job ("AC_job",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AC_5F_job::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_job ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AC_5F_job::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AC_5F_job (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job GGS_AC_5F_job::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_AC_5F_job result ;
  const GGS_AC_5F_job * p = (const GGS_AC_5F_job *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AC_5F_job *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_job", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_AC_5F_job_2E_weak::objectCompare (const GGS_AC_5F_job_2E_weak & inOperand) const {
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

GGS_AC_5F_job_2E_weak::GGS_AC_5F_job_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job_2E_weak & GGS_AC_5F_job_2E_weak::operator = (const GGS_AC_5F_job & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job_2E_weak::GGS_AC_5F_job_2E_weak (const GGS_AC_5F_job & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job_2E_weak GGS_AC_5F_job_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_AC_5F_job_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job GGS_AC_5F_job_2E_weak::bang_AC_5F_job_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_AC_5F_job result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_AC_5F_job) ;
      result = GGS_AC_5F_job ((cPtr_AC_5F_job *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @AC_job.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AC_5F_job_2E_weak ("AC_job.weak",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AC_5F_job_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AC_5F_job_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AC_5F_job_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job_2E_weak GGS_AC_5F_job_2E_weak::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_AC_5F_job_2E_weak result ;
  const GGS_AC_5F_job_2E_weak * p = (const GGS_AC_5F_job_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AC_5F_job_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_job.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayStates reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayStates::objectCompare (const GGS_C_5F_machineDisplayStates & inOperand) const {
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

GGS_C_5F_machineDisplayStates::GGS_C_5F_machineDisplayStates (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineDisplayStates GGS_C_5F_machineDisplayStates::
init_21_ (const GGS_uint & in_mMachineIndex,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineDisplayStates * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineDisplayStates (inCompiler COMMA_THERE)) ;
  object->C_5F_machineDisplayStates_init_21_ (in_mMachineIndex, inCompiler) ;
  const GGS_C_5F_machineDisplayStates result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineDisplayStates::
C_5F_machineDisplayStates_init_21_ (const GGS_uint & in_mMachineIndex,
                                    Compiler * /* inCompiler */) {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates::GGS_C_5F_machineDisplayStates (const cPtr_C_5F_machineDisplayStates * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayStates) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates GGS_C_5F_machineDisplayStates::class_func_new (const GGS_uint & in_mMachineIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayStates result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayStates (in_mMachineIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDisplayStates::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayStates * p = (cPtr_C_5F_machineDisplayStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDisplayStates::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayStates * p = (cPtr_C_5F_machineDisplayStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayStates class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayStates::cPtr_C_5F_machineDisplayStates (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayStates::cPtr_C_5F_machineDisplayStates (const GGS_uint & in_mMachineIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

void cPtr_C_5F_machineDisplayStates::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineDisplayStates:") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayStates::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayStates (mProperty_mMachineIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayStates::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayStates generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ("C_machineDisplayStates",
                                                                                 & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayStates::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayStates (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates GGS_C_5F_machineDisplayStates::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayStates result ;
  const GGS_C_5F_machineDisplayStates * p = (const GGS_C_5F_machineDisplayStates *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayStates_2E_weak::objectCompare (const GGS_C_5F_machineDisplayStates_2E_weak & inOperand) const {
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

GGS_C_5F_machineDisplayStates_2E_weak::GGS_C_5F_machineDisplayStates_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates_2E_weak & GGS_C_5F_machineDisplayStates_2E_weak::operator = (const GGS_C_5F_machineDisplayStates & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates_2E_weak::GGS_C_5F_machineDisplayStates_2E_weak (const GGS_C_5F_machineDisplayStates & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates_2E_weak GGS_C_5F_machineDisplayStates_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineDisplayStates_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates GGS_C_5F_machineDisplayStates_2E_weak::bang_C_5F_machineDisplayStates_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineDisplayStates result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayStates) ;
      result = GGS_C_5F_machineDisplayStates ((cPtr_C_5F_machineDisplayStates *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayStates.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates_2E_weak ("C_machineDisplayStates.weak",
                                                                                         & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayStates_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayStates_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayStates_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayStates_2E_weak GGS_C_5F_machineDisplayStates_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayStates_2E_weak result ;
  const GGS_C_5F_machineDisplayStates_2E_weak * p = (const GGS_C_5F_machineDisplayStates_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayStates_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayStates.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayInitialStates reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayInitialStates::objectCompare (const GGS_C_5F_machineDisplayInitialStates & inOperand) const {
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

GGS_C_5F_machineDisplayInitialStates::GGS_C_5F_machineDisplayInitialStates (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates GGS_C_5F_machineDisplayInitialStates::
init_21_ (const GGS_uint & in_mMachineIndex,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineDisplayInitialStates * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineDisplayInitialStates (inCompiler COMMA_THERE)) ;
  object->C_5F_machineDisplayInitialStates_init_21_ (in_mMachineIndex, inCompiler) ;
  const GGS_C_5F_machineDisplayInitialStates result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineDisplayInitialStates::
C_5F_machineDisplayInitialStates_init_21_ (const GGS_uint & in_mMachineIndex,
                                           Compiler * /* inCompiler */) {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates::GGS_C_5F_machineDisplayInitialStates (const cPtr_C_5F_machineDisplayInitialStates * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayInitialStates) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates GGS_C_5F_machineDisplayInitialStates::class_func_new (const GGS_uint & in_mMachineIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayInitialStates result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayInitialStates (in_mMachineIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDisplayInitialStates::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayInitialStates * p = (cPtr_C_5F_machineDisplayInitialStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDisplayInitialStates::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayInitialStates * p = (cPtr_C_5F_machineDisplayInitialStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayInitialStates class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayInitialStates::cPtr_C_5F_machineDisplayInitialStates (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayInitialStates::cPtr_C_5F_machineDisplayInitialStates (const GGS_uint & in_mMachineIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayInitialStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

void cPtr_C_5F_machineDisplayInitialStates::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineDisplayInitialStates:") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayInitialStates::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayInitialStates (mProperty_mMachineIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayInitialStates::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayInitialStates generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ("C_machineDisplayInitialStates",
                                                                                        & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayInitialStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayInitialStates::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayInitialStates (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates GGS_C_5F_machineDisplayInitialStates::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayInitialStates result ;
  const GGS_C_5F_machineDisplayInitialStates * p = (const GGS_C_5F_machineDisplayInitialStates *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayInitialStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayInitialStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayInitialStates_2E_weak::objectCompare (const GGS_C_5F_machineDisplayInitialStates_2E_weak & inOperand) const {
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

GGS_C_5F_machineDisplayInitialStates_2E_weak::GGS_C_5F_machineDisplayInitialStates_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates_2E_weak & GGS_C_5F_machineDisplayInitialStates_2E_weak::operator = (const GGS_C_5F_machineDisplayInitialStates & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates_2E_weak::GGS_C_5F_machineDisplayInitialStates_2E_weak (const GGS_C_5F_machineDisplayInitialStates & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates_2E_weak GGS_C_5F_machineDisplayInitialStates_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineDisplayInitialStates_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates GGS_C_5F_machineDisplayInitialStates_2E_weak::bang_C_5F_machineDisplayInitialStates_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineDisplayInitialStates result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayInitialStates) ;
      result = GGS_C_5F_machineDisplayInitialStates ((cPtr_C_5F_machineDisplayInitialStates *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayInitialStates.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates_2E_weak ("C_machineDisplayInitialStates.weak",
                                                                                                & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayInitialStates_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayInitialStates_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayInitialStates_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayInitialStates_2E_weak GGS_C_5F_machineDisplayInitialStates_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayInitialStates_2E_weak result ;
  const GGS_C_5F_machineDisplayInitialStates_2E_weak * p = (const GGS_C_5F_machineDisplayInitialStates_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayInitialStates_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayInitialStates.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayTerminalStates reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayTerminalStates::objectCompare (const GGS_C_5F_machineDisplayTerminalStates & inOperand) const {
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

GGS_C_5F_machineDisplayTerminalStates::GGS_C_5F_machineDisplayTerminalStates (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates GGS_C_5F_machineDisplayTerminalStates::
init_21_ (const GGS_uint & in_mMachineIndex,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineDisplayTerminalStates * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineDisplayTerminalStates (inCompiler COMMA_THERE)) ;
  object->C_5F_machineDisplayTerminalStates_init_21_ (in_mMachineIndex, inCompiler) ;
  const GGS_C_5F_machineDisplayTerminalStates result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineDisplayTerminalStates::
C_5F_machineDisplayTerminalStates_init_21_ (const GGS_uint & in_mMachineIndex,
                                            Compiler * /* inCompiler */) {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates::GGS_C_5F_machineDisplayTerminalStates (const cPtr_C_5F_machineDisplayTerminalStates * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTerminalStates) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates GGS_C_5F_machineDisplayTerminalStates::class_func_new (const GGS_uint & in_mMachineIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTerminalStates result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTerminalStates (in_mMachineIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDisplayTerminalStates::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayTerminalStates * p = (cPtr_C_5F_machineDisplayTerminalStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDisplayTerminalStates::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayTerminalStates * p = (cPtr_C_5F_machineDisplayTerminalStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayTerminalStates class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayTerminalStates::cPtr_C_5F_machineDisplayTerminalStates (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayTerminalStates::cPtr_C_5F_machineDisplayTerminalStates (const GGS_uint & in_mMachineIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTerminalStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

void cPtr_C_5F_machineDisplayTerminalStates::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineDisplayTerminalStates:") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayTerminalStates::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTerminalStates (mProperty_mMachineIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayTerminalStates::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayTerminalStates generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ("C_machineDisplayTerminalStates",
                                                                                         & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayTerminalStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayTerminalStates::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayTerminalStates (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates GGS_C_5F_machineDisplayTerminalStates::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTerminalStates result ;
  const GGS_C_5F_machineDisplayTerminalStates * p = (const GGS_C_5F_machineDisplayTerminalStates *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayTerminalStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTerminalStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayTerminalStates_2E_weak::objectCompare (const GGS_C_5F_machineDisplayTerminalStates_2E_weak & inOperand) const {
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

GGS_C_5F_machineDisplayTerminalStates_2E_weak::GGS_C_5F_machineDisplayTerminalStates_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates_2E_weak & GGS_C_5F_machineDisplayTerminalStates_2E_weak::operator = (const GGS_C_5F_machineDisplayTerminalStates & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates_2E_weak::GGS_C_5F_machineDisplayTerminalStates_2E_weak (const GGS_C_5F_machineDisplayTerminalStates & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates_2E_weak GGS_C_5F_machineDisplayTerminalStates_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTerminalStates_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates GGS_C_5F_machineDisplayTerminalStates_2E_weak::bang_C_5F_machineDisplayTerminalStates_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineDisplayTerminalStates result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayTerminalStates) ;
      result = GGS_C_5F_machineDisplayTerminalStates ((cPtr_C_5F_machineDisplayTerminalStates *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayTerminalStates.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates_2E_weak ("C_machineDisplayTerminalStates.weak",
                                                                                                 & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayTerminalStates_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayTerminalStates_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayTerminalStates_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTerminalStates_2E_weak GGS_C_5F_machineDisplayTerminalStates_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTerminalStates_2E_weak result ;
  const GGS_C_5F_machineDisplayTerminalStates_2E_weak * p = (const GGS_C_5F_machineDisplayTerminalStates_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayTerminalStates_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTerminalStates.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineDisplayTransitions reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayTransitions::objectCompare (const GGS_C_5F_machineDisplayTransitions & inOperand) const {
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

GGS_C_5F_machineDisplayTransitions::GGS_C_5F_machineDisplayTransitions (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions GGS_C_5F_machineDisplayTransitions::
init_21_ (const GGS_uint & in_mMachineIndex,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineDisplayTransitions * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineDisplayTransitions (inCompiler COMMA_THERE)) ;
  object->C_5F_machineDisplayTransitions_init_21_ (in_mMachineIndex, inCompiler) ;
  const GGS_C_5F_machineDisplayTransitions result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineDisplayTransitions::
C_5F_machineDisplayTransitions_init_21_ (const GGS_uint & in_mMachineIndex,
                                         Compiler * /* inCompiler */) {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions::GGS_C_5F_machineDisplayTransitions (const cPtr_C_5F_machineDisplayTransitions * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTransitions) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions GGS_C_5F_machineDisplayTransitions::class_func_new (const GGS_uint & in_mMachineIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTransitions result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTransitions (in_mMachineIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDisplayTransitions::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDisplayTransitions * p = (cPtr_C_5F_machineDisplayTransitions *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDisplayTransitions::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDisplayTransitions * p = (cPtr_C_5F_machineDisplayTransitions *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDisplayTransitions class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayTransitions::cPtr_C_5F_machineDisplayTransitions (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDisplayTransitions::cPtr_C_5F_machineDisplayTransitions (const GGS_uint & in_mMachineIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex () {
  mProperty_mMachineIndex = in_mMachineIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTransitions::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

void cPtr_C_5F_machineDisplayTransitions::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineDisplayTransitions:") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDisplayTransitions::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTransitions (mProperty_mMachineIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDisplayTransitions::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayTransitions generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ("C_machineDisplayTransitions",
                                                                                      & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayTransitions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayTransitions::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayTransitions (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions GGS_C_5F_machineDisplayTransitions::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTransitions result ;
  const GGS_C_5F_machineDisplayTransitions * p = (const GGS_C_5F_machineDisplayTransitions *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayTransitions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTransitions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDisplayTransitions_2E_weak::objectCompare (const GGS_C_5F_machineDisplayTransitions_2E_weak & inOperand) const {
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

GGS_C_5F_machineDisplayTransitions_2E_weak::GGS_C_5F_machineDisplayTransitions_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions_2E_weak & GGS_C_5F_machineDisplayTransitions_2E_weak::operator = (const GGS_C_5F_machineDisplayTransitions & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions_2E_weak::GGS_C_5F_machineDisplayTransitions_2E_weak (const GGS_C_5F_machineDisplayTransitions & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions_2E_weak GGS_C_5F_machineDisplayTransitions_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTransitions_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions GGS_C_5F_machineDisplayTransitions_2E_weak::bang_C_5F_machineDisplayTransitions_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineDisplayTransitions result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDisplayTransitions) ;
      result = GGS_C_5F_machineDisplayTransitions ((cPtr_C_5F_machineDisplayTransitions *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineDisplayTransitions.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions_2E_weak ("C_machineDisplayTransitions.weak",
                                                                                              & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDisplayTransitions_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDisplayTransitions_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDisplayTransitions_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDisplayTransitions_2E_weak GGS_C_5F_machineDisplayTransitions_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDisplayTransitions_2E_weak result ;
  const GGS_C_5F_machineDisplayTransitions_2E_weak * p = (const GGS_C_5F_machineDisplayTransitions_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDisplayTransitions_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTransitions.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineCheck_2E_weak::objectCompare (const GGS_C_5F_machineCheck_2E_weak & inOperand) const {
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

GGS_C_5F_machineCheck_2E_weak::GGS_C_5F_machineCheck_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck_2E_weak & GGS_C_5F_machineCheck_2E_weak::operator = (const GGS_C_5F_machineCheck & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck_2E_weak::GGS_C_5F_machineCheck_2E_weak (const GGS_C_5F_machineCheck & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck_2E_weak GGS_C_5F_machineCheck_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineCheck_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck GGS_C_5F_machineCheck_2E_weak::bang_C_5F_machineCheck_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineCheck result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineCheck) ;
      result = GGS_C_5F_machineCheck ((cPtr_C_5F_machineCheck *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineCheck.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheck_2E_weak ("C_machineCheck.weak",
                                                                                 & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineCheck_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineCheck_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineCheck_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck_2E_weak GGS_C_5F_machineCheck_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineCheck_2E_weak result ;
  const GGS_C_5F_machineCheck_2E_weak * p = (const GGS_C_5F_machineCheck_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineCheck_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheck.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineCheckIdentical reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineCheckIdentical::objectCompare (const GGS_C_5F_machineCheckIdentical & inOperand) const {
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

GGS_C_5F_machineCheckIdentical::GGS_C_5F_machineCheckIdentical (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical GGS_C_5F_machineCheckIdentical::
init_21__21_ (const GGS_uint & in_mMachineIndex_31_,
              const GGS_uint & in_mMachineIndex_32_,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineCheckIdentical * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineCheckIdentical (inCompiler COMMA_THERE)) ;
  object->C_5F_machineCheckIdentical_init_21__21_ (in_mMachineIndex_31_, in_mMachineIndex_32_, inCompiler) ;
  const GGS_C_5F_machineCheckIdentical result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineCheckIdentical::
C_5F_machineCheckIdentical_init_21__21_ (const GGS_uint & in_mMachineIndex_31_,
                                         const GGS_uint & in_mMachineIndex_32_,
                                         Compiler * /* inCompiler */) {
  mProperty_mMachineIndex_31_ = in_mMachineIndex_31_ ;
  mProperty_mMachineIndex_32_ = in_mMachineIndex_32_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical::GGS_C_5F_machineCheckIdentical (const cPtr_C_5F_machineCheckIdentical * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheckIdentical) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical GGS_C_5F_machineCheckIdentical::class_func_new (const GGS_uint & in_mMachineIndex_31_,
                                                                               const GGS_uint & in_mMachineIndex_32_,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineCheckIdentical result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheckIdentical (in_mMachineIndex_31_, in_mMachineIndex_32_,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineCheckIdentical::readProperty_mMachineIndex_31_ (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    return p->mProperty_mMachineIndex_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineCheckIdentical::setProperty_mMachineIndex_31_ (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    p->mProperty_mMachineIndex_31_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineCheckIdentical::readProperty_mMachineIndex_32_ (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    return p->mProperty_mMachineIndex_32_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineCheckIdentical::setProperty_mMachineIndex_32_ (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheckIdentical) ;
    p->mProperty_mMachineIndex_32_ = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineCheckIdentical class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineCheckIdentical::cPtr_C_5F_machineCheckIdentical (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex_31_ (),
mProperty_mMachineIndex_32_ () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineCheckIdentical::cPtr_C_5F_machineCheckIdentical (const GGS_uint & in_mMachineIndex_31_,
                                                                  const GGS_uint & in_mMachineIndex_32_,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex_31_ (),
mProperty_mMachineIndex_32_ () {
  mProperty_mMachineIndex_31_ = in_mMachineIndex_31_ ;
  mProperty_mMachineIndex_32_ = in_mMachineIndex_32_ ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineCheckIdentical::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;
}

void cPtr_C_5F_machineCheckIdentical::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineCheckIdentical:") ;
  mProperty_mMachineIndex_31_.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMachineIndex_32_.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineCheckIdentical::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineCheckIdentical (mProperty_mMachineIndex_31_, mProperty_mMachineIndex_32_, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineCheckIdentical::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex_31_.printNonNullClassInstanceProperties ("mMachineIndex1") ;
    mProperty_mMachineIndex_32_.printNonNullClassInstanceProperties ("mMachineIndex2") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @C_machineCheckIdentical generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ("C_machineCheckIdentical",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineCheckIdentical::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineCheckIdentical::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineCheckIdentical (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical GGS_C_5F_machineCheckIdentical::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineCheckIdentical result ;
  const GGS_C_5F_machineCheckIdentical * p = (const GGS_C_5F_machineCheckIdentical *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineCheckIdentical *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheckIdentical", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineCheckIdentical_2E_weak::objectCompare (const GGS_C_5F_machineCheckIdentical_2E_weak & inOperand) const {
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

GGS_C_5F_machineCheckIdentical_2E_weak::GGS_C_5F_machineCheckIdentical_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical_2E_weak & GGS_C_5F_machineCheckIdentical_2E_weak::operator = (const GGS_C_5F_machineCheckIdentical & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical_2E_weak::GGS_C_5F_machineCheckIdentical_2E_weak (const GGS_C_5F_machineCheckIdentical & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical_2E_weak GGS_C_5F_machineCheckIdentical_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineCheckIdentical_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical GGS_C_5F_machineCheckIdentical_2E_weak::bang_C_5F_machineCheckIdentical_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineCheckIdentical result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineCheckIdentical) ;
      result = GGS_C_5F_machineCheckIdentical ((cPtr_C_5F_machineCheckIdentical *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineCheckIdentical.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical_2E_weak ("C_machineCheckIdentical.weak",
                                                                                          & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineCheckIdentical_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineCheckIdentical_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineCheckIdentical_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheckIdentical_2E_weak GGS_C_5F_machineCheckIdentical_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineCheckIdentical_2E_weak result ;
  const GGS_C_5F_machineCheckIdentical_2E_weak * p = (const GGS_C_5F_machineCheckIdentical_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineCheckIdentical_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheckIdentical.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineComponent_2E_weak::objectCompare (const GGS_C_5F_machineComponent_2E_weak & inOperand) const {
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

GGS_C_5F_machineComponent_2E_weak::GGS_C_5F_machineComponent_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent_2E_weak & GGS_C_5F_machineComponent_2E_weak::operator = (const GGS_C_5F_machineComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent_2E_weak::GGS_C_5F_machineComponent_2E_weak (const GGS_C_5F_machineComponent & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent_2E_weak GGS_C_5F_machineComponent_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineComponent_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent GGS_C_5F_machineComponent_2E_weak::bang_C_5F_machineComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineComponent result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineComponent) ;
      result = GGS_C_5F_machineComponent ((cPtr_C_5F_machineComponent *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineComponent.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineComponent_2E_weak ("C_machineComponent.weak",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineComponent_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineComponent_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineComponent_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent_2E_weak GGS_C_5F_machineComponent_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineComponent_2E_weak result ;
  const GGS_C_5F_machineComponent_2E_weak * p = (const GGS_C_5F_machineComponent_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineComponent_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineComponent.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::objectCompare (const GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak & inOperand) const {
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

GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak & GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::operator = (const GGS_C_5F_machineDefinedByAdditiveModalComp & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak (const GGS_C_5F_machineDefinedByAdditiveModalComp & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::bang_C_5F_machineDefinedByAdditiveModalComp_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineDefinedByAdditiveModalComp result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
      result = GGS_C_5F_machineDefinedByAdditiveModalComp ((cPtr_C_5F_machineDefinedByAdditiveModalComp *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineDefinedByAdditiveModalComp.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2E_weak ("C_machineDefinedByAdditiveModalComp.weak",
                                                                                                      & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak result ;
  const GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak * p = (const GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedByAdditiveModalComp.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::objectCompare (const GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak & inOperand) const {
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

GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak & GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::operator = (const GGS_C_5F_machineDefinedBySubstractiveModalComp & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak (const GGS_C_5F_machineDefinedBySubstractiveModalComp & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::bang_C_5F_machineDefinedBySubstractiveModalComp_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_machineDefinedBySubstractiveModalComp result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
      result = GGS_C_5F_machineDefinedBySubstractiveModalComp ((cPtr_C_5F_machineDefinedBySubstractiveModalComp *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @C_machineDefinedBySubstractiveModalComp.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak ("C_machineDefinedBySubstractiveModalComp.weak",
                                                                                                          & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak result ;
  const GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak * p = (const GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedBySubstractiveModalComp.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_inputConfigurationForScenario' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_inputConfigurationForScenario : public cCollectionElement {
  public: GGS_L_5F_inputConfigurationForScenario_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_inputConfigurationForScenario (const GGS_luint & in_mInputValue
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_inputConfigurationForScenario (const GGS_L_5F_inputConfigurationForScenario_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputConfigurationForScenario::cCollectionElement_L_5F_inputConfigurationForScenario (const GGS_luint & in_mInputValue
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputConfigurationForScenario::cCollectionElement_L_5F_inputConfigurationForScenario (const GGS_L_5F_inputConfigurationForScenario_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_inputConfigurationForScenario::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_inputConfigurationForScenario::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_inputConfigurationForScenario (mObject.mProperty_mInputValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_inputConfigurationForScenario::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInputValue" ":") ;
  mObject.mProperty_mInputValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario::GGS_L_5F_inputConfigurationForScenario (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario::GGS_L_5F_inputConfigurationForScenario (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_inputConfigurationForScenario (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_inputConfigurationForScenario (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::enterElement (const GGS_L_5F_inputConfigurationForScenario_2E_element & inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::class_func_listWithValue (const GGS_luint & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario result ;
  if (inOperand0.isValid ()) {
    result = GGS_L_5F_inputConfigurationForScenario (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_L_5F_inputConfigurationForScenario::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GGS_luint & in_mInputValue
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputConfigurationForScenario * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (in_mInputValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::addAssign_operation (const GGS_luint & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_append (const GGS_luint inOperand0,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_insertAtIndex (const GGS_luint inOperand0,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_inputConfigurationForScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_removeAtIndex (GGS_luint & outOperand0,
                                                                   const GGS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
      outOperand0 = p->mObject.mProperty_mInputValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_popFirst (GGS_luint & outOperand0,
                                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_popLast (GGS_luint & outOperand0,
                                                             Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::method_first (GGS_luint & outOperand0,
                                                           Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::method_last (GGS_luint & outOperand0,
                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::add_operation (const GGS_L_5F_inputConfigurationForScenario & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result = GGS_L_5F_inputConfigurationForScenario::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result = GGS_L_5F_inputConfigurationForScenario::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result = GGS_L_5F_inputConfigurationForScenario::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::plusAssign_operation (const GGS_L_5F_inputConfigurationForScenario inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_setMInputValueAtIndex (GGS_luint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_L_5F_inputConfigurationForScenario::getter_mInputValueAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    result = p->mObject.mProperty_mInputValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_inputConfigurationForScenario
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_inputConfigurationForScenario::DownEnumerator_L_5F_inputConfigurationForScenario (const GGS_L_5F_inputConfigurationForScenario & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element DownEnumerator_L_5F_inputConfigurationForScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_L_5F_inputConfigurationForScenario::current_mInputValue (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject.mProperty_mInputValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_inputConfigurationForScenario
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_inputConfigurationForScenario::UpEnumerator_L_5F_inputConfigurationForScenario (const GGS_L_5F_inputConfigurationForScenario & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element UpEnumerator_L_5F_inputConfigurationForScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_L_5F_inputConfigurationForScenario::current_mInputValue (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputConfigurationForScenario * p = (const cCollectionElement_L_5F_inputConfigurationForScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
  return p->mObject.mProperty_mInputValue ;
}




//--------------------------------------------------------------------------------------------------
//     @L_inputConfigurationForScenario generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ("L_inputConfigurationForScenario",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_inputConfigurationForScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_inputConfigurationForScenario::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_inputConfigurationForScenario (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario result ;
  const GGS_L_5F_inputConfigurationForScenario * p = (const GGS_L_5F_inputConfigurationForScenario *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_inputConfigurationForScenario *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputConfigurationForScenario", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_inputScenario' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_inputScenario : public cCollectionElement {
  public: GGS_L_5F_inputScenario_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_inputScenario (const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_inputScenario (const GGS_L_5F_inputScenario_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputScenario::cCollectionElement_L_5F_inputScenario (const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputConfiguration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_inputScenario::cCollectionElement_L_5F_inputScenario (const GGS_L_5F_inputScenario_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputConfiguration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_inputScenario::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_inputScenario::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_inputScenario (mObject.mProperty_mInputConfiguration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_inputScenario::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInputConfiguration" ":") ;
  mObject.mProperty_mInputConfiguration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario::GGS_L_5F_inputScenario (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario::GGS_L_5F_inputScenario (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_inputScenario (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_inputScenario (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::enterElement (const GGS_L_5F_inputScenario_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_inputScenario (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::class_func_listWithValue (const GGS_L_5F_inputConfigurationForScenario & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  GGS_L_5F_inputScenario result ;
  if (inOperand0.isValid ()) {
    result = GGS_L_5F_inputScenario (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_L_5F_inputScenario::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputScenario * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_inputScenario (in_mInputConfiguration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::addAssign_operation (const GGS_L_5F_inputConfigurationForScenario & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_append (const GGS_L_5F_inputConfigurationForScenario inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_insertAtIndex (const GGS_L_5F_inputConfigurationForScenario inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_inputScenario (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_removeAtIndex (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
      outOperand0 = p->mObject.mProperty_mInputConfiguration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_popFirst (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                              Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_popLast (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                             Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::method_first (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                           Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::method_last (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::add_operation (const GGS_L_5F_inputScenario & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result = GGS_L_5F_inputScenario::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result = GGS_L_5F_inputScenario::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result = GGS_L_5F_inputScenario::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::plusAssign_operation (const GGS_L_5F_inputScenario inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_setMInputConfigurationAtIndex (GGS_L_5F_inputConfigurationForScenario inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputConfiguration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputScenario::getter_mInputConfigurationAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) attributes.ptr () ;
  GGS_L_5F_inputConfigurationForScenario result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    result = p->mObject.mProperty_mInputConfiguration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @L_5F_inputScenario
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_inputScenario::DownEnumerator_L_5F_inputScenario (const GGS_L_5F_inputScenario & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element DownEnumerator_L_5F_inputScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario DownEnumerator_L_5F_inputScenario::current_mInputConfiguration (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject.mProperty_mInputConfiguration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_inputScenario
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_inputScenario::UpEnumerator_L_5F_inputScenario (const GGS_L_5F_inputScenario & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element UpEnumerator_L_5F_inputScenario::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario UpEnumerator_L_5F_inputScenario::current_mInputConfiguration (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_inputScenario * p = (const cCollectionElement_L_5F_inputScenario *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
  return p->mObject.mProperty_mInputConfiguration ;
}




//--------------------------------------------------------------------------------------------------
//     @L_inputScenario generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputScenario ("L_inputScenario",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_inputScenario::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_inputScenario::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_inputScenario (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_L_5F_inputScenario result ;
  const GGS_L_5F_inputScenario * p = (const GGS_L_5F_inputScenario *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_inputScenario *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputScenario", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

