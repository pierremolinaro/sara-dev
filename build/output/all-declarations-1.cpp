#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_scenarioComponent_2E_weak::objectCompare (const GGS_C_5F_scenarioComponent_2E_weak & inOperand) const {
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

GGS_C_5F_scenarioComponent_2E_weak::GGS_C_5F_scenarioComponent_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent_2E_weak & GGS_C_5F_scenarioComponent_2E_weak::operator = (const GGS_C_5F_scenarioComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent_2E_weak::GGS_C_5F_scenarioComponent_2E_weak (const GGS_C_5F_scenarioComponent & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent_2E_weak GGS_C_5F_scenarioComponent_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_C_5F_scenarioComponent_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent GGS_C_5F_scenarioComponent_2E_weak::bang_C_5F_scenarioComponent_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_C_5F_scenarioComponent result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_scenarioComponent) ;
      result = GGS_C_5F_scenarioComponent ((cPtr_C_5F_scenarioComponent *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @C_scenarioComponent.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2E_weak ("C_scenarioComponent.weak",
                                                                                      & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_scenarioComponent_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_scenarioComponent_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_scenarioComponent_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent_2E_weak GGS_C_5F_scenarioComponent_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_scenarioComponent_2E_weak result ;
  const GGS_C_5F_scenarioComponent_2E_weak * p = (const GGS_C_5F_scenarioComponent_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_scenarioComponent_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_scenarioComponent.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeDisplayBDDstats reference class
//--------------------------------------------------------------------------------------------------

cPtr_typeDisplayBDDstats::cPtr_typeDisplayBDDstats (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeDisplayBDDstats::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDisplayBDDstats::objectCompare (const GGS_typeDisplayBDDstats & inOperand) const {
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

GGS_typeDisplayBDDstats::GGS_typeDisplayBDDstats (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeDisplayBDDstats GGS_typeDisplayBDDstats::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_typeDisplayBDDstats * object = nullptr ;
  macroMyNew (object, cPtr_typeDisplayBDDstats (inCompiler COMMA_THERE)) ;
  object->typeDisplayBDDstats_init (inCompiler) ;
  const GGS_typeDisplayBDDstats result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeDisplayBDDstats::
typeDisplayBDDstats_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats::GGS_typeDisplayBDDstats (const cPtr_typeDisplayBDDstats * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDisplayBDDstats) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats GGS_typeDisplayBDDstats::class_func_new (LOCATION_ARGS) {
  GGS_typeDisplayBDDstats result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDisplayBDDstats (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeDisplayBDDstats class
//--------------------------------------------------------------------------------------------------

cPtr_typeDisplayBDDstats::cPtr_typeDisplayBDDstats (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeDisplayBDDstats::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

void cPtr_typeDisplayBDDstats::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@typeDisplayBDDstats]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeDisplayBDDstats::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeDisplayBDDstats (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeDisplayBDDstats generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats ("typeDisplayBDDstats",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDisplayBDDstats::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDisplayBDDstats::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDisplayBDDstats (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats GGS_typeDisplayBDDstats::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typeDisplayBDDstats result ;
  const GGS_typeDisplayBDDstats * p = (const GGS_typeDisplayBDDstats *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDisplayBDDstats *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDisplayBDDstats", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDisplayBDDstats_2E_weak::objectCompare (const GGS_typeDisplayBDDstats_2E_weak & inOperand) const {
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

GGS_typeDisplayBDDstats_2E_weak::GGS_typeDisplayBDDstats_2E_weak (void) :
GGS_AC_5F_job_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats_2E_weak & GGS_typeDisplayBDDstats_2E_weak::operator = (const GGS_typeDisplayBDDstats & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats_2E_weak::GGS_typeDisplayBDDstats_2E_weak (const GGS_typeDisplayBDDstats & inSource) :
GGS_AC_5F_job_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats_2E_weak GGS_typeDisplayBDDstats_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeDisplayBDDstats_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats GGS_typeDisplayBDDstats_2E_weak::bang_typeDisplayBDDstats_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeDisplayBDDstats result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDisplayBDDstats) ;
      result = GGS_typeDisplayBDDstats ((cPtr_typeDisplayBDDstats *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeDisplayBDDstats.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats_2E_weak ("typeDisplayBDDstats.weak",
                                                                                   & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDisplayBDDstats_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDisplayBDDstats_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDisplayBDDstats_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDisplayBDDstats_2E_weak GGS_typeDisplayBDDstats_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_typeDisplayBDDstats_2E_weak result ;
  const GGS_typeDisplayBDDstats_2E_weak * p = (const GGS_typeDisplayBDDstats_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDisplayBDDstats_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDisplayBDDstats.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_jobList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_jobList : public cCollectionElement {
  public: GGS_L_5F_jobList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_jobList (const GGS_AC_5F_job & in_mComponent
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_jobList (const GGS_L_5F_jobList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_jobList::cCollectionElement_L_5F_jobList (const GGS_AC_5F_job & in_mComponent
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mComponent) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_jobList::cCollectionElement_L_5F_jobList (const GGS_L_5F_jobList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mComponent) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_jobList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_jobList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_jobList (mObject.mProperty_mComponent COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_jobList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mComponent" ":") ;
  mObject.mProperty_mComponent.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList::GGS_L_5F_jobList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList::GGS_L_5F_jobList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_jobList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_L_5F_jobList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::enterElement (const GGS_L_5F_jobList_2E_element & inValue,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_jobList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::class_func_listWithValue (const GGS_AC_5F_job & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  GGS_L_5F_jobList result ;
  if (inOperand0.isValid ()) {
    result = GGS_L_5F_jobList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_L_5F_jobList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_AC_5F_job & in_mComponent
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_jobList * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_jobList (in_mComponent COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::addAssign_operation (const GGS_AC_5F_job & inOperand0
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_append (const GGS_AC_5F_job inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_insertAtIndex (const GGS_AC_5F_job inOperand0,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_removeAtIndex (GGS_AC_5F_job & outOperand0,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
      outOperand0 = p->mObject.mProperty_mComponent ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_popFirst (GGS_AC_5F_job & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_popLast (GGS_AC_5F_job & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::method_first (GGS_AC_5F_job & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::method_last (GGS_AC_5F_job & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::add_operation (const GGS_L_5F_jobList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_jobList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_jobList result = GGS_L_5F_jobList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_jobList result = GGS_L_5F_jobList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_L_5F_jobList result = GGS_L_5F_jobList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::plusAssign_operation (const GGS_L_5F_jobList inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_setMComponentAtIndex (GGS_AC_5F_job inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComponent = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job GGS_L_5F_jobList::getter_mComponentAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  GGS_AC_5F_job result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    result = p->mObject.mProperty_mComponent ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_L_5F_jobList::cEnumerator_L_5F_jobList (const GGS_L_5F_jobList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element cEnumerator_L_5F_jobList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job cEnumerator_L_5F_jobList::current_mComponent (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject.mProperty_mComponent ;
}




//--------------------------------------------------------------------------------------------------
//
//     @L_jobList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList ("L_jobList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_jobList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_jobList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_jobList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_L_5F_jobList result ;
  const GGS_L_5F_jobList * p = (const GGS_L_5F_jobList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_jobList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_jobList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_machinesMap::cMapElement_M_5F_machinesMap (const GGS_M_5F_machinesMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex),
mProperty_mInputVariableCount (inValue.mProperty_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (inValue.mProperty_mInputAndInternalVariableCount),
mProperty_mVariablesMap (inValue.mProperty_mVariablesMap),
mProperty_mNameList (inValue.mProperty_mNameList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_machinesMap::cMapElement_M_5F_machinesMap (const GGS_lstring & inKey,
                                                            const GGS_uint & in_mIndex,
                                                            const GGS_uint & in_mInputVariableCount,
                                                            const GGS_uint & in_mInputAndInternalVariableCount,
                                                            const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                            const GGS_stringlist & in_mNameList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mInputVariableCount (in_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mProperty_mVariablesMap (in_mVariablesMap),
mProperty_mNameList (in_mNameList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_M_5F_machinesMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_M_5F_machinesMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_M_5F_machinesMap (mProperty_lkey, mProperty_mIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_M_5F_machinesMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInputVariableCount" ":") ;
  mProperty_mInputVariableCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInputAndInternalVariableCount" ":") ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mVariablesMap" ":") ;
  mProperty_mVariablesMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNameList" ":") ;
  mProperty_mNameList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap::GGS_M_5F_machinesMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap::GGS_M_5F_machinesMap (const GGS_M_5F_machinesMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap & GGS_M_5F_machinesMap::operator = (const GGS_M_5F_machinesMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_machinesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_M_5F_machinesMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_ GGS_M_5F_machinesMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_machinesMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_M_5F_machinesMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_machinesMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      element.mProperty_mInputVariableCount = p->mProperty_mInputVariableCount ;
      element.mProperty_mInputAndInternalVariableCount = p->mProperty_mInputAndInternalVariableCount ;
      element.mProperty_mVariablesMap = p->mProperty_mVariablesMap ;
      element.mProperty_mNameList = p->mProperty_mNameList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::class_func_mapWithMapToOverride (const GGS_M_5F_machinesMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_M_5F_machinesMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_M_5F_machinesMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::enterElement (const GGS_M_5F_machinesMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_machinesMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_machinesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_uint & inArgument0,
                                                const GGS_uint & inArgument1,
                                                const GGS_uint & inArgument2,
                                                const GGS_M_5F_variablesMap & inArgument3,
                                                const GGS_stringlist & inArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_machinesMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@M_5F_machinesMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::add_operation (const GGS_M_5F_machinesMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_M_5F_machinesMap result = *this ;
  cEnumerator_M_5F_machinesMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mInputVariableCount (HERE), enumerator.current_mInputAndInternalVariableCount (HERE), enumerator.current_mVariablesMap (HERE), enumerator.current_mNameList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_uint inArgument0,
                                             GGS_uint inArgument1,
                                             GGS_uint inArgument2,
                                             GGS_M_5F_variablesMap inArgument3,
                                             GGS_stringlist inArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * p = nullptr ;
  macroMyNew (p, cMapElement_M_5F_machinesMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' machine has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_M_5F_machinesMap_searchKey = "the '%K' machine is not defined" ;

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::method_searchKey (GGS_lstring inKey,
                                             GGS_uint & outArgument0,
                                             GGS_uint & outArgument1,
                                             GGS_uint & outArgument2,
                                             GGS_M_5F_variablesMap & outArgument3,
                                             GGS_stringlist & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_M_5F_machinesMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_removeKey (GGS_lstring inKey,
                                             GGS_uint & outArgument0,
                                             GGS_uint & outArgument1,
                                             GGS_uint & outArgument2,
                                             GGS_M_5F_variablesMap & outArgument3,
                                             GGS_stringlist & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "the '%K' machine is not defined" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_machinesMap::getter_mIndexForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_machinesMap::getter_mInputVariableCountForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mInputVariableCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_machinesMap::getter_mInputAndInternalVariableCountForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mInputAndInternalVariableCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_machinesMap::getter_mVariablesMapForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GGS_M_5F_variablesMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mVariablesMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_M_5F_machinesMap::getter_mNameListForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) attributes ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    result = p->mProperty_mNameList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMInputVariableCountForKey (GGS_uint inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mInputVariableCount = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMInputAndInternalVariableCountForKey (GGS_uint inAttributeValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mInputAndInternalVariableCount = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMVariablesMapForKey (GGS_M_5F_variablesMap inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mVariablesMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMNameListForKey (GGS_stringlist inAttributeValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_M_5F_machinesMap * p = (cMapElement_M_5F_machinesMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
    p->mProperty_mNameList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_M_5F_machinesMap * GGS_M_5F_machinesMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_M_5F_machinesMap * result = (cMapElement_M_5F_machinesMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_M_5F_machinesMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_M_5F_machinesMap::cEnumerator_M_5F_machinesMap (const GGS_M_5F_machinesMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element cEnumerator_M_5F_machinesMap::current (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return GGS_M_5F_machinesMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mInputVariableCount, p->mProperty_mInputAndInternalVariableCount, p->mProperty_mVariablesMap, p->mProperty_mNameList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_M_5F_machinesMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_M_5F_machinesMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_M_5F_machinesMap::current_mInputVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mInputVariableCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_M_5F_machinesMap::current_mInputAndInternalVariableCount (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mInputAndInternalVariableCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap cEnumerator_M_5F_machinesMap::current_mVariablesMap (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mVariablesMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist cEnumerator_M_5F_machinesMap::current_mNameList (LOCATION_ARGS) const {
  const cMapElement_M_5F_machinesMap * p = (const cMapElement_M_5F_machinesMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_M_5F_machinesMap) ;
  return p->mProperty_mNameList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_machinesMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap ("M_machinesMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_machinesMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_machinesMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_machinesMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_M_5F_machinesMap result ;
  const GGS_M_5F_machinesMap * p = (const GGS_M_5F_machinesMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_machinesMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_machinesMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
mProperty_componentsMap (),
mProperty_machinesMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::~ GGS_semanticContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init_21__21_ (const GGS_L_5F_jobList & in_componentsMap,
                                                       const GGS_M_5F_machinesMap & in_machinesMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_componentsMap = in_componentsMap ;
  result.mProperty_machinesMap = in_machinesMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_L_5F_jobList & inOperand0,
                                          const GGS_M_5F_machinesMap & inOperand1) :
mProperty_componentsMap (inOperand0),
mProperty_machinesMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::class_func_new (const GGS_L_5F_jobList & in_componentsMap,
                                                         const GGS_M_5F_machinesMap & in_machinesMap,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_componentsMap = in_componentsMap ;
  result.mProperty_machinesMap = in_machinesMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_componentsMap.isValid () && mProperty_machinesMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
  mProperty_componentsMap.drop () ;
  mProperty_machinesMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_componentsMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_machinesMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_ (Lexique_sara_5F_scanner * inCompiler) {
  GGS_L_5F_jobList temp_0 = GGS_L_5F_jobList::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 13)) ;
  GGS_M_5F_machinesMap temp_1 = GGS_M_5F_machinesMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 14)) ;
  GGS_semanticContext var_semanticContext_535 = GGS_semanticContext::init_21__21_ (temp_0, temp_1, inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    nt_component_ (var_semanticContext_535, inCompiler) ;
    if (select_sara_5F_parser_0 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  {
  routine_performComputations_3F_ (var_semanticContext_535.readProperty_componentsMap (), inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 20)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_parse (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_parse (inCompiler) ;
    if (select_sara_5F_parser_0 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
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
  GGS_lstring var_machineName_938 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  GGS_uint var_machineIndex_1054 ;
  GGS_uint joker_1067 ; // Joker input parameter
  GGS_uint joker_1070 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_1073 ; // Joker input parameter
  GGS_stringlist joker_1076 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_938, var_machineIndex_1054, joker_1067, joker_1070, joker_1073, joker_1076, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 33)) ;
  GGS_AC_5F_job var_job_1125 = GGS_C_5F_machineDisplayStates::init_21_ (var_machineIndex_1054, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1125  COMMA_SOURCE_FILE ("sara_parser.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
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
  GGS_lstring var_machineName_1419 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 47)) ;
  GGS_uint var_machineIndex_1535 ;
  GGS_uint joker_1548 ; // Joker input parameter
  GGS_uint joker_1551 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_1554 ; // Joker input parameter
  GGS_stringlist joker_1557 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1419, var_machineIndex_1535, joker_1548, joker_1551, joker_1554, joker_1557, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 49)) ;
  GGS_AC_5F_job var_job_1606 = GGS_C_5F_machineDisplayTransitions::init_21_ (var_machineIndex_1535, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1606  COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
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
  GGS_uint var_machineIndex_2031 ;
  GGS_uint joker_2044 ; // Joker input parameter
  GGS_uint joker_2047 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_2050 ; // Joker input parameter
  GGS_stringlist joker_2053 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1915, var_machineIndex_2031, joker_2044, joker_2047, joker_2050, joker_2053, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 66)) ;
  GGS_AC_5F_job var_job_2102 = GGS_C_5F_machineDisplayInitialStates::init_21_ (var_machineIndex_2031, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_2102  COMMA_SOURCE_FILE ("sara_parser.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
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
  GGS_lstring var_machineName_2412 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
  GGS_uint var_machineIndex_2528 ;
  GGS_uint joker_2541 ; // Joker input parameter
  GGS_uint joker_2544 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_2547 ; // Joker input parameter
  GGS_stringlist joker_2550 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2412, var_machineIndex_2528, joker_2541, joker_2544, joker_2547, joker_2550, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 83)) ;
  GGS_AC_5F_job var_job_2599 = GGS_C_5F_machineDisplayTerminalStates::init_21_ (var_machineIndex_2528, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_2599  COMMA_SOURCE_FILE ("sara_parser.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
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
  GGS_lstring var_machineName_2889 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  GGS_uint var_machineIndex_3005 ;
  GGS_uint joker_3018 ; // Joker input parameter
  GGS_uint joker_3021 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3024 ; // Joker input parameter
  GGS_stringlist joker_3027 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2889, var_machineIndex_3005, joker_3018, joker_3021, joker_3024, joker_3027, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 98)) ;
  GGS_AC_5F_job var_job_3076 = GGS_C_5F_machineCheck::init_21__21_ (var_machineIndex_3005, GGS_bool (false), inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3076  COMMA_SOURCE_FILE ("sara_parser.galgas", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  inCompiler->resetTemplateString () ;
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
  GGS_lstring var_machineName_31__3366 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  GGS_lstring var_machineName_32__3405 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
  GGS_uint var_machineIndex_31__3523 ;
  GGS_uint joker_3537 ; // Joker input parameter
  GGS_uint joker_3540 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3543 ; // Joker input parameter
  GGS_stringlist joker_3546 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_31__3366, var_machineIndex_31__3523, joker_3537, joker_3540, joker_3543, joker_3546, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 115)) ;
  GGS_uint var_machineIndex_32__3649 ;
  GGS_uint joker_3663 ; // Joker input parameter
  GGS_uint joker_3666 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_3669 ; // Joker input parameter
  GGS_stringlist joker_3672 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_32__3405, var_machineIndex_32__3649, joker_3663, joker_3666, joker_3669, joker_3672, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 117)) ;
  GGS_AC_5F_job var_job_3721 = GGS_C_5F_machineCheckIdentical::init_21__21_ (var_machineIndex_31__3523, var_machineIndex_32__3649, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3721  COMMA_SOURCE_FILE ("sara_parser.galgas", 120)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
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
  GGS_lstring var_machineName_4024 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
  GGS_uint var_machineIndex_4140 ;
  GGS_uint joker_4153 ; // Joker input parameter
  GGS_uint joker_4156 ; // Joker input parameter
  GGS_M_5F_variablesMap joker_4159 ; // Joker input parameter
  GGS_stringlist joker_4162 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_4024, var_machineIndex_4140, joker_4153, joker_4156, joker_4159, joker_4162, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 132)) ;
  GGS_AC_5F_job var_job_4211 = GGS_C_5F_machineCheck::init_21__21_ (var_machineIndex_4140, GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_4211  COMMA_SOURCE_FILE ("sara_parser.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
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
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 208)) ;
  GGS_AC_5F_job var_job_6100 = GGS_typeDisplayBDDstats::init (inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_6100  COMMA_SOURCE_FILE ("sara_parser.galgas", 210)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 208)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 208)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap temp_0 = GGS_M_5F_variablesMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 217)) ;
  GGS_M_5F_variablesMap var_variablesMap_6320 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 218)) ;
  GGS_stringlist var_nameList_6360 = temp_1 ;
  GGS_lstring var_machineName_6424 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 221)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_inputVarName_6500 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
    {
    var_variablesMap_6320.setter_insertKey (var_inputVarName_6500, var_variablesMap_6320.getter_count (SOURCE_FILE ("sara_parser.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 225)) ;
    }
    var_nameList_6360.addAssign_operation (var_inputVarName_6500.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 226)) ;
    if (select_sara_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_6651 = var_variablesMap_6320.getter_count (SOURCE_FILE ("sara_parser.galgas", 230)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 233)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_outputVarName_6785 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
      {
      var_variablesMap_6320.setter_insertKey (var_outputVarName_6785, var_variablesMap_6320.getter_count (SOURCE_FILE ("sara_parser.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 238)) ;
      }
      var_nameList_6360.addAssign_operation (var_outputVarName_6785.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 239)) ;
      if (select_sara_5F_parser_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 241)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  GGS_uint var_inputAndInternalVariablesCount_6961 = var_variablesMap_6320.getter_count (SOURCE_FILE ("sara_parser.galgas", 245)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    GGS_lstring var_outputVarName_7080 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    {
    var_variablesMap_6320.setter_insertKey (var_outputVarName_7080, var_variablesMap_6320.getter_count (SOURCE_FILE ("sara_parser.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 250)) ;
    }
    var_nameList_6360.addAssign_operation (var_outputVarName_7080.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 251)) ;
    if (select_sara_5F_parser_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
    }else{
      repeatFlag_4 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 255)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  GGS_AC_5F_machineDefinition var_definition_7324 ;
  nt_definition_5F_expression_ (ioArgument_ioSemanticContext, var_variablesMap_6320, var_definition_7324, inCompiler) ;
  GGS_uint var_machineIndex_7384 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 260)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_6424, var_machineIndex_7384, var_inputVariablesCount_6651, var_inputAndInternalVariablesCount_6961, var_variablesMap_6320, var_nameList_6360, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 261)) ;
  }
  GGS_AC_5F_job var_machine_7659 = GGS_C_5F_machineComponent::init_21__21__21__21__21__21__21_ (var_machineName_6424, var_machineIndex_7384, var_inputVariablesCount_6651, var_inputAndInternalVariablesCount_6961, var_variablesMap_6320, var_nameList_6360, var_definition_7324, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_7659  COMMA_SOURCE_FILE ("sara_parser.galgas", 271)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
    if (select_sara_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 233)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
      if (select_sara_5F_parser_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 241)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    if (select_sara_5F_parser_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 255)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  nt_definition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
    if (select_sara_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 233)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
      if (select_sara_5F_parser_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 241)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    if (select_sara_5F_parser_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 255)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  nt_definition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap temp_0 = GGS_M_5F_variablesMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 279)) ;
  GGS_M_5F_variablesMap var_variablesMap_8011 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 280)) ;
  GGS_stringlist var_nameList_8051 = temp_1 ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 282)) ;
  GGS_lstring var_machineName_8132 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_inputVarName_8208 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 287)) ;
    {
    var_variablesMap_8011.setter_insertKey (var_inputVarName_8208, var_variablesMap_8011.getter_count (SOURCE_FILE ("sara_parser.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 288)) ;
    }
    var_nameList_8051.addAssign_operation (var_inputVarName_8208.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
    if (select_sara_5F_parser_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 291)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_8359 = var_variablesMap_8011.getter_count (SOURCE_FILE ("sara_parser.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_outputVarName_8493 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 300)) ;
      {
      var_variablesMap_8011.setter_insertKey (var_outputVarName_8493, var_variablesMap_8011.getter_count (SOURCE_FILE ("sara_parser.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 301)) ;
      }
      var_nameList_8051.addAssign_operation (var_outputVarName_8493.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 302)) ;
      if (select_sara_5F_parser_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 304)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  GGS_uint var_inputAndInternalVariablesCount_8669 = var_variablesMap_8011.getter_count (SOURCE_FILE ("sara_parser.galgas", 308)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 310)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    GGS_lstring var_outputVarName_8789 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    {
    var_variablesMap_8011.setter_insertKey (var_outputVarName_8789, var_variablesMap_8011.getter_count (SOURCE_FILE ("sara_parser.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 313)) ;
    }
    var_nameList_8051.addAssign_operation (var_outputVarName_8789.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 314)) ;
    if (select_sara_5F_parser_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    }else{
      repeatFlag_4 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  GGS_M_5F_modesMap var_modeMap_9047 ;
  GGS_ListForModes var_inclusionList_9064 ;
  nt_modalcompadd_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_8011, var_modeMap_9047, var_inclusionList_9064, inCompiler) ;
  GGS_uint var_machineIndex_9127 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 327)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_8132, var_machineIndex_9127, var_inputVariablesCount_8359, var_inputAndInternalVariablesCount_8669, var_variablesMap_8011, var_nameList_8051, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 328)) ;
  }
  GGS_AC_5F_job var_machine_9375 = GGS_C_5F_machineDefinedByAdditiveModalComp::init_21__21__21__21__21__21__21_ (var_machineName_8132, var_machineIndex_9127, var_inputVariablesCount_8359, var_inputAndInternalVariablesCount_8669, var_variablesMap_8011, var_modeMap_9047, var_inclusionList_9064, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_9375  COMMA_SOURCE_FILE ("sara_parser.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 282)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 287)) ;
    if (select_sara_5F_parser_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 291)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 300)) ;
      if (select_sara_5F_parser_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 304)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 310)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    if (select_sara_5F_parser_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  nt_modalcompadd_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 282)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 287)) ;
    if (select_sara_5F_parser_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 291)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 300)) ;
      if (select_sara_5F_parser_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 304)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 310)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    if (select_sara_5F_parser_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  nt_modalcompadd_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  GGS_M_5F_variablesMap temp_0 = GGS_M_5F_variablesMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 346)) ;
  GGS_M_5F_variablesMap var_variablesMap_9767 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 347)) ;
  GGS_stringlist var_nameList_9807 = temp_1 ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
  GGS_lstring var_machineName_9888 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_inputVarName_9964 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    {
    var_variablesMap_9767.setter_insertKey (var_inputVarName_9964, var_variablesMap_9767.getter_count (SOURCE_FILE ("sara_parser.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 355)) ;
    }
    var_nameList_9807.addAssign_operation (var_inputVarName_9964.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 356)) ;
    if (select_sara_5F_parser_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 358)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_10115 = var_variablesMap_9767.getter_count (SOURCE_FILE ("sara_parser.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_outputVarName_10249 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
      {
      var_variablesMap_9767.setter_insertKey (var_outputVarName_10249, var_variablesMap_9767.getter_count (SOURCE_FILE ("sara_parser.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 368)) ;
      }
      var_nameList_9807.addAssign_operation (var_outputVarName_10249.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 369)) ;
      if (select_sara_5F_parser_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
  GGS_uint var_inputAndInternalVariablesCount_10425 = var_variablesMap_9767.getter_count (SOURCE_FILE ("sara_parser.galgas", 375)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    GGS_lstring var_outputVarName_10544 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 379)) ;
    {
    var_variablesMap_9767.setter_insertKey (var_outputVarName_10544, var_variablesMap_9767.getter_count (SOURCE_FILE ("sara_parser.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 380)) ;
    }
    var_nameList_9807.addAssign_operation (var_outputVarName_10544.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 381)) ;
    if (select_sara_5F_parser_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 383)) ;
    }else{
      repeatFlag_4 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 386)) ;
  GGS_M_5F_modesMap var_modeMap_10802 ;
  GGS_ListForModes var_exclusionList_10819 ;
  nt_modalcompsub_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_9767, var_modeMap_10802, var_exclusionList_10819, inCompiler) ;
  GGS_uint var_machineIndex_10882 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 394)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_9888, var_machineIndex_10882, var_inputVariablesCount_10115, var_inputAndInternalVariablesCount_10425, var_variablesMap_9767, var_nameList_9807, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 395)) ;
  }
  GGS_AC_5F_job var_machine_11130 = GGS_C_5F_machineDefinedBySubstractiveModalComp::init_21__21__21__21__21__21__21_ (var_machineName_9888, var_machineIndex_10882, var_inputVariablesCount_10115, var_inputAndInternalVariablesCount_10425, var_variablesMap_9767, var_modeMap_10802, var_exclusionList_10819, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_11130  COMMA_SOURCE_FILE ("sara_parser.galgas", 405)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    if (select_sara_5F_parser_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 358)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
      if (select_sara_5F_parser_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 379)) ;
    if (select_sara_5F_parser_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 383)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 386)) ;
  nt_modalcompsub_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    if (select_sara_5F_parser_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 358)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
      if (select_sara_5F_parser_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 379)) ;
    if (select_sara_5F_parser_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 383)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 386)) ;
  nt_modalcompsub_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                 Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
  GGS_M_5F_variablesMap temp_0 = GGS_M_5F_variablesMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 411)) ;
  GGS_M_5F_variablesMap var_variablesMap_11535 = temp_0 ;
  GGS_lstring var_machineName_11607 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  GGS_uint var_machineIndex_11717 ;
  GGS_uint var_inputVariablesCountFromDefinition_11735 ;
  GGS_uint var_inputAndInternalVariablesCountFromDefinition_11774 ;
  GGS_M_5F_variablesMap var_variablesMapFromDefinition_11824 ;
  GGS_stringlist joker_11851 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_11607, var_machineIndex_11717, var_inputVariablesCountFromDefinition_11735, var_inputAndInternalVariablesCountFromDefinition_11774, var_variablesMapFromDefinition_11824, joker_11851, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 415)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_inputVarName_11919 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
    {
    var_variablesMap_11535.setter_insertKey (var_inputVarName_11919, var_variablesMap_11535.getter_count (SOURCE_FILE ("sara_parser.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 420)) ;
    }
    if (select_sara_5F_parser_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 422)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_uint var_inputVariablesCount_12033 = var_variablesMap_11535.getter_count (SOURCE_FILE ("sara_parser.galgas", 424)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCountFromDefinition_11735.objectCompare (var_inputVariablesCount_12033)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 428)), GGS_string ("This declaration names ").add_operation (var_inputVariablesCount_12033.getter_string (SOURCE_FILE ("sara_parser.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 428)).add_operation (GGS_string (" input variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 428)).add_operation (var_inputVariablesCountFromDefinition_11735.getter_string (SOURCE_FILE ("sara_parser.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 429)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 429)), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 428)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 432)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      GGS_lstring var_outputVarName_12497 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 436)) ;
      {
      var_variablesMap_11535.setter_insertKey (var_outputVarName_12497, var_variablesMap_11535.getter_count (SOURCE_FILE ("sara_parser.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 437)) ;
      }
      if (select_sara_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
  GGS_uint var_inputAndInternalVariablesCount_12681 = var_variablesMap_11535.getter_count (SOURCE_FILE ("sara_parser.galgas", 444)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCountFromDefinition_11774.objectCompare (var_inputAndInternalVariablesCount_12681)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 446)), GGS_string ("This declaration names ").add_operation (var_inputAndInternalVariablesCount_12681.getter_string (SOURCE_FILE ("sara_parser.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 446)).add_operation (GGS_string (" input and internal variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 446)).add_operation (var_inputAndInternalVariablesCountFromDefinition_11774.getter_string (SOURCE_FILE ("sara_parser.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 447)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 447)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas", 446)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    GGS_lstring var_outputVarName_13155 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    {
    var_variablesMap_11535.setter_insertKey (var_outputVarName_13155, var_variablesMap_11535.getter_count (SOURCE_FILE ("sara_parser.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 453)) ;
    }
    if (select_sara_5F_parser_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  GGS_uint var_outputVariablesCount_13325 = var_variablesMap_11535.getter_count (SOURCE_FILE ("sara_parser.galgas", 459)) ;
  GGS_uint var_outputVariablesCountFromDefinition_13381 = var_variablesMapFromDefinition_11824.getter_count (SOURCE_FILE ("sara_parser.galgas", 460)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::notEqual, var_outputVariablesCountFromDefinition_13381.objectCompare (var_outputVariablesCount_13325)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 462)), GGS_string ("This declaration names ").add_operation (var_outputVariablesCount_13325.getter_string (SOURCE_FILE ("sara_parser.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 462)).add_operation (GGS_string (" variables, but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 462)).add_operation (var_outputVariablesCountFromDefinition_13381.getter_string (SOURCE_FILE ("sara_parser.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 463)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 463)), fixItArray9  COMMA_SOURCE_FILE ("sara_parser.galgas", 462)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  GGS_L_5F_scenarioList temp_10 = GGS_L_5F_scenarioList::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 466)) ;
  GGS_L_5F_scenarioList var_scenarioList_13738 = temp_10 ;
  bool repeatFlag_11 = true ;
  while (repeatFlag_11) {
    GGS_lstring var_scenarioTitle_13808 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 468)) ;
    GGS_L_5F_inputScenario temp_12 = GGS_L_5F_inputScenario::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 469)) ;
    GGS_L_5F_inputScenario var_inputScenario_13830 = temp_12 ;
    bool repeatFlag_13 = true ;
    while (repeatFlag_13) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
      GGS_L_5F_inputConfigurationForScenario temp_14 = GGS_L_5F_inputConfigurationForScenario::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 472)) ;
      GGS_L_5F_inputConfigurationForScenario var_inputConfigurationForScenario_13897 = temp_14 ;
      bool repeatFlag_15 = true ;
      while (repeatFlag_15) {
        GGS_luint var_v_14010 = inCompiler->synthetizedAttribute_ulongValue () ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 474)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::greaterThan, var_v_14010.readProperty_uint ().objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (var_v_14010.readProperty_location (), GGS_string ("this value is not a  binary digit"), fixItArray17  COMMA_SOURCE_FILE ("sara_parser.galgas", 476)) ;
          }
        }
        var_inputConfigurationForScenario_13897.addAssign_operation (var_v_14010  COMMA_SOURCE_FILE ("sara_parser.galgas", 478)) ;
        if (select_sara_5F_parser_19 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
        }else{
          repeatFlag_15 = false ;
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_12033.objectCompare (var_inputConfigurationForScenario_13897.getter_count (SOURCE_FILE ("sara_parser.galgas", 482)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 483)), GGS_string ("this input configuration names ").add_operation (var_inputConfigurationForScenario_13897.getter_count (SOURCE_FILE ("sara_parser.galgas", 483)).getter_string (SOURCE_FILE ("sara_parser.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)).add_operation (GGS_string (" input variable(s), instead of "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)).add_operation (var_inputVariablesCount_12033.getter_string (SOURCE_FILE ("sara_parser.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)), fixItArray19  COMMA_SOURCE_FILE ("sara_parser.galgas", 483)) ;
        }
      }
      var_inputScenario_13830.addAssign_operation (var_inputConfigurationForScenario_13897  COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
      if (select_sara_5F_parser_18 (inCompiler) == 2) {
      }else{
        repeatFlag_13 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    var_scenarioList_13738.addAssign_operation (var_scenarioTitle_13808, var_inputScenario_13830  COMMA_SOURCE_FILE ("sara_parser.galgas", 489)) ;
    if (select_sara_5F_parser_17 (inCompiler) == 2) {
    }else{
      repeatFlag_11 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
  GGS_AC_5F_job var_machine_14640 = GGS_C_5F_scenarioComponent::init_21__21__21__21__21_ (var_machineIndex_11717, var_inputVariablesCount_12033, var_inputAndInternalVariablesCount_12681, var_variablesMap_11535, var_scenarioList_13738, inCompiler COMMA_HERE) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_14640  COMMA_SOURCE_FILE ("sara_parser.galgas", 495)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
    if (select_sara_5F_parser_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 422)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 432)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 436)) ;
      if (select_sara_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    if (select_sara_5F_parser_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 468)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 474)) ;
        if (select_sara_5F_parser_19 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      if (select_sara_5F_parser_18 (inCompiler) == 2) {
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    if (select_sara_5F_parser_17 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
    if (select_sara_5F_parser_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 422)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 432)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 436)) ;
      if (select_sara_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    if (select_sara_5F_parser_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 468)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 474)) ;
        if (select_sara_5F_parser_19 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      if (select_sara_5F_parser_18 (inCompiler) == 2) {
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    if (select_sara_5F_parser_17 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      GGS_AC_5F_boolExpression var_rightExpression_15188 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15188, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_orExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_15188, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 511)) ;
      GGS_AC_5F_boolExpression var_rightExpression_15357 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15357, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_xorExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_15357, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 515)) ;
      GGS_AC_5F_boolExpression var_rightExpression_15528 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15528, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_impliesExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_15528, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 519)) ;
      GGS_AC_5F_boolExpression var_rightExpression_15702 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15702, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_equalExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_15702, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse (Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_and_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 511)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 515)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 519)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_and_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 511)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 515)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 519)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
      GGS_AC_5F_boolExpression var_rightExpression_16159 ;
      nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_16159, inCompiler) ;
      outArgument_outExpression = GGS_C_5F_andExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_16159, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse (Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
      nt_io_5F_primary_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
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
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  nt_io_5F_bool_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 548)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_inputVarName_16786 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
  GGS_uint var_inputVarIndex_16839 ;
  ioArgument_ioVarMap.method_searchKey (var_inputVarName_16786, var_inputVarIndex_16839, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 558)) ;
  outArgument_outExpression = GGS_C_5F_VariableExpression::init_21_ (var_inputVarIndex_16839, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
  GGS_AC_5F_boolExpression var_expression_17183 ;
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_expression_17183, inCompiler) ;
  outArgument_outExpression = GGS_C_5F_notExpression::init_21_ (var_expression_17183, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
  nt_io_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
  nt_io_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
  outArgument_outExpression = GGS_C_5F_falseExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GGS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 589)) ;
  outArgument_outExpression = GGS_C_5F_trueExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 589)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 589)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                     GGS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GGS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_machineIdentifier_18030 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 599)) ;
  GGS_uint var_indexOfImportedMachine_18115 ;
  GGS_uint var_machineInputVariableCount_18143 ;
  GGS_uint var_machineInputAndInternalVariableCount_18174 ;
  GGS_M_5F_variablesMap var_machineVariablesMap_18216 ;
  GGS_stringlist joker_18236 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_18030, var_indexOfImportedMachine_18115, var_machineInputVariableCount_18143, var_machineInputAndInternalVariableCount_18174, var_machineVariablesMap_18216, joker_18236, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 600)) ;
  GGS_L_5F_translationVector temp_0 = GGS_L_5F_translationVector::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 601)) ;
  GGS_L_5F_translationVector var_translationVector_18246 = temp_0 ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_inputVar_18354 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 605)) ;
    GGS_uint var_inputVarIndex_18402 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_18354, var_inputVarIndex_18402, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 606)) ;
    var_translationVector_18246.addAssign_operation (var_inputVarIndex_18402  COMMA_SOURCE_FILE ("sara_parser.galgas", 607)) ;
    if (select_sara_5F_parser_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
  GGS_uint var_inputVariablesCount_18497 = var_translationVector_18246.getter_count (SOURCE_FILE ("sara_parser.galgas", 612)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_18497.objectCompare (var_machineInputVariableCount_18143)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 614)), GGS_string ("The '$").add_operation (var_machineIdentifier_18030.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (var_machineInputVariableCount_18143.getter_string (SOURCE_FILE ("sara_parser.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (GGS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (var_inputVariablesCount_18497.getter_string (SOURCE_FILE ("sara_parser.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 615)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 615)), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 614)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 618)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      GGS_lstring var_internalVar_18919 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 622)) ;
      GGS_uint var_internalVarIndex_18975 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_18919, var_internalVarIndex_18975, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 623)) ;
      var_translationVector_18246.addAssign_operation (var_internalVarIndex_18975  COMMA_SOURCE_FILE ("sara_parser.galgas", 624)) ;
      if (select_sara_5F_parser_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  GGS_uint var_inputAndInternalVariablesCount_19091 = var_translationVector_18246.getter_count (SOURCE_FILE ("sara_parser.galgas", 630)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCount_19091.objectCompare (var_machineInputAndInternalVariableCount_18174)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 632)), GGS_string ("The '$").add_operation (var_machineIdentifier_18030.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (var_machineInputAndInternalVariableCount_18174.getter_string (SOURCE_FILE ("sara_parser.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (GGS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (var_inputAndInternalVariablesCount_19091.getter_string (SOURCE_FILE ("sara_parser.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 633)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 633)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas", 632)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    GGS_lstring var_outputVar_19581 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
    GGS_uint var_outputVarIndex_19631 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_19581, var_outputVarIndex_19631, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 639)) ;
    var_translationVector_18246.addAssign_operation (var_outputVarIndex_19631  COMMA_SOURCE_FILE ("sara_parser.galgas", 640)) ;
    if (select_sara_5F_parser_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 642)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 644)) ;
  GGS_uint var_allVariablesCount_19728 = var_translationVector_18246.getter_count (SOURCE_FILE ("sara_parser.galgas", 645)) ;
  GGS_uint var_machineAllVariablesCount_19786 = var_machineVariablesMap_18216.getter_count (SOURCE_FILE ("sara_parser.galgas", 646)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::notEqual, var_allVariablesCount_19728.objectCompare (var_machineAllVariablesCount_19786)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 648)), GGS_string ("The '$").add_operation (var_machineIdentifier_18030.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (var_machineAllVariablesCount_19786.getter_string (SOURCE_FILE ("sara_parser.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (GGS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (var_allVariablesCount_19728.getter_string (SOURCE_FILE ("sara_parser.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 649)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 649)), fixItArray9  COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
    }
  }
  outArgument_outExpression = GGS_C_5F_importBoolMachine::init_21__21__21_ (var_indexOfImportedMachine_18115, var_machineIdentifier_18030.readProperty_location (), var_translationVector_18246, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 599)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 605)) ;
    if (select_sara_5F_parser_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 618)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 622)) ;
      if (select_sara_5F_parser_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
    if (select_sara_5F_parser_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 642)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 644)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 599)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 605)) ;
    if (select_sara_5F_parser_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 618)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 622)) ;
      if (select_sara_5F_parser_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
    if (select_sara_5F_parser_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 642)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 644)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_20763 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_20864 ;
      nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_20864, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_orComposition::init_21__21_ (var_leftOperand_20763, var_rightOperand_20864, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i21_parse (Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
      nt_definition_5F_expression_5F_term_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i21_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_sara_5F_parser_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
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
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 684)) ;
      GGS_location var_errorLocation_21313 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 685)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_21374 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_21477 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_21477, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_strongModalComposition::init_21__21__21_ (var_leftOperand_21374, var_errorLocation_21313, var_rightOperand_21477, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 690)) ;
      GGS_location var_errorLocation_21621 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 691)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_21682 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_21785 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_21785, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_weakModalComposition::init_21__21__21_ (var_leftOperand_21682, var_errorLocation_21621, var_rightOperand_21785, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 696)) ;
      GGS_AC_5F_machineDefinition var_leftOperand_21939 = outArgument_outDefinition ;
      GGS_AC_5F_machineDefinition var_rightOperand_22042 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_22042, inCompiler) ;
      outArgument_outDefinition = GGS_C_5F_parallelComposition::init_21__21_ (var_leftOperand_21939, var_rightOperand_22042, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse (Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 684)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 690)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 696)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing (Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 684)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 690)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 696)) ;
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
  GGS_M_5F_modesMap temp_0 = GGS_M_5F_modesMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 710)) ;
  outArgument_outModeMap = temp_0 ;
  GGS_ListForModes temp_1 = GGS_ListForModes::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 711)) ;
  outArgument_outInclusionList = temp_1 ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_modeName_22490 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
    GGS_AC_5F_machineDefinition var_def_22574 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_22574, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_22490, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 716)), var_def_22574, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 716)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
    if (select_sara_5F_parser_28 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_sara_5F_parser_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
      GGS_lstring var_sourceModeName_22717 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      GGS_uint var_sourceModeIndex_22779 ;
      GGS_AC_5F_machineDefinition joker_22795 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_22717, var_sourceModeIndex_22779, joker_22795, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 724)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 725)) ;
      GGS_lstring var_targetModeName_22830 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      GGS_uint var_targetModeIndex_22892 ;
      GGS_AC_5F_machineDefinition joker_22908 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_22830, var_targetModeIndex_22892, joker_22908, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 727)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 728)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_sourceModeIndex_22779.objectCompare (var_targetModeIndex_22892)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (var_targetModeName_22830.readProperty_location (), GGS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 730)) ;
        }
      }
      if (kBoolFalse == test_4) {
        outArgument_outInclusionList.addAssign_operation (var_sourceModeIndex_22779, var_targetModeIndex_22892  COMMA_SOURCE_FILE ("sara_parser.galgas", 732)) ;
      }
    }else{
      repeatFlag_3 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
    if (select_sara_5F_parser_28 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 725)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 728)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
    if (select_sara_5F_parser_28 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 725)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 728)) ;
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
  GGS_M_5F_modesMap temp_0 = GGS_M_5F_modesMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 744)) ;
  outArgument_outModeMap = temp_0 ;
  GGS_ListForModes temp_1 = GGS_ListForModes::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 745)) ;
  outArgument_outExclusionList = temp_1 ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_modeName_23555 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 748)) ;
    GGS_AC_5F_machineDefinition var_def_23639 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_23639, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_23555, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 750)), var_def_23639, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 750)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 751)) ;
    if (select_sara_5F_parser_30 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_sara_5F_parser_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      GGS_lstring var_sourceModeName_23782 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 757)) ;
      GGS_uint var_sourceModeIndex_23844 ;
      GGS_AC_5F_machineDefinition joker_23860 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_23782, var_sourceModeIndex_23844, joker_23860, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 758)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
      GGS_lstring var_targetModeName_23895 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      GGS_uint var_targetModeIndex_23957 ;
      GGS_AC_5F_machineDefinition joker_23973 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_23895, var_targetModeIndex_23957, joker_23973, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 761)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 762)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_sourceModeIndex_23844.objectCompare (var_targetModeIndex_23957)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (var_targetModeName_23895.readProperty_location (), GGS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 764)) ;
        }
      }
      if (kBoolFalse == test_4) {
        outArgument_outExclusionList.addAssign_operation (var_sourceModeIndex_23844, var_targetModeIndex_23957  COMMA_SOURCE_FILE ("sara_parser.galgas", 766)) ;
      }
    }else{
      repeatFlag_3 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 748)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 751)) ;
    if (select_sara_5F_parser_30 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 757)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 762)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing (Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 748)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 751)) ;
    if (select_sara_5F_parser_30 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_sara_5F_parser_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 757)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 762)) ;
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
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 780)) ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
  } break ;
  case 3: {
    GGS_M_5F_variablesMap var_extendedVariablesMap_24714 = ioArgument_variablesMap ;
    GGS_uint var_previousVariableCount_24764 = var_extendedVariablesMap_24714.getter_count (SOURCE_FILE ("sara_parser.galgas", 785)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_variableName_24860 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 788)) ;
      {
      var_extendedVariablesMap_24714.setter_insertKey (var_variableName_24860, var_extendedVariablesMap_24714.getter_count (SOURCE_FILE ("sara_parser.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 789)) ;
      }
      if (select_sara_5F_parser_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    GGS_uint var_actualVariableCount_25000 = var_extendedVariablesMap_24714.getter_count (SOURCE_FILE ("sara_parser.galgas", 793)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 794)) ;
    GGS_AC_5F_machineDefinition var_def_25134 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_24714, var_def_25134, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
    outArgument_outDefinition = GGS_C_5F_existsDefinition::init_21__21__21_ (var_previousVariableCount_24764, var_actualVariableCount_25000, var_def_25134, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_M_5F_variablesMap var_extendedVariablesMap_25272 = ioArgument_variablesMap ;
    GGS_uint var_previousVariableCount_25322 = var_extendedVariablesMap_25272.getter_count (SOURCE_FILE ("sara_parser.galgas", 800)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 801)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_variableName_25418 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 803)) ;
      {
      var_extendedVariablesMap_25272.setter_insertKey (var_variableName_25418, var_extendedVariablesMap_25272.getter_count (SOURCE_FILE ("sara_parser.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 804)) ;
      }
      if (select_sara_5F_parser_34 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 806)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_uint var_actualVariableCount_25558 = var_extendedVariablesMap_25272.getter_count (SOURCE_FILE ("sara_parser.galgas", 808)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 809)) ;
    GGS_AC_5F_machineDefinition var_def_25692 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_25272, var_def_25692, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
    outArgument_outDefinition = GGS_C_5F_forallDefinition::init_21__21__21_ (var_previousVariableCount_25322, var_actualVariableCount_25558, var_def_25692, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    GGS_AC_5F_boolExpression var_def_25889 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_25889, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_boolToSeqExpression::init_21_ (var_def_25889, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
    GGS_AC_5F_machineDefinition var_def_26045 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26045, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_fullSaturationOperation::init_21_ (var_def_26045, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    GGS_AC_5F_machineDefinition var_def_26197 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26197, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_complementationOperation::init_21_ (var_def_26197, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 828)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
    GGS_AC_5F_machineDefinition var_def_26357 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26357, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_suppressInitialStatesOperation::init_21_ (var_def_26357, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 835)) ;
    GGS_AC_5F_machineDefinition var_def_26530 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26530, inCompiler) ;
    outArgument_outDefinition = GGS_C_5F_suppressTerminalStatesOperation::init_21_ (var_def_26530, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 840)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
    GGS_M_5F_modesMap var_modeMap_26729 ;
    GGS_ListForModes var_inclusionList_26748 ;
    nt_modalcompadd_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_26729, var_inclusionList_26748, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 847)) ;
    outArgument_outDefinition = GGS_C_5F_additiveModalCompositionComponent::init_21__21_ (var_modeMap_26729, var_inclusionList_26748, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    GGS_M_5F_modesMap var_modeMap_26978 ;
    GGS_ListForModes var_exclusionList_26997 ;
    nt_modalcompsub_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_26978, var_exclusionList_26997, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 857)) ;
    outArgument_outDefinition = GGS_C_5F_substractiveModalCompositionComponent::init_21__21_ (var_modeMap_26978, var_exclusionList_26997, inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 861)) ;
    GGS_AC_5F_boolExpression var_sourceExpression_27201 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_sourceExpression_27201, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 863)) ;
    GGS_AC_5F_boolExpression var_targetExpression_27291 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_targetExpression_27291, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
    outArgument_outDefinition = GGS_C_5F_trans::init_21__21_ (var_sourceExpression_27201, var_targetExpression_27291, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_parse (Lexique_sara_5F_scanner * inCompiler) {
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 780)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 788)) ;
      if (select_sara_5F_parser_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 794)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 801)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 803)) ;
      if (select_sara_5F_parser_34 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 806)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 809)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 828)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 835)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 840)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
    nt_modalcompadd_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 847)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    nt_modalcompsub_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 857)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 861)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 863)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing (Lexique_sara_5F_scanner * inCompiler) {
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 780)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 788)) ;
      if (select_sara_5F_parser_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 794)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 801)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 803)) ;
      if (select_sara_5F_parser_34 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 806)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 809)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 828)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 835)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 840)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
    nt_modalcompadd_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 847)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    nt_modalcompsub_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 857)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 861)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 863)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
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
  GGS_lstring var_machineIdentifier_27645 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  GGS_uint var_indexOfImportedMachine_27730 ;
  GGS_uint var_machineInputVariableCount_27758 ;
  GGS_uint var_machineInputAndInternalVariableCount_27789 ;
  GGS_M_5F_variablesMap var_machineVariablesMap_27831 ;
  GGS_stringlist joker_27851 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_27645, var_indexOfImportedMachine_27730, var_machineInputVariableCount_27758, var_machineInputAndInternalVariableCount_27789, var_machineVariablesMap_27831, joker_27851, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 877)) ;
  GGS_L_5F_translationVector temp_0 = GGS_L_5F_translationVector::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 878)) ;
  GGS_L_5F_translationVector var_translationVector_27861 = temp_0 ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_inputVar_27969 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 882)) ;
    GGS_uint var_inputVarIndex_28017 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_27969, var_inputVarIndex_28017, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 883)) ;
    var_translationVector_27861.addAssign_operation (var_inputVarIndex_28017  COMMA_SOURCE_FILE ("sara_parser.galgas", 884)) ;
    if (select_sara_5F_parser_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
  GGS_uint var_inputVariablesCount_28112 = var_translationVector_27861.getter_count (SOURCE_FILE ("sara_parser.galgas", 889)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_inputVariablesCount_28112.objectCompare (var_machineInputVariableCount_27758)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 891)), GGS_string ("The '$").add_operation (var_machineIdentifier_27645.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (var_machineInputVariableCount_27758.getter_string (SOURCE_FILE ("sara_parser.galgas", 891)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (GGS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (var_inputVariablesCount_28112.getter_string (SOURCE_FILE ("sara_parser.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 892)).add_operation (GGS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 892)), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 891)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      GGS_lstring var_internalVar_28541 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 899)) ;
      GGS_uint var_internalVarIndex_28597 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_28541, var_internalVarIndex_28597, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 900)) ;
      var_translationVector_27861.addAssign_operation (var_internalVarIndex_28597  COMMA_SOURCE_FILE ("sara_parser.galgas", 901)) ;
      if (select_sara_5F_parser_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  GGS_uint var_inputAndInternalVariablesCount_28713 = var_translationVector_27861.getter_count (SOURCE_FILE ("sara_parser.galgas", 907)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_inputAndInternalVariablesCount_28713.objectCompare (var_machineInputAndInternalVariableCount_27789)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 909)), GGS_string ("The '$").add_operation (var_machineIdentifier_27645.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (var_machineInputAndInternalVariableCount_27789.getter_string (SOURCE_FILE ("sara_parser.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (GGS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (var_inputAndInternalVariablesCount_28713.getter_string (SOURCE_FILE ("sara_parser.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 910)).add_operation (GGS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 910)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas", 909)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 913)) ;
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    GGS_lstring var_outputVar_29203 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
    GGS_uint var_outputVarIndex_29253 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_29203, var_outputVarIndex_29253, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 916)) ;
    var_translationVector_27861.addAssign_operation (var_outputVarIndex_29253  COMMA_SOURCE_FILE ("sara_parser.galgas", 917)) ;
    if (select_sara_5F_parser_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 921)) ;
  GGS_uint var_allVariablesCount_29350 = var_translationVector_27861.getter_count (SOURCE_FILE ("sara_parser.galgas", 922)) ;
  GGS_uint var_machineAllVariablesCount_29408 = var_machineVariablesMap_27831.getter_count (SOURCE_FILE ("sara_parser.galgas", 923)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::notEqual, var_allVariablesCount_29350.objectCompare (var_machineAllVariablesCount_29408)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 925)), GGS_string ("The '$").add_operation (var_machineIdentifier_27645.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (GGS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (var_machineAllVariablesCount_29408.getter_string (SOURCE_FILE ("sara_parser.galgas", 925)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (GGS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (var_allVariablesCount_29350.getter_string (SOURCE_FILE ("sara_parser.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 926)).add_operation (GGS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 926)), fixItArray9  COMMA_SOURCE_FILE ("sara_parser.galgas", 925)) ;
    }
  }
  outArgument_outDefinition = GGS_C_5F_importMachine::init_21__21_ (var_indexOfImportedMachine_27730, var_translationVector_27861, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 882)) ;
    if (select_sara_5F_parser_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 899)) ;
      if (select_sara_5F_parser_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 913)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
    if (select_sara_5F_parser_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 921)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 882)) ;
    if (select_sara_5F_parser_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 899)) ;
      if (select_sara_5F_parser_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 913)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
    if (select_sara_5F_parser_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 921)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GGS_semanticContext constinArgument_inSemanticContext,
                                                                             GGS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                             GGS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                             Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GGS_M_5F_stateMap temp_0 = GGS_M_5F_stateMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 939)) ;
  GGS_M_5F_stateMap var_statesMap_30209 = temp_0 ;
  GGS_L_5F_stateDefinition temp_1 = GGS_L_5F_stateDefinition::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 940)) ;
  GGS_L_5F_stateDefinition var_stateDefinitionList_30242 = temp_1 ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 942)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_stateName_30366 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 946)) ;
    {
    var_statesMap_30209.setter_insertKey (var_stateName_30366, var_statesMap_30209.getter_count (SOURCE_FILE ("sara_parser.galgas", 947)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 947)) ;
    }
    if (select_sara_5F_parser_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  GGS_L_5F_statesDefinitionList temp_3 = GGS_L_5F_statesDefinitionList::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 953)) ;
  GGS_L_5F_statesDefinitionList var_initialStatesDefinitionList_30488 = temp_3 ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    GGS_lstring var_initialState_30586 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 956)) ;
    GGS_uint var_initialStateIndex_30643 ;
    var_statesMap_30209.method_searchKey (var_initialState_30586, var_initialStateIndex_30643, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 957)) ;
    var_initialStatesDefinitionList_30488.addAssign_operation (var_initialStateIndex_30643, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 958))  COMMA_SOURCE_FILE ("sara_parser.galgas", 958)) ;
    if (select_sara_5F_parser_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 960)) ;
    }else{
      repeatFlag_4 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 962)) ;
  GGS_L_5F_statesDefinitionList temp_5 = GGS_L_5F_statesDefinitionList::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 964)) ;
  GGS_L_5F_statesDefinitionList var_terminalStatesDefinitionList_30787 = temp_5 ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
    bool repeatFlag_6 = true ;
    while (repeatFlag_6) {
      GGS_lstring var_terminalState_30905 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
      GGS_uint var_terminalStateIndex_30966 ;
      var_statesMap_30209.method_searchKey (var_terminalState_30905, var_terminalStateIndex_30966, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 970)) ;
      var_terminalStatesDefinitionList_30787.addAssign_operation (var_terminalStateIndex_30966, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 971))  COMMA_SOURCE_FILE ("sara_parser.galgas", 971)) ;
      if (select_sara_5F_parser_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 973)) ;
      }else{
        repeatFlag_6 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 975)) ;
  } break ;
  default:
    break ;
  }
  GGS_M_5F_stateMap temp_7 = GGS_M_5F_stateMap::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 978)) ;
  GGS_M_5F_stateMap var_stateDefinitionMap_31138 = temp_7 ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    GGS_lstring var_stateName_31226 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    GGS_uint var_stateIndex_31277 ;
    var_statesMap_30209.method_searchKey (var_stateName_31226, var_stateIndex_31277, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 982)) ;
    {
    var_stateDefinitionMap_31138.setter_defineState (var_stateName_31226, var_stateDefinitionMap_31138.getter_count (SOURCE_FILE ("sara_parser.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 983)) ;
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
    GGS_AC_5F_boolExpression var_stateExpression_31469 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_stateExpression_31469, inCompiler) ;
    GGS_location var_endOfStateExpression_31503 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 987)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    GGS_L_5F_transitionDefinition temp_9 = GGS_L_5F_transitionDefinition::init (inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 990)) ;
    GGS_L_5F_transitionDefinition var_transitionsList_31587 = temp_9 ;
    bool repeatFlag_10 = true ;
    while (repeatFlag_10) {
      if (select_sara_5F_parser_44 (inCompiler) == 2) {
        GGS_AC_5F_boolExpression var_transitionInputExpression_31719 ;
        nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_transitionInputExpression_31719, inCompiler) ;
        GGS_location var_endOfExpression_31765 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 994)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 995)) ;
        GGS_lstring var_targetStateName_31835 = inCompiler->synthetizedAttribute_identifierString () ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 996)) ;
        GGS_uint var_targetStateIndex_31900 ;
        var_statesMap_30209.method_searchKey (var_targetStateName_31835, var_targetStateIndex_31900, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 997)) ;
        var_transitionsList_31587.addAssign_operation (var_transitionInputExpression_31719, var_endOfExpression_31765, var_targetStateIndex_31900  COMMA_SOURCE_FILE ("sara_parser.galgas", 998)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      }else{
        repeatFlag_10 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1001)) ;
    var_stateDefinitionList_30242.addAssign_operation (var_stateIndex_31277, var_stateExpression_31469, var_endOfStateExpression_31503, var_transitionsList_31587  COMMA_SOURCE_FILE ("sara_parser.galgas", 1002)) ;
    if (select_sara_5F_parser_43 (inCompiler) == 2) {
    }else{
      repeatFlag_8 = false ;
    }
  }
  cEnumerator_M_5F_stateMap enumerator_32213 (var_statesMap_30209, EnumerationOrder::up) ;
  while (enumerator_32213.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_stateDefinitionMap_31138.getter_hasKey (enumerator_32213.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("sara_parser.galgas", 1008)).operator_not (SOURCE_FILE ("sara_parser.galgas", 1008)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)), GGS_string ("'").add_operation (enumerator_32213.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)).add_operation (GGS_string ("' state is not described"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)), fixItArray12  COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)) ;
      }
    }
    enumerator_32213.gotoNextObject () ;
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
  outArgument_outDefinition = GGS_C_5F_explicitAutomatonDefinition::init_21__21__21__21__21_ (var_statesMap_30209, var_initialStatesDefinitionList_30488, var_terminalStatesDefinitionList_30787, var_stateDefinitionList_30242, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1014)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_parse (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 942)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 946)) ;
    if (select_sara_5F_parser_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 956)) ;
    if (select_sara_5F_parser_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 960)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 962)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
      if (select_sara_5F_parser_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 973)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 975)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      if (select_sara_5F_parser_44 (inCompiler) == 2) {
        nt_io_5F_bool_5F_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 995)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 996)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1001)) ;
    if (select_sara_5F_parser_43 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_indexing (Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 942)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 946)) ;
    if (select_sara_5F_parser_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 956)) ;
    if (select_sara_5F_parser_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 960)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 962)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
      if (select_sara_5F_parser_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 973)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 975)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      if (select_sara_5F_parser_44 (inCompiler) == 2) {
        nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 995)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 996)) ;
        inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      }else{
        repeatFlag_4 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1001)) ;
    if (select_sara_5F_parser_43 (inCompiler) == 2) {
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::GGS_L_5F_translationVector_2E_element (void) :
mProperty_mTargetSlot () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::~ GGS_L_5F_translationVector_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element GGS_L_5F_translationVector_2E_element::init_21_ (const GGS_uint & in_mTargetSlot,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_translationVector_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetSlot = in_mTargetSlot ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::GGS_L_5F_translationVector_2E_element (const GGS_uint & inOperand0) :
mProperty_mTargetSlot (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element GGS_L_5F_translationVector_2E_element::class_func_new (const GGS_uint & in_mTargetSlot,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_translationVector_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetSlot = in_mTargetSlot ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_translationVector_2E_element::isValid (void) const {
  return mProperty_mTargetSlot.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector_2E_element::drop (void) {
  mProperty_mTargetSlot.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_translationVector_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_translationVector.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetSlot.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_translationVector.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_translationVector_2E_element ("L_translationVector.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_translationVector_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_translationVector_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_translationVector_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element GGS_L_5F_translationVector_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_L_5F_translationVector_2E_element result ;
  const GGS_L_5F_translationVector_2E_element * p = (const GGS_L_5F_translationVector_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_translationVector_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_translationVector.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element::GGS_L_5F_transitionDefinition_2E_element (void) :
mProperty_mActionExpression (),
mProperty_mEndOfExpression (),
mProperty_mTargetStateIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element::~ GGS_L_5F_transitionDefinition_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element GGS_L_5F_transitionDefinition_2E_element::init_21__21__21_ (const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                                                                     const GGS_location & in_mEndOfExpression,
                                                                                                     const GGS_uint & in_mTargetStateIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_transitionDefinition_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActionExpression = in_mActionExpression ;
  result.mProperty_mEndOfExpression = in_mEndOfExpression ;
  result.mProperty_mTargetStateIndex = in_mTargetStateIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element::GGS_L_5F_transitionDefinition_2E_element (const GGS_AC_5F_boolExpression & inOperand0,
                                                                                    const GGS_location & inOperand1,
                                                                                    const GGS_uint & inOperand2) :
mProperty_mActionExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1),
mProperty_mTargetStateIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element GGS_L_5F_transitionDefinition_2E_element::class_func_new (const GGS_AC_5F_boolExpression & in_mActionExpression,
                                                                                                   const GGS_location & in_mEndOfExpression,
                                                                                                   const GGS_uint & in_mTargetStateIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_transitionDefinition_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActionExpression = in_mActionExpression ;
  result.mProperty_mEndOfExpression = in_mEndOfExpression ;
  result.mProperty_mTargetStateIndex = in_mTargetStateIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_transitionDefinition_2E_element::isValid (void) const {
  return mProperty_mActionExpression.isValid () && mProperty_mEndOfExpression.isValid () && mProperty_mTargetStateIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition_2E_element::drop (void) {
  mProperty_mActionExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
  mProperty_mTargetStateIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_transitionDefinition_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_transitionDefinition.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActionExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetStateIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_transitionDefinition.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2E_element ("L_transitionDefinition.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_transitionDefinition_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_transitionDefinition_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_transitionDefinition_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element GGS_L_5F_transitionDefinition_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_L_5F_transitionDefinition_2E_element result ;
  const GGS_L_5F_transitionDefinition_2E_element * p = (const GGS_L_5F_transitionDefinition_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_transitionDefinition_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_transitionDefinition.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element::GGS_L_5F_stateDefinition_2E_element (void) :
mProperty_mStateIndex (),
mProperty_mStateExpression (),
mProperty_mEndOfStateExpression (),
mProperty_mTransitionsList () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element::~ GGS_L_5F_stateDefinition_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element GGS_L_5F_stateDefinition_2E_element::init_21__21__21__21_ (const GGS_uint & in_mStateIndex,
                                                                                               const GGS_AC_5F_boolExpression & in_mStateExpression,
                                                                                               const GGS_location & in_mEndOfStateExpression,
                                                                                               const GGS_L_5F_transitionDefinition & in_mTransitionsList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_stateDefinition_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStateIndex = in_mStateIndex ;
  result.mProperty_mStateExpression = in_mStateExpression ;
  result.mProperty_mEndOfStateExpression = in_mEndOfStateExpression ;
  result.mProperty_mTransitionsList = in_mTransitionsList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element::GGS_L_5F_stateDefinition_2E_element (const GGS_uint & inOperand0,
                                                                          const GGS_AC_5F_boolExpression & inOperand1,
                                                                          const GGS_location & inOperand2,
                                                                          const GGS_L_5F_transitionDefinition & inOperand3) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateExpression (inOperand1),
mProperty_mEndOfStateExpression (inOperand2),
mProperty_mTransitionsList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element GGS_L_5F_stateDefinition_2E_element::class_func_new (const GGS_uint & in_mStateIndex,
                                                                                         const GGS_AC_5F_boolExpression & in_mStateExpression,
                                                                                         const GGS_location & in_mEndOfStateExpression,
                                                                                         const GGS_L_5F_transitionDefinition & in_mTransitionsList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_stateDefinition_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStateIndex = in_mStateIndex ;
  result.mProperty_mStateExpression = in_mStateExpression ;
  result.mProperty_mEndOfStateExpression = in_mEndOfStateExpression ;
  result.mProperty_mTransitionsList = in_mTransitionsList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_stateDefinition_2E_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateExpression.isValid () && mProperty_mEndOfStateExpression.isValid () && mProperty_mTransitionsList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition_2E_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateExpression.drop () ;
  mProperty_mEndOfStateExpression.drop () ;
  mProperty_mTransitionsList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_stateDefinition_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_stateDefinition.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStateIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStateExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfStateExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTransitionsList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_stateDefinition.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition_2E_element ("L_stateDefinition.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_stateDefinition_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_stateDefinition_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_stateDefinition_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element GGS_L_5F_stateDefinition_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_L_5F_stateDefinition_2E_element result ;
  const GGS_L_5F_stateDefinition_2E_element * p = (const GGS_L_5F_stateDefinition_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_stateDefinition_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_stateDefinition.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element::GGS_L_5F_statesDefinitionList_2E_element (void) :
mProperty_mStateIndex (),
mProperty_mStateLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element::~ GGS_L_5F_statesDefinitionList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element GGS_L_5F_statesDefinitionList_2E_element::init_21__21_ (const GGS_uint & in_mStateIndex,
                                                                                                 const GGS_location & in_mStateLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_statesDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStateIndex = in_mStateIndex ;
  result.mProperty_mStateLocation = in_mStateLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element::GGS_L_5F_statesDefinitionList_2E_element (const GGS_uint & inOperand0,
                                                                                    const GGS_location & inOperand1) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element GGS_L_5F_statesDefinitionList_2E_element::class_func_new (const GGS_uint & in_mStateIndex,
                                                                                                   const GGS_location & in_mStateLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_statesDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStateIndex = in_mStateIndex ;
  result.mProperty_mStateLocation = in_mStateLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_statesDefinitionList_2E_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList_2E_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_statesDefinitionList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_statesDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStateIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStateLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_statesDefinitionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2E_element ("L_statesDefinitionList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_statesDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_statesDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_statesDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element GGS_L_5F_statesDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_L_5F_statesDefinitionList_2E_element result ;
  const GGS_L_5F_statesDefinitionList_2E_element * p = (const GGS_L_5F_statesDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_statesDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_statesDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element::GGS_ListForModes_2E_element (void) :
mProperty_mSourceMode (),
mProperty_mTargetMode () {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element::~ GGS_ListForModes_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ListForModes_2E_element GGS_ListForModes_2E_element::init_21__21_ (const GGS_uint & in_mSourceMode,
                                                                       const GGS_uint & in_mTargetMode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ListForModes_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSourceMode = in_mSourceMode ;
  result.mProperty_mTargetMode = in_mTargetMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element::GGS_ListForModes_2E_element (const GGS_uint & inOperand0,
                                                          const GGS_uint & inOperand1) :
mProperty_mSourceMode (inOperand0),
mProperty_mTargetMode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element GGS_ListForModes_2E_element::class_func_new (const GGS_uint & in_mSourceMode,
                                                                         const GGS_uint & in_mTargetMode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ListForModes_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSourceMode = in_mSourceMode ;
  result.mProperty_mTargetMode = in_mTargetMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ListForModes_2E_element::isValid (void) const {
  return mProperty_mSourceMode.isValid () && mProperty_mTargetMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes_2E_element::drop (void) {
  mProperty_mSourceMode.drop () ;
  mProperty_mTargetMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ListForModes_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ListForModes.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSourceMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetMode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ListForModes.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ListForModes_2E_element ("ListForModes.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ListForModes_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ListForModes_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ListForModes_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element GGS_ListForModes_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ListForModes_2E_element result ;
  const GGS_ListForModes_2E_element * p = (const GGS_ListForModes_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ListForModes_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ListForModes.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element::GGS_L_5F_inputConfigurationForScenario_2E_element (void) :
mProperty_mInputValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element::~ GGS_L_5F_inputConfigurationForScenario_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element GGS_L_5F_inputConfigurationForScenario_2E_element::init_21_ (const GGS_luint & in_mInputValue,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputValue = in_mInputValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element::GGS_L_5F_inputConfigurationForScenario_2E_element (const GGS_luint & inOperand0) :
mProperty_mInputValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element GGS_L_5F_inputConfigurationForScenario_2E_element::class_func_new (const GGS_luint & in_mInputValue,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputValue = in_mInputValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_inputConfigurationForScenario_2E_element::isValid (void) const {
  return mProperty_mInputValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario_2E_element::drop (void) {
  mProperty_mInputValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_inputConfigurationForScenario.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_inputConfigurationForScenario.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2E_element ("L_inputConfigurationForScenario.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_inputConfigurationForScenario_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_inputConfigurationForScenario_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_inputConfigurationForScenario_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element GGS_L_5F_inputConfigurationForScenario_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario_2E_element result ;
  const GGS_L_5F_inputConfigurationForScenario_2E_element * p = (const GGS_L_5F_inputConfigurationForScenario_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_inputConfigurationForScenario_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputConfigurationForScenario.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element::GGS_L_5F_inputScenario_2E_element (void) :
mProperty_mInputConfiguration () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element::~ GGS_L_5F_inputScenario_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element GGS_L_5F_inputScenario_2E_element::init_21_ (const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputScenario_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputConfiguration = in_mInputConfiguration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element::GGS_L_5F_inputScenario_2E_element (const GGS_L_5F_inputConfigurationForScenario & inOperand0) :
mProperty_mInputConfiguration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element GGS_L_5F_inputScenario_2E_element::class_func_new (const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputScenario_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputConfiguration = in_mInputConfiguration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_inputScenario_2E_element::isValid (void) const {
  return mProperty_mInputConfiguration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario_2E_element::drop (void) {
  mProperty_mInputConfiguration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_inputScenario.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputConfiguration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_inputScenario.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_inputScenario_2E_element ("L_inputScenario.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_inputScenario_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_inputScenario_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_inputScenario_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element GGS_L_5F_inputScenario_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_L_5F_inputScenario_2E_element result ;
  const GGS_L_5F_inputScenario_2E_element * p = (const GGS_L_5F_inputScenario_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_inputScenario_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_inputScenario.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element::GGS_L_5F_jobList_2E_element (void) :
mProperty_mComponent () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element::~ GGS_L_5F_jobList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_jobList_2E_element GGS_L_5F_jobList_2E_element::init_21_ (const GGS_AC_5F_job & in_mComponent,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_jobList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mComponent = in_mComponent ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element::GGS_L_5F_jobList_2E_element (const GGS_AC_5F_job & inOperand0) :
mProperty_mComponent (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element GGS_L_5F_jobList_2E_element::class_func_new (const GGS_AC_5F_job & in_mComponent,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_jobList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mComponent = in_mComponent ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_jobList_2E_element::isValid (void) const {
  return mProperty_mComponent.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList_2E_element::drop (void) {
  mProperty_mComponent.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_jobList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mComponent.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_jobList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_jobList_2E_element ("L_jobList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_jobList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_jobList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_jobList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element GGS_L_5F_jobList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_L_5F_jobList_2E_element result ;
  const GGS_L_5F_jobList_2E_element * p = (const GGS_L_5F_jobList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_jobList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_jobList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_importBoolMachine reference class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_importBoolMachine::cPtr_C_5F_importBoolMachine (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mIndexOfImportedMachine (),
mProperty_mErrorLocation (),
mProperty_mTranslationVector () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_importBoolMachine::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mIndexOfImportedMachine.printNonNullClassInstanceProperties ("mIndexOfImportedMachine") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mTranslationVector.printNonNullClassInstanceProperties ("mTranslationVector") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_importBoolMachine::objectCompare (const GGS_C_5F_importBoolMachine & inOperand) const {
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

GGS_C_5F_importBoolMachine::GGS_C_5F_importBoolMachine (void) :
GGS_AC_5F_boolExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_importBoolMachine GGS_C_5F_importBoolMachine::
init_21__21__21_ (const GGS_uint & in_mIndexOfImportedMachine,
                  const GGS_location & in_mErrorLocation,
                  const GGS_L_5F_translationVector & in_mTranslationVector,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_importBoolMachine * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_importBoolMachine (inCompiler COMMA_THERE)) ;
  object->C_5F_importBoolMachine_init_21__21__21_ (in_mIndexOfImportedMachine, in_mErrorLocation, in_mTranslationVector, inCompiler) ;
  const GGS_C_5F_importBoolMachine result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_importBoolMachine::
C_5F_importBoolMachine_init_21__21__21_ (const GGS_uint & in_mIndexOfImportedMachine,
                                         const GGS_location & in_mErrorLocation,
                                         const GGS_L_5F_translationVector & in_mTranslationVector,
                                         Compiler * /* inCompiler */) {
  mProperty_mIndexOfImportedMachine = in_mIndexOfImportedMachine ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mTranslationVector = in_mTranslationVector ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine::GGS_C_5F_importBoolMachine (const cPtr_C_5F_importBoolMachine * inSourcePtr) :
GGS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importBoolMachine) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine GGS_C_5F_importBoolMachine::class_func_new (const GGS_uint & in_mIndexOfImportedMachine,
                                                                       const GGS_location & in_mErrorLocation,
                                                                       const GGS_L_5F_translationVector & in_mTranslationVector
                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_importBoolMachine result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_importBoolMachine (in_mIndexOfImportedMachine, in_mErrorLocation, in_mTranslationVector COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_importBoolMachine::readProperty_mIndexOfImportedMachine (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    return p->mProperty_mIndexOfImportedMachine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_importBoolMachine::setProperty_mIndexOfImportedMachine (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    p->mProperty_mIndexOfImportedMachine = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_C_5F_importBoolMachine::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_importBoolMachine::setProperty_mErrorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector GGS_C_5F_importBoolMachine::readProperty_mTranslationVector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_L_5F_translationVector () ;
  }else{
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    return p->mProperty_mTranslationVector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_importBoolMachine::setProperty_mTranslationVector (const GGS_L_5F_translationVector & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_importBoolMachine * p = (cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    p->mProperty_mTranslationVector = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_importBoolMachine class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_importBoolMachine::cPtr_C_5F_importBoolMachine (const GGS_uint & in_mIndexOfImportedMachine,
                                                          const GGS_location & in_mErrorLocation,
                                                          const GGS_L_5F_translationVector & in_mTranslationVector
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mIndexOfImportedMachine (),
mProperty_mErrorLocation (),
mProperty_mTranslationVector () {
  mProperty_mIndexOfImportedMachine = in_mIndexOfImportedMachine ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mTranslationVector = in_mTranslationVector ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_importBoolMachine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;
}

void cPtr_C_5F_importBoolMachine::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@C_importBoolMachine:") ;
  mProperty_mIndexOfImportedMachine.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTranslationVector.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_importBoolMachine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_importBoolMachine (mProperty_mIndexOfImportedMachine, mProperty_mErrorLocation, mProperty_mTranslationVector COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @C_importBoolMachine generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine ("C_importBoolMachine",
                                                                              & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_importBoolMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_importBoolMachine::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_importBoolMachine (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_importBoolMachine GGS_C_5F_importBoolMachine::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_importBoolMachine result ;
  const GGS_C_5F_importBoolMachine * p = (const GGS_C_5F_importBoolMachine *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_importBoolMachine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importBoolMachine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineCheck reference class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineCheck::cPtr_C_5F_machineCheck (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex (),
mProperty_mCheckMachineIsBoolean () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineCheck::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
    mProperty_mCheckMachineIsBoolean.printNonNullClassInstanceProperties ("mCheckMachineIsBoolean") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineCheck::objectCompare (const GGS_C_5F_machineCheck & inOperand) const {
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

GGS_C_5F_machineCheck::GGS_C_5F_machineCheck (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineCheck GGS_C_5F_machineCheck::
init_21__21_ (const GGS_uint & in_mMachineIndex,
              const GGS_bool & in_mCheckMachineIsBoolean,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineCheck * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineCheck (inCompiler COMMA_THERE)) ;
  object->C_5F_machineCheck_init_21__21_ (in_mMachineIndex, in_mCheckMachineIsBoolean, inCompiler) ;
  const GGS_C_5F_machineCheck result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineCheck::
C_5F_machineCheck_init_21__21_ (const GGS_uint & in_mMachineIndex,
                                const GGS_bool & in_mCheckMachineIsBoolean,
                                Compiler * /* inCompiler */) {
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mCheckMachineIsBoolean = in_mCheckMachineIsBoolean ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck::GGS_C_5F_machineCheck (const cPtr_C_5F_machineCheck * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheck) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck GGS_C_5F_machineCheck::class_func_new (const GGS_uint & in_mMachineIndex,
                                                             const GGS_bool & in_mCheckMachineIsBoolean
                                                             COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineCheck result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheck (in_mMachineIndex, in_mCheckMachineIsBoolean COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineCheck::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineCheck::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_C_5F_machineCheck::readProperty_mCheckMachineIsBoolean (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    return p->mProperty_mCheckMachineIsBoolean ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineCheck::setProperty_mCheckMachineIsBoolean (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    p->mProperty_mCheckMachineIsBoolean = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineCheck class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineCheck::cPtr_C_5F_machineCheck (const GGS_uint & in_mMachineIndex,
                                                const GGS_bool & in_mCheckMachineIsBoolean
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (),
mProperty_mCheckMachineIsBoolean () {
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mCheckMachineIsBoolean = in_mCheckMachineIsBoolean ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineCheck::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck ;
}

void cPtr_C_5F_machineCheck::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineCheck:") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCheckMachineIsBoolean.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineCheck::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineCheck (mProperty_mMachineIndex, mProperty_mCheckMachineIsBoolean COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @C_machineCheck generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineCheck ("C_machineCheck",
                                                                         & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineCheck::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineCheck::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineCheck (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineCheck GGS_C_5F_machineCheck::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineCheck result ;
  const GGS_C_5F_machineCheck * p = (const GGS_C_5F_machineCheck *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineCheck *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineCheck", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineComponent reference class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineComponent::cPtr_C_5F_machineComponent (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineName (),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mNameList (),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineComponent::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineName.printNonNullClassInstanceProperties ("mMachineName") ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
    mProperty_mInputVariableCount.printNonNullClassInstanceProperties ("mInputVariableCount") ;
    mProperty_mInputAndInternalVariableCount.printNonNullClassInstanceProperties ("mInputAndInternalVariableCount") ;
    mProperty_mVariablesMap.printNonNullClassInstanceProperties ("mVariablesMap") ;
    mProperty_mNameList.printNonNullClassInstanceProperties ("mNameList") ;
    mProperty_mDefinition.printNonNullClassInstanceProperties ("mDefinition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineComponent::objectCompare (const GGS_C_5F_machineComponent & inOperand) const {
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

GGS_C_5F_machineComponent::GGS_C_5F_machineComponent (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineComponent GGS_C_5F_machineComponent::
init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mMachineName,
                                  const GGS_uint & in_mMachineIndex,
                                  const GGS_uint & in_mInputVariableCount,
                                  const GGS_uint & in_mInputAndInternalVariableCount,
                                  const GGS_M_5F_variablesMap & in_mVariablesMap,
                                  const GGS_stringlist & in_mNameList,
                                  const GGS_AC_5F_machineDefinition & in_mDefinition,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineComponent * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineComponent (inCompiler COMMA_THERE)) ;
  object->C_5F_machineComponent_init_21__21__21__21__21__21__21_ (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mNameList, in_mDefinition, inCompiler) ;
  const GGS_C_5F_machineComponent result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineComponent::
C_5F_machineComponent_init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mMachineName,
                                                        const GGS_uint & in_mMachineIndex,
                                                        const GGS_uint & in_mInputVariableCount,
                                                        const GGS_uint & in_mInputAndInternalVariableCount,
                                                        const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                        const GGS_stringlist & in_mNameList,
                                                        const GGS_AC_5F_machineDefinition & in_mDefinition,
                                                        Compiler * /* inCompiler */) {
  mProperty_mMachineName = in_mMachineName ;
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mNameList = in_mNameList ;
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent::GGS_C_5F_machineComponent (const cPtr_C_5F_machineComponent * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineComponent) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent GGS_C_5F_machineComponent::class_func_new (const GGS_lstring & in_mMachineName,
                                                                     const GGS_uint & in_mMachineIndex,
                                                                     const GGS_uint & in_mInputVariableCount,
                                                                     const GGS_uint & in_mInputAndInternalVariableCount,
                                                                     const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                     const GGS_stringlist & in_mNameList,
                                                                     const GGS_AC_5F_machineDefinition & in_mDefinition
                                                                     COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineComponent result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineComponent (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mNameList, in_mDefinition COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_C_5F_machineComponent::readProperty_mMachineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mMachineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineComponent::setProperty_mMachineName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mMachineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineComponent::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineComponent::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineComponent::readProperty_mInputVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineComponent::setProperty_mInputVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineComponent::readProperty_mInputAndInternalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineComponent::setProperty_mInputAndInternalVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_C_5F_machineComponent::readProperty_mVariablesMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mVariablesMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineComponent::setProperty_mVariablesMap (const GGS_M_5F_variablesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_C_5F_machineComponent::readProperty_mNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineComponent::setProperty_mNameList (const GGS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mNameList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_machineDefinition GGS_C_5F_machineComponent::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_AC_5F_machineDefinition () ;
  }else{
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineComponent::setProperty_mDefinition (const GGS_AC_5F_machineDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineComponent class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineComponent::cPtr_C_5F_machineComponent (const GGS_lstring & in_mMachineName,
                                                        const GGS_uint & in_mMachineIndex,
                                                        const GGS_uint & in_mInputVariableCount,
                                                        const GGS_uint & in_mInputAndInternalVariableCount,
                                                        const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                        const GGS_stringlist & in_mNameList,
                                                        const GGS_AC_5F_machineDefinition & in_mDefinition
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineName (),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mNameList (),
mProperty_mDefinition () {
  mProperty_mMachineName = in_mMachineName ;
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mNameList = in_mNameList ;
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent ;
}

void cPtr_C_5F_machineComponent::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineComponent:") ;
  mProperty_mMachineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineComponent (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mNameList, mProperty_mDefinition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @C_machineComponent generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineComponent ("C_machineComponent",
                                                                             & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineComponent::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineComponent (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineComponent GGS_C_5F_machineComponent::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineComponent result ;
  const GGS_C_5F_machineComponent * p = (const GGS_C_5F_machineComponent *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineDefinedByAdditiveModalComp reference class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDefinedByAdditiveModalComp::cPtr_C_5F_machineDefinedByAdditiveModalComp (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineName (),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mModeMap (),
mProperty_mInclusionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDefinedByAdditiveModalComp::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineName.printNonNullClassInstanceProperties ("mMachineName") ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
    mProperty_mInputVariableCount.printNonNullClassInstanceProperties ("mInputVariableCount") ;
    mProperty_mInputAndInternalVariableCount.printNonNullClassInstanceProperties ("mInputAndInternalVariableCount") ;
    mProperty_mVariablesMap.printNonNullClassInstanceProperties ("mVariablesMap") ;
    mProperty_mModeMap.printNonNullClassInstanceProperties ("mModeMap") ;
    mProperty_mInclusionList.printNonNullClassInstanceProperties ("mInclusionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDefinedByAdditiveModalComp::objectCompare (const GGS_C_5F_machineDefinedByAdditiveModalComp & inOperand) const {
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

GGS_C_5F_machineDefinedByAdditiveModalComp::GGS_C_5F_machineDefinedByAdditiveModalComp (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp GGS_C_5F_machineDefinedByAdditiveModalComp::
init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mMachineName,
                                  const GGS_uint & in_mMachineIndex,
                                  const GGS_uint & in_mInputVariableCount,
                                  const GGS_uint & in_mInputAndInternalVariableCount,
                                  const GGS_M_5F_variablesMap & in_mVariablesMap,
                                  const GGS_M_5F_modesMap & in_mModeMap,
                                  const GGS_ListForModes & in_mInclusionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineDefinedByAdditiveModalComp * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineDefinedByAdditiveModalComp (inCompiler COMMA_THERE)) ;
  object->C_5F_machineDefinedByAdditiveModalComp_init_21__21__21__21__21__21__21_ (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mModeMap, in_mInclusionList, inCompiler) ;
  const GGS_C_5F_machineDefinedByAdditiveModalComp result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineDefinedByAdditiveModalComp::
C_5F_machineDefinedByAdditiveModalComp_init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mMachineName,
                                                                         const GGS_uint & in_mMachineIndex,
                                                                         const GGS_uint & in_mInputVariableCount,
                                                                         const GGS_uint & in_mInputAndInternalVariableCount,
                                                                         const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                         const GGS_M_5F_modesMap & in_mModeMap,
                                                                         const GGS_ListForModes & in_mInclusionList,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mMachineName = in_mMachineName ;
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mInclusionList = in_mInclusionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp::GGS_C_5F_machineDefinedByAdditiveModalComp (const cPtr_C_5F_machineDefinedByAdditiveModalComp * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp GGS_C_5F_machineDefinedByAdditiveModalComp::class_func_new (const GGS_lstring & in_mMachineName,
                                                                                                       const GGS_uint & in_mMachineIndex,
                                                                                                       const GGS_uint & in_mInputVariableCount,
                                                                                                       const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                                       const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                                       const GGS_M_5F_modesMap & in_mModeMap,
                                                                                                       const GGS_ListForModes & in_mInclusionList
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedByAdditiveModalComp result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDefinedByAdditiveModalComp (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mModeMap, in_mInclusionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mMachineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mMachineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedByAdditiveModalComp::setProperty_mMachineName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mMachineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedByAdditiveModalComp::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mInputVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedByAdditiveModalComp::setProperty_mInputVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mInputAndInternalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedByAdditiveModalComp::setProperty_mInputAndInternalVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mVariablesMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mVariablesMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedByAdditiveModalComp::setProperty_mVariablesMap (const GGS_M_5F_variablesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mModeMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mModeMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedByAdditiveModalComp::setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_C_5F_machineDefinedByAdditiveModalComp::readProperty_mInclusionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ListForModes () ;
  }else{
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    return p->mProperty_mInclusionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedByAdditiveModalComp::setProperty_mInclusionList (const GGS_ListForModes & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    p->mProperty_mInclusionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDefinedByAdditiveModalComp class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDefinedByAdditiveModalComp::cPtr_C_5F_machineDefinedByAdditiveModalComp (const GGS_lstring & in_mMachineName,
                                                                                          const GGS_uint & in_mMachineIndex,
                                                                                          const GGS_uint & in_mInputVariableCount,
                                                                                          const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                          const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                          const GGS_M_5F_modesMap & in_mModeMap,
                                                                                          const GGS_ListForModes & in_mInclusionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineName (),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mModeMap (),
mProperty_mInclusionList () {
  mProperty_mMachineName = in_mMachineName ;
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mInclusionList = in_mInclusionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDefinedByAdditiveModalComp::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;
}

void cPtr_C_5F_machineDefinedByAdditiveModalComp::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineDefinedByAdditiveModalComp:") ;
  mProperty_mMachineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInclusionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDefinedByAdditiveModalComp::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedByAdditiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mInclusionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @C_machineDefinedByAdditiveModalComp generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ("C_machineDefinedByAdditiveModalComp",
                                                                                              & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDefinedByAdditiveModalComp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDefinedByAdditiveModalComp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDefinedByAdditiveModalComp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedByAdditiveModalComp GGS_C_5F_machineDefinedByAdditiveModalComp::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedByAdditiveModalComp result ;
  const GGS_C_5F_machineDefinedByAdditiveModalComp * p = (const GGS_C_5F_machineDefinedByAdditiveModalComp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDefinedByAdditiveModalComp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedByAdditiveModalComp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_machineDefinedBySubstractiveModalComp reference class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDefinedBySubstractiveModalComp::cPtr_C_5F_machineDefinedBySubstractiveModalComp (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineName (),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mModeMap (),
mProperty_mExclusionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineDefinedBySubstractiveModalComp::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineName.printNonNullClassInstanceProperties ("mMachineName") ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
    mProperty_mInputVariableCount.printNonNullClassInstanceProperties ("mInputVariableCount") ;
    mProperty_mInputAndInternalVariableCount.printNonNullClassInstanceProperties ("mInputAndInternalVariableCount") ;
    mProperty_mVariablesMap.printNonNullClassInstanceProperties ("mVariablesMap") ;
    mProperty_mModeMap.printNonNullClassInstanceProperties ("mModeMap") ;
    mProperty_mExclusionList.printNonNullClassInstanceProperties ("mExclusionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_machineDefinedBySubstractiveModalComp::objectCompare (const GGS_C_5F_machineDefinedBySubstractiveModalComp & inOperand) const {
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

GGS_C_5F_machineDefinedBySubstractiveModalComp::GGS_C_5F_machineDefinedBySubstractiveModalComp (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp GGS_C_5F_machineDefinedBySubstractiveModalComp::
init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mMachineName,
                                  const GGS_uint & in_mMachineIndex,
                                  const GGS_uint & in_mInputVariableCount,
                                  const GGS_uint & in_mInputAndInternalVariableCount,
                                  const GGS_M_5F_variablesMap & in_mVariablesMap,
                                  const GGS_M_5F_modesMap & in_mModeMap,
                                  const GGS_ListForModes & in_mExclusionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_C_5F_machineDefinedBySubstractiveModalComp * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_machineDefinedBySubstractiveModalComp (inCompiler COMMA_THERE)) ;
  object->C_5F_machineDefinedBySubstractiveModalComp_init_21__21__21__21__21__21__21_ (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mModeMap, in_mExclusionList, inCompiler) ;
  const GGS_C_5F_machineDefinedBySubstractiveModalComp result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_machineDefinedBySubstractiveModalComp::
C_5F_machineDefinedBySubstractiveModalComp_init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mMachineName,
                                                                             const GGS_uint & in_mMachineIndex,
                                                                             const GGS_uint & in_mInputVariableCount,
                                                                             const GGS_uint & in_mInputAndInternalVariableCount,
                                                                             const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                             const GGS_M_5F_modesMap & in_mModeMap,
                                                                             const GGS_ListForModes & in_mExclusionList,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mMachineName = in_mMachineName ;
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mExclusionList = in_mExclusionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp::GGS_C_5F_machineDefinedBySubstractiveModalComp (const cPtr_C_5F_machineDefinedBySubstractiveModalComp * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp GGS_C_5F_machineDefinedBySubstractiveModalComp::class_func_new (const GGS_lstring & in_mMachineName,
                                                                                                               const GGS_uint & in_mMachineIndex,
                                                                                                               const GGS_uint & in_mInputVariableCount,
                                                                                                               const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                                               const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                                               const GGS_M_5F_modesMap & in_mModeMap,
                                                                                                               const GGS_ListForModes & in_mExclusionList
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedBySubstractiveModalComp result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mModeMap, in_mExclusionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mMachineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mMachineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedBySubstractiveModalComp::setProperty_mMachineName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mMachineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedBySubstractiveModalComp::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mInputVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedBySubstractiveModalComp::setProperty_mInputVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mInputAndInternalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedBySubstractiveModalComp::setProperty_mInputAndInternalVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mVariablesMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mVariablesMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedBySubstractiveModalComp::setProperty_mVariablesMap (const GGS_M_5F_variablesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap GGS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mModeMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_modesMap () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mModeMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedBySubstractiveModalComp::setProperty_mModeMap (const GGS_M_5F_modesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mModeMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes GGS_C_5F_machineDefinedBySubstractiveModalComp::readProperty_mExclusionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ListForModes () ;
  }else{
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    return p->mProperty_mExclusionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_machineDefinedBySubstractiveModalComp::setProperty_mExclusionList (const GGS_ListForModes & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    p->mProperty_mExclusionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_machineDefinedBySubstractiveModalComp class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineDefinedBySubstractiveModalComp::cPtr_C_5F_machineDefinedBySubstractiveModalComp (const GGS_lstring & in_mMachineName,
                                                                                                  const GGS_uint & in_mMachineIndex,
                                                                                                  const GGS_uint & in_mInputVariableCount,
                                                                                                  const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                                  const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                                  const GGS_M_5F_modesMap & in_mModeMap,
                                                                                                  const GGS_ListForModes & in_mExclusionList
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineName (),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mModeMap (),
mProperty_mExclusionList () {
  mProperty_mMachineName = in_mMachineName ;
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mModeMap = in_mModeMap ;
  mProperty_mExclusionList = in_mExclusionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_machineDefinedBySubstractiveModalComp::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;
}

void cPtr_C_5F_machineDefinedBySubstractiveModalComp::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@C_machineDefinedBySubstractiveModalComp:") ;
  mProperty_mMachineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModeMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExclusionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_machineDefinedBySubstractiveModalComp::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedBySubstractiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mExclusionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @C_machineDefinedBySubstractiveModalComp generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ("C_machineDefinedBySubstractiveModalComp",
                                                                                                  & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_C_5F_machineDefinedBySubstractiveModalComp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_machineDefinedBySubstractiveModalComp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_machineDefinedBySubstractiveModalComp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_machineDefinedBySubstractiveModalComp GGS_C_5F_machineDefinedBySubstractiveModalComp::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedBySubstractiveModalComp result ;
  const GGS_C_5F_machineDefinedBySubstractiveModalComp * p = (const GGS_C_5F_machineDefinedBySubstractiveModalComp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_machineDefinedBySubstractiveModalComp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDefinedBySubstractiveModalComp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_sara_grammar [] = {
// At index 0 : <start_symbol>, in file 'sara_parser.ggs', line 11
  TOP_DOWN_NONTERMINAL (1) // <component>
, TOP_DOWN_NONTERMINAL (11) // <select_sara_5F_parser_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 3 : <component>, in file 'sara_parser.ggs', line 25
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 8 : <component>, in file 'sara_parser.ggs', line 41
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 13 : <component>, in file 'sara_parser.ggs', line 57
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_first) // $first$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 19 : <component>, in file 'sara_parser.ggs', line 74
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_last) // $last$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_display) // $display$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 25 : <component>, in file 'sara_parser.ggs', line 91
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_check) // $check$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 29 : <component>, in file 'sara_parser.ggs', line 106
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_checkidentical) // $checkidentical$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 35 : <component>, in file 'sara_parser.ggs', line 125
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_checkbool) // $checkbool$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 39 : <component>, in file 'sara_parser.ggs', line 205
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_bdd) // $bdd$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 42 : <component>, in file 'sara_parser.ggs', line 215
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_sara_5F_parser_1>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (13) // <select_sara_5F_parser_2>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (15) // <select_sara_5F_parser_4>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 58 : <component>, in file 'sara_parser.ggs', line 277
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (16) // <select_sara_5F_parser_5>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (17) // <select_sara_5F_parser_6>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (19) // <select_sara_5F_parser_8>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, TOP_DOWN_NONTERMINAL (7) // <modalcompadd_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 75 : <component>, in file 'sara_parser.ggs', line 344
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (20) // <select_sara_5F_parser_9>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (21) // <select_sara_5F_parser_10>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (23) // <select_sara_5F_parser_12>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A__3D_) // $:=$
, TOP_DOWN_NONTERMINAL (8) // <modalcompsub_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 92 : <component>, in file 'sara_parser.ggs', line 409
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_scenario) // $scenario$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (24) // <select_sara_5F_parser_13>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (25) // <select_sara_5F_parser_14>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (27) // <select_sara_5F_parser_16>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_NONTERMINAL (29) // <select_sara_5F_parser_18>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (28) // <select_sara_5F_parser_17>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 115 : <io_bool_expression>, in file 'sara_parser.ggs', line 500
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 118 : <io_and_expression>, in file 'sara_parser.ggs', line 527
, TOP_DOWN_NONTERMINAL (4) // <io_primary>
, TOP_DOWN_NONTERMINAL (32) // <select_sara_5F_parser_21>
, TOP_DOWN_END_PRODUCTION ()
// At index 121 : <io_primary>, in file 'sara_parser.ggs', line 542
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 125 : <io_primary>, in file 'sara_parser.ggs', line 553
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_END_PRODUCTION ()
// At index 127 : <io_primary>, in file 'sara_parser.ggs', line 564
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7E_) // $~$
, TOP_DOWN_NONTERMINAL (4) // <io_primary>
, TOP_DOWN_END_PRODUCTION ()
// At index 130 : <io_primary>, in file 'sara_parser.ggs', line 575
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_false) // $false$
, TOP_DOWN_END_PRODUCTION ()
// At index 132 : <io_primary>, in file 'sara_parser.ggs', line 585
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_true) // $true$
, TOP_DOWN_END_PRODUCTION ()
// At index 134 : <io_primary>, in file 'sara_parser.ggs', line 595
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (33) // <select_sara_5F_parser_22>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (34) // <select_sara_5F_parser_23>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (36) // <select_sara_5F_parser_25>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 147 : <definition_expression>, in file 'sara_parser.ggs', line 661
, TOP_DOWN_NONTERMINAL (6) // <definition_expression_term>
, TOP_DOWN_NONTERMINAL (37) // <select_sara_5F_parser_26>
, TOP_DOWN_END_PRODUCTION ()
// At index 150 : <definition_expression_term>, in file 'sara_parser.ggs', line 677
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 153 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 705
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (39) // <select_sara_5F_parser_28>
, TOP_DOWN_NONTERMINAL (40) // <select_sara_5F_parser_29>
, TOP_DOWN_END_PRODUCTION ()
// At index 160 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 739
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (41) // <select_sara_5F_parser_30>
, TOP_DOWN_NONTERMINAL (42) // <select_sara_5F_parser_31>
, TOP_DOWN_END_PRODUCTION ()
// At index 167 : <definition_expression_factor>, in file 'sara_parser.ggs', line 773
, TOP_DOWN_NONTERMINAL (43) // <select_sara_5F_parser_32>
, TOP_DOWN_END_PRODUCTION ()
// At index 169 : <definition_expression_factor>, in file 'sara_parser.ggs', line 872
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (46) // <select_sara_5F_parser_35>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (47) // <select_sara_5F_parser_36>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (49) // <select_sara_5F_parser_38>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 182 : <explicit_automaton>, in file 'sara_parser.ggs', line 935
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_auto) // $auto$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_state) // $state$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (50) // <select_sara_5F_parser_39>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_first) // $first$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (51) // <select_sara_5F_parser_40>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (52) // <select_sara_5F_parser_41>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (55) // <select_sara_5F_parser_44>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_NONTERMINAL (54) // <select_sara_5F_parser_43>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 202 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, TOP_DOWN_END_PRODUCTION ()
// At index 203 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, TOP_DOWN_NONTERMINAL (1) // <component>
, TOP_DOWN_NONTERMINAL (11) // <select_sara_5F_parser_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 206 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 223
, TOP_DOWN_END_PRODUCTION ()
// At index 207 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 223
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_sara_5F_parser_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 211 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 234
, TOP_DOWN_END_PRODUCTION ()
// At index 212 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 234
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (14) // <select_sara_5F_parser_3>
, TOP_DOWN_END_PRODUCTION ()
// At index 215 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 236
, TOP_DOWN_END_PRODUCTION ()
// At index 216 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 236
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (14) // <select_sara_5F_parser_3>
, TOP_DOWN_END_PRODUCTION ()
// At index 220 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 248
, TOP_DOWN_END_PRODUCTION ()
// At index 221 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 248
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (15) // <select_sara_5F_parser_4>
, TOP_DOWN_END_PRODUCTION ()
// At index 225 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 286
, TOP_DOWN_END_PRODUCTION ()
// At index 226 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 286
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (16) // <select_sara_5F_parser_5>
, TOP_DOWN_END_PRODUCTION ()
// At index 230 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 297
, TOP_DOWN_END_PRODUCTION ()
// At index 231 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 297
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (18) // <select_sara_5F_parser_7>
, TOP_DOWN_END_PRODUCTION ()
// At index 234 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 299
, TOP_DOWN_END_PRODUCTION ()
// At index 235 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 299
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (18) // <select_sara_5F_parser_7>
, TOP_DOWN_END_PRODUCTION ()
// At index 239 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 311
, TOP_DOWN_END_PRODUCTION ()
// At index 240 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 311
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (19) // <select_sara_5F_parser_8>
, TOP_DOWN_END_PRODUCTION ()
// At index 244 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 353
, TOP_DOWN_END_PRODUCTION ()
// At index 245 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 353
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (20) // <select_sara_5F_parser_9>
, TOP_DOWN_END_PRODUCTION ()
// At index 249 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 364
, TOP_DOWN_END_PRODUCTION ()
// At index 250 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 364
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (22) // <select_sara_5F_parser_11>
, TOP_DOWN_END_PRODUCTION ()
// At index 253 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 366
, TOP_DOWN_END_PRODUCTION ()
// At index 254 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 366
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (22) // <select_sara_5F_parser_11>
, TOP_DOWN_END_PRODUCTION ()
// At index 258 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 378
, TOP_DOWN_END_PRODUCTION ()
// At index 259 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 378
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (23) // <select_sara_5F_parser_12>
, TOP_DOWN_END_PRODUCTION ()
// At index 263 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 418
, TOP_DOWN_END_PRODUCTION ()
// At index 264 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 418
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (24) // <select_sara_5F_parser_13>
, TOP_DOWN_END_PRODUCTION ()
// At index 268 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 433
, TOP_DOWN_END_PRODUCTION ()
// At index 269 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 433
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (26) // <select_sara_5F_parser_15>
, TOP_DOWN_END_PRODUCTION ()
// At index 272 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 435
, TOP_DOWN_END_PRODUCTION ()
// At index 273 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 435
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (26) // <select_sara_5F_parser_15>
, TOP_DOWN_END_PRODUCTION ()
// At index 277 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 451
, TOP_DOWN_END_PRODUCTION ()
// At index 278 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 451
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (27) // <select_sara_5F_parser_16>
, TOP_DOWN_END_PRODUCTION ()
// At index 282 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 467
, TOP_DOWN_END_PRODUCTION ()
// At index 283 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 467
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_NONTERMINAL (29) // <select_sara_5F_parser_18>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (28) // <select_sara_5F_parser_17>
, TOP_DOWN_END_PRODUCTION ()
// At index 291 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 470
, TOP_DOWN_END_PRODUCTION ()
// At index 292 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 470
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_NONTERMINAL (29) // <select_sara_5F_parser_18>
, TOP_DOWN_END_PRODUCTION ()
// At index 297 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 473
, TOP_DOWN_END_PRODUCTION ()
// At index 298 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 473
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TOP_DOWN_NONTERMINAL (30) // <select_sara_5F_parser_19>
, TOP_DOWN_END_PRODUCTION ()
// At index 302 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TOP_DOWN_END_PRODUCTION ()
// At index 303 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7C_) // $|$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 307 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__5E_) // $^$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 311 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2D__3E_) // $->$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 315 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3D_) // $=$
, TOP_DOWN_NONTERMINAL (3) // <io_and_expression>
, TOP_DOWN_NONTERMINAL (31) // <select_sara_5F_parser_20>
, TOP_DOWN_END_PRODUCTION ()
// At index 319 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 532
, TOP_DOWN_END_PRODUCTION ()
// At index 320 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 532
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__26_) // $&$
, TOP_DOWN_NONTERMINAL (4) // <io_primary>
, TOP_DOWN_NONTERMINAL (32) // <select_sara_5F_parser_21>
, TOP_DOWN_END_PRODUCTION ()
// At index 324 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 604
, TOP_DOWN_END_PRODUCTION ()
// At index 325 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 604
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (33) // <select_sara_5F_parser_22>
, TOP_DOWN_END_PRODUCTION ()
// At index 329 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 619
, TOP_DOWN_END_PRODUCTION ()
// At index 330 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 619
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (35) // <select_sara_5F_parser_24>
, TOP_DOWN_END_PRODUCTION ()
// At index 333 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 621
, TOP_DOWN_END_PRODUCTION ()
// At index 334 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 621
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (35) // <select_sara_5F_parser_24>
, TOP_DOWN_END_PRODUCTION ()
// At index 338 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 637
, TOP_DOWN_END_PRODUCTION ()
// At index 339 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 637
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (36) // <select_sara_5F_parser_25>
, TOP_DOWN_END_PRODUCTION ()
// At index 343 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 666
, TOP_DOWN_END_PRODUCTION ()
// At index 344 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 666
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2B_) // $+$
, TOP_DOWN_NONTERMINAL (6) // <definition_expression_term>
, TOP_DOWN_NONTERMINAL (37) // <select_sara_5F_parser_26>
, TOP_DOWN_END_PRODUCTION ()
// At index 348 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, TOP_DOWN_END_PRODUCTION ()
// At index 349 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2A_) // $*$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 353 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2A__2A_) // $**$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 357 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7C__7C_) // $||$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_NONTERMINAL (38) // <select_sara_5F_parser_27>
, TOP_DOWN_END_PRODUCTION ()
// At index 361 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 712
, TOP_DOWN_END_PRODUCTION ()
// At index 362 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 712
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (39) // <select_sara_5F_parser_28>
, TOP_DOWN_END_PRODUCTION ()
// At index 368 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 720
, TOP_DOWN_END_PRODUCTION ()
// At index 369 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 720
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_include) // $include$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (40) // <select_sara_5F_parser_29>
, TOP_DOWN_END_PRODUCTION ()
// At index 376 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 746
, TOP_DOWN_END_PRODUCTION ()
// At index 377 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 746
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (41) // <select_sara_5F_parser_30>
, TOP_DOWN_END_PRODUCTION ()
// At index 383 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 754
, TOP_DOWN_END_PRODUCTION ()
// At index 384 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 754
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_exclude) // $exclude$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (42) // <select_sara_5F_parser_31>
, TOP_DOWN_END_PRODUCTION ()
// At index 391 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_NONTERMINAL (10) // <explicit_automaton>
, TOP_DOWN_END_PRODUCTION ()
// At index 393 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 397 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3F_) // $?$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (44) // <select_sara_5F_parser_33>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 404 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__21_) // $!$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (45) // <select_sara_5F_parser_34>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 411 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_bool) // $bool$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 416 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__40_) // $@$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_END_PRODUCTION ()
// At index 419 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7E_) // $~$
, TOP_DOWN_NONTERMINAL (9) // <definition_expression_factor>
, TOP_DOWN_END_PRODUCTION ()
// At index 422 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_nofirst) // $nofirst$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 427 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_nolast) // $nolast$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (5) // <definition_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 432 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (7) // <modalcompadd_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 437 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (8) // <modalcompsub_definition>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 442 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_to) // $to$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 449 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 787
, TOP_DOWN_END_PRODUCTION ()
// At index 450 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 787
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (44) // <select_sara_5F_parser_33>
, TOP_DOWN_END_PRODUCTION ()
// At index 454 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 802
, TOP_DOWN_END_PRODUCTION ()
// At index 455 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 802
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (45) // <select_sara_5F_parser_34>
, TOP_DOWN_END_PRODUCTION ()
// At index 459 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 881
, TOP_DOWN_END_PRODUCTION ()
// At index 460 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 881
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (46) // <select_sara_5F_parser_35>
, TOP_DOWN_END_PRODUCTION ()
// At index 464 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 896
, TOP_DOWN_END_PRODUCTION ()
// At index 465 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 896
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (48) // <select_sara_5F_parser_37>
, TOP_DOWN_END_PRODUCTION ()
// At index 468 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 898
, TOP_DOWN_END_PRODUCTION ()
// At index 469 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 898
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (48) // <select_sara_5F_parser_37>
, TOP_DOWN_END_PRODUCTION ()
// At index 473 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 914
, TOP_DOWN_END_PRODUCTION ()
// At index 474 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 914
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (49) // <select_sara_5F_parser_38>
, TOP_DOWN_END_PRODUCTION ()
// At index 478 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 945
, TOP_DOWN_END_PRODUCTION ()
// At index 479 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 945
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (50) // <select_sara_5F_parser_39>
, TOP_DOWN_END_PRODUCTION ()
// At index 483 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 955
, TOP_DOWN_END_PRODUCTION ()
// At index 484 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 955
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (51) // <select_sara_5F_parser_40>
, TOP_DOWN_END_PRODUCTION ()
// At index 488 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 965
, TOP_DOWN_END_PRODUCTION ()
// At index 489 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 965
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_last) // $last$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (53) // <select_sara_5F_parser_42>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 494 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 968
, TOP_DOWN_END_PRODUCTION ()
// At index 495 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 968
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (53) // <select_sara_5F_parser_42>
, TOP_DOWN_END_PRODUCTION ()
// At index 499 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 979
, TOP_DOWN_END_PRODUCTION ()
// At index 500 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 979
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (55) // <select_sara_5F_parser_44>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__7D_) // $}$
, TOP_DOWN_NONTERMINAL (54) // <select_sara_5F_parser_43>
, TOP_DOWN_END_PRODUCTION ()
// At index 508 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 991
, TOP_DOWN_END_PRODUCTION ()
// At index 509 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 991
, TOP_DOWN_NONTERMINAL (2) // <io_bool_expression>
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_goto) // $goto$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_sara_5F_scanner::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (55) // <select_sara_5F_parser_44>
, TOP_DOWN_END_PRODUCTION ()
// At index 515 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_sara_grammar [134] = {
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

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_sara_grammar [134] = {
0, // index 0 : <start_symbol>, in file 'sara_parser.ggs', line 11
3, // index 1 : <component>, in file 'sara_parser.ggs', line 25
8, // index 2 : <component>, in file 'sara_parser.ggs', line 41
13, // index 3 : <component>, in file 'sara_parser.ggs', line 57
19, // index 4 : <component>, in file 'sara_parser.ggs', line 74
25, // index 5 : <component>, in file 'sara_parser.ggs', line 91
29, // index 6 : <component>, in file 'sara_parser.ggs', line 106
35, // index 7 : <component>, in file 'sara_parser.ggs', line 125
39, // index 8 : <component>, in file 'sara_parser.ggs', line 205
42, // index 9 : <component>, in file 'sara_parser.ggs', line 215
58, // index 10 : <component>, in file 'sara_parser.ggs', line 277
75, // index 11 : <component>, in file 'sara_parser.ggs', line 344
92, // index 12 : <component>, in file 'sara_parser.ggs', line 409
115, // index 13 : <io_bool_expression>, in file 'sara_parser.ggs', line 500
118, // index 14 : <io_and_expression>, in file 'sara_parser.ggs', line 527
121, // index 15 : <io_primary>, in file 'sara_parser.ggs', line 542
125, // index 16 : <io_primary>, in file 'sara_parser.ggs', line 553
127, // index 17 : <io_primary>, in file 'sara_parser.ggs', line 564
130, // index 18 : <io_primary>, in file 'sara_parser.ggs', line 575
132, // index 19 : <io_primary>, in file 'sara_parser.ggs', line 585
134, // index 20 : <io_primary>, in file 'sara_parser.ggs', line 595
147, // index 21 : <definition_expression>, in file 'sara_parser.ggs', line 661
150, // index 22 : <definition_expression_term>, in file 'sara_parser.ggs', line 677
153, // index 23 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 705
160, // index 24 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 739
167, // index 25 : <definition_expression_factor>, in file 'sara_parser.ggs', line 773
169, // index 26 : <definition_expression_factor>, in file 'sara_parser.ggs', line 872
182, // index 27 : <explicit_automaton>, in file 'sara_parser.ggs', line 935
202, // index 28 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
203, // index 29 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
206, // index 30 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 223
207, // index 31 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 223
211, // index 32 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 234
212, // index 33 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 234
215, // index 34 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 236
216, // index 35 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 236
220, // index 36 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 248
221, // index 37 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 248
225, // index 38 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 286
226, // index 39 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 286
230, // index 40 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 297
231, // index 41 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 297
234, // index 42 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 299
235, // index 43 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 299
239, // index 44 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 311
240, // index 45 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 311
244, // index 46 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 353
245, // index 47 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 353
249, // index 48 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 364
250, // index 49 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 364
253, // index 50 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 366
254, // index 51 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 366
258, // index 52 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 378
259, // index 53 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 378
263, // index 54 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 418
264, // index 55 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 418
268, // index 56 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 433
269, // index 57 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 433
272, // index 58 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 435
273, // index 59 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 435
277, // index 60 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 451
278, // index 61 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 451
282, // index 62 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 467
283, // index 63 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 467
291, // index 64 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 470
292, // index 65 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 470
297, // index 66 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 473
298, // index 67 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 473
302, // index 68 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
303, // index 69 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
307, // index 70 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
311, // index 71 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
315, // index 72 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
319, // index 73 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 532
320, // index 74 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 532
324, // index 75 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 604
325, // index 76 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 604
329, // index 77 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 619
330, // index 78 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 619
333, // index 79 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 621
334, // index 80 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 621
338, // index 81 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 637
339, // index 82 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 637
343, // index 83 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 666
344, // index 84 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 666
348, // index 85 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
349, // index 86 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
353, // index 87 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
357, // index 88 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
361, // index 89 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 712
362, // index 90 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 712
368, // index 91 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 720
369, // index 92 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 720
376, // index 93 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 746
377, // index 94 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 746
383, // index 95 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 754
384, // index 96 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 754
391, // index 97 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
393, // index 98 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
397, // index 99 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
404, // index 100 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
411, // index 101 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
416, // index 102 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
419, // index 103 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
422, // index 104 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
427, // index 105 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
432, // index 106 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
437, // index 107 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
442, // index 108 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
449, // index 109 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 787
450, // index 110 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 787
454, // index 111 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 802
455, // index 112 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 802
459, // index 113 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 881
460, // index 114 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 881
464, // index 115 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 896
465, // index 116 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 896
468, // index 117 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 898
469, // index 118 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 898
473, // index 119 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 914
474, // index 120 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 914
478, // index 121 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 945
479, // index 122 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 945
483, // index 123 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 955
484, // index 124 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 955
488, // index 125 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 965
489, // index 126 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 965
494, // index 127 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 968
495, // index 128 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 968
499, // index 129 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 979
500, // index 130 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 979
508, // index 131 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 991
509, // index 132 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 991
515 // index 133 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_sara_grammar [58] = {
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

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_sara_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
// At index 1 : <component>
Lexique_sara_5F_scanner::kToken_state, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_trans, -1, // Choice 2
Lexique_sara_5F_scanner::kToken_first, -1, // Choice 3
Lexique_sara_5F_scanner::kToken_last, -1, // Choice 4
Lexique_sara_5F_scanner::kToken_check, -1, // Choice 5
Lexique_sara_5F_scanner::kToken_checkidentical, -1, // Choice 6
Lexique_sara_5F_scanner::kToken_checkbool, -1, // Choice 7
Lexique_sara_5F_scanner::kToken_bdd, -1, // Choice 8
Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 9
Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 10
Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 11
Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 12
  -1,
// At index 26 : <io_bool_expression> only one production, no choice
  -1,
// At index 27 : <io_and_expression> only one production, no choice
  -1,
// At index 28 : <io_primary>
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken_false, -1, // Choice 4
Lexique_sara_5F_scanner::kToken_true, -1, // Choice 5
Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 6
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
Lexique_sara_5F_scanner::kToken_trans, Lexique_sara_5F_scanner::kToken__28_, Lexique_sara_5F_scanner::kToken_modalcompadd, Lexique_sara_5F_scanner::kToken_modalcompsub, Lexique_sara_5F_scanner::kToken__7E_, Lexique_sara_5F_scanner::kToken__3F_, Lexique_sara_5F_scanner::kToken__21_, Lexique_sara_5F_scanner::kToken_bool, Lexique_sara_5F_scanner::kToken__40_, Lexique_sara_5F_scanner::kToken_nofirst, Lexique_sara_5F_scanner::kToken_nolast, Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 2
  -1,
// At index 61 : <explicit_automaton> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 62 : <select_sara_5F_parser_0>
Lexique_sara_5F_scanner::kToken_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_state, Lexique_sara_5F_scanner::kToken_machineIdf, Lexique_sara_5F_scanner::kToken_trans, Lexique_sara_5F_scanner::kToken_first, Lexique_sara_5F_scanner::kToken_last, Lexique_sara_5F_scanner::kToken_check, Lexique_sara_5F_scanner::kToken_checkidentical, Lexique_sara_5F_scanner::kToken_checkbool, Lexique_sara_5F_scanner::kToken_bdd, Lexique_sara_5F_scanner::kToken_modalcompadd, Lexique_sara_5F_scanner::kToken_modalcompsub, Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 2
  -1,
// At index 78 : <select_sara_5F_parser_1>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 83 : <select_sara_5F_parser_2>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 88 : <select_sara_5F_parser_3>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 93 : <select_sara_5F_parser_4>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 98 : <select_sara_5F_parser_5>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 103 : <select_sara_5F_parser_6>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 108 : <select_sara_5F_parser_7>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 113 : <select_sara_5F_parser_8>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 118 : <select_sara_5F_parser_9>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 123 : <select_sara_5F_parser_10>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 128 : <select_sara_5F_parser_11>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 133 : <select_sara_5F_parser_12>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 138 : <select_sara_5F_parser_13>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 143 : <select_sara_5F_parser_14>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 148 : <select_sara_5F_parser_15>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 153 : <select_sara_5F_parser_16>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 158 : <select_sara_5F_parser_17>
Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_literal_5F_string, -1, // Choice 2
  -1,
// At index 163 : <select_sara_5F_parser_18>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 168 : <select_sara_5F_parser_19>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 174 : <select_sara_5F_parser_20>
Lexique_sara_5F_scanner::kToken__29_, Lexique_sara_5F_scanner::kToken__7B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken_to, Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__7C_, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__5E_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken__2D__3E_, -1, // Choice 4
Lexique_sara_5F_scanner::kToken__3D_, -1, // Choice 5
  -1,
// At index 189 : <select_sara_5F_parser_21>
Lexique_sara_5F_scanner::kToken__29_, Lexique_sara_5F_scanner::kToken__7B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken__7C_, Lexique_sara_5F_scanner::kToken__5E_, Lexique_sara_5F_scanner::kToken__2D__3E_, Lexique_sara_5F_scanner::kToken__3D_, Lexique_sara_5F_scanner::kToken_to, Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 202 : <select_sara_5F_parser_22>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 207 : <select_sara_5F_parser_23>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 212 : <select_sara_5F_parser_24>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 217 : <select_sara_5F_parser_25>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 222 : <select_sara_5F_parser_26>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 2
  -1,
// At index 228 : <select_sara_5F_parser_27>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__29_, Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2A_, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__2A__2A_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken__7C__7C_, -1, // Choice 4
  -1,
// At index 239 : <select_sara_5F_parser_28>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken_include, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 246 : <select_sara_5F_parser_29>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_include, -1, // Choice 2
  -1,
// At index 252 : <select_sara_5F_parser_30>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 259 : <select_sara_5F_parser_31>
Lexique_sara_5F_scanner::kToken__3B_, Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 2
  -1,
// At index 265 : <select_sara_5F_parser_32>
Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 2
Lexique_sara_5F_scanner::kToken__3F_, -1, // Choice 3
Lexique_sara_5F_scanner::kToken__21_, -1, // Choice 4
Lexique_sara_5F_scanner::kToken_bool, -1, // Choice 5
Lexique_sara_5F_scanner::kToken__40_, -1, // Choice 6
Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 7
Lexique_sara_5F_scanner::kToken_nofirst, -1, // Choice 8
Lexique_sara_5F_scanner::kToken_nolast, -1, // Choice 9
Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 10
Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 11
Lexique_sara_5F_scanner::kToken_trans, -1, // Choice 12
  -1,
// At index 290 : <select_sara_5F_parser_33>
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 295 : <select_sara_5F_parser_34>
Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 300 : <select_sara_5F_parser_35>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 305 : <select_sara_5F_parser_36>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 310 : <select_sara_5F_parser_37>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 315 : <select_sara_5F_parser_38>
Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 320 : <select_sara_5F_parser_39>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 325 : <select_sara_5F_parser_40>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 330 : <select_sara_5F_parser_41>
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_last, -1, // Choice 2
  -1,
// At index 335 : <select_sara_5F_parser_42>
Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 340 : <select_sara_5F_parser_43>
Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 345 : <select_sara_5F_parser_44>
Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
Lexique_sara_5F_scanner::kToken_machineIdf, Lexique_sara_5F_scanner::kToken__28_, Lexique_sara_5F_scanner::kToken_identifier, Lexique_sara_5F_scanner::kToken__7E_, Lexique_sara_5F_scanner::kToken_false, Lexique_sara_5F_scanner::kToken_true, -1, // Choice 2
  -1,
// At index 355 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_sara_grammar [58] = {
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

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_ (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_(inLexique) ;
}

void cGrammar_sara_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_sara_5F_scanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
    if (ok) {
      cGrammar_sara_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_sara_5F_scanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_sara_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_sara_5F_scanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_sara_5F_scanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                      gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_sara_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_sara_5F_scanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_sara_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 515) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_sara_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'component' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_component_parse (Lexique_sara_5F_scanner * inLexique) {
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

void cGrammar_sara_5F_grammar::nt_component_indexing (Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_component_i1_indexing(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_component_i2_indexing(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_component_i3_indexing(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_component_i4_indexing(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_component_i5_indexing(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_component_i6_indexing(inLexique) ;
    break ;
  case 7 :
    rule_sara_5F_parser_component_i7_indexing(inLexique) ;
    break ;
  case 8 :
    rule_sara_5F_parser_component_i8_indexing(inLexique) ;
    break ;
  case 9 :
    rule_sara_5F_parser_component_i9_indexing(inLexique) ;
    break ;
  case 10 :
    rule_sara_5F_parser_component_i10_indexing(inLexique) ;
    break ;
  case 11 :
    rule_sara_5F_parser_component_i11_indexing(inLexique) ;
    break ;
  case 12 :
    rule_sara_5F_parser_component_i12_indexing(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_component_ (GGS_semanticContext & parameter_1,
                                Lexique_sara_5F_scanner * inLexique) {
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

//--------------------------------------------------------------------------------------------------
//
//                        'io_bool_expression' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_boolExpression & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'io_and_expression' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_boolExpression & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                            'io_primary' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_io_5F_primary_parse (Lexique_sara_5F_scanner * inLexique) {
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

void cGrammar_sara_5F_grammar::nt_io_5F_primary_indexing (Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_io_5F_primary_i15_indexing(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i16_indexing(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i17_indexing(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i18_indexing(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i19_indexing(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i20_indexing(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_io_5F_primary_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_boolExpression & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
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

//--------------------------------------------------------------------------------------------------
//
//                      'definition_expression' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'definition_expression_term' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'modalcompadd_definition' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_M_5F_modesMap & parameter_3,
                                GGS_ListForModes & parameter_4,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'modalcompsub_definition' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_M_5F_modesMap & parameter_3,
                                GGS_ListForModes & parameter_4,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'definition_expression_factor' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_parse (Lexique_sara_5F_scanner * inLexique) {
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

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_indexing (Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
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

//--------------------------------------------------------------------------------------------------
//
//                        'explicit_automaton' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_parse (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_indexing (Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_ (const GGS_semanticContext parameter_1,
                                GGS_M_5F_variablesMap & parameter_2,
                                GGS_AC_5F_machineDefinition & parameter_3,
                                Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_0' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_0 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_1' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_1 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_2' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_2 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_3' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_3 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_4' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_4 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_5' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_5 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_6' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_6 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_7' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_7 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_8' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_8 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_9' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_9 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_10' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_10 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_11' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_11 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_12' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_12 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_13' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_13 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_14' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_14 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_15' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_15 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_16' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_16 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_17' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_17 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_18' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_18 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_19' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_19 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_20' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_20 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_21' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_21 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_22' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_22 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_23' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_23 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_24' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_24 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_25' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_25 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_26' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_26 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_27' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_27 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_28' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_28 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_29' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_29 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_30' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_30 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_31' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_31 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_32' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_32 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_33' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_33 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_34' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_34 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_35' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_35 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_36' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_36 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_37' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_37 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_38' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_38 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_39' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_39 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_40' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_40 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_41' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_41 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_42' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_42 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_43' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_43 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_sara_5F_parser_44' added non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_sara_5F_grammar::select_sara_5F_parser_44 (Lexique_sara_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::~ GGS__32_lstringlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::class_func_new (const GGS_lstring & in_mValue0,
                                                                               const GGS_lstring & in_mValue1,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element::GGS_M_5F_variablesMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element::~ GGS_M_5F_variablesMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element GGS_M_5F_variablesMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_uint & in_mIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_variablesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element::GGS_M_5F_variablesMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element GGS_M_5F_variablesMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   const GGS_uint & in_mIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_variablesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_variablesMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_variablesMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_variablesMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element ("M_variablesMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_variablesMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_variablesMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_variablesMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element GGS_M_5F_variablesMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_M_5F_variablesMap_2E_element result ;
  const GGS_M_5F_variablesMap_2E_element * p = (const GGS_M_5F_variablesMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_variablesMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_variablesMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @M_5F_variablesMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_::GGS_M_5F_variablesMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_::GGS_M_5F_variablesMap_2E_element_3F_ (const GGS_M_5F_variablesMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_ GGS_M_5F_variablesMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_variablesMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_variablesMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_variablesMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_variablesMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_variablesMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_variablesMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element_3F_ ("M_variablesMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_variablesMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_variablesMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_variablesMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element_3F_ GGS_M_5F_variablesMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_M_5F_variablesMap_2E_element_3F_ result ;
  const GGS_M_5F_variablesMap_2E_element_3F_ * p = (const GGS_M_5F_variablesMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_variablesMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_variablesMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element::GGS_M_5F_stateMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element::~ GGS_M_5F_stateMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element GGS_M_5F_stateMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                         const GGS_uint & in_mIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_stateMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element::GGS_M_5F_stateMap_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element GGS_M_5F_stateMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                           const GGS_uint & in_mIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_stateMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_stateMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_stateMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_stateMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element ("M_stateMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_stateMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_stateMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_stateMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element GGS_M_5F_stateMap_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_M_5F_stateMap_2E_element result ;
  const GGS_M_5F_stateMap_2E_element * p = (const GGS_M_5F_stateMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_stateMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_stateMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @M_5F_stateMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_::GGS_M_5F_stateMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_::GGS_M_5F_stateMap_2E_element_3F_ (const GGS_M_5F_stateMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_ GGS_M_5F_stateMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_stateMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_stateMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_stateMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_stateMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_stateMap_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_stateMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element_3F_ ("M_stateMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_stateMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_stateMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_stateMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element_3F_ GGS_M_5F_stateMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_M_5F_stateMap_2E_element_3F_ result ;
  const GGS_M_5F_stateMap_2E_element_3F_ * p = (const GGS_M_5F_stateMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_stateMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_stateMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element::GGS_M_5F_modesMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mModeDefinition () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element::~ GGS_M_5F_modesMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element GGS_M_5F_modesMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mIndex,
                                                                             const GGS_AC_5F_machineDefinition & in_mModeDefinition,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_modesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mModeDefinition = in_mModeDefinition ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element::GGS_M_5F_modesMap_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uint & inOperand1,
                                                            const GGS_AC_5F_machineDefinition & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mModeDefinition (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element GGS_M_5F_modesMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                           const GGS_uint & in_mIndex,
                                                                           const GGS_AC_5F_machineDefinition & in_mModeDefinition,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_modesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mModeDefinition = in_mModeDefinition ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_modesMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mModeDefinition.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mModeDefinition.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_modesMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModeDefinition.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_modesMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element ("M_modesMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_modesMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_modesMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_modesMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element GGS_M_5F_modesMap_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_M_5F_modesMap_2E_element result ;
  const GGS_M_5F_modesMap_2E_element * p = (const GGS_M_5F_modesMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_modesMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_modesMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @M_5F_modesMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_::GGS_M_5F_modesMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_::GGS_M_5F_modesMap_2E_element_3F_ (const GGS_M_5F_modesMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_ GGS_M_5F_modesMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_modesMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_modesMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_modesMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_modesMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_modesMap_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_modesMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element_3F_ ("M_modesMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_modesMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_modesMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_modesMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element_3F_ GGS_M_5F_modesMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_M_5F_modesMap_2E_element_3F_ result ;
  const GGS_M_5F_modesMap_2E_element_3F_ * p = (const GGS_M_5F_modesMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_modesMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_modesMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element::GGS_L_5F_scenarioList_2E_element (void) :
mProperty_mScenarioTitle (),
mProperty_mInputScenario () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element::~ GGS_L_5F_scenarioList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element GGS_L_5F_scenarioList_2E_element::init_21__21_ (const GGS_lstring & in_mScenarioTitle,
                                                                                 const GGS_L_5F_inputScenario & in_mInputScenario,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_scenarioList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScenarioTitle = in_mScenarioTitle ;
  result.mProperty_mInputScenario = in_mInputScenario ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element::GGS_L_5F_scenarioList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_L_5F_inputScenario & inOperand1) :
mProperty_mScenarioTitle (inOperand0),
mProperty_mInputScenario (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element GGS_L_5F_scenarioList_2E_element::class_func_new (const GGS_lstring & in_mScenarioTitle,
                                                                                   const GGS_L_5F_inputScenario & in_mInputScenario,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_scenarioList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mScenarioTitle = in_mScenarioTitle ;
  result.mProperty_mInputScenario = in_mInputScenario ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_L_5F_scenarioList_2E_element::isValid (void) const {
  return mProperty_mScenarioTitle.isValid () && mProperty_mInputScenario.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList_2E_element::drop (void) {
  mProperty_mScenarioTitle.drop () ;
  mProperty_mInputScenario.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @L_scenarioList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mScenarioTitle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputScenario.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @L_scenarioList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_L_5F_scenarioList_2E_element ("L_scenarioList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_L_5F_scenarioList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_scenarioList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_scenarioList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element GGS_L_5F_scenarioList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_L_5F_scenarioList_2E_element result ;
  const GGS_L_5F_scenarioList_2E_element * p = (const GGS_L_5F_scenarioList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_scenarioList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_scenarioList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element::GGS_M_5F_machinesMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mNameList () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element::~ GGS_M_5F_machinesMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element GGS_M_5F_machinesMap_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mIndex,
                                                                                               const GGS_uint & in_mInputVariableCount,
                                                                                               const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                               const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                               const GGS_stringlist & in_mNameList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_machinesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mInputVariableCount = in_mInputVariableCount ;
  result.mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  result.mProperty_mVariablesMap = in_mVariablesMap ;
  result.mProperty_mNameList = in_mNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element::GGS_M_5F_machinesMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_uint & inOperand2,
                                                                  const GGS_uint & inOperand3,
                                                                  const GGS_M_5F_variablesMap & inOperand4,
                                                                  const GGS_stringlist & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mInputVariableCount (inOperand2),
mProperty_mInputAndInternalVariableCount (inOperand3),
mProperty_mVariablesMap (inOperand4),
mProperty_mNameList (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element GGS_M_5F_machinesMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                 const GGS_uint & in_mIndex,
                                                                                 const GGS_uint & in_mInputVariableCount,
                                                                                 const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                 const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                 const GGS_stringlist & in_mNameList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_M_5F_machinesMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mInputVariableCount = in_mInputVariableCount ;
  result.mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  result.mProperty_mVariablesMap = in_mVariablesMap ;
  result.mProperty_mNameList = in_mNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_machinesMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mInputVariableCount.isValid () && mProperty_mInputAndInternalVariableCount.isValid () && mProperty_mVariablesMap.isValid () && mProperty_mNameList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mInputVariableCount.drop () ;
  mProperty_mInputAndInternalVariableCount.drop () ;
  mProperty_mVariablesMap.drop () ;
  mProperty_mNameList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @M_machinesMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNameList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_machinesMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element ("M_machinesMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_machinesMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_machinesMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_machinesMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element GGS_M_5F_machinesMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_M_5F_machinesMap_2E_element result ;
  const GGS_M_5F_machinesMap_2E_element * p = (const GGS_M_5F_machinesMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_machinesMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_machinesMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @M_5F_machinesMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_::GGS_M_5F_machinesMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_::GGS_M_5F_machinesMap_2E_element_3F_ (const GGS_M_5F_machinesMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_ GGS_M_5F_machinesMap_2E_element_3F_::init_nil (void) {
  GGS_M_5F_machinesMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_machinesMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_machinesMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_M_5F_machinesMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @M_machinesMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element_3F_ ("M_machinesMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_M_5F_machinesMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_M_5F_machinesMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_M_5F_machinesMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_ GGS_M_5F_machinesMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_M_5F_machinesMap_2E_element_3F_ result ;
  const GGS_M_5F_machinesMap_2E_element_3F_ * p = (const GGS_M_5F_machinesMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_M_5F_machinesMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("M_machinesMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvaluesCount ("sara_cli_options",
                                         "displayBDDvaluesCount",
                                         99,
                                         "display-bdd-values-count",
                                         "displays values count for every BDD") ;

BoolCommandLineOption gOption_sara_5F_cli_5F_options_displayBDDvalues ("sara_cli_options",
                                         "displayBDDvalues",
                                         118,
                                         "display-bdd-values",
                                         "displays values for every BDD") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "sara",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a '.sara' source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_sara_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("sara_main.galgas", 11)) ;
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
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
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
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

