#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_machinesMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mInputVariableCount.isValid () && mProperty_mInputAndInternalVariableCount.isValid () && mProperty_mVariablesMap.isValid () && mProperty_mNameList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_machinesMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_M_5F_machinesMap (mProperty_lkey, mProperty_mIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mNameList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap::GALGAS_M_5F_machinesMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap::GALGAS_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap & GALGAS_M_5F_machinesMap::operator = (const GALGAS_M_5F_machinesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::constructor_mapWithMapToOverride (const GALGAS_M_5F_machinesMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_machinesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_machinesMap_searchKey = "the '%K' machine is not defined" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_M_5F_machinesMap * GALGAS_M_5F_machinesMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * result = (cMapElement_M_5F_machinesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_machinesMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_M_5F_machinesMap::cEnumerator_M_5F_machinesMap (const GALGAS_M_5F_machinesMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap_2D_element cEnumerator_M_5F_machinesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return GALGAS_M_5F_machinesMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mInputVariableCount, p->mProperty_mInputAndInternalVariableCount, p->mProperty_mVariablesMap, p->mProperty_mNameList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_M_5F_machinesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mInputVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mInputVariableCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_M_5F_machinesMap::current_mInputAndInternalVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mInputAndInternalVariableCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap cEnumerator_M_5F_machinesMap::current_mVariablesMap (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mVariablesMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_M_5F_machinesMap::current_mNameList (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mNameList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_machinesMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_uint & outArgument0,
                                                  GALGAS_uint & outArgument1,
                                                  GALGAS_uint & outArgument2,
                                                  GALGAS_M_5F_variablesMap & outArgument3,
                                                  GALGAS_stringlist & outArgument4) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mInputVariableCount ;
    outArgument2 = p->mProperty_mInputAndInternalVariableCount ;
    outArgument3 = p->mProperty_mVariablesMap ;
    outArgument4 = p->mProperty_mNameList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@M_machinesMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_machinesMap ("M_machinesMap",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_machinesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_machinesMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_machinesMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_componentsMap (),
mProperty_machinesMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_L_5F_jobList & inOperand0,
                                                const GALGAS_M_5F_machinesMap & inOperand1) :
mProperty_componentsMap (inOperand0),
mProperty_machinesMap (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_L_5F_jobList::constructor_emptyList (HERE),
                                 GALGAS_M_5F_machinesMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_L_5F_jobList & inOperand0,
                                                                const GALGAS_M_5F_machinesMap & inOperand1 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_componentsMap.isValid () && mProperty_machinesMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_componentsMap.drop () ;
  mProperty_machinesMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  routine_performComputations (var_semanticContext_549.readProperty_componentsMap (), inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 20)) ;
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
  GALGAS_M_5F_variablesMap var_variablesMap_907 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 27)) ;
  GALGAS_M_5F_stateMap var_statesMap_951 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 28)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_1001 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 32)) ;
  GALGAS_lstring var_machineName_1105 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 34)) ;
  GALGAS_uint var_machineIndex_1222 ;
  GALGAS_uint joker_1224 ; // Joker input parameter
  GALGAS_uint joker_1227 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1230 ; // Joker input parameter
  GALGAS_stringlist joker_1233 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1105, var_machineIndex_1222, joker_1224, joker_1227, joker_1230, joker_1233, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 36)) ;
  GALGAS_AC_5F_job var_job_1284 = GALGAS_C_5F_machineDisplayStates::constructor_new (var_machineIndex_1222  COMMA_SOURCE_FILE ("sara_parser.galgas", 38)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1284  COMMA_SOURCE_FILE ("sara_parser.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_1533 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 46)) ;
  GALGAS_M_5F_stateMap var_statesMap_1577 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 47)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_1627 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 51)) ;
  GALGAS_lstring var_machineName_1731 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 53)) ;
  GALGAS_uint var_machineIndex_1848 ;
  GALGAS_uint joker_1850 ; // Joker input parameter
  GALGAS_uint joker_1853 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1856 ; // Joker input parameter
  GALGAS_stringlist joker_1859 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1731, var_machineIndex_1848, joker_1850, joker_1853, joker_1856, joker_1859, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 55)) ;
  GALGAS_AC_5F_job var_job_1910 = GALGAS_C_5F_machineDisplayTransitions::constructor_new (var_machineIndex_1848  COMMA_SOURCE_FILE ("sara_parser.galgas", 57)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1910  COMMA_SOURCE_FILE ("sara_parser.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_2163 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 65)) ;
  GALGAS_M_5F_stateMap var_statesMap_2207 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 66)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_2257 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 71)) ;
  GALGAS_lstring var_machineName_2371 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 73)) ;
  GALGAS_uint var_machineIndex_2488 ;
  GALGAS_uint joker_2490 ; // Joker input parameter
  GALGAS_uint joker_2493 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_2496 ; // Joker input parameter
  GALGAS_stringlist joker_2499 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2371, var_machineIndex_2488, joker_2490, joker_2493, joker_2496, joker_2499, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 75)) ;
  GALGAS_AC_5F_job var_job_2550 = GALGAS_C_5F_machineDisplayInitialStates::constructor_new (var_machineIndex_2488  COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_2550  COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_2806 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 85)) ;
  GALGAS_M_5F_stateMap var_statesMap_2850 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 86)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_2900 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 87)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 91)) ;
  GALGAS_lstring var_machineName_3013 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 93)) ;
  GALGAS_uint var_machineIndex_3130 ;
  GALGAS_uint joker_3132 ; // Joker input parameter
  GALGAS_uint joker_3135 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3138 ; // Joker input parameter
  GALGAS_stringlist joker_3141 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_3013, var_machineIndex_3130, joker_3132, joker_3135, joker_3138, joker_3141, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  GALGAS_AC_5F_job var_job_3192 = GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (var_machineIndex_3130  COMMA_SOURCE_FILE ("sara_parser.galgas", 97)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3192  COMMA_SOURCE_FILE ("sara_parser.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 91)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_3449 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 105)) ;
  GALGAS_M_5F_stateMap var_statesMap_3493 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 106)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_3543 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  GALGAS_lstring var_machineName_3635 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  GALGAS_uint var_machineIndex_3752 ;
  GALGAS_uint joker_3754 ; // Joker input parameter
  GALGAS_uint joker_3757 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3760 ; // Joker input parameter
  GALGAS_stringlist joker_3763 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_3635, var_machineIndex_3752, joker_3754, joker_3757, joker_3760, joker_3763, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
  GALGAS_AC_5F_job var_job_3814 = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex_3752, GALGAS_bool (false)  COMMA_SOURCE_FILE ("sara_parser.galgas", 115)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3814  COMMA_SOURCE_FILE ("sara_parser.galgas", 116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_4062 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 123)) ;
  GALGAS_M_5F_stateMap var_statesMap_4106 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 124)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_4156 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 127)) ;
  GALGAS_lstring var_machineName_31__4258 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  GALGAS_lstring var_machineName_32__4297 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 131)) ;
  GALGAS_uint var_machineIndex_31__4416 ;
  GALGAS_uint joker_4418 ; // Joker input parameter
  GALGAS_uint joker_4421 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_4424 ; // Joker input parameter
  GALGAS_stringlist joker_4427 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_31__4258, var_machineIndex_31__4416, joker_4418, joker_4421, joker_4424, joker_4427, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 133)) ;
  GALGAS_uint var_machineIndex_32__4542 ;
  GALGAS_uint joker_4544 ; // Joker input parameter
  GALGAS_uint joker_4547 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_4550 ; // Joker input parameter
  GALGAS_stringlist joker_4553 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_32__4297, var_machineIndex_32__4542, joker_4544, joker_4547, joker_4550, joker_4553, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 135)) ;
  GALGAS_AC_5F_job var_job_4604 = GALGAS_C_5F_machineCheckIdentical::constructor_new (var_machineIndex_31__4416, var_machineIndex_32__4542  COMMA_SOURCE_FILE ("sara_parser.galgas", 137)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_4604  COMMA_SOURCE_FILE ("sara_parser.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 131)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_4870 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 145)) ;
  GALGAS_M_5F_stateMap var_statesMap_4914 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 146)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_4964 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 149)) ;
  GALGAS_lstring var_machineName_5060 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 151)) ;
  GALGAS_uint var_machineIndex_5177 ;
  GALGAS_uint joker_5179 ; // Joker input parameter
  GALGAS_uint joker_5182 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_5185 ; // Joker input parameter
  GALGAS_stringlist joker_5188 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_5060, var_machineIndex_5177, joker_5179, joker_5182, joker_5185, joker_5188, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 153)) ;
  GALGAS_AC_5F_job var_job_5239 = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex_5177, GALGAS_bool (true)  COMMA_SOURCE_FILE ("sara_parser.galgas", 155)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_5239  COMMA_SOURCE_FILE ("sara_parser.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 151)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 229)) ;
  GALGAS_AC_5F_job var_job_7128 = GALGAS_typeDisplayBDDstats::constructor_new (SOURCE_FILE ("sara_parser.galgas", 230)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_7128  COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 229)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_7357 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 238)) ;
  GALGAS_M_5F_stateMap var_statesMap_7401 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 239)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_7451 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 240)) ;
  GALGAS_stringlist var_nameList_7498 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 241)) ;
  GALGAS_lstring var_machineName_7573 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 243)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_7650 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
    {
    var_variablesMap_7357.setter_insertKey (var_inputVarName_7650, var_variablesMap_7357.getter_count (SOURCE_FILE ("sara_parser.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 248)) ;
    }
    var_nameList_7498.addAssign_operation (var_inputVarName_7650.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 251)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_7808 = var_variablesMap_7357.getter_count (SOURCE_FILE ("sara_parser.galgas", 253)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 254)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_7936 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 260)) ;
      {
      var_variablesMap_7357.setter_insertKey (var_outputVarName_7936, var_variablesMap_7357.getter_count (SOURCE_FILE ("sara_parser.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 261)) ;
      }
      var_nameList_7498.addAssign_operation (var_outputVarName_7936.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 262)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 264)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 267)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_8129 = var_variablesMap_7357.getter_count (SOURCE_FILE ("sara_parser.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 270)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_8231 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
    {
    var_variablesMap_7357.setter_insertKey (var_outputVarName_8231, var_variablesMap_7357.getter_count (SOURCE_FILE ("sara_parser.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 273)) ;
    }
    var_nameList_7498.addAssign_operation (var_outputVarName_8231.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 274)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 276)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 278)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 279)) ;
  GALGAS_AC_5F_machineDefinition var_definition_8472 ;
  nt_definition_5F_expression_ (ioArgument_ioSemanticContext, var_variablesMap_7357, var_definition_8472, inCompiler) ;
  GALGAS_uint var_machineIndex_8534 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 283)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_7573, var_machineIndex_8534, var_inputVariablesCount_7808, var_inputAndInternalVariablesCount_8129, var_variablesMap_7357, var_nameList_7498, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  }
  GALGAS_AC_5F_job var_machine_8804 = GALGAS_C_5F_machineComponent::constructor_new (var_machineName_7573, var_machineIndex_8534, var_inputVariablesCount_7808, var_inputAndInternalVariablesCount_8129, var_variablesMap_7357, var_nameList_7498, var_definition_8472  COMMA_SOURCE_FILE ("sara_parser.galgas", 293)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_8804  COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 243)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 251)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 254)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 260)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 264)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 267)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 270)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 276)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 278)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 279)) ;
  nt_definition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 295)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_9161 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 302)) ;
  GALGAS_M_5F_stateMap var_statesMap_9205 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 303)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_9255 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 304)) ;
  GALGAS_stringlist var_nameList_9302 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 305)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  GALGAS_lstring var_machineName_9394 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 308)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 309)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_9471 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    {
    var_variablesMap_9161.setter_insertKey (var_inputVarName_9471, var_variablesMap_9161.getter_count (SOURCE_FILE ("sara_parser.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 313)) ;
    }
    var_nameList_9302.addAssign_operation (var_inputVarName_9471.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 314)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_9629 = var_variablesMap_9161.getter_count (SOURCE_FILE ("sara_parser.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 321)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_9757 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 325)) ;
      {
      var_variablesMap_9161.setter_insertKey (var_outputVarName_9757, var_variablesMap_9161.getter_count (SOURCE_FILE ("sara_parser.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 326)) ;
      }
      var_nameList_9302.addAssign_operation (var_outputVarName_9757.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 327)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 329)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 332)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_9950 = var_variablesMap_9161.getter_count (SOURCE_FILE ("sara_parser.galgas", 333)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 335)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_10053 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 337)) ;
    {
    var_variablesMap_9161.setter_insertKey (var_outputVarName_10053, var_variablesMap_9161.getter_count (SOURCE_FILE ("sara_parser.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 338)) ;
    }
    var_nameList_9302.addAssign_operation (var_outputVarName_10053.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 341)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 343)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 344)) ;
  GALGAS_M_5F_modesMap var_modeMap_10305 ;
  GALGAS_ListForModes var_inclusionList_10328 ;
  nt_modalcompadd_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_9161, var_modeMap_10305, var_inclusionList_10328, inCompiler) ;
  GALGAS_uint var_machineIndex_10390 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 352)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_9394, var_machineIndex_10390, var_inputVariablesCount_9629, var_inputAndInternalVariablesCount_9950, var_variablesMap_9161, var_nameList_9302, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 353)) ;
  }
  GALGAS_AC_5F_job var_machine_10633 = GALGAS_C_5F_machineDefinedByAdditiveModalComp::constructor_new (var_machineName_9394, var_machineIndex_10390, var_inputVariablesCount_9629, var_inputAndInternalVariablesCount_9950, var_variablesMap_9161, var_modeMap_10305, var_inclusionList_10328  COMMA_SOURCE_FILE ("sara_parser.galgas", 355)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_10633  COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 364)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 308)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 309)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 321)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 325)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 329)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 332)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 335)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 337)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 341)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 343)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 344)) ;
  nt_modalcompadd_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 364)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_11030 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 371)) ;
  GALGAS_M_5F_stateMap var_statesMap_11074 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 372)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_11124 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 373)) ;
  GALGAS_stringlist var_nameList_11171 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 374)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 376)) ;
  GALGAS_lstring var_machineName_11263 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 378)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_11340 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 381)) ;
    {
    var_variablesMap_11030.setter_insertKey (var_inputVarName_11340, var_variablesMap_11030.getter_count (SOURCE_FILE ("sara_parser.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 382)) ;
    }
    var_nameList_11171.addAssign_operation (var_inputVarName_11340.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 383)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_11498 = var_variablesMap_11030.getter_count (SOURCE_FILE ("sara_parser.galgas", 387)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 388)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 390)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_11626 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 394)) ;
      {
      var_variablesMap_11030.setter_insertKey (var_outputVarName_11626, var_variablesMap_11030.getter_count (SOURCE_FILE ("sara_parser.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 395)) ;
      }
      var_nameList_11171.addAssign_operation (var_outputVarName_11626.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 396)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 398)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 401)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_11819 = var_variablesMap_11030.getter_count (SOURCE_FILE ("sara_parser.galgas", 402)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 404)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_11921 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
    {
    var_variablesMap_11030.setter_insertKey (var_outputVarName_11921, var_variablesMap_11030.getter_count (SOURCE_FILE ("sara_parser.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 407)) ;
    }
    var_nameList_11171.addAssign_operation (var_outputVarName_11921.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 408)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 412)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  GALGAS_M_5F_modesMap var_modeMap_12173 ;
  GALGAS_ListForModes var_exclusionList_12196 ;
  nt_modalcompsub_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_11030, var_modeMap_12173, var_exclusionList_12196, inCompiler) ;
  GALGAS_uint var_machineIndex_12258 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 421)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_11263, var_machineIndex_12258, var_inputVariablesCount_11498, var_inputAndInternalVariablesCount_11819, var_variablesMap_11030, var_nameList_11171, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 422)) ;
  }
  GALGAS_AC_5F_job var_machine_12501 = GALGAS_C_5F_machineDefinedBySubstractiveModalComp::constructor_new (var_machineName_11263, var_machineIndex_12258, var_inputVariablesCount_11498, var_inputAndInternalVariablesCount_11819, var_variablesMap_11030, var_modeMap_12173, var_exclusionList_12196  COMMA_SOURCE_FILE ("sara_parser.galgas", 424)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_12501  COMMA_SOURCE_FILE ("sara_parser.galgas", 432)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 433)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 376)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 378)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 381)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 388)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 390)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 394)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 398)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 401)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 404)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 412)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  nt_modalcompsub_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 433)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 438)) ;
  GALGAS_M_5F_variablesMap var_variablesMap_12913 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 439)) ;
  GALGAS_M_5F_stateMap var_statesMap_12957 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 440)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_13007 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 441)) ;
  GALGAS_lstring var_machineName_13089 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 443)) ;
  GALGAS_uint var_machineIndex_13200 ;
  GALGAS_uint var_inputVariablesCountFromDefinition_13239 ;
  GALGAS_uint var_inputAndInternalVariablesCountFromDefinition_13289 ;
  GALGAS_M_5F_variablesMap var_variablesMapFromDefinition_13321 ;
  GALGAS_stringlist joker_13323 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_13089, var_machineIndex_13200, var_inputVariablesCountFromDefinition_13239, var_inputAndInternalVariablesCountFromDefinition_13289, var_variablesMapFromDefinition_13321, joker_13323, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 445)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 447)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_13402 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 449)) ;
    {
    var_variablesMap_12913.setter_insertKey (var_inputVarName_13402, var_variablesMap_12913.getter_count (SOURCE_FILE ("sara_parser.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
    }
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_13523 = var_variablesMap_12913.getter_count (SOURCE_FILE ("sara_parser.galgas", 454)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCountFromDefinition_13239.objectCompare (var_inputVariablesCount_13523)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 458)), GALGAS_string ("This declaration names ").add_operation (var_inputVariablesCount_13523.getter_string (SOURCE_FILE ("sara_parser.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 458)).add_operation (GALGAS_string (" input variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 458)).add_operation (var_inputVariablesCountFromDefinition_13239.getter_string (SOURCE_FILE ("sara_parser.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 459)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 459)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 458)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 462)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_outputVarName_13981 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 466)) ;
      {
      var_variablesMap_12913.setter_insertKey (var_outputVarName_13981, var_variablesMap_12913.getter_count (SOURCE_FILE ("sara_parser.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 467)) ;
      }
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 469)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 472)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_14182 = var_variablesMap_12913.getter_count (SOURCE_FILE ("sara_parser.galgas", 474)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCountFromDefinition_13289.objectCompare (var_inputAndInternalVariablesCount_14182)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 476)), GALGAS_string ("This declaration names ").add_operation (var_inputAndInternalVariablesCount_14182.getter_string (SOURCE_FILE ("sara_parser.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 476)).add_operation (GALGAS_string (" input and internal variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 476)).add_operation (var_inputAndInternalVariablesCountFromDefinition_13289.getter_string (SOURCE_FILE ("sara_parser.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 477)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 477)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 476)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVarName_14639 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 482)) ;
    {
    var_variablesMap_12913.setter_insertKey (var_outputVarName_14639, var_variablesMap_12913.getter_count (SOURCE_FILE ("sara_parser.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)) ;
    }
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 487)) ;
  GALGAS_uint var_outputVariablesCount_14816 = var_variablesMap_12913.getter_count (SOURCE_FILE ("sara_parser.galgas", 489)) ;
  GALGAS_uint var_outputVariablesCountFromDefinition_14886 = var_variablesMapFromDefinition_13321.getter_count (SOURCE_FILE ("sara_parser.galgas", 490)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_outputVariablesCountFromDefinition_14886.objectCompare (var_outputVariablesCount_14816)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 492)), GALGAS_string ("This declaration names ").add_operation (var_outputVariablesCount_14816.getter_string (SOURCE_FILE ("sara_parser.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 492)).add_operation (GALGAS_string (" variables, but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 492)).add_operation (var_outputVariablesCountFromDefinition_14886.getter_string (SOURCE_FILE ("sara_parser.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 493)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 493)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 495)) ;
  GALGAS_L_5F_scenarioList var_scenarioList_15221 = GALGAS_L_5F_scenarioList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 496)) ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GALGAS_lstring var_scenarioTitle_15300 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 498)) ;
    GALGAS_L_5F_inputScenario var_inputScenario_15322 = GALGAS_L_5F_inputScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 499)) ;
    bool repeatFlag_10 = true ;
    while (repeatFlag_10) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 501)) ;
      GALGAS_L_5F_inputConfigurationForScenario var_inputConfigurationForScenario_15413 = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 502)) ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GALGAS_luint var_v_15506 = inCompiler->synthetizedAttribute_ulongValue () ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 504)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsStrictSup, var_v_15506.readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (var_v_15506.readProperty_location (), GALGAS_string ("this value is not a  binary digit"), fixItArray13  COMMA_SOURCE_FILE ("sara_parser.galgas", 506)) ;
          }
        }
        var_inputConfigurationForScenario_15413.addAssign_operation (var_v_15506  COMMA_SOURCE_FILE ("sara_parser.galgas", 508)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 510)) ;
        } break ;
        default:
          repeatFlag_11 = false ;
          break ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_13523.objectCompare (var_inputConfigurationForScenario_15413.getter_length (SOURCE_FILE ("sara_parser.galgas", 512)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 513)), GALGAS_string ("this input configuration names ").add_operation (var_inputConfigurationForScenario_15413.getter_length (SOURCE_FILE ("sara_parser.galgas", 513)).getter_string (SOURCE_FILE ("sara_parser.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 513)).add_operation (GALGAS_string (" input variable(s), instead of "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 513)).add_operation (var_inputVariablesCount_13523.getter_string (SOURCE_FILE ("sara_parser.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 513)), fixItArray15  COMMA_SOURCE_FILE ("sara_parser.galgas", 513)) ;
        }
      }
      var_inputScenario_15322.addAssign_operation (var_inputConfigurationForScenario_15413  COMMA_SOURCE_FILE ("sara_parser.galgas", 515)) ;
      switch (select_sara_5F_parser_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_10 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 518)) ;
    var_scenarioList_15221.addAssign_operation (var_scenarioTitle_15300, var_inputScenario_15322  COMMA_SOURCE_FILE ("sara_parser.galgas", 519)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_9 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 522)) ;
  GALGAS_AC_5F_job var_machine_16144 = GALGAS_C_5F_scenarioComponent::constructor_new (var_machineIndex_13200, var_inputVariablesCount_13523, var_inputAndInternalVariablesCount_14182, var_variablesMap_12913, var_scenarioList_15221  COMMA_SOURCE_FILE ("sara_parser.galgas", 524)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_16144  COMMA_SOURCE_FILE ("sara_parser.galgas", 525)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 438)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 443)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 447)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 449)) ;
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 462)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 466)) ;
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 469)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 472)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 482)) ;
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 487)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 495)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 498)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 501)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 504)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 510)) ;
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
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 518)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 522)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i13_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                                GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 537)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_16700 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_16700, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_orExpression::constructor_new (outArgument_outExpression, var_rightExpression_16700  COMMA_SOURCE_FILE ("sara_parser.galgas", 539)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 541)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_16869 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_16869, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_xorExpression::constructor_new (outArgument_outExpression, var_rightExpression_16869  COMMA_SOURCE_FILE ("sara_parser.galgas", 543)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 545)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_17040 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_17040, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_impliesExpression::constructor_new (outArgument_outExpression, var_rightExpression_17040  COMMA_SOURCE_FILE ("sara_parser.galgas", 547)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 549)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_17214 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_17214, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_equalExpression::constructor_new (outArgument_outExpression, var_rightExpression_17214  COMMA_SOURCE_FILE ("sara_parser.galgas", 551)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_and_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 537)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 541)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 545)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 549)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i14_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                               GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                               GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                               C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 564)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_17671 ;
      nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_17671, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_andExpression::constructor_new (outArgument_outExpression, var_rightExpression_17671  COMMA_SOURCE_FILE ("sara_parser.galgas", 566)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 564)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 576)) ;
  nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 578)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 576)) ;
  nt_io_5F_bool_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 578)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_inputVarName_18295 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 587)) ;
  GALGAS_uint var_inputVarIndex_18349 ;
  ioArgument_ioVarMap.method_searchKey (var_inputVarName_18295, var_inputVarIndex_18349, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 588)) ;
  outArgument_outExpression = GALGAS_C_5F_VariableExpression::constructor_new (var_inputVarIndex_18349  COMMA_SOURCE_FILE ("sara_parser.galgas", 589)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 587)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 598)) ;
  GALGAS_AC_5F_boolExpression var_expression_18690 ;
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_expression_18690, inCompiler) ;
  outArgument_outExpression = GALGAS_C_5F_notExpression::constructor_new (var_expression_18690  COMMA_SOURCE_FILE ("sara_parser.galgas", 600)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 598)) ;
  nt_io_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
  outArgument_outExpression = GALGAS_C_5F_falseExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 610)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 619)) ;
  outArgument_outExpression = GALGAS_C_5F_trueExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 620)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 619)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_machineIdentifier_19544 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  GALGAS_uint var_indexOfImportedMachine_19634 ;
  GALGAS_uint var_machineInputVariableCount_19665 ;
  GALGAS_uint var_machineInputAndInternalVariableCount_19707 ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap_19732 ;
  GALGAS_stringlist joker_19734 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_19544, var_indexOfImportedMachine_19634, var_machineInputVariableCount_19665, var_machineInputAndInternalVariableCount_19707, var_machineVariablesMap_19732, joker_19734, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 630)) ;
  GALGAS_L_5F_translationVector var_translationVector_19760 = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 631)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 633)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar_19867 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 635)) ;
    GALGAS_uint var_inputVarIndex_19920 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_19867, var_inputVarIndex_19920, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
    var_translationVector_19760.addAssign_operation (var_inputVarIndex_19920  COMMA_SOURCE_FILE ("sara_parser.galgas", 637)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 639)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 641)) ;
  GALGAS_uint var_inputVariablesCount_20021 = var_translationVector_19760.getter_length (SOURCE_FILE ("sara_parser.galgas", 642)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_20021.objectCompare (var_machineInputVariableCount_19665)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 644)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_19544.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 644)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 644)).add_operation (var_machineInputVariableCount_19665.getter_string (SOURCE_FILE ("sara_parser.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 644)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 644)).add_operation (var_inputVariablesCount_20021.getter_string (SOURCE_FILE ("sara_parser.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 645)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 645)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 644)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_internalVar_20436 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 652)) ;
      GALGAS_uint var_internalVarIndex_20497 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_20436, var_internalVarIndex_20497, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 653)) ;
      var_translationVector_19760.addAssign_operation (var_internalVarIndex_20497  COMMA_SOURCE_FILE ("sara_parser.galgas", 654)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 656)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 659)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_20627 = var_translationVector_19760.getter_length (SOURCE_FILE ("sara_parser.galgas", 660)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount_20627.objectCompare (var_machineInputAndInternalVariableCount_19707)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 662)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_19544.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 662)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 662)).add_operation (var_machineInputAndInternalVariableCount_19707.getter_string (SOURCE_FILE ("sara_parser.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 662)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 662)).add_operation (var_inputAndInternalVariablesCount_20627.getter_string (SOURCE_FILE ("sara_parser.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 663)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 663)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 662)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 666)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVar_21097 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
    GALGAS_uint var_outputVarIndex_21152 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_21097, var_outputVarIndex_21152, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 669)) ;
    var_translationVector_19760.addAssign_operation (var_outputVarIndex_21152  COMMA_SOURCE_FILE ("sara_parser.galgas", 670)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 672)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 674)) ;
  GALGAS_uint var_allVariablesCount_21252 = var_translationVector_19760.getter_length (SOURCE_FILE ("sara_parser.galgas", 675)) ;
  GALGAS_uint var_machineAllVariablesCount_21318 = var_machineVariablesMap_19732.getter_count (SOURCE_FILE ("sara_parser.galgas", 676)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_allVariablesCount_21252.objectCompare (var_machineAllVariablesCount_21318)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 678)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_19544.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 678)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 678)).add_operation (var_machineAllVariablesCount_21318.getter_string (SOURCE_FILE ("sara_parser.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 678)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 678)).add_operation (var_allVariablesCount_21252.getter_string (SOURCE_FILE ("sara_parser.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 679)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 679)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 678)) ;
    }
  }
  outArgument_outExpression = GALGAS_C_5F_importBoolMachine::constructor_new (var_indexOfImportedMachine_19634, var_machineIdentifier_19544.readProperty_location (), var_translationVector_19760  COMMA_SOURCE_FILE ("sara_parser.galgas", 681)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 633)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 635)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 639)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 641)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 652)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 656)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 659)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 666)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 672)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 674)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i21_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 698)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_22282 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_22384 ;
      nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_22384, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_orComposition::constructor_new (var_leftOperand_22282, var_rightOperand_22384  COMMA_SOURCE_FILE ("sara_parser.galgas", 701)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i21_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 698)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i22_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                        GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                        GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                        C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
      GALGAS_location var_errorLocation_22834 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 715)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_22893 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_22997 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_22997, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_strongModalComposition::constructor_new (var_leftOperand_22893, var_errorLocation_22834, var_rightOperand_22997  COMMA_SOURCE_FILE ("sara_parser.galgas", 718)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 720)) ;
      GALGAS_location var_errorLocation_23142 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 721)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_23201 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_23305 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_23305, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_weakModalComposition::constructor_new (var_leftOperand_23201, var_errorLocation_23142, var_rightOperand_23305  COMMA_SOURCE_FILE ("sara_parser.galgas", 724)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_23458 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_23562 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_23562, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_parallelComposition::constructor_new (var_leftOperand_23458, var_rightOperand_23562  COMMA_SOURCE_FILE ("sara_parser.galgas", 729)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 720)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                  GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GALGAS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GALGAS_ListForModes & outArgument_outInclusionList,
                                                                                  C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outInclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GALGAS_M_5F_modesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 740)) ;
  outArgument_outInclusionList = GALGAS_ListForModes::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 741)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_modeName_24019 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 743)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 744)) ;
    GALGAS_AC_5F_machineDefinition var_def_24098 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_24098, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_24019, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 746)), var_def_24098, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 746)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 752)) ;
      GALGAS_lstring var_sourceModeName_24252 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 753)) ;
      GALGAS_uint var_sourceModeIndex_24315 ;
      GALGAS_AC_5F_machineDefinition joker_24317 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_24252, var_sourceModeIndex_24315, joker_24317, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 754)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 755)) ;
      GALGAS_lstring var_targetModeName_24365 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      GALGAS_uint var_targetModeIndex_24428 ;
      GALGAS_AC_5F_machineDefinition joker_24430 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_24365, var_targetModeIndex_24428, joker_24430, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 757)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 758)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex_24315.objectCompare (var_targetModeIndex_24428)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_24365.readProperty_location (), GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
        }
      }
      if (kBoolFalse == test_2) {
        outArgument_outInclusionList.addAssign_operation (var_sourceModeIndex_24315, var_targetModeIndex_24428  COMMA_SOURCE_FILE ("sara_parser.galgas", 762)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 743)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 744)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 752)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 753)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 755)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 758)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                  GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GALGAS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GALGAS_ListForModes & outArgument_outExclusionList,
                                                                                  C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outExclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GALGAS_M_5F_modesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 774)) ;
  outArgument_outExclusionList = GALGAS_ListForModes::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 775)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_modeName_25097 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 777)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 778)) ;
    GALGAS_AC_5F_machineDefinition var_def_25176 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_25176, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_25097, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 780)), var_def_25176, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 780)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 781)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
      GALGAS_lstring var_sourceModeName_25330 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 787)) ;
      GALGAS_uint var_sourceModeIndex_25393 ;
      GALGAS_AC_5F_machineDefinition joker_25395 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_25330, var_sourceModeIndex_25393, joker_25395, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 788)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 789)) ;
      GALGAS_lstring var_targetModeName_25443 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 790)) ;
      GALGAS_uint var_targetModeIndex_25506 ;
      GALGAS_AC_5F_machineDefinition joker_25508 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_25443, var_targetModeIndex_25506, joker_25508, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 792)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex_25393.objectCompare (var_targetModeIndex_25506)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_25443.readProperty_location (), GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 794)) ;
        }
      }
      if (kBoolFalse == test_2) {
        outArgument_outExclusionList.addAssign_operation (var_sourceModeIndex_25393, var_targetModeIndex_25506  COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 777)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 778)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 781)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 787)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 789)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 790)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 792)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                          GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                          GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                          C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 810)) ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 812)) ;
  } break ;
  case 3: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap_26268 = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount_26319 = var_extendedVariablesMap_26268.getter_count (SOURCE_FILE ("sara_parser.galgas", 815)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 816)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_variableName_26406 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
      {
      var_extendedVariablesMap_26268.setter_insertKey (var_variableName_26406, var_extendedVariablesMap_26268.getter_count (SOURCE_FILE ("sara_parser.galgas", 819)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 819)) ;
      }
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 821)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount_26553 = var_extendedVariablesMap_26268.getter_count (SOURCE_FILE ("sara_parser.galgas", 823)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    GALGAS_AC_5F_machineDefinition var_def_26671 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_26268, var_def_26671, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 826)) ;
    outArgument_outDefinition = GALGAS_C_5F_existsDefinition::constructor_new (var_previousVariableCount_26319, var_actualVariableCount_26553, var_def_26671  COMMA_SOURCE_FILE ("sara_parser.galgas", 827)) ;
  } break ;
  case 4: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap_26826 = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount_26877 = var_extendedVariablesMap_26826.getter_count (SOURCE_FILE ("sara_parser.galgas", 830)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 831)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_variableName_26964 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 833)) ;
      {
      var_extendedVariablesMap_26826.setter_insertKey (var_variableName_26964, var_extendedVariablesMap_26826.getter_count (SOURCE_FILE ("sara_parser.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
      }
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 836)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount_27111 = var_extendedVariablesMap_26826.getter_count (SOURCE_FILE ("sara_parser.galgas", 838)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 839)) ;
    GALGAS_AC_5F_machineDefinition var_def_27229 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_26826, var_def_27229, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
    outArgument_outDefinition = GALGAS_C_5F_forallDefinition::constructor_new (var_previousVariableCount_26877, var_actualVariableCount_27111, var_def_27229  COMMA_SOURCE_FILE ("sara_parser.galgas", 842)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 844)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 845)) ;
    GALGAS_AC_5F_boolExpression var_def_27426 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_27426, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_boolToSeqExpression::constructor_new (var_def_27426  COMMA_SOURCE_FILE ("sara_parser.galgas", 847)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 848)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    GALGAS_AC_5F_machineDefinition var_def_27582 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_27582, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_fullSaturationOperation::constructor_new (var_def_27582  COMMA_SOURCE_FILE ("sara_parser.galgas", 852)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 854)) ;
    GALGAS_AC_5F_machineDefinition var_def_27734 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_27734, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_complementationOperation::constructor_new (var_def_27734  COMMA_SOURCE_FILE ("sara_parser.galgas", 856)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 858)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 859)) ;
    GALGAS_AC_5F_machineDefinition var_def_27894 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_27894, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressInitialStatesOperation::constructor_new (var_def_27894  COMMA_SOURCE_FILE ("sara_parser.galgas", 861)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 862)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 864)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
    GALGAS_AC_5F_machineDefinition var_def_28067 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_28067, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressTerminalStatesOperation::constructor_new (var_def_28067  COMMA_SOURCE_FILE ("sara_parser.galgas", 867)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 868)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 870)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 871)) ;
    GALGAS_M_5F_modesMap var_modeMap_28270 ;
    GALGAS_ListForModes var_inclusionList_28295 ;
    nt_modalcompadd_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_28270, var_inclusionList_28295, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 877)) ;
    outArgument_outDefinition = GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (var_modeMap_28270, var_inclusionList_28295  COMMA_SOURCE_FILE ("sara_parser.galgas", 878)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 881)) ;
    GALGAS_M_5F_modesMap var_modeMap_28519 ;
    GALGAS_ListForModes var_exclusionList_28544 ;
    nt_modalcompsub_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_28519, var_exclusionList_28544, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 887)) ;
    outArgument_outDefinition = GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (var_modeMap_28519, var_exclusionList_28544  COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 890)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 891)) ;
    GALGAS_AC_5F_boolExpression var_sourceExpression_28751 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_sourceExpression_28751, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 893)) ;
    GALGAS_AC_5F_boolExpression var_targetExpression_28841 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_targetExpression_28841, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
    outArgument_outDefinition = GALGAS_C_5F_trans::constructor_new (var_sourceExpression_28751, var_targetExpression_28841  COMMA_SOURCE_FILE ("sara_parser.galgas", 896)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 810)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 812)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 816)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 821)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 826)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 831)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 833)) ;
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 836)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 839)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 844)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 845)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 848)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 854)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 858)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 859)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 862)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 864)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 868)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 870)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 871)) ;
    nt_modalcompadd_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 877)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 881)) ;
    nt_modalcompsub_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 887)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 890)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 891)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 893)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                          GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                                          GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                          C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GALGAS_lstring var_machineIdentifier_29196 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  GALGAS_uint var_indexOfImportedMachine_29286 ;
  GALGAS_uint var_machineInputVariableCount_29317 ;
  GALGAS_uint var_machineInputAndInternalVariableCount_29359 ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap_29384 ;
  GALGAS_stringlist joker_29386 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_29196, var_indexOfImportedMachine_29286, var_machineInputVariableCount_29317, var_machineInputAndInternalVariableCount_29359, var_machineVariablesMap_29384, joker_29386, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 907)) ;
  GALGAS_L_5F_translationVector var_translationVector_29412 = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 908)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 910)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar_29519 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 912)) ;
    GALGAS_uint var_inputVarIndex_29572 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_29519, var_inputVarIndex_29572, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 913)) ;
    var_translationVector_29412.addAssign_operation (var_inputVarIndex_29572  COMMA_SOURCE_FILE ("sara_parser.galgas", 914)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 916)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 918)) ;
  GALGAS_uint var_inputVariablesCount_29673 = var_translationVector_29412.getter_length (SOURCE_FILE ("sara_parser.galgas", 919)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_29673.objectCompare (var_machineInputVariableCount_29317)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 921)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_29196.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 921)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 921)).add_operation (var_machineInputVariableCount_29317.getter_string (SOURCE_FILE ("sara_parser.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 921)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 921)).add_operation (var_inputVariablesCount_29673.getter_string (SOURCE_FILE ("sara_parser.galgas", 922)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 922)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 922)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 921)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 925)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_internalVar_30095 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 929)) ;
      GALGAS_uint var_internalVarIndex_30156 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_30095, var_internalVarIndex_30156, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 930)) ;
      var_translationVector_29412.addAssign_operation (var_internalVarIndex_30156  COMMA_SOURCE_FILE ("sara_parser.galgas", 931)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 933)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 936)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_30286 = var_translationVector_29412.getter_length (SOURCE_FILE ("sara_parser.galgas", 937)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount_30286.objectCompare (var_machineInputAndInternalVariableCount_29359)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 939)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_29196.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 939)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 939)).add_operation (var_machineInputAndInternalVariableCount_29359.getter_string (SOURCE_FILE ("sara_parser.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 939)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 939)).add_operation (var_inputAndInternalVariablesCount_30286.getter_string (SOURCE_FILE ("sara_parser.galgas", 940)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 940)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 940)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 939)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 943)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVar_30756 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 945)) ;
    GALGAS_uint var_outputVarIndex_30811 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_30756, var_outputVarIndex_30811, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 946)) ;
    var_translationVector_29412.addAssign_operation (var_outputVarIndex_30811  COMMA_SOURCE_FILE ("sara_parser.galgas", 947)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  GALGAS_uint var_allVariablesCount_30911 = var_translationVector_29412.getter_length (SOURCE_FILE ("sara_parser.galgas", 952)) ;
  GALGAS_uint var_machineAllVariablesCount_30977 = var_machineVariablesMap_29384.getter_count (SOURCE_FILE ("sara_parser.galgas", 953)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_allVariablesCount_30911.objectCompare (var_machineAllVariablesCount_30977)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 955)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_29196.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 955)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 955)).add_operation (var_machineAllVariablesCount_30977.getter_string (SOURCE_FILE ("sara_parser.galgas", 955)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 955)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 955)).add_operation (var_allVariablesCount_30911.getter_string (SOURCE_FILE ("sara_parser.galgas", 956)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 956)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 956)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 955)) ;
    }
  }
  outArgument_outDefinition = GALGAS_C_5F_importMachine::constructor_new (var_indexOfImportedMachine_29286, var_translationVector_29412  COMMA_SOURCE_FILE ("sara_parser.galgas", 958)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 910)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 912)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 916)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 918)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 925)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 929)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 933)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 936)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 943)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 945)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                             GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                             GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                             C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GALGAS_M_5F_stateMap var_statesMap_31763 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 969)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_31813 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 970)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 971)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 972)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 974)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_stateName_31935 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 976)) ;
    {
    var_statesMap_31763.setter_insertKey (var_stateName_31935, var_statesMap_31763.getter_count (SOURCE_FILE ("sara_parser.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 977)) ;
    }
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 979)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
  GALGAS_L_5F_statesDefinitionList var_initialStatesDefinitionList_32075 = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 983)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_initialState_32166 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 986)) ;
    GALGAS_uint var_initialStateIndex_32228 ;
    var_statesMap_31763.method_searchKey (var_initialState_32166, var_initialStateIndex_32228, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 987)) ;
    var_initialStatesDefinitionList_32075.addAssign_operation (var_initialStateIndex_32228, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 988))  COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 990)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 992)) ;
  GALGAS_L_5F_statesDefinitionList var_terminalStatesDefinitionList_32383 = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 994)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 997)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_terminalState_32494 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      GALGAS_uint var_terminalStateIndex_32560 ;
      var_statesMap_31763.method_searchKey (var_terminalState_32494, var_terminalStateIndex_32560, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1000)) ;
      var_terminalStatesDefinitionList_32383.addAssign_operation (var_terminalStateIndex_32560, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1001))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1001)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1003)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1005)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_M_5F_stateMap var_stateDefinitionMap_32732 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 1008)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GALGAS_lstring var_stateName_32818 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1011)) ;
    GALGAS_uint var_stateIndex_32870 ;
    var_statesMap_31763.method_searchKey (var_stateName_32818, var_stateIndex_32870, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1012)) ;
    {
    var_stateDefinitionMap_32732.setter_defineState (var_stateName_32818, var_stateDefinitionMap_32732.getter_count (SOURCE_FILE ("sara_parser.galgas", 1013)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1014)) ;
    GALGAS_AC_5F_boolExpression var_stateExpression_33067 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_stateExpression_33067, inCompiler) ;
    GALGAS_location var_endOfStateExpression_33106 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1017)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1018)) ;
    GALGAS_L_5F_transitionDefinition var_transitionsList_33185 = GALGAS_L_5F_transitionDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 1020)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        GALGAS_AC_5F_boolExpression var_transitionInputExpression_33335 ;
        nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_transitionInputExpression_33335, inCompiler) ;
        GALGAS_location var_endOfExpression_33371 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1024)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 1025)) ;
        GALGAS_lstring var_targetStateName_33441 = inCompiler->synthetizedAttribute_identifierString () ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1026)) ;
        GALGAS_uint var_targetStateIndex_33507 ;
        var_statesMap_31763.method_searchKey (var_targetStateName_33441, var_targetStateIndex_33507, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1027)) ;
        var_transitionsList_33185.addAssign_operation (var_transitionInputExpression_33335, var_endOfExpression_33371, var_targetStateIndex_33507  COMMA_SOURCE_FILE ("sara_parser.galgas", 1028)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1029)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1031)) ;
    var_stateDefinitionList_31813.addAssign_operation (var_stateIndex_32870, var_stateExpression_33067, var_endOfStateExpression_33106, var_transitionsList_33185  COMMA_SOURCE_FILE ("sara_parser.galgas", 1032)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  cEnumerator_M_5F_stateMap enumerator_33805 (var_statesMap_31763, kENUMERATION_UP) ;
  while (enumerator_33805.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_stateDefinitionMap_32732.getter_hasKey (enumerator_33805.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("sara_parser.galgas", 1038)).operator_not (SOURCE_FILE ("sara_parser.galgas", 1038)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1039)), GALGAS_string ("'").add_operation (enumerator_33805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1039)).add_operation (GALGAS_string ("' state is not described"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1039)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas", 1039)) ;
      }
    }
    enumerator_33805.gotoNextObject () ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1043)) ;
  outArgument_outDefinition = GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (var_statesMap_31763, var_initialStatesDefinitionList_32075, var_terminalStatesDefinitionList_32383, var_stateDefinitionList_31813, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1044))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1044)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 971)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 972)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 974)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 976)) ;
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 979)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 986)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 990)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 992)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 997)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1003)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1005)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1011)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1014)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1018)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        nt_io_5F_bool_5F_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 1025)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 1026)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1029)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1031)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1043)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector_2D_element::GALGAS_L_5F_translationVector_2D_element (void) :
mProperty_mTargetSlot () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector_2D_element::~ GALGAS_L_5F_translationVector_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector_2D_element::GALGAS_L_5F_translationVector_2D_element (const GALGAS_uint & inOperand0) :
mProperty_mTargetSlot (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_translationVector_2D_element (GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::constructor_new (const GALGAS_uint & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_translationVector_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_translationVector_2D_element::objectCompare (const GALGAS_L_5F_translationVector_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetSlot.objectCompare (inOperand.mProperty_mTargetSlot) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_translationVector_2D_element::isValid (void) const {
  return mProperty_mTargetSlot.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector_2D_element::drop (void) {
  mProperty_mTargetSlot.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_translationVector_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @L_translationVector-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetSlot.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_translationVector-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ("L_translationVector-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_translationVector_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_translationVector_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_translationVector_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector_2D_element result ;
  const GALGAS_L_5F_translationVector_2D_element * p = (const GALGAS_L_5F_translationVector_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_translationVector_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_translationVector-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition_2D_element::GALGAS_L_5F_transitionDefinition_2D_element (void) :
mProperty_mActionExpression (),
mProperty_mEndOfExpression (),
mProperty_mTargetStateIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition_2D_element::~ GALGAS_L_5F_transitionDefinition_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition_2D_element::GALGAS_L_5F_transitionDefinition_2D_element (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                          const GALGAS_location & inOperand1,
                                                                                          const GALGAS_uint & inOperand2) :
mProperty_mActionExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1),
mProperty_mTargetStateIndex (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition_2D_element GALGAS_L_5F_transitionDefinition_2D_element::constructor_new (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                                          const GALGAS_location & inOperand1,
                                                                                                          const GALGAS_uint & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_L_5F_transitionDefinition_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_transitionDefinition_2D_element::objectCompare (const GALGAS_L_5F_transitionDefinition_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActionExpression.objectCompare (inOperand.mProperty_mActionExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfExpression.objectCompare (inOperand.mProperty_mEndOfExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetStateIndex.objectCompare (inOperand.mProperty_mTargetStateIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_transitionDefinition_2D_element::isValid (void) const {
  return mProperty_mActionExpression.isValid () && mProperty_mEndOfExpression.isValid () && mProperty_mTargetStateIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition_2D_element::drop (void) {
  mProperty_mActionExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
  mProperty_mTargetStateIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_transitionDefinition_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @L_transitionDefinition-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActionExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetStateIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_transitionDefinition-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ("L_transitionDefinition-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_transitionDefinition_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_transitionDefinition_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_transitionDefinition_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_transitionDefinition_2D_element GALGAS_L_5F_transitionDefinition_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition_2D_element result ;
  const GALGAS_L_5F_transitionDefinition_2D_element * p = (const GALGAS_L_5F_transitionDefinition_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_transitionDefinition_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_transitionDefinition-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition_2D_element::GALGAS_L_5F_stateDefinition_2D_element (void) :
mProperty_mStateIndex (),
mProperty_mStateExpression (),
mProperty_mEndOfStateExpression (),
mProperty_mTransitionsList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition_2D_element::~ GALGAS_L_5F_stateDefinition_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition_2D_element::GALGAS_L_5F_stateDefinition_2D_element (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_AC_5F_boolExpression & inOperand1,
                                                                                const GALGAS_location & inOperand2,
                                                                                const GALGAS_L_5F_transitionDefinition & inOperand3) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateExpression (inOperand1),
mProperty_mEndOfStateExpression (inOperand2),
mProperty_mTransitionsList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition_2D_element GALGAS_L_5F_stateDefinition_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                const GALGAS_AC_5F_boolExpression & inOperand1,
                                                                                                const GALGAS_location & inOperand2,
                                                                                                const GALGAS_L_5F_transitionDefinition & inOperand3 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_L_5F_stateDefinition_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_stateDefinition_2D_element::objectCompare (const GALGAS_L_5F_stateDefinition_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStateIndex.objectCompare (inOperand.mProperty_mStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStateExpression.objectCompare (inOperand.mProperty_mStateExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfStateExpression.objectCompare (inOperand.mProperty_mEndOfStateExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransitionsList.objectCompare (inOperand.mProperty_mTransitionsList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_stateDefinition_2D_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateExpression.isValid () && mProperty_mEndOfStateExpression.isValid () && mProperty_mTransitionsList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition_2D_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateExpression.drop () ;
  mProperty_mEndOfStateExpression.drop () ;
  mProperty_mTransitionsList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_stateDefinition_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @L_stateDefinition-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStateExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfStateExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransitionsList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_stateDefinition-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ("L_stateDefinition-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_stateDefinition_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_stateDefinition_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_stateDefinition_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_stateDefinition_2D_element GALGAS_L_5F_stateDefinition_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition_2D_element result ;
  const GALGAS_L_5F_stateDefinition_2D_element * p = (const GALGAS_L_5F_stateDefinition_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_stateDefinition_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_stateDefinition-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList_2D_element::GALGAS_L_5F_statesDefinitionList_2D_element (void) :
mProperty_mStateIndex (),
mProperty_mStateLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList_2D_element::~ GALGAS_L_5F_statesDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList_2D_element::GALGAS_L_5F_statesDefinitionList_2D_element (const GALGAS_uint & inOperand0,
                                                                                          const GALGAS_location & inOperand1) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateLocation (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_statesDefinitionList_2D_element (GALGAS_uint::constructor_default (HERE),
                                                      GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                          const GALGAS_location & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_statesDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_statesDefinitionList_2D_element::objectCompare (const GALGAS_L_5F_statesDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStateIndex.objectCompare (inOperand.mProperty_mStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStateLocation.objectCompare (inOperand.mProperty_mStateLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_statesDefinitionList_2D_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList_2D_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_statesDefinitionList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @L_statesDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStateLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_statesDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ("L_statesDefinitionList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_statesDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_statesDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_statesDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList_2D_element result ;
  const GALGAS_L_5F_statesDefinitionList_2D_element * p = (const GALGAS_L_5F_statesDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_statesDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_statesDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes_2D_element::GALGAS_ListForModes_2D_element (void) :
mProperty_mSourceMode (),
mProperty_mTargetMode () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes_2D_element::~ GALGAS_ListForModes_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes_2D_element::GALGAS_ListForModes_2D_element (const GALGAS_uint & inOperand0,
                                                                const GALGAS_uint & inOperand1) :
mProperty_mSourceMode (inOperand0),
mProperty_mTargetMode (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ListForModes_2D_element (GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_uint & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ListForModes_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ListForModes_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ListForModes_2D_element::objectCompare (const GALGAS_ListForModes_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSourceMode.objectCompare (inOperand.mProperty_mSourceMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetMode.objectCompare (inOperand.mProperty_mTargetMode) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ListForModes_2D_element::isValid (void) const {
  return mProperty_mSourceMode.isValid () && mProperty_mTargetMode.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes_2D_element::drop (void) {
  mProperty_mSourceMode.drop () ;
  mProperty_mTargetMode.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ListForModes_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @ListForModes-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSourceMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetMode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ListForModes-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ListForModes_2D_element ("ListForModes-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ListForModes_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ListForModes_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ListForModes_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ListForModes_2D_element result ;
  const GALGAS_ListForModes_2D_element * p = (const GALGAS_ListForModes_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ListForModes_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ListForModes-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario_2D_element::GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) :
mProperty_mInputValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario_2D_element::~ GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario_2D_element::GALGAS_L_5F_inputConfigurationForScenario_2D_element (const GALGAS_luint & inOperand0) :
mProperty_mInputValue (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputConfigurationForScenario_2D_element (GALGAS_luint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::constructor_new (const GALGAS_luint & inOperand0 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputConfigurationForScenario_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_inputConfigurationForScenario_2D_element::objectCompare (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInputValue.objectCompare (inOperand.mProperty_mInputValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_inputConfigurationForScenario_2D_element::isValid (void) const {
  return mProperty_mInputValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario_2D_element::drop (void) {
  mProperty_mInputValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputConfigurationForScenario_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @L_inputConfigurationForScenario-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInputValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_inputConfigurationForScenario-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ("L_inputConfigurationForScenario-element",
                                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_inputConfigurationForScenario_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_inputConfigurationForScenario_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputConfigurationForScenario_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario_2D_element result ;
  const GALGAS_L_5F_inputConfigurationForScenario_2D_element * p = (const GALGAS_L_5F_inputConfigurationForScenario_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_inputConfigurationForScenario_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputConfigurationForScenario-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario_2D_element::GALGAS_L_5F_inputScenario_2D_element (void) :
mProperty_mInputConfiguration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario_2D_element::~ GALGAS_L_5F_inputScenario_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario_2D_element::GALGAS_L_5F_inputScenario_2D_element (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0) :
mProperty_mInputConfiguration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputScenario_2D_element (GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::constructor_new (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputScenario_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_inputScenario_2D_element::objectCompare (const GALGAS_L_5F_inputScenario_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInputConfiguration.objectCompare (inOperand.mProperty_mInputConfiguration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_inputScenario_2D_element::isValid (void) const {
  return mProperty_mInputConfiguration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario_2D_element::drop (void) {
  mProperty_mInputConfiguration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_inputScenario_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @L_inputScenario-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInputConfiguration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_inputScenario-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ("L_inputScenario-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_inputScenario_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_inputScenario_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputScenario_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario_2D_element result ;
  const GALGAS_L_5F_inputScenario_2D_element * p = (const GALGAS_L_5F_inputScenario_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_inputScenario_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputScenario-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList_2D_element::GALGAS_L_5F_jobList_2D_element (void) :
mProperty_mComponent () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList_2D_element::~ GALGAS_L_5F_jobList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList_2D_element::GALGAS_L_5F_jobList_2D_element (const GALGAS_AC_5F_job & inOperand0) :
mProperty_mComponent (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList_2D_element GALGAS_L_5F_jobList_2D_element::constructor_new (const GALGAS_AC_5F_job & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_jobList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_jobList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_jobList_2D_element::objectCompare (const GALGAS_L_5F_jobList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mComponent.objectCompare (inOperand.mProperty_mComponent) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_jobList_2D_element::isValid (void) const {
  return mProperty_mComponent.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList_2D_element::drop (void) {
  mProperty_mComponent.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @L_jobList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mComponent.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_jobList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ("L_jobList-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_jobList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_jobList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_jobList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList_2D_element GALGAS_L_5F_jobList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_jobList_2D_element result ;
  const GALGAS_L_5F_jobList_2D_element * p = (const GALGAS_L_5F_jobList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_jobList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_jobList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_importBoolMachine reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_importBoolMachine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndexOfImportedMachine.objectCompare (p->mProperty_mIndexOfImportedMachine) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorLocation.objectCompare (p->mProperty_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTranslationVector.objectCompare (p->mProperty_mTranslationVector) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_importBoolMachine::objectCompare (const GALGAS_C_5F_importBoolMachine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine::GALGAS_C_5F_importBoolMachine (void) :
GALGAS_AC_5F_boolExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine GALGAS_C_5F_importBoolMachine::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_importBoolMachine::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_L_5F_translationVector::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine::GALGAS_C_5F_importBoolMachine (const cPtr_C_5F_importBoolMachine * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importBoolMachine) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_importBoolMachine::setter_setMIndexOfImportedMachine (GALGAS_uint inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    p->mProperty_mIndexOfImportedMachine = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_importBoolMachine::setter_setMErrorLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_importBoolMachine::setter_setMTranslationVector (GALGAS_L_5F_translationVector inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    p->mProperty_mTranslationVector = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_importBoolMachine::readProperty_mIndexOfImportedMachine (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    return p->mProperty_mIndexOfImportedMachine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_C_5F_importBoolMachine::readProperty_mErrorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    return p->mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_translationVector GALGAS_C_5F_importBoolMachine::readProperty_mTranslationVector (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_L_5F_translationVector () ;
  }else{
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    return p->mProperty_mTranslationVector ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_importBoolMachine class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_importBoolMachine::cPtr_C_5F_importBoolMachine (const GALGAS_uint & in_mIndexOfImportedMachine,
                                                          const GALGAS_location & in_mErrorLocation,
                                                          const GALGAS_L_5F_translationVector & in_mTranslationVector
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mIndexOfImportedMachine (in_mIndexOfImportedMachine),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mTranslationVector (in_mTranslationVector) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_importBoolMachine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;
}

void cPtr_C_5F_importBoolMachine::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@C_importBoolMachine:" ;
  mProperty_mIndexOfImportedMachine.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTranslationVector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_importBoolMachine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_importBoolMachine (mProperty_mIndexOfImportedMachine, mProperty_mErrorLocation, mProperty_mTranslationVector COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@C_importBoolMachine type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importBoolMachine ("C_importBoolMachine",
                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_importBoolMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_importBoolMachine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importBoolMachine (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_importBoolMachine_2D_weak::objectCompare (const GALGAS_C_5F_importBoolMachine_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak::GALGAS_C_5F_importBoolMachine_2D_weak (void) :
GALGAS_AC_5F_boolExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak & GALGAS_C_5F_importBoolMachine_2D_weak::operator = (const GALGAS_C_5F_importBoolMachine & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak::GALGAS_C_5F_importBoolMachine_2D_weak (const GALGAS_C_5F_importBoolMachine & inSource) :
GALGAS_AC_5F_boolExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak GALGAS_C_5F_importBoolMachine_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_importBoolMachine_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine GALGAS_C_5F_importBoolMachine_2D_weak::bang_C_5F_importBoolMachine_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_importBoolMachine result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_importBoolMachine) ;
      result = GALGAS_C_5F_importBoolMachine ((cPtr_C_5F_importBoolMachine *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@C_importBoolMachine-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2D_weak ("C_importBoolMachine-weak",
                                                       & kTypeDescriptor_GALGAS_AC_5F_boolExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_importBoolMachine_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_importBoolMachine_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importBoolMachine_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_importBoolMachine_2D_weak GALGAS_C_5F_importBoolMachine_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importBoolMachine_2D_weak result ;
  const GALGAS_C_5F_importBoolMachine_2D_weak * p = (const GALGAS_C_5F_importBoolMachine_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_importBoolMachine_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importBoolMachine-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineCheck reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineCheck::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineCheck * p = (const cPtr_C_5F_machineCheck *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineIndex.objectCompare (p->mProperty_mMachineIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCheckMachineIsBoolean.objectCompare (p->mProperty_mCheckMachineIsBoolean) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineCheck::objectCompare (const GALGAS_C_5F_machineCheck & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck::GALGAS_C_5F_machineCheck (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineCheck::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck::GALGAS_C_5F_machineCheck (const cPtr_C_5F_machineCheck * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheck) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex,
                                                                    const GALGAS_bool & inAttribute_mCheckMachineIsBoolean
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck result ;
  if (inAttribute_mMachineIndex.isValid () && inAttribute_mCheckMachineIsBoolean.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheck (inAttribute_mMachineIndex, inAttribute_mCheckMachineIsBoolean COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineCheck::setter_setMMachineIndex (GALGAS_uint inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineCheck::setter_setMCheckMachineIsBoolean (GALGAS_bool inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    p->mProperty_mCheckMachineIsBoolean = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineCheck::readProperty_mMachineIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_C_5F_machineCheck::readProperty_mCheckMachineIsBoolean (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    return p->mProperty_mCheckMachineIsBoolean ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineCheck class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineCheck::cPtr_C_5F_machineCheck (const GALGAS_uint & in_mMachineIndex,
                                                const GALGAS_bool & in_mCheckMachineIsBoolean
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex),
mProperty_mCheckMachineIsBoolean (in_mCheckMachineIsBoolean) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineCheck::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck ;
}

void cPtr_C_5F_machineCheck::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@C_machineCheck:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCheckMachineIsBoolean.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineCheck::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineCheck (mProperty_mMachineIndex, mProperty_mCheckMachineIsBoolean COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineCheck type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheck ("C_machineCheck",
                                          & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheck::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineCheck::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheck (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineCheck_2D_weak::objectCompare (const GALGAS_C_5F_machineCheck_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak::GALGAS_C_5F_machineCheck_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak & GALGAS_C_5F_machineCheck_2D_weak::operator = (const GALGAS_C_5F_machineCheck & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak::GALGAS_C_5F_machineCheck_2D_weak (const GALGAS_C_5F_machineCheck & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak GALGAS_C_5F_machineCheck_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck_2D_weak::bang_C_5F_machineCheck_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineCheck result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineCheck) ;
      result = GALGAS_C_5F_machineCheck ((cPtr_C_5F_machineCheck *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineCheck-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheck_2D_weak ("C_machineCheck-weak",
                                                  & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheck_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineCheck_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheck_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineCheck_2D_weak GALGAS_C_5F_machineCheck_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck_2D_weak result ;
  const GALGAS_C_5F_machineCheck_2D_weak * p = (const GALGAS_C_5F_machineCheck_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineCheck_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheck-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineDefinedByAdditiveModalComp reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineDefinedByAdditiveModalComp::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineName.objectCompare (p->mProperty_mMachineName) ;
  }
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
    result = mProperty_mModeMap.objectCompare (p->mProperty_mModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInclusionList.objectCompare (p->mProperty_mInclusionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineDefinedByAdditiveModalComp::objectCompare (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp::GALGAS_C_5F_machineDefinedByAdditiveModalComp (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp GALGAS_C_5F_machineDefinedByAdditiveModalComp::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDefinedByAdditiveModalComp::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_uint::constructor_default (HERE),
                                                                         GALGAS_uint::constructor_default (HERE),
                                                                         GALGAS_uint::constructor_default (HERE),
                                                                         GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                                                         GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                         GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp::GALGAS_C_5F_machineDefinedByAdditiveModalComp (const cPtr_C_5F_machineDefinedByAdditiveModalComp * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp GALGAS_C_5F_machineDefinedByAdditiveModalComp::constructor_new (const GALGAS_lstring & inAttribute_mMachineName,
                                                                                                              const GALGAS_uint & inAttribute_mMachineIndex,
                                                                                                              const GALGAS_uint & inAttribute_mInputVariableCount,
                                                                                                              const GALGAS_uint & inAttribute_mInputAndInternalVariableCount,
                                                                                                              const GALGAS_M_5F_variablesMap & inAttribute_mVariablesMap,
                                                                                                              const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                              const GALGAS_ListForModes & inAttribute_mInclusionList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp result ;
  if (inAttribute_mMachineName.isValid () && inAttribute_mMachineIndex.isValid () && inAttribute_mInputVariableCount.isValid () && inAttribute_mInputAndInternalVariableCount.isValid () && inAttribute_mVariablesMap.isValid () && inAttribute_mModeMap.isValid () && inAttribute_mInclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDefinedByAdditiveModalComp (inAttribute_mMachineName, inAttribute_mMachineIndex, inAttribute_mInputVariableCount, inAttribute_mInputAndInternalVariableCount, inAttribute_mVariablesMap, inAttribute_mModeMap, inAttribute_mInclusionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedByAdditiveModalComp::setter_setMMachineName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mMachineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedByAdditiveModalComp::setter_setMMachineIndex (GALGAS_uint inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedByAdditiveModalComp::setter_setMInputVariableCount (GALGAS_uint inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedByAdditiveModalComp::setter_setMInputAndInternalVariableCount (GALGAS_uint inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedByAdditiveModalComp::setter_setMVariablesMap (GALGAS_M_5F_variablesMap inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedByAdditiveModalComp::setter_setMModeMap (GALGAS_M_5F_modesMap inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedByAdditiveModalComp::setter_setMInclusionList (GALGAS_ListForModes inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mInclusionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mMachineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mMachineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mMachineIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mInputVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mInputAndInternalVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mVariablesMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mVariablesMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mModeMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mModeMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mInclusionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ListForModes () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mInclusionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDefinedByAdditiveModalComp class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDefinedByAdditiveModalComp::cPtr_C_5F_machineDefinedByAdditiveModalComp (const GALGAS_lstring & in_mMachineName,
                                                                                          const GALGAS_uint & in_mMachineIndex,
                                                                                          const GALGAS_uint & in_mInputVariableCount,
                                                                                          const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                                                          const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                                                          const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                          const GALGAS_ListForModes & in_mInclusionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineName (in_mMachineName),
mProperty_mMachineIndex (in_mMachineIndex),
mProperty_mInputVariableCount (in_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mProperty_mVariablesMap (in_mVariablesMap),
mProperty_mModeMap (in_mModeMap),
mProperty_mInclusionList (in_mInclusionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDefinedByAdditiveModalComp::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;
}

void cPtr_C_5F_machineDefinedByAdditiveModalComp::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@C_machineDefinedByAdditiveModalComp:" ;
  mProperty_mMachineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInclusionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDefinedByAdditiveModalComp::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedByAdditiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mInclusionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineDefinedByAdditiveModalComp type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ("C_machineDefinedByAdditiveModalComp",
                                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedByAdditiveModalComp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDefinedByAdditiveModalComp::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedByAdditiveModalComp (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp GALGAS_C_5F_machineDefinedByAdditiveModalComp::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp result ;
  const GALGAS_C_5F_machineDefinedByAdditiveModalComp * p = (const GALGAS_C_5F_machineDefinedByAdditiveModalComp *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDefinedByAdditiveModalComp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedByAdditiveModalComp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::objectCompare (const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak & GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::operator = (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::bang_C_5F_machineDefinedByAdditiveModalComp_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
      result = GALGAS_C_5F_machineDefinedByAdditiveModalComp ((cPtr_C_5F_machineDefinedByAdditiveModalComp *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineDefinedByAdditiveModalComp-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak ("C_machineDefinedByAdditiveModalComp-weak",
                                                                       & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak result ;
  const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak * p = (const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDefinedByAdditiveModalComp_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedByAdditiveModalComp-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineDefinedBySubstractiveModalComp reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineDefinedBySubstractiveModalComp::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineName.objectCompare (p->mProperty_mMachineName) ;
  }
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
    result = mProperty_mModeMap.objectCompare (p->mProperty_mModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExclusionList.objectCompare (p->mProperty_mExclusionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineDefinedBySubstractiveModalComp::objectCompare (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp::GALGAS_C_5F_machineDefinedBySubstractiveModalComp (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp GALGAS_C_5F_machineDefinedBySubstractiveModalComp::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDefinedBySubstractiveModalComp::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                             GALGAS_uint::constructor_default (HERE),
                                                                             GALGAS_uint::constructor_default (HERE),
                                                                             GALGAS_uint::constructor_default (HERE),
                                                                             GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                                                             GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                             GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp::GALGAS_C_5F_machineDefinedBySubstractiveModalComp (const cPtr_C_5F_machineDefinedBySubstractiveModalComp * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp GALGAS_C_5F_machineDefinedBySubstractiveModalComp::constructor_new (const GALGAS_lstring & inAttribute_mMachineName,
                                                                                                                      const GALGAS_uint & inAttribute_mMachineIndex,
                                                                                                                      const GALGAS_uint & inAttribute_mInputVariableCount,
                                                                                                                      const GALGAS_uint & inAttribute_mInputAndInternalVariableCount,
                                                                                                                      const GALGAS_M_5F_variablesMap & inAttribute_mVariablesMap,
                                                                                                                      const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                                      const GALGAS_ListForModes & inAttribute_mExclusionList
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp result ;
  if (inAttribute_mMachineName.isValid () && inAttribute_mMachineIndex.isValid () && inAttribute_mInputVariableCount.isValid () && inAttribute_mInputAndInternalVariableCount.isValid () && inAttribute_mVariablesMap.isValid () && inAttribute_mModeMap.isValid () && inAttribute_mExclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp (inAttribute_mMachineName, inAttribute_mMachineIndex, inAttribute_mInputVariableCount, inAttribute_mInputAndInternalVariableCount, inAttribute_mVariablesMap, inAttribute_mModeMap, inAttribute_mExclusionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedBySubstractiveModalComp::setter_setMMachineName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mMachineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedBySubstractiveModalComp::setter_setMMachineIndex (GALGAS_uint inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedBySubstractiveModalComp::setter_setMInputVariableCount (GALGAS_uint inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedBySubstractiveModalComp::setter_setMInputAndInternalVariableCount (GALGAS_uint inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedBySubstractiveModalComp::setter_setMVariablesMap (GALGAS_M_5F_variablesMap inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedBySubstractiveModalComp::setter_setMModeMap (GALGAS_M_5F_modesMap inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineDefinedBySubstractiveModalComp::setter_setMExclusionList (GALGAS_ListForModes inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mExclusionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mMachineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mMachineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mMachineIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mInputVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mInputAndInternalVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mVariablesMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mVariablesMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap GALGAS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mModeMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mModeMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ListForModes GALGAS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mExclusionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ListForModes () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mExclusionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDefinedBySubstractiveModalComp class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDefinedBySubstractiveModalComp::cPtr_C_5F_machineDefinedBySubstractiveModalComp (const GALGAS_lstring & in_mMachineName,
                                                                                                  const GALGAS_uint & in_mMachineIndex,
                                                                                                  const GALGAS_uint & in_mInputVariableCount,
                                                                                                  const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                                                                  const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                                                                  const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                                  const GALGAS_ListForModes & in_mExclusionList
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineName (in_mMachineName),
mProperty_mMachineIndex (in_mMachineIndex),
mProperty_mInputVariableCount (in_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mProperty_mVariablesMap (in_mVariablesMap),
mProperty_mModeMap (in_mModeMap),
mProperty_mExclusionList (in_mExclusionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDefinedBySubstractiveModalComp::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;
}

void cPtr_C_5F_machineDefinedBySubstractiveModalComp::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@C_machineDefinedBySubstractiveModalComp:" ;
  mProperty_mMachineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExclusionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDefinedBySubstractiveModalComp::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedBySubstractiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mExclusionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineDefinedBySubstractiveModalComp type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ("C_machineDefinedBySubstractiveModalComp",
                                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedBySubstractiveModalComp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDefinedBySubstractiveModalComp::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedBySubstractiveModalComp (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp GALGAS_C_5F_machineDefinedBySubstractiveModalComp::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp result ;
  const GALGAS_C_5F_machineDefinedBySubstractiveModalComp * p = (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDefinedBySubstractiveModalComp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedBySubstractiveModalComp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::objectCompare (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak & GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::operator = (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::bang_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
      result = GALGAS_C_5F_machineDefinedBySubstractiveModalComp ((cPtr_C_5F_machineDefinedBySubstractiveModalComp *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineDefinedBySubstractiveModalComp-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak ("C_machineDefinedBySubstractiveModalComp-weak",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak result ;
  const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak * p = (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedBySubstractiveModalComp-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
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
// At index 8 : <component>, in file 'sara_parser.ggs', line 44
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 13 : <component>, in file 'sara_parser.ggs', line 63
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) // $first$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 19 : <component>, in file 'sara_parser.ggs', line 83
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 25 : <component>, in file 'sara_parser.ggs', line 103
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_check) // $check$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 29 : <component>, in file 'sara_parser.ggs', line 121
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkidentical) // $checkidentical$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 35 : <component>, in file 'sara_parser.ggs', line 143
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkbool) // $checkbool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 39 : <component>, in file 'sara_parser.ggs', line 226
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bdd) // $bdd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 42 : <component>, in file 'sara_parser.ggs', line 236
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
// At index 58 : <component>, in file 'sara_parser.ggs', line 300
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
// At index 75 : <component>, in file 'sara_parser.ggs', line 369
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
// At index 92 : <component>, in file 'sara_parser.ggs', line 436
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
// At index 115 : <io_bool_expression>, in file 'sara_parser.ggs', line 530
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 118 : <io_and_expression>, in file 'sara_parser.ggs', line 557
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 121 : <io_primary>, in file 'sara_parser.ggs', line 572
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 125 : <io_primary>, in file 'sara_parser.ggs', line 583
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 127 : <io_primary>, in file 'sara_parser.ggs', line 594
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (4) // <io_primary>
, END_PRODUCTION
// At index 130 : <io_primary>, in file 'sara_parser.ggs', line 605
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 132 : <io_primary>, in file 'sara_parser.ggs', line 615
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 134 : <io_primary>, in file 'sara_parser.ggs', line 625
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
// At index 147 : <definition_expression>, in file 'sara_parser.ggs', line 691
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 150 : <definition_expression_term>, in file 'sara_parser.ggs', line 707
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 153 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 735
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 160 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 769
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 167 : <definition_expression_factor>, in file 'sara_parser.ggs', line 803
, NONTERMINAL (43) // <select_sara_5F_parser_32>
, END_PRODUCTION
// At index 169 : <definition_expression_factor>, in file 'sara_parser.ggs', line 902
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
// At index 182 : <explicit_automaton>, in file 'sara_parser.ggs', line 965
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
// At index 202 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, END_PRODUCTION
// At index 203 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, NONTERMINAL (1) // <component>
, NONTERMINAL (11) // <select_sara_5F_parser_0>
, END_PRODUCTION
// At index 206 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 246
, END_PRODUCTION
// At index 207 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 246
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_sara_5F_parser_1>
, END_PRODUCTION
// At index 211 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 257
, END_PRODUCTION
// At index 212 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 257
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 215 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 259
, END_PRODUCTION
// At index 216 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 259
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 220 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 271
, END_PRODUCTION
// At index 221 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 271
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <select_sara_5F_parser_4>
, END_PRODUCTION
// At index 225 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 311
, END_PRODUCTION
// At index 226 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 311
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (16) // <select_sara_5F_parser_5>
, END_PRODUCTION
// At index 230 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 322
, END_PRODUCTION
// At index 231 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 322
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 234 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 324
, END_PRODUCTION
// At index 235 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 324
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 239 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 336
, END_PRODUCTION
// At index 240 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 336
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (19) // <select_sara_5F_parser_8>
, END_PRODUCTION
// At index 244 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 380
, END_PRODUCTION
// At index 245 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 380
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (20) // <select_sara_5F_parser_9>
, END_PRODUCTION
// At index 249 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 391
, END_PRODUCTION
// At index 250 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 391
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 253 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 393
, END_PRODUCTION
// At index 254 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 393
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 258 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 405
, END_PRODUCTION
// At index 259 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 405
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (23) // <select_sara_5F_parser_12>
, END_PRODUCTION
// At index 263 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 448
, END_PRODUCTION
// At index 264 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 448
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (24) // <select_sara_5F_parser_13>
, END_PRODUCTION
// At index 268 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 463
, END_PRODUCTION
// At index 269 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 463
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 272 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 465
, END_PRODUCTION
// At index 273 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 465
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 277 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 481
, END_PRODUCTION
// At index 278 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 481
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (27) // <select_sara_5F_parser_16>
, END_PRODUCTION
// At index 282 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 497
, END_PRODUCTION
// At index 283 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 497
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (28) // <select_sara_5F_parser_17>
, END_PRODUCTION
// At index 291 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 500
, END_PRODUCTION
// At index 292 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 500
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, END_PRODUCTION
// At index 297 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 503
, END_PRODUCTION
// At index 298 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 503
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, END_PRODUCTION
// At index 302 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
, END_PRODUCTION
// At index 303 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 307 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 311 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2D__3E_) // $->$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 315 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3D_) // $=$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 319 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 562
, END_PRODUCTION
// At index 320 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 562
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 324 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 634
, END_PRODUCTION
// At index 325 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 634
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (33) // <select_sara_5F_parser_22>
, END_PRODUCTION
// At index 329 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 649
, END_PRODUCTION
// At index 330 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 649
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 333 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 651
, END_PRODUCTION
// At index 334 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 651
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 338 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 667
, END_PRODUCTION
// At index 339 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 667
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (36) // <select_sara_5F_parser_25>
, END_PRODUCTION
// At index 343 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 696
, END_PRODUCTION
// At index 344 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 696
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 348 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
, END_PRODUCTION
// At index 349 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 353 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A__2A_) // $**$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 357 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C__7C_) // $||$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 361 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 742
, END_PRODUCTION
// At index 362 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 742
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, END_PRODUCTION
// At index 368 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 750
, END_PRODUCTION
// At index 369 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 750
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_include) // $include$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 376 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 776
, END_PRODUCTION
// At index 377 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 776
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, END_PRODUCTION
// At index 383 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 784
, END_PRODUCTION
// At index 384 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 784
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_exclude) // $exclude$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 391 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, NONTERMINAL (10) // <explicit_automaton>
, END_PRODUCTION
// At index 393 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 397 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3F_) // $?$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 404 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__21_) // $!$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 411 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bool) // $bool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 416 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__40_) // $@$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 419 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 422 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nofirst) // $nofirst$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 427 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nolast) // $nolast$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 432 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (7) // <modalcompadd_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 437 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (8) // <modalcompsub_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 442 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 449 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 817
, END_PRODUCTION
// At index 450 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 817
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, END_PRODUCTION
// At index 454 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 832
, END_PRODUCTION
// At index 455 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 832
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, END_PRODUCTION
// At index 459 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 911
, END_PRODUCTION
// At index 460 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 911
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (46) // <select_sara_5F_parser_35>
, END_PRODUCTION
// At index 464 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 926
, END_PRODUCTION
// At index 465 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 926
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 468 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 928
, END_PRODUCTION
// At index 469 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 928
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 473 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 944
, END_PRODUCTION
// At index 474 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 944
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (49) // <select_sara_5F_parser_38>
, END_PRODUCTION
// At index 478 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 975
, END_PRODUCTION
// At index 479 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 975
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (50) // <select_sara_5F_parser_39>
, END_PRODUCTION
// At index 483 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 985
, END_PRODUCTION
// At index 484 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 985
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (51) // <select_sara_5F_parser_40>
, END_PRODUCTION
// At index 488 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 995
, END_PRODUCTION
// At index 489 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 995
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 494 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 998
, END_PRODUCTION
// At index 495 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 998
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, END_PRODUCTION
// At index 499 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1009
, END_PRODUCTION
// At index 500 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1009
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, NONTERMINAL (54) // <select_sara_5F_parser_43>
, END_PRODUCTION
// At index 508 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1021
, END_PRODUCTION
// At index 509 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1021
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_goto) // $goto$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, END_PRODUCTION
// At index 515 : <>, in file '.ggs', line 0
, NONTERMINAL (0) // <start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_sara_grammar [134] = {
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
 {"<component>", "sara_parser", 58}, // at index 10
 {"<component>", "sara_parser", 75}, // at index 11
 {"<component>", "sara_parser", 92}, // at index 12
 {"<io_bool_expression>", "sara_parser", 115}, // at index 13
 {"<io_and_expression>", "sara_parser", 118}, // at index 14
 {"<io_primary>", "sara_parser", 121}, // at index 15
 {"<io_primary>", "sara_parser", 125}, // at index 16
 {"<io_primary>", "sara_parser", 127}, // at index 17
 {"<io_primary>", "sara_parser", 130}, // at index 18
 {"<io_primary>", "sara_parser", 132}, // at index 19
 {"<io_primary>", "sara_parser", 134}, // at index 20
 {"<definition_expression>", "sara_parser", 147}, // at index 21
 {"<definition_expression_term>", "sara_parser", 150}, // at index 22
 {"<modalcompadd_definition>", "sara_parser", 153}, // at index 23
 {"<modalcompsub_definition>", "sara_parser", 160}, // at index 24
 {"<definition_expression_factor>", "sara_parser", 167}, // at index 25
 {"<definition_expression_factor>", "sara_parser", 169}, // at index 26
 {"<explicit_automaton>", "sara_parser", 182}, // at index 27
 {"<select_sara_5F_parser_0>", "sara_parser", 202}, // at index 28
 {"<select_sara_5F_parser_0>", "sara_parser", 203}, // at index 29
 {"<select_sara_5F_parser_1>", "sara_parser", 206}, // at index 30
 {"<select_sara_5F_parser_1>", "sara_parser", 207}, // at index 31
 {"<select_sara_5F_parser_2>", "sara_parser", 211}, // at index 32
 {"<select_sara_5F_parser_2>", "sara_parser", 212}, // at index 33
 {"<select_sara_5F_parser_3>", "sara_parser", 215}, // at index 34
 {"<select_sara_5F_parser_3>", "sara_parser", 216}, // at index 35
 {"<select_sara_5F_parser_4>", "sara_parser", 220}, // at index 36
 {"<select_sara_5F_parser_4>", "sara_parser", 221}, // at index 37
 {"<select_sara_5F_parser_5>", "sara_parser", 225}, // at index 38
 {"<select_sara_5F_parser_5>", "sara_parser", 226}, // at index 39
 {"<select_sara_5F_parser_6>", "sara_parser", 230}, // at index 40
 {"<select_sara_5F_parser_6>", "sara_parser", 231}, // at index 41
 {"<select_sara_5F_parser_7>", "sara_parser", 234}, // at index 42
 {"<select_sara_5F_parser_7>", "sara_parser", 235}, // at index 43
 {"<select_sara_5F_parser_8>", "sara_parser", 239}, // at index 44
 {"<select_sara_5F_parser_8>", "sara_parser", 240}, // at index 45
 {"<select_sara_5F_parser_9>", "sara_parser", 244}, // at index 46
 {"<select_sara_5F_parser_9>", "sara_parser", 245}, // at index 47
 {"<select_sara_5F_parser_10>", "sara_parser", 249}, // at index 48
 {"<select_sara_5F_parser_10>", "sara_parser", 250}, // at index 49
 {"<select_sara_5F_parser_11>", "sara_parser", 253}, // at index 50
 {"<select_sara_5F_parser_11>", "sara_parser", 254}, // at index 51
 {"<select_sara_5F_parser_12>", "sara_parser", 258}, // at index 52
 {"<select_sara_5F_parser_12>", "sara_parser", 259}, // at index 53
 {"<select_sara_5F_parser_13>", "sara_parser", 263}, // at index 54
 {"<select_sara_5F_parser_13>", "sara_parser", 264}, // at index 55
 {"<select_sara_5F_parser_14>", "sara_parser", 268}, // at index 56
 {"<select_sara_5F_parser_14>", "sara_parser", 269}, // at index 57
 {"<select_sara_5F_parser_15>", "sara_parser", 272}, // at index 58
 {"<select_sara_5F_parser_15>", "sara_parser", 273}, // at index 59
 {"<select_sara_5F_parser_16>", "sara_parser", 277}, // at index 60
 {"<select_sara_5F_parser_16>", "sara_parser", 278}, // at index 61
 {"<select_sara_5F_parser_17>", "sara_parser", 282}, // at index 62
 {"<select_sara_5F_parser_17>", "sara_parser", 283}, // at index 63
 {"<select_sara_5F_parser_18>", "sara_parser", 291}, // at index 64
 {"<select_sara_5F_parser_18>", "sara_parser", 292}, // at index 65
 {"<select_sara_5F_parser_19>", "sara_parser", 297}, // at index 66
 {"<select_sara_5F_parser_19>", "sara_parser", 298}, // at index 67
 {"<select_sara_5F_parser_20>", "sara_parser", 302}, // at index 68
 {"<select_sara_5F_parser_20>", "sara_parser", 303}, // at index 69
 {"<select_sara_5F_parser_20>", "sara_parser", 307}, // at index 70
 {"<select_sara_5F_parser_20>", "sara_parser", 311}, // at index 71
 {"<select_sara_5F_parser_20>", "sara_parser", 315}, // at index 72
 {"<select_sara_5F_parser_21>", "sara_parser", 319}, // at index 73
 {"<select_sara_5F_parser_21>", "sara_parser", 320}, // at index 74
 {"<select_sara_5F_parser_22>", "sara_parser", 324}, // at index 75
 {"<select_sara_5F_parser_22>", "sara_parser", 325}, // at index 76
 {"<select_sara_5F_parser_23>", "sara_parser", 329}, // at index 77
 {"<select_sara_5F_parser_23>", "sara_parser", 330}, // at index 78
 {"<select_sara_5F_parser_24>", "sara_parser", 333}, // at index 79
 {"<select_sara_5F_parser_24>", "sara_parser", 334}, // at index 80
 {"<select_sara_5F_parser_25>", "sara_parser", 338}, // at index 81
 {"<select_sara_5F_parser_25>", "sara_parser", 339}, // at index 82
 {"<select_sara_5F_parser_26>", "sara_parser", 343}, // at index 83
 {"<select_sara_5F_parser_26>", "sara_parser", 344}, // at index 84
 {"<select_sara_5F_parser_27>", "sara_parser", 348}, // at index 85
 {"<select_sara_5F_parser_27>", "sara_parser", 349}, // at index 86
 {"<select_sara_5F_parser_27>", "sara_parser", 353}, // at index 87
 {"<select_sara_5F_parser_27>", "sara_parser", 357}, // at index 88
 {"<select_sara_5F_parser_28>", "sara_parser", 361}, // at index 89
 {"<select_sara_5F_parser_28>", "sara_parser", 362}, // at index 90
 {"<select_sara_5F_parser_29>", "sara_parser", 368}, // at index 91
 {"<select_sara_5F_parser_29>", "sara_parser", 369}, // at index 92
 {"<select_sara_5F_parser_30>", "sara_parser", 376}, // at index 93
 {"<select_sara_5F_parser_30>", "sara_parser", 377}, // at index 94
 {"<select_sara_5F_parser_31>", "sara_parser", 383}, // at index 95
 {"<select_sara_5F_parser_31>", "sara_parser", 384}, // at index 96
 {"<select_sara_5F_parser_32>", "sara_parser", 391}, // at index 97
 {"<select_sara_5F_parser_32>", "sara_parser", 393}, // at index 98
 {"<select_sara_5F_parser_32>", "sara_parser", 397}, // at index 99
 {"<select_sara_5F_parser_32>", "sara_parser", 404}, // at index 100
 {"<select_sara_5F_parser_32>", "sara_parser", 411}, // at index 101
 {"<select_sara_5F_parser_32>", "sara_parser", 416}, // at index 102
 {"<select_sara_5F_parser_32>", "sara_parser", 419}, // at index 103
 {"<select_sara_5F_parser_32>", "sara_parser", 422}, // at index 104
 {"<select_sara_5F_parser_32>", "sara_parser", 427}, // at index 105
 {"<select_sara_5F_parser_32>", "sara_parser", 432}, // at index 106
 {"<select_sara_5F_parser_32>", "sara_parser", 437}, // at index 107
 {"<select_sara_5F_parser_32>", "sara_parser", 442}, // at index 108
 {"<select_sara_5F_parser_33>", "sara_parser", 449}, // at index 109
 {"<select_sara_5F_parser_33>", "sara_parser", 450}, // at index 110
 {"<select_sara_5F_parser_34>", "sara_parser", 454}, // at index 111
 {"<select_sara_5F_parser_34>", "sara_parser", 455}, // at index 112
 {"<select_sara_5F_parser_35>", "sara_parser", 459}, // at index 113
 {"<select_sara_5F_parser_35>", "sara_parser", 460}, // at index 114
 {"<select_sara_5F_parser_36>", "sara_parser", 464}, // at index 115
 {"<select_sara_5F_parser_36>", "sara_parser", 465}, // at index 116
 {"<select_sara_5F_parser_37>", "sara_parser", 468}, // at index 117
 {"<select_sara_5F_parser_37>", "sara_parser", 469}, // at index 118
 {"<select_sara_5F_parser_38>", "sara_parser", 473}, // at index 119
 {"<select_sara_5F_parser_38>", "sara_parser", 474}, // at index 120
 {"<select_sara_5F_parser_39>", "sara_parser", 478}, // at index 121
 {"<select_sara_5F_parser_39>", "sara_parser", 479}, // at index 122
 {"<select_sara_5F_parser_40>", "sara_parser", 483}, // at index 123
 {"<select_sara_5F_parser_40>", "sara_parser", 484}, // at index 124
 {"<select_sara_5F_parser_41>", "sara_parser", 488}, // at index 125
 {"<select_sara_5F_parser_41>", "sara_parser", 489}, // at index 126
 {"<select_sara_5F_parser_42>", "sara_parser", 494}, // at index 127
 {"<select_sara_5F_parser_42>", "sara_parser", 495}, // at index 128
 {"<select_sara_5F_parser_43>", "sara_parser", 499}, // at index 129
 {"<select_sara_5F_parser_43>", "sara_parser", 500}, // at index 130
 {"<select_sara_5F_parser_44>", "sara_parser", 508}, // at index 131
 {"<select_sara_5F_parser_44>", "sara_parser", 509}, // at index 132
 {"<>", "", 515} // at index 133
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_sara_grammar [134] = {
0, // index 0 : <start_symbol>, in file 'sara_parser.ggs', line 11
3, // index 1 : <component>, in file 'sara_parser.ggs', line 25
8, // index 2 : <component>, in file 'sara_parser.ggs', line 44
13, // index 3 : <component>, in file 'sara_parser.ggs', line 63
19, // index 4 : <component>, in file 'sara_parser.ggs', line 83
25, // index 5 : <component>, in file 'sara_parser.ggs', line 103
29, // index 6 : <component>, in file 'sara_parser.ggs', line 121
35, // index 7 : <component>, in file 'sara_parser.ggs', line 143
39, // index 8 : <component>, in file 'sara_parser.ggs', line 226
42, // index 9 : <component>, in file 'sara_parser.ggs', line 236
58, // index 10 : <component>, in file 'sara_parser.ggs', line 300
75, // index 11 : <component>, in file 'sara_parser.ggs', line 369
92, // index 12 : <component>, in file 'sara_parser.ggs', line 436
115, // index 13 : <io_bool_expression>, in file 'sara_parser.ggs', line 530
118, // index 14 : <io_and_expression>, in file 'sara_parser.ggs', line 557
121, // index 15 : <io_primary>, in file 'sara_parser.ggs', line 572
125, // index 16 : <io_primary>, in file 'sara_parser.ggs', line 583
127, // index 17 : <io_primary>, in file 'sara_parser.ggs', line 594
130, // index 18 : <io_primary>, in file 'sara_parser.ggs', line 605
132, // index 19 : <io_primary>, in file 'sara_parser.ggs', line 615
134, // index 20 : <io_primary>, in file 'sara_parser.ggs', line 625
147, // index 21 : <definition_expression>, in file 'sara_parser.ggs', line 691
150, // index 22 : <definition_expression_term>, in file 'sara_parser.ggs', line 707
153, // index 23 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 735
160, // index 24 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 769
167, // index 25 : <definition_expression_factor>, in file 'sara_parser.ggs', line 803
169, // index 26 : <definition_expression_factor>, in file 'sara_parser.ggs', line 902
182, // index 27 : <explicit_automaton>, in file 'sara_parser.ggs', line 965
202, // index 28 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
203, // index 29 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
206, // index 30 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 246
207, // index 31 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 246
211, // index 32 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 257
212, // index 33 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 257
215, // index 34 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 259
216, // index 35 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 259
220, // index 36 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 271
221, // index 37 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 271
225, // index 38 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 311
226, // index 39 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 311
230, // index 40 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 322
231, // index 41 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 322
234, // index 42 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 324
235, // index 43 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 324
239, // index 44 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 336
240, // index 45 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 336
244, // index 46 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 380
245, // index 47 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 380
249, // index 48 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 391
250, // index 49 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 391
253, // index 50 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 393
254, // index 51 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 393
258, // index 52 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 405
259, // index 53 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 405
263, // index 54 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 448
264, // index 55 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 448
268, // index 56 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 463
269, // index 57 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 463
272, // index 58 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 465
273, // index 59 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 465
277, // index 60 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 481
278, // index 61 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 481
282, // index 62 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 497
283, // index 63 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 497
291, // index 64 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 500
292, // index 65 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 500
297, // index 66 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 503
298, // index 67 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 503
302, // index 68 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
303, // index 69 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
307, // index 70 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
311, // index 71 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
315, // index 72 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 535
319, // index 73 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 562
320, // index 74 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 562
324, // index 75 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 634
325, // index 76 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 634
329, // index 77 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 649
330, // index 78 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 649
333, // index 79 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 651
334, // index 80 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 651
338, // index 81 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 667
339, // index 82 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 667
343, // index 83 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 696
344, // index 84 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 696
348, // index 85 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
349, // index 86 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
353, // index 87 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
357, // index 88 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 712
361, // index 89 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 742
362, // index 90 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 742
368, // index 91 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 750
369, // index 92 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 750
376, // index 93 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 776
377, // index 94 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 776
383, // index 95 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 784
384, // index 96 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 784
391, // index 97 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
393, // index 98 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
397, // index 99 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
404, // index 100 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
411, // index 101 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
416, // index 102 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
419, // index 103 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
422, // index 104 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
427, // index 105 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
432, // index 106 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
437, // index 107 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
442, // index 108 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 807
449, // index 109 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 817
450, // index 110 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 817
454, // index 111 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 832
455, // index 112 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 832
459, // index 113 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 911
460, // index 114 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 911
464, // index 115 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 926
465, // index 116 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 926
468, // index 117 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 928
469, // index 118 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 928
473, // index 119 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 944
474, // index 120 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 944
478, // index 121 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 975
479, // index 122 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 975
483, // index 123 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 985
484, // index 124 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 985
488, // index 125 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 995
489, // index 126 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 995
494, // index 127 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 998
495, // index 128 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 998
499, // index 129 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1009
500, // index 130 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1009
508, // index 131 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1021
509, // index 132 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1021
515 // index 133 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_sara_grammar [58] = {
0, // at 0 : <start_symbol>
1, // at 1 : <component>
13, // at 2 : <io_bool_expression>
14, // at 3 : <io_and_expression>
15, // at 4 : <io_primary>
21, // at 5 : <definition_expression>
22, // at 6 : <definition_expression_term>
23, // at 7 : <modalcompadd_definition>
24, // at 8 : <modalcompsub_definition>
25, // at 9 : <definition_expression_factor>
27, // at 10 : <explicit_automaton>
28, // at 11 : <select_sara_5F_parser_0>
30, // at 12 : <select_sara_5F_parser_1>
32, // at 13 : <select_sara_5F_parser_2>
34, // at 14 : <select_sara_5F_parser_3>
36, // at 15 : <select_sara_5F_parser_4>
38, // at 16 : <select_sara_5F_parser_5>
40, // at 17 : <select_sara_5F_parser_6>
42, // at 18 : <select_sara_5F_parser_7>
44, // at 19 : <select_sara_5F_parser_8>
46, // at 20 : <select_sara_5F_parser_9>
48, // at 21 : <select_sara_5F_parser_10>
50, // at 22 : <select_sara_5F_parser_11>
52, // at 23 : <select_sara_5F_parser_12>
54, // at 24 : <select_sara_5F_parser_13>
56, // at 25 : <select_sara_5F_parser_14>
58, // at 26 : <select_sara_5F_parser_15>
60, // at 27 : <select_sara_5F_parser_16>
62, // at 28 : <select_sara_5F_parser_17>
64, // at 29 : <select_sara_5F_parser_18>
66, // at 30 : <select_sara_5F_parser_19>
68, // at 31 : <select_sara_5F_parser_20>
73, // at 32 : <select_sara_5F_parser_21>
75, // at 33 : <select_sara_5F_parser_22>
77, // at 34 : <select_sara_5F_parser_23>
79, // at 35 : <select_sara_5F_parser_24>
81, // at 36 : <select_sara_5F_parser_25>
83, // at 37 : <select_sara_5F_parser_26>
85, // at 38 : <select_sara_5F_parser_27>
89, // at 39 : <select_sara_5F_parser_28>
91, // at 40 : <select_sara_5F_parser_29>
93, // at 41 : <select_sara_5F_parser_30>
95, // at 42 : <select_sara_5F_parser_31>
97, // at 43 : <select_sara_5F_parser_32>
109, // at 44 : <select_sara_5F_parser_33>
111, // at 45 : <select_sara_5F_parser_34>
113, // at 46 : <select_sara_5F_parser_35>
115, // at 47 : <select_sara_5F_parser_36>
117, // at 48 : <select_sara_5F_parser_37>
119, // at 49 : <select_sara_5F_parser_38>
121, // at 50 : <select_sara_5F_parser_39>
123, // at 51 : <select_sara_5F_parser_40>
125, // at 52 : <select_sara_5F_parser_41>
127, // at 53 : <select_sara_5F_parser_42>
129, // at 54 : <select_sara_5F_parser_43>
131, // at 55 : <select_sara_5F_parser_44>
133, // at 56 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
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
C_Lexique_sara_5F_scanner::kToken_bdd, -1, // Choice 8
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 9
C_Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 10
C_Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 11
C_Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 12
  -1,
// At index 26 : <io_bool_expression> only one production, no choice
  -1,
// At index 27 : <io_and_expression> only one production, no choice
  -1,
// At index 28 : <io_primary>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken_false, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken_true, -1, // Choice 5
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 6
  -1,
// At index 41 : <definition_expression> only one production, no choice
  -1,
// At index 42 : <definition_expression_term> only one production, no choice
  -1,
// At index 43 : <modalcompadd_definition> only one production, no choice
  -1,
// At index 44 : <modalcompsub_definition> only one production, no choice
  -1,
// At index 45 : <definition_expression_factor>
C_Lexique_sara_5F_scanner::kToken_trans, C_Lexique_sara_5F_scanner::kToken__28_, C_Lexique_sara_5F_scanner::kToken_modalcompadd, C_Lexique_sara_5F_scanner::kToken_modalcompsub, C_Lexique_sara_5F_scanner::kToken__7E_, C_Lexique_sara_5F_scanner::kToken__3F_, C_Lexique_sara_5F_scanner::kToken__21_, C_Lexique_sara_5F_scanner::kToken_bool, C_Lexique_sara_5F_scanner::kToken__40_, C_Lexique_sara_5F_scanner::kToken_nofirst, C_Lexique_sara_5F_scanner::kToken_nolast, C_Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 2
  -1,
// At index 61 : <explicit_automaton> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 62 : <select_sara_5F_parser_0>
C_Lexique_sara_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_state, C_Lexique_sara_5F_scanner::kToken_machineIdf, C_Lexique_sara_5F_scanner::kToken_trans, C_Lexique_sara_5F_scanner::kToken_first, C_Lexique_sara_5F_scanner::kToken_last, C_Lexique_sara_5F_scanner::kToken_check, C_Lexique_sara_5F_scanner::kToken_checkidentical, C_Lexique_sara_5F_scanner::kToken_checkbool, C_Lexique_sara_5F_scanner::kToken_bdd, C_Lexique_sara_5F_scanner::kToken_modalcompadd, C_Lexique_sara_5F_scanner::kToken_modalcompsub, C_Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 2
  -1,
// At index 78 : <select_sara_5F_parser_1>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 83 : <select_sara_5F_parser_2>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 88 : <select_sara_5F_parser_3>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 93 : <select_sara_5F_parser_4>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 98 : <select_sara_5F_parser_5>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 103 : <select_sara_5F_parser_6>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 108 : <select_sara_5F_parser_7>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 113 : <select_sara_5F_parser_8>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 118 : <select_sara_5F_parser_9>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 123 : <select_sara_5F_parser_10>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 128 : <select_sara_5F_parser_11>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 133 : <select_sara_5F_parser_12>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 138 : <select_sara_5F_parser_13>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 143 : <select_sara_5F_parser_14>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 148 : <select_sara_5F_parser_15>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 153 : <select_sara_5F_parser_16>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 158 : <select_sara_5F_parser_17>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_literal_5F_string, -1, // Choice 2
  -1,
// At index 163 : <select_sara_5F_parser_18>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 168 : <select_sara_5F_parser_19>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 174 : <select_sara_5F_parser_20>
C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__7B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_to, C_Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__5E_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken__2D__3E_, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken__3D_, -1, // Choice 5
  -1,
// At index 189 : <select_sara_5F_parser_21>
C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__7B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken__7C_, C_Lexique_sara_5F_scanner::kToken__5E_, C_Lexique_sara_5F_scanner::kToken__2D__3E_, C_Lexique_sara_5F_scanner::kToken__3D_, C_Lexique_sara_5F_scanner::kToken_to, C_Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 202 : <select_sara_5F_parser_22>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 207 : <select_sara_5F_parser_23>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 212 : <select_sara_5F_parser_24>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 217 : <select_sara_5F_parser_25>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 222 : <select_sara_5F_parser_26>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 2
  -1,
// At index 228 : <select_sara_5F_parser_27>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__2A__2A_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken__7C__7C_, -1, // Choice 4
  -1,
// At index 239 : <select_sara_5F_parser_28>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_include, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 246 : <select_sara_5F_parser_29>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_include, -1, // Choice 2
  -1,
// At index 252 : <select_sara_5F_parser_30>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 259 : <select_sara_5F_parser_31>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 2
  -1,
// At index 265 : <select_sara_5F_parser_32>
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
// At index 290 : <select_sara_5F_parser_33>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 295 : <select_sara_5F_parser_34>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 300 : <select_sara_5F_parser_35>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 305 : <select_sara_5F_parser_36>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 310 : <select_sara_5F_parser_37>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 315 : <select_sara_5F_parser_38>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 320 : <select_sara_5F_parser_39>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 325 : <select_sara_5F_parser_40>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 330 : <select_sara_5F_parser_41>
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_last, -1, // Choice 2
  -1,
// At index 335 : <select_sara_5F_parser_42>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 340 : <select_sara_5F_parser_43>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 345 : <select_sara_5F_parser_44>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_machineIdf, C_Lexique_sara_5F_scanner::kToken__28_, C_Lexique_sara_5F_scanner::kToken_identifier, C_Lexique_sara_5F_scanner::kToken__7E_, C_Lexique_sara_5F_scanner::kToken_false, C_Lexique_sara_5F_scanner::kToken_true, -1, // Choice 2
  -1,
// At index 355 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_sara_grammar [58] = {
0, // at 0 : <start_symbol>
1, // at 1 : <component>
26, // at 2 : <io_bool_expression>
27, // at 3 : <io_and_expression>
28, // at 4 : <io_primary>
41, // at 5 : <definition_expression>
42, // at 6 : <definition_expression_term>
43, // at 7 : <modalcompadd_definition>
44, // at 8 : <modalcompsub_definition>
45, // at 9 : <definition_expression_factor>
61, // at 10 : <explicit_automaton>
62, // at 11 : <select_sara_5F_parser_0>
78, // at 12 : <select_sara_5F_parser_1>
83, // at 13 : <select_sara_5F_parser_2>
88, // at 14 : <select_sara_5F_parser_3>
93, // at 15 : <select_sara_5F_parser_4>
98, // at 16 : <select_sara_5F_parser_5>
103, // at 17 : <select_sara_5F_parser_6>
108, // at 18 : <select_sara_5F_parser_7>
113, // at 19 : <select_sara_5F_parser_8>
118, // at 20 : <select_sara_5F_parser_9>
123, // at 21 : <select_sara_5F_parser_10>
128, // at 22 : <select_sara_5F_parser_11>
133, // at 23 : <select_sara_5F_parser_12>
138, // at 24 : <select_sara_5F_parser_13>
143, // at 25 : <select_sara_5F_parser_14>
148, // at 26 : <select_sara_5F_parser_15>
153, // at 27 : <select_sara_5F_parser_16>
158, // at 28 : <select_sara_5F_parser_17>
163, // at 29 : <select_sara_5F_parser_18>
168, // at 30 : <select_sara_5F_parser_19>
174, // at 31 : <select_sara_5F_parser_20>
189, // at 32 : <select_sara_5F_parser_21>
202, // at 33 : <select_sara_5F_parser_22>
207, // at 34 : <select_sara_5F_parser_23>
212, // at 35 : <select_sara_5F_parser_24>
217, // at 36 : <select_sara_5F_parser_25>
222, // at 37 : <select_sara_5F_parser_26>
228, // at 38 : <select_sara_5F_parser_27>
239, // at 39 : <select_sara_5F_parser_28>
246, // at 40 : <select_sara_5F_parser_29>
252, // at 41 : <select_sara_5F_parser_30>
259, // at 42 : <select_sara_5F_parser_31>
265, // at 43 : <select_sara_5F_parser_32>
290, // at 44 : <select_sara_5F_parser_33>
295, // at 45 : <select_sara_5F_parser_34>
300, // at 46 : <select_sara_5F_parser_35>
305, // at 47 : <select_sara_5F_parser_36>
310, // at 48 : <select_sara_5F_parser_37>
315, // at 49 : <select_sara_5F_parser_38>
320, // at 50 : <select_sara_5F_parser_39>
325, // at 51 : <select_sara_5F_parser_40>
330, // at 52 : <select_sara_5F_parser_41>
335, // at 53 : <select_sara_5F_parser_42>
340, // at 54 : <select_sara_5F_parser_43>
345, // at 55 : <select_sara_5F_parser_44>
355, // at 56 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
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
  macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_sara_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_sara_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_sara_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                      gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_sara_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
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
                                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_sara_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'component' non terminal implementation                                         
//                                                                                                                      
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
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'io_bool_expression' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_boolExpression & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'io_and_expression' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_boolExpression & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'io_primary' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_primary_parse (C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_io_5F_primary_i15_parse(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i16_parse(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i17_parse(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i18_parse(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i19_parse(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i20_parse(inLexique) ;
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
    rule_sara_5F_parser_io_5F_primary_i15_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i16_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i17_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i18_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i19_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i20_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'definition_expression' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'definition_expression_term' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'modalcompadd_definition' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_M_5F_modesMap & parameter_3,
                                GALGAS_ListForModes & parameter_4,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'modalcompsub_definition' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_M_5F_modesMap & parameter_3,
                                GALGAS_ListForModes & parameter_4,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'definition_expression_factor' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_parse (C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_parse(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse(inLexique) ;
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
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'explicit_automaton' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_0' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_0 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_1' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_1 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_2' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_2 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_3' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_3 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_4' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_4 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_5' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_5 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_6' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_6 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_7' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_7 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_8' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_8 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_9' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_9 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_10' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_10 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_11' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_11 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_12' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_12 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_13' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_13 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_14' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_14 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_15' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_15 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_16' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_16 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_17' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_17 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_18' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_18 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_19' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_19 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_20' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_20 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_21' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_21 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_22' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_22 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_23' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_23 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_24' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_24 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_25' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_25 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_26' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_26 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_27' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_27 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_28' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_28 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_29' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_29 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_30' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_30 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_31' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_31 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_32' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_32 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_33' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_33 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_34' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_34 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_35' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_35 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_36' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_36 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_37' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_37 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_38' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_38 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_39' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_39 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_40' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_40 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_41' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_41 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_42' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_42 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_43' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_43 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_sara_5F_parser_44' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_44 (C_Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap_2D_element::GALGAS_M_5F_variablesMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap_2D_element::~ GALGAS_M_5F_variablesMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap_2D_element::GALGAS_M_5F_variablesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_variablesMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_uint & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_M_5F_variablesMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_M_5F_variablesMap_2D_element::objectCompare (const GALGAS_M_5F_variablesMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_variablesMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_variablesMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_variablesMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @M_variablesMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@M_variablesMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ("M_variablesMap-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_variablesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_variablesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_variablesMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap_2D_element result ;
  const GALGAS_M_5F_variablesMap_2D_element * p = (const GALGAS_M_5F_variablesMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_variablesMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_variablesMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap_2D_element::GALGAS_M_5F_stateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap_2D_element::~ GALGAS_M_5F_stateMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap_2D_element::GALGAS_M_5F_stateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_stateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uint & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_M_5F_stateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_M_5F_stateMap_2D_element::objectCompare (const GALGAS_M_5F_stateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_stateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_stateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_stateMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @M_stateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@M_stateMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ("M_stateMap-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_stateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_stateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_stateMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap_2D_element result ;
  const GALGAS_M_5F_stateMap_2D_element * p = (const GALGAS_M_5F_stateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_stateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_stateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap_2D_element::GALGAS_M_5F_modesMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mModeDefinition () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap_2D_element::~ GALGAS_M_5F_modesMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap_2D_element::GALGAS_M_5F_modesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1,
                                                                  const GALGAS_AC_5F_machineDefinition & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mModeDefinition (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap_2D_element GALGAS_M_5F_modesMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uint & inOperand1,
                                                                                  const GALGAS_AC_5F_machineDefinition & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_M_5F_modesMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_M_5F_modesMap_2D_element::objectCompare (const GALGAS_M_5F_modesMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModeDefinition.objectCompare (inOperand.mProperty_mModeDefinition) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_modesMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mModeDefinition.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_modesMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mModeDefinition.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_modesMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @M_modesMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModeDefinition.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@M_modesMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ("M_modesMap-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_modesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_modesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_modesMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_modesMap_2D_element GALGAS_M_5F_modesMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap_2D_element result ;
  const GALGAS_M_5F_modesMap_2D_element * p = (const GALGAS_M_5F_modesMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_modesMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_modesMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList_2D_element::GALGAS_L_5F_scenarioList_2D_element (void) :
mProperty_mScenarioTitle (),
mProperty_mInputScenario () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList_2D_element::~ GALGAS_L_5F_scenarioList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList_2D_element::GALGAS_L_5F_scenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_L_5F_inputScenario & inOperand1) :
mProperty_mScenarioTitle (inOperand0),
mProperty_mInputScenario (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_scenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_L_5F_inputScenario::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_L_5F_inputScenario & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_scenarioList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_L_5F_scenarioList_2D_element::objectCompare (const GALGAS_L_5F_scenarioList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mScenarioTitle.objectCompare (inOperand.mProperty_mScenarioTitle) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInputScenario.objectCompare (inOperand.mProperty_mInputScenario) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_L_5F_scenarioList_2D_element::isValid (void) const {
  return mProperty_mScenarioTitle.isValid () && mProperty_mInputScenario.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList_2D_element::drop (void) {
  mProperty_mScenarioTitle.drop () ;
  mProperty_mInputScenario.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_scenarioList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @L_scenarioList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mScenarioTitle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInputScenario.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@L_scenarioList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ("L_scenarioList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_scenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_scenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_scenarioList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList_2D_element result ;
  const GALGAS_L_5F_scenarioList_2D_element * p = (const GALGAS_L_5F_scenarioList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_scenarioList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_scenarioList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap_2D_element::GALGAS_M_5F_machinesMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mNameList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap_2D_element::~ GALGAS_M_5F_machinesMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap_2D_element::GALGAS_M_5F_machinesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2,
                                                                        const GALGAS_uint & inOperand3,
                                                                        const GALGAS_M_5F_variablesMap & inOperand4,
                                                                        const GALGAS_stringlist & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mInputVariableCount (inOperand2),
mProperty_mInputAndInternalVariableCount (inOperand3),
mProperty_mVariablesMap (inOperand4),
mProperty_mNameList (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap_2D_element GALGAS_M_5F_machinesMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_machinesMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                             GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap_2D_element GALGAS_M_5F_machinesMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_uint & inOperand2,
                                                                                        const GALGAS_uint & inOperand3,
                                                                                        const GALGAS_M_5F_variablesMap & inOperand4,
                                                                                        const GALGAS_stringlist & inOperand5 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_M_5F_machinesMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_M_5F_machinesMap_2D_element::objectCompare (const GALGAS_M_5F_machinesMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInputVariableCount.objectCompare (inOperand.mProperty_mInputVariableCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInputAndInternalVariableCount.objectCompare (inOperand.mProperty_mInputAndInternalVariableCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVariablesMap.objectCompare (inOperand.mProperty_mVariablesMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNameList.objectCompare (inOperand.mProperty_mNameList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_M_5F_machinesMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mInputVariableCount.isValid () && mProperty_mInputAndInternalVariableCount.isValid () && mProperty_mVariablesMap.isValid () && mProperty_mNameList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_machinesMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mInputVariableCount.drop () ;
  mProperty_mInputAndInternalVariableCount.drop () ;
  mProperty_mVariablesMap.drop () ;
  mProperty_mNameList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_M_5F_machinesMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @M_machinesMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNameList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@M_machinesMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ("M_machinesMap-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_M_5F_machinesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_M_5F_machinesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_machinesMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_machinesMap_2D_element GALGAS_M_5F_machinesMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap_2D_element result ;
  const GALGAS_M_5F_machinesMap_2D_element * p = (const GALGAS_M_5F_machinesMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_M_5F_machinesMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_machinesMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_machineComponent reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_machineComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
  if (kOperandEqual == result) {
    result = mProperty_mMachineName.objectCompare (p->mProperty_mMachineName) ;
  }
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
    result = mProperty_mNameList.objectCompare (p->mProperty_mNameList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefinition.objectCompare (p->mProperty_mDefinition) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_machineComponent::objectCompare (const GALGAS_C_5F_machineComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent::GALGAS_C_5F_machineComponent (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent::GALGAS_C_5F_machineComponent (const cPtr_C_5F_machineComponent * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineComponent) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineComponent::setter_setMMachineName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mMachineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineComponent::setter_setMMachineIndex (GALGAS_uint inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineComponent::setter_setMInputVariableCount (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineComponent::setter_setMInputAndInternalVariableCount (GALGAS_uint inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineComponent::setter_setMVariablesMap (GALGAS_M_5F_variablesMap inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineComponent::setter_setMNameList (GALGAS_stringlist inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mNameList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_machineComponent::setter_setMDefinition (GALGAS_AC_5F_machineDefinition inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_C_5F_machineComponent::readProperty_mMachineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mMachineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineComponent::readProperty_mMachineIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineComponent::readProperty_mInputVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_machineComponent::readProperty_mInputAndInternalVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_C_5F_machineComponent::readProperty_mVariablesMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mVariablesMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_C_5F_machineComponent::readProperty_mNameList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_machineComponent::readProperty_mDefinition (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mDefinition ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_machineComponent class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_machineComponent::cPtr_C_5F_machineComponent (const GALGAS_lstring & in_mMachineName,
                                                        const GALGAS_uint & in_mMachineIndex,
                                                        const GALGAS_uint & in_mInputVariableCount,
                                                        const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                        const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                        const GALGAS_stringlist & in_mNameList,
                                                        const GALGAS_AC_5F_machineDefinition & in_mDefinition
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineName (in_mMachineName),
mProperty_mMachineIndex (in_mMachineIndex),
mProperty_mInputVariableCount (in_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mProperty_mVariablesMap (in_mVariablesMap),
mProperty_mNameList (in_mNameList),
mProperty_mDefinition (in_mDefinition) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent ;
}

void cPtr_C_5F_machineComponent::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@C_machineComponent:" ;
  mProperty_mMachineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineComponent (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mNameList, mProperty_mDefinition COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineComponent type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineComponent ("C_machineComponent",
                                              & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineComponent (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_machineComponent_2D_weak::objectCompare (const GALGAS_C_5F_machineComponent_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak::GALGAS_C_5F_machineComponent_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak & GALGAS_C_5F_machineComponent_2D_weak::operator = (const GALGAS_C_5F_machineComponent & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak::GALGAS_C_5F_machineComponent_2D_weak (const GALGAS_C_5F_machineComponent & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak GALGAS_C_5F_machineComponent_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_machineComponent_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent GALGAS_C_5F_machineComponent_2D_weak::bang_C_5F_machineComponent_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_machineComponent result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_machineComponent) ;
      result = GALGAS_C_5F_machineComponent ((cPtr_C_5F_machineComponent *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@C_machineComponent-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineComponent_2D_weak ("C_machineComponent-weak",
                                                      & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_machineComponent_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_machineComponent_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineComponent_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_machineComponent_2D_weak GALGAS_C_5F_machineComponent_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineComponent_2D_weak result ;
  const GALGAS_C_5F_machineComponent_2D_weak * p = (const GALGAS_C_5F_machineComponent_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineComponent_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineComponent-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "sara",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "an '.sara' source file",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_sara_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("sara_main.galgas", 11)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "sara") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_sara_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_sara_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

