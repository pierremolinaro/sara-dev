#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
// @C_5F_scenarioComponent reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_scenarioComponent::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
    mProperty_mInputVariableCount.printNonNullClassInstanceProperties ("mInputVariableCount") ;
    mProperty_mInputAndInternalVariableCount.printNonNullClassInstanceProperties ("mInputAndInternalVariableCount") ;
    mProperty_mVariablesMap.printNonNullClassInstanceProperties ("mVariablesMap") ;
    mProperty_mScenarioList.printNonNullClassInstanceProperties ("mScenarioList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_C_5F_scenarioComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
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
    result = mProperty_mScenarioList.objectCompare (p->mProperty_mScenarioList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_C_5F_scenarioComponent::objectCompare (const GALGAS_C_5F_scenarioComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_scenarioComponent::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                                         GALGAS_L_5F_scenarioList::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (const cPtr_C_5F_scenarioComponent * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_scenarioComponent) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex,
                                                                              const GALGAS_uint & inAttribute_mInputVariableCount,
                                                                              const GALGAS_uint & inAttribute_mInputAndInternalVariableCount,
                                                                              const GALGAS_M_5F_variablesMap & inAttribute_mVariablesMap,
                                                                              const GALGAS_L_5F_scenarioList & inAttribute_mScenarioList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_scenarioComponent result ;
  if (inAttribute_mMachineIndex.isValid () && inAttribute_mInputVariableCount.isValid () && inAttribute_mInputAndInternalVariableCount.isValid () && inAttribute_mVariablesMap.isValid () && inAttribute_mScenarioList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_scenarioComponent (inAttribute_mMachineIndex, inAttribute_mInputVariableCount, inAttribute_mInputAndInternalVariableCount, inAttribute_mVariablesMap, inAttribute_mScenarioList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMMachineIndex (GALGAS_uint inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMInputVariableCount (GALGAS_uint inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMInputAndInternalVariableCount (GALGAS_uint inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMVariablesMap (GALGAS_M_5F_variablesMap inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_C_5F_scenarioComponent::setter_setMScenarioList (GALGAS_L_5F_scenarioList inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mScenarioList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_scenarioComponent::readProperty_mMachineIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mMachineIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_scenarioComponent::readProperty_mInputVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_C_5F_scenarioComponent::readProperty_mInputAndInternalVariableCount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_M_5F_variablesMap GALGAS_C_5F_scenarioComponent::readProperty_mVariablesMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mVariablesMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_scenarioList GALGAS_C_5F_scenarioComponent::readProperty_mScenarioList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_L_5F_scenarioList () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mScenarioList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @C_scenarioComponent class
//----------------------------------------------------------------------------------------------------------------------

cPtr_C_5F_scenarioComponent::cPtr_C_5F_scenarioComponent (const GALGAS_uint & in_mMachineIndex,
                                                          const GALGAS_uint & in_mInputVariableCount,
                                                          const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                          const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                          const GALGAS_L_5F_scenarioList & in_mScenarioList
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex),
mProperty_mInputVariableCount (in_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mProperty_mVariablesMap (in_mVariablesMap),
mProperty_mScenarioList (in_mScenarioList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_C_5F_scenarioComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

void cPtr_C_5F_scenarioComponent::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@C_scenarioComponent:" ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mScenarioList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_scenarioComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_scenarioComponent (mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mScenarioList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @C_scenarioComponent generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_scenarioComponent ("C_scenarioComponent",
                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_scenarioComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_scenarioComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_scenarioComponent (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_scenarioComponent result ;
  const GALGAS_C_5F_scenarioComponent * p = (const GALGAS_C_5F_scenarioComponent *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_scenarioComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_scenarioComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_C_5F_scenarioComponent_2D_weak::objectCompare (const GALGAS_C_5F_scenarioComponent_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent_2D_weak::GALGAS_C_5F_scenarioComponent_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent_2D_weak & GALGAS_C_5F_scenarioComponent_2D_weak::operator = (const GALGAS_C_5F_scenarioComponent & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent_2D_weak::GALGAS_C_5F_scenarioComponent_2D_weak (const GALGAS_C_5F_scenarioComponent & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent_2D_weak GALGAS_C_5F_scenarioComponent_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_C_5F_scenarioComponent_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent_2D_weak::bang_C_5F_scenarioComponent_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_C_5F_scenarioComponent result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_C_5F_scenarioComponent) ;
      result = GALGAS_C_5F_scenarioComponent ((cPtr_C_5F_scenarioComponent *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @C_scenarioComponent-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2D_weak ("C_scenarioComponent-weak",
                                                       & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_C_5F_scenarioComponent_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_C_5F_scenarioComponent_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_scenarioComponent_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_C_5F_scenarioComponent_2D_weak GALGAS_C_5F_scenarioComponent_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_scenarioComponent_2D_weak result ;
  const GALGAS_C_5F_scenarioComponent_2D_weak * p = (const GALGAS_C_5F_scenarioComponent_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_scenarioComponent_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_scenarioComponent-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typeDisplayBDDstats reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeDisplayBDDstats::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeDisplayBDDstats::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeDisplayBDDstats::objectCompare (const GALGAS_typeDisplayBDDstats & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats::GALGAS_typeDisplayBDDstats (void) :
GALGAS_AC_5F_job () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeDisplayBDDstats::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats::GALGAS_typeDisplayBDDstats (const cPtr_typeDisplayBDDstats * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDisplayBDDstats) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::constructor_new (LOCATION_ARGS) {
  GALGAS_typeDisplayBDDstats result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDisplayBDDstats (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typeDisplayBDDstats class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typeDisplayBDDstats::cPtr_typeDisplayBDDstats (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeDisplayBDDstats::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

void cPtr_typeDisplayBDDstats::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "[@typeDisplayBDDstats]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeDisplayBDDstats::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeDisplayBDDstats (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @typeDisplayBDDstats generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDisplayBDDstats ("typeDisplayBDDstats",
                                            & kTypeDescriptor_GALGAS_AC_5F_job) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDisplayBDDstats::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDisplayBDDstats::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDisplayBDDstats (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeDisplayBDDstats result ;
  const GALGAS_typeDisplayBDDstats * p = (const GALGAS_typeDisplayBDDstats *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeDisplayBDDstats *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDisplayBDDstats", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeDisplayBDDstats_2D_weak::objectCompare (const GALGAS_typeDisplayBDDstats_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats_2D_weak::GALGAS_typeDisplayBDDstats_2D_weak (void) :
GALGAS_AC_5F_job_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats_2D_weak & GALGAS_typeDisplayBDDstats_2D_weak::operator = (const GALGAS_typeDisplayBDDstats & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats_2D_weak::GALGAS_typeDisplayBDDstats_2D_weak (const GALGAS_typeDisplayBDDstats & inSource) :
GALGAS_AC_5F_job_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats_2D_weak GALGAS_typeDisplayBDDstats_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeDisplayBDDstats_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats_2D_weak::bang_typeDisplayBDDstats_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeDisplayBDDstats result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDisplayBDDstats) ;
      result = GALGAS_typeDisplayBDDstats ((cPtr_typeDisplayBDDstats *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @typeDisplayBDDstats-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDisplayBDDstats_2D_weak ("typeDisplayBDDstats-weak",
                                                    & kTypeDescriptor_GALGAS_AC_5F_job_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDisplayBDDstats_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDisplayBDDstats_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDisplayBDDstats_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDisplayBDDstats_2D_weak GALGAS_typeDisplayBDDstats_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeDisplayBDDstats_2D_weak result ;
  const GALGAS_typeDisplayBDDstats_2D_weak * p = (const GALGAS_typeDisplayBDDstats_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeDisplayBDDstats_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDisplayBDDstats-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@L_5F_jobList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_jobList : public cCollectionElement {
  public: GALGAS_L_5F_jobList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_L_5F_jobList (const GALGAS_AC_5F_job & in_mComponent
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_jobList (const GALGAS_L_5F_jobList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_jobList::cCollectionElement_L_5F_jobList (const GALGAS_AC_5F_job & in_mComponent
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mComponent) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_jobList::cCollectionElement_L_5F_jobList (const GALGAS_L_5F_jobList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mComponent) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_jobList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_jobList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_L_5F_jobList (mObject.mProperty_mComponent COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_L_5F_jobList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComponent" ":" ;
  mObject.mProperty_mComponent.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_L_5F_jobList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_L_5F_jobList * operand = (cCollectionElement_L_5F_jobList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_L_5F_jobList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList::GALGAS_L_5F_jobList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList::GALGAS_L_5F_jobList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_jobList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::constructor_listWithValue (const GALGAS_AC_5F_job & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_jobList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_jobList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_L_5F_jobList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_AC_5F_job & in_mComponent
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_jobList * p = NULL ;
  macroMyNew (p, cCollectionElement_L_5F_jobList (in_mComponent COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::addAssign_operation (const GALGAS_AC_5F_job & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::setter_append (GALGAS_L_5F_jobList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_L_5F_jobList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::setter_insertAtIndex (const GALGAS_AC_5F_job inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_L_5F_jobList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::setter_removeAtIndex (GALGAS_AC_5F_job & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
        outOperand0 = p->mObject.mProperty_mComponent ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::setter_popFirst (GALGAS_AC_5F_job & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::setter_popLast (GALGAS_AC_5F_job & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::method_first (GALGAS_AC_5F_job & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::method_last (GALGAS_AC_5F_job & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    outOperand0 = p->mObject.mProperty_mComponent ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::add_operation (const GALGAS_L_5F_jobList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_L_5F_jobList result = GALGAS_L_5F_jobList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::plusAssign_operation (const GALGAS_L_5F_jobList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_L_5F_jobList::setter_setMComponentAtIndex (GALGAS_AC_5F_job inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComponent = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job GALGAS_L_5F_jobList::getter_mComponentAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) attributes.ptr () ;
  GALGAS_AC_5F_job result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    result = p->mObject.mProperty_mComponent ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_L_5F_jobList::cEnumerator_L_5F_jobList (const GALGAS_L_5F_jobList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList_2D_element cEnumerator_L_5F_jobList::current (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_AC_5F_job cEnumerator_L_5F_jobList::current_mComponent (LOCATION_ARGS) const {
  const cCollectionElement_L_5F_jobList * p = (const cCollectionElement_L_5F_jobList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
  return p->mObject.mProperty_mComponent ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @L_jobList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_jobList ("L_jobList",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_L_5F_jobList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_L_5F_jobList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_jobList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_L_5F_jobList GALGAS_L_5F_jobList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_L_5F_jobList result ;
  const GALGAS_L_5F_jobList * p = (const GALGAS_L_5F_jobList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_L_5F_jobList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_jobList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
  return mProperty_lkey.isValid () ;
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

GALGAS_M_5F_machinesMap GALGAS_M_5F_machinesMap::add_operation (const GALGAS_M_5F_machinesMap & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_M_5F_machinesMap result = *this ;
  cEnumerator_M_5F_machinesMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mInputVariableCount (HERE), enumerator.current_mInputAndInternalVariableCount (HERE), enumerator.current_mVariablesMap (HERE), enumerator.current_mNameList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
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
//     @M_machinesMap generic code implementation
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

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_L_5F_jobList & in_componentsMap,
                                                                const GALGAS_M_5F_machinesMap & in_machinesMap 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (in_componentsMap.isValid () && in_machinesMap.isValid ()) {
    result = GALGAS_semanticContext (in_componentsMap, in_machinesMap) ;
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
//     @semanticContext generic code implementation
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

void cParser_sara_5F_parser::rule_sara_5F_parser_start_5F_symbol_i0_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_component_indexing (inCompiler) ;
    switch (select_sara_5F_parser_0 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 29)) ;
  GALGAS_lstring var_machineName_960 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  GALGAS_uint var_machineIndex_1077 ;
  GALGAS_uint joker_1079 ; // Joker input parameter
  GALGAS_uint joker_1082 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1085 ; // Joker input parameter
  GALGAS_stringlist joker_1088 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_960, var_machineIndex_1077, joker_1079, joker_1082, joker_1085, joker_1088, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 33)) ;
  GALGAS_AC_5F_job var_job_1139 = GALGAS_C_5F_machineDisplayStates::constructor_new (var_machineIndex_1077  COMMA_SOURCE_FILE ("sara_parser.galgas", 35)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1139  COMMA_SOURCE_FILE ("sara_parser.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i1_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 45)) ;
  GALGAS_lstring var_machineName_1441 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 47)) ;
  GALGAS_uint var_machineIndex_1558 ;
  GALGAS_uint joker_1560 ; // Joker input parameter
  GALGAS_uint joker_1563 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_1566 ; // Joker input parameter
  GALGAS_stringlist joker_1569 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1441, var_machineIndex_1558, joker_1560, joker_1563, joker_1566, joker_1569, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 49)) ;
  GALGAS_AC_5F_job var_job_1620 = GALGAS_C_5F_machineDisplayTransitions::constructor_new (var_machineIndex_1558  COMMA_SOURCE_FILE ("sara_parser.galgas", 51)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_1620  COMMA_SOURCE_FILE ("sara_parser.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i2_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
  GALGAS_lstring var_machineName_1936 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 64)) ;
  GALGAS_uint var_machineIndex_2053 ;
  GALGAS_uint joker_2055 ; // Joker input parameter
  GALGAS_uint joker_2058 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_2061 ; // Joker input parameter
  GALGAS_stringlist joker_2064 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_1936, var_machineIndex_2053, joker_2055, joker_2058, joker_2061, joker_2064, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 66)) ;
  GALGAS_AC_5F_job var_job_2115 = GALGAS_C_5F_machineDisplayInitialStates::constructor_new (var_machineIndex_2053  COMMA_SOURCE_FILE ("sara_parser.galgas", 68)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_2115  COMMA_SOURCE_FILE ("sara_parser.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i3_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 79)) ;
  GALGAS_lstring var_machineName_2433 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
  GALGAS_uint var_machineIndex_2550 ;
  GALGAS_uint joker_2552 ; // Joker input parameter
  GALGAS_uint joker_2555 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_2558 ; // Joker input parameter
  GALGAS_stringlist joker_2561 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2433, var_machineIndex_2550, joker_2552, joker_2555, joker_2558, joker_2561, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 83)) ;
  GALGAS_AC_5F_job var_job_2612 = GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (var_machineIndex_2550  COMMA_SOURCE_FILE ("sara_parser.galgas", 85)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_2612  COMMA_SOURCE_FILE ("sara_parser.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i4_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_display COMMA_SOURCE_FILE ("sara_parser.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 80)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 94)) ;
  GALGAS_lstring var_machineName_2910 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  GALGAS_uint var_machineIndex_3027 ;
  GALGAS_uint joker_3029 ; // Joker input parameter
  GALGAS_uint joker_3032 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3035 ; // Joker input parameter
  GALGAS_stringlist joker_3038 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_2910, var_machineIndex_3027, joker_3029, joker_3032, joker_3035, joker_3038, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 98)) ;
  GALGAS_AC_5F_job var_job_3089 = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex_3027, GALGAS_bool (false)  COMMA_SOURCE_FILE ("sara_parser.galgas", 100)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3089  COMMA_SOURCE_FILE ("sara_parser.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i5_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_check COMMA_SOURCE_FILE ("sara_parser.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  GALGAS_lstring var_machineName_31__3388 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  GALGAS_lstring var_machineName_32__3427 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
  GALGAS_uint var_machineIndex_31__3546 ;
  GALGAS_uint joker_3548 ; // Joker input parameter
  GALGAS_uint joker_3551 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3554 ; // Joker input parameter
  GALGAS_stringlist joker_3557 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_31__3388, var_machineIndex_31__3546, joker_3548, joker_3551, joker_3554, joker_3557, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 115)) ;
  GALGAS_uint var_machineIndex_32__3672 ;
  GALGAS_uint joker_3674 ; // Joker input parameter
  GALGAS_uint joker_3677 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_3680 ; // Joker input parameter
  GALGAS_stringlist joker_3683 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_32__3427, var_machineIndex_32__3672, joker_3674, joker_3677, joker_3680, joker_3683, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 117)) ;
  GALGAS_AC_5F_job var_job_3734 = GALGAS_C_5F_machineCheckIdentical::constructor_new (var_machineIndex_31__3546, var_machineIndex_32__3672  COMMA_SOURCE_FILE ("sara_parser.galgas", 119)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_3734  COMMA_SOURCE_FILE ("sara_parser.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i6_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkidentical COMMA_SOURCE_FILE ("sara_parser.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 111)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  GALGAS_lstring var_machineName_4045 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
  GALGAS_uint var_machineIndex_4162 ;
  GALGAS_uint joker_4164 ; // Joker input parameter
  GALGAS_uint joker_4167 ; // Joker input parameter
  GALGAS_M_5F_variablesMap joker_4170 ; // Joker input parameter
  GALGAS_stringlist joker_4173 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_4045, var_machineIndex_4162, joker_4164, joker_4167, joker_4170, joker_4173, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 132)) ;
  GALGAS_AC_5F_job var_job_4224 = GALGAS_C_5F_machineCheck::constructor_new (var_machineIndex_4162, GALGAS_bool (true)  COMMA_SOURCE_FILE ("sara_parser.galgas", 134)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_4224  COMMA_SOURCE_FILE ("sara_parser.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i7_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_checkbool COMMA_SOURCE_FILE ("sara_parser.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 208)) ;
  GALGAS_AC_5F_job var_job_6113 = GALGAS_typeDisplayBDDstats::constructor_new (SOURCE_FILE ("sara_parser.galgas", 209)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_job_6113  COMMA_SOURCE_FILE ("sara_parser.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 208)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i8_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bdd COMMA_SOURCE_FILE ("sara_parser.galgas", 207)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 208)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_6342 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 217)) ;
  GALGAS_stringlist var_nameList_6385 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 218)) ;
  GALGAS_lstring var_machineName_6460 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_6537 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
    {
    var_variablesMap_6342.setter_insertKey (var_inputVarName_6537, var_variablesMap_6342.getter_count (SOURCE_FILE ("sara_parser.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 225)) ;
    }
    var_nameList_6385.addAssign_operation (var_inputVarName_6537.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 226)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_6695 = var_variablesMap_6342.getter_count (SOURCE_FILE ("sara_parser.galgas", 230)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 233)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_6823 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
      {
      var_variablesMap_6342.setter_insertKey (var_outputVarName_6823, var_variablesMap_6342.getter_count (SOURCE_FILE ("sara_parser.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 238)) ;
      }
      var_nameList_6385.addAssign_operation (var_outputVarName_6823.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 239)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 241)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_7016 = var_variablesMap_6342.getter_count (SOURCE_FILE ("sara_parser.galgas", 245)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_7118 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    {
    var_variablesMap_6342.setter_insertKey (var_outputVarName_7118, var_variablesMap_6342.getter_count (SOURCE_FILE ("sara_parser.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 250)) ;
    }
    var_nameList_6385.addAssign_operation (var_outputVarName_7118.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 251)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  GALGAS_AC_5F_machineDefinition var_definition_7359 ;
  nt_definition_5F_expression_ (ioArgument_ioSemanticContext, var_variablesMap_6342, var_definition_7359, inCompiler) ;
  GALGAS_uint var_machineIndex_7421 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 260)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_6460, var_machineIndex_7421, var_inputVariablesCount_6695, var_inputAndInternalVariablesCount_7016, var_variablesMap_6342, var_nameList_6385, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 261)) ;
  }
  GALGAS_AC_5F_job var_machine_7691 = GALGAS_C_5F_machineComponent::constructor_new (var_machineName_6460, var_machineIndex_7421, var_inputVariablesCount_6695, var_inputAndInternalVariablesCount_7016, var_variablesMap_6342, var_nameList_6385, var_definition_7359  COMMA_SOURCE_FILE ("sara_parser.galgas", 270)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_7691  COMMA_SOURCE_FILE ("sara_parser.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 233)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 241)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  nt_definition_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i9_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 224)) ;
    switch (select_sara_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 228)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 231)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 233)) ;
  switch (select_sara_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 237)) ;
      switch (select_sara_5F_parser_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 241)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 244)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 247)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 249)) ;
    switch (select_sara_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 253)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 256)) ;
  nt_definition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_8048 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 279)) ;
  GALGAS_stringlist var_nameList_8091 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 280)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 282)) ;
  GALGAS_lstring var_machineName_8183 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_8260 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 287)) ;
    {
    var_variablesMap_8048.setter_insertKey (var_inputVarName_8260, var_variablesMap_8048.getter_count (SOURCE_FILE ("sara_parser.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 288)) ;
    }
    var_nameList_8091.addAssign_operation (var_inputVarName_8260.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 289)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 291)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_8418 = var_variablesMap_8048.getter_count (SOURCE_FILE ("sara_parser.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_8546 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 300)) ;
      {
      var_variablesMap_8048.setter_insertKey (var_outputVarName_8546, var_variablesMap_8048.getter_count (SOURCE_FILE ("sara_parser.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 301)) ;
      }
      var_nameList_8091.addAssign_operation (var_outputVarName_8546.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 302)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 304)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_8739 = var_variablesMap_8048.getter_count (SOURCE_FILE ("sara_parser.galgas", 308)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 310)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_8842 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    {
    var_variablesMap_8048.setter_insertKey (var_outputVarName_8842, var_variablesMap_8048.getter_count (SOURCE_FILE ("sara_parser.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 313)) ;
    }
    var_nameList_8091.addAssign_operation (var_outputVarName_8842.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 314)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  GALGAS_M_5F_modesMap var_modeMap_9094 ;
  GALGAS_ListForModes var_inclusionList_9117 ;
  nt_modalcompadd_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_8048, var_modeMap_9094, var_inclusionList_9117, inCompiler) ;
  GALGAS_uint var_machineIndex_9179 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 327)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_8183, var_machineIndex_9179, var_inputVariablesCount_8418, var_inputAndInternalVariablesCount_8739, var_variablesMap_8048, var_nameList_8091, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 328)) ;
  }
  GALGAS_AC_5F_job var_machine_9422 = GALGAS_C_5F_machineDefinedByAdditiveModalComp::constructor_new (var_machineName_8183, var_machineIndex_9179, var_inputVariablesCount_8418, var_inputAndInternalVariablesCount_8739, var_variablesMap_8048, var_modeMap_9094, var_inclusionList_9117  COMMA_SOURCE_FILE ("sara_parser.galgas", 330)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_9422  COMMA_SOURCE_FILE ("sara_parser.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 282)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 287)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 291)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 300)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 304)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 310)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  nt_modalcompadd_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i10_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 282)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 284)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 287)) ;
    switch (select_sara_5F_parser_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 291)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 296)) ;
  switch (select_sara_5F_parser_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 300)) ;
      switch (select_sara_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 304)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 307)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 310)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 312)) ;
    switch (select_sara_5F_parser_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 316)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 319)) ;
  nt_modalcompadd_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 339)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  GALGAS_M_5F_variablesMap var_variablesMap_9819 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 346)) ;
  GALGAS_stringlist var_nameList_9862 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 347)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
  GALGAS_lstring var_machineName_9954 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_10031 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    {
    var_variablesMap_9819.setter_insertKey (var_inputVarName_10031, var_variablesMap_9819.getter_count (SOURCE_FILE ("sara_parser.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 355)) ;
    }
    var_nameList_9862.addAssign_operation (var_inputVarName_10031.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 356)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 358)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_10189 = var_variablesMap_9819.getter_count (SOURCE_FILE ("sara_parser.galgas", 360)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 361)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_outputVarName_10317 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
      {
      var_variablesMap_9819.setter_insertKey (var_outputVarName_10317, var_variablesMap_9819.getter_count (SOURCE_FILE ("sara_parser.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 368)) ;
      }
      var_nameList_9862.addAssign_operation (var_outputVarName_10317.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 369)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_10510 = var_variablesMap_9819.getter_count (SOURCE_FILE ("sara_parser.galgas", 375)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_outputVarName_10612 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 379)) ;
    {
    var_variablesMap_9819.setter_insertKey (var_outputVarName_10612, var_variablesMap_9819.getter_count (SOURCE_FILE ("sara_parser.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 380)) ;
    }
    var_nameList_9862.addAssign_operation (var_outputVarName_10612.readProperty_string ()  COMMA_SOURCE_FILE ("sara_parser.galgas", 381)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 383)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 386)) ;
  GALGAS_M_5F_modesMap var_modeMap_10864 ;
  GALGAS_ListForModes var_exclusionList_10887 ;
  nt_modalcompsub_5F_definition_ (ioArgument_ioSemanticContext, var_variablesMap_9819, var_modeMap_10864, var_exclusionList_10887, inCompiler) ;
  GALGAS_uint var_machineIndex_10949 = ioArgument_ioSemanticContext.readProperty_machinesMap ().getter_count (SOURCE_FILE ("sara_parser.galgas", 394)) ;
  {
  ioArgument_ioSemanticContext.mProperty_machinesMap.setter_insertKey (var_machineName_9954, var_machineIndex_10949, var_inputVariablesCount_10189, var_inputAndInternalVariablesCount_10510, var_variablesMap_9819, var_nameList_9862, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 395)) ;
  }
  GALGAS_AC_5F_job var_machine_11192 = GALGAS_C_5F_machineDefinedBySubstractiveModalComp::constructor_new (var_machineName_9954, var_machineIndex_10949, var_inputVariablesCount_10189, var_inputAndInternalVariablesCount_10510, var_variablesMap_9819, var_modeMap_10864, var_exclusionList_10887  COMMA_SOURCE_FILE ("sara_parser.galgas", 397)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_11192  COMMA_SOURCE_FILE ("sara_parser.galgas", 405)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 358)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 361)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 379)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 383)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 386)) ;
  nt_modalcompsub_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i11_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 349)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 350)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 351)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 354)) ;
    switch (select_sara_5F_parser_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 358)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 361)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 363)) ;
  switch (select_sara_5F_parser_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 367)) ;
      switch (select_sara_5F_parser_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 371)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 374)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 377)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 379)) ;
    switch (select_sara_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 383)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 385)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 386)) ;
  nt_modalcompsub_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 406)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                 C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
  GALGAS_M_5F_variablesMap var_variablesMap_11602 = GALGAS_M_5F_variablesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 411)) ;
  GALGAS_lstring var_machineName_11680 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  GALGAS_uint var_machineIndex_11791 ;
  GALGAS_uint var_inputVariablesCountFromDefinition_11830 ;
  GALGAS_uint var_inputAndInternalVariablesCountFromDefinition_11880 ;
  GALGAS_M_5F_variablesMap var_variablesMapFromDefinition_11912 ;
  GALGAS_stringlist joker_11914 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineName_11680, var_machineIndex_11791, var_inputVariablesCountFromDefinition_11830, var_inputAndInternalVariablesCountFromDefinition_11880, var_variablesMapFromDefinition_11912, joker_11914, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 415)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVarName_11993 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
    {
    var_variablesMap_11602.setter_insertKey (var_inputVarName_11993, var_variablesMap_11602.getter_count (SOURCE_FILE ("sara_parser.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 420)) ;
    }
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 422)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_uint var_inputVariablesCount_12114 = var_variablesMap_11602.getter_count (SOURCE_FILE ("sara_parser.galgas", 424)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCountFromDefinition_11830.objectCompare (var_inputVariablesCount_12114)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 428)), GALGAS_string ("This declaration names ").add_operation (var_inputVariablesCount_12114.getter_string (SOURCE_FILE ("sara_parser.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 428)).add_operation (GALGAS_string (" input variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 428)).add_operation (var_inputVariablesCountFromDefinition_11830.getter_string (SOURCE_FILE ("sara_parser.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 429)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 429)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 428)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 432)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_outputVarName_12572 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 436)) ;
      {
      var_variablesMap_11602.setter_insertKey (var_outputVarName_12572, var_variablesMap_11602.getter_count (SOURCE_FILE ("sara_parser.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 437)) ;
      }
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_12773 = var_variablesMap_11602.getter_count (SOURCE_FILE ("sara_parser.galgas", 444)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCountFromDefinition_11880.objectCompare (var_inputAndInternalVariablesCount_12773)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 446)), GALGAS_string ("This declaration names ").add_operation (var_inputAndInternalVariablesCount_12773.getter_string (SOURCE_FILE ("sara_parser.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 446)).add_operation (GALGAS_string (" input and internal variable(s), but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 446)).add_operation (var_inputAndInternalVariablesCountFromDefinition_11880.getter_string (SOURCE_FILE ("sara_parser.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 447)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 447)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 446)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVarName_13230 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    {
    var_variablesMap_11602.setter_insertKey (var_outputVarName_13230, var_variablesMap_11602.getter_count (SOURCE_FILE ("sara_parser.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 453)) ;
    }
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  GALGAS_uint var_outputVariablesCount_13407 = var_variablesMap_11602.getter_count (SOURCE_FILE ("sara_parser.galgas", 459)) ;
  GALGAS_uint var_outputVariablesCountFromDefinition_13477 = var_variablesMapFromDefinition_11912.getter_count (SOURCE_FILE ("sara_parser.galgas", 460)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_outputVariablesCountFromDefinition_13477.objectCompare (var_outputVariablesCount_13407)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 462)), GALGAS_string ("This declaration names ").add_operation (var_outputVariablesCount_13407.getter_string (SOURCE_FILE ("sara_parser.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 462)).add_operation (GALGAS_string (" variables, but machine definition names "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 462)).add_operation (var_outputVariablesCountFromDefinition_13477.getter_string (SOURCE_FILE ("sara_parser.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 463)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 463)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 462)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  GALGAS_L_5F_scenarioList var_scenarioList_13812 = GALGAS_L_5F_scenarioList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 466)) ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GALGAS_lstring var_scenarioTitle_13891 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 468)) ;
    GALGAS_L_5F_inputScenario var_inputScenario_13913 = GALGAS_L_5F_inputScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 469)) ;
    bool repeatFlag_10 = true ;
    while (repeatFlag_10) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
      GALGAS_L_5F_inputConfigurationForScenario var_inputConfigurationForScenario_14004 = GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 472)) ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GALGAS_luint var_v_14097 = inCompiler->synthetizedAttribute_ulongValue () ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 474)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsStrictSup, var_v_14097.readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (var_v_14097.readProperty_location (), GALGAS_string ("this value is not a  binary digit"), fixItArray13  COMMA_SOURCE_FILE ("sara_parser.galgas", 476)) ;
          }
        }
        var_inputConfigurationForScenario_14004.addAssign_operation (var_v_14097  COMMA_SOURCE_FILE ("sara_parser.galgas", 478)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
        } break ;
        default:
          repeatFlag_11 = false ;
          break ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_12114.objectCompare (var_inputConfigurationForScenario_14004.getter_length (SOURCE_FILE ("sara_parser.galgas", 482)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 483)), GALGAS_string ("this input configuration names ").add_operation (var_inputConfigurationForScenario_14004.getter_length (SOURCE_FILE ("sara_parser.galgas", 483)).getter_string (SOURCE_FILE ("sara_parser.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)).add_operation (GALGAS_string (" input variable(s), instead of "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)).add_operation (var_inputVariablesCount_12114.getter_string (SOURCE_FILE ("sara_parser.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 483)), fixItArray15  COMMA_SOURCE_FILE ("sara_parser.galgas", 483)) ;
        }
      }
      var_inputScenario_13913.addAssign_operation (var_inputConfigurationForScenario_14004  COMMA_SOURCE_FILE ("sara_parser.galgas", 485)) ;
      switch (select_sara_5F_parser_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_10 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    var_scenarioList_13812.addAssign_operation (var_scenarioTitle_13891, var_inputScenario_13913  COMMA_SOURCE_FILE ("sara_parser.galgas", 489)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_9 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
  GALGAS_AC_5F_job var_machine_14735 = GALGAS_C_5F_scenarioComponent::constructor_new (var_machineIndex_11791, var_inputVariablesCount_12114, var_inputAndInternalVariablesCount_12773, var_variablesMap_11602, var_scenarioList_13812  COMMA_SOURCE_FILE ("sara_parser.galgas", 494)) ;
  ioArgument_ioSemanticContext.mProperty_componentsMap.addAssign_operation (var_machine_14735  COMMA_SOURCE_FILE ("sara_parser.galgas", 495)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 422)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 432)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 436)) ;
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 468)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 474)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
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
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_component_i12_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_scenario COMMA_SOURCE_FILE ("sara_parser.galgas", 410)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 413)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 417)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 419)) ;
    switch (select_sara_5F_parser_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 422)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 425)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 432)) ;
  switch (select_sara_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 436)) ;
      switch (select_sara_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 439)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 442)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 450)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 452)) ;
    switch (select_sara_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 455)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 457)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 465)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_string COMMA_SOURCE_FILE ("sara_parser.galgas", 468)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 471)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer COMMA_SOURCE_FILE ("sara_parser.galgas", 474)) ;
        switch (select_sara_5F_parser_19 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 480)) ;
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
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 488)) ;
    switch (select_sara_5F_parser_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 492)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_15291 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15291, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_orExpression::constructor_new (outArgument_outExpression, var_rightExpression_15291  COMMA_SOURCE_FILE ("sara_parser.galgas", 509)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 511)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_15460 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15460, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_xorExpression::constructor_new (outArgument_outExpression, var_rightExpression_15460  COMMA_SOURCE_FILE ("sara_parser.galgas", 513)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 515)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_15631 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15631, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_impliesExpression::constructor_new (outArgument_outExpression, var_rightExpression_15631  COMMA_SOURCE_FILE ("sara_parser.galgas", 517)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 519)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_15805 ;
      nt_io_5F_and_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_15805, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_equalExpression::constructor_new (outArgument_outExpression, var_rightExpression_15805  COMMA_SOURCE_FILE ("sara_parser.galgas", 521)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 511)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 515)) ;
      nt_io_5F_and_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 519)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_and_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 507)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 511)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 515)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 519)) ;
      nt_io_5F_and_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
      GALGAS_AC_5F_boolExpression var_rightExpression_16262 ;
      nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_rightExpression_16262, inCompiler) ;
      outArgument_outExpression = GALGAS_C_5F_andExpression::constructor_new (outArgument_outExpression, var_rightExpression_16262  COMMA_SOURCE_FILE ("sara_parser.galgas", 536)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_io_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("sara_parser.galgas", 534)) ;
      nt_io_5F_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 548)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  nt_io_5F_bool_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 548)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i15_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 546)) ;
  nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 548)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_inputVarName_16886 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
  GALGAS_uint var_inputVarIndex_16940 ;
  ioArgument_ioVarMap.method_searchKey (var_inputVarName_16886, var_inputVarIndex_16940, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 558)) ;
  outArgument_outExpression = GALGAS_C_5F_VariableExpression::constructor_new (var_inputVarIndex_16940  COMMA_SOURCE_FILE ("sara_parser.galgas", 559)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i16_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 557)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
  GALGAS_AC_5F_boolExpression var_expression_17281 ;
  nt_io_5F_primary_ (constinArgument_inSemanticContext, ioArgument_ioVarMap, var_expression_17281, inCompiler) ;
  outArgument_outExpression = GALGAS_C_5F_notExpression::constructor_new (var_expression_17281  COMMA_SOURCE_FILE ("sara_parser.galgas", 570)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
  nt_io_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i17_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 568)) ;
  nt_io_5F_primary_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
  outArgument_outExpression = GALGAS_C_5F_falseExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 580)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i18_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_false COMMA_SOURCE_FILE ("sara_parser.galgas", 579)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     GALGAS_M_5F_variablesMap & /* ioArgument_ioVarMap */,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 589)) ;
  outArgument_outExpression = GALGAS_C_5F_trueExpression::constructor_new (SOURCE_FILE ("sara_parser.galgas", 590)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 589)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i19_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_true COMMA_SOURCE_FILE ("sara_parser.galgas", 589)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                     GALGAS_AC_5F_boolExpression & outArgument_outExpression,
                                                                     C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_machineIdentifier_18135 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 599)) ;
  GALGAS_uint var_indexOfImportedMachine_18225 ;
  GALGAS_uint var_machineInputVariableCount_18256 ;
  GALGAS_uint var_machineInputAndInternalVariableCount_18298 ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap_18323 ;
  GALGAS_stringlist joker_18325 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_18135, var_indexOfImportedMachine_18225, var_machineInputVariableCount_18256, var_machineInputAndInternalVariableCount_18298, var_machineVariablesMap_18323, joker_18325, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 600)) ;
  GALGAS_L_5F_translationVector var_translationVector_18351 = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 601)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar_18458 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 605)) ;
    GALGAS_uint var_inputVarIndex_18511 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_18458, var_inputVarIndex_18511, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 606)) ;
    var_translationVector_18351.addAssign_operation (var_inputVarIndex_18511  COMMA_SOURCE_FILE ("sara_parser.galgas", 607)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
  GALGAS_uint var_inputVariablesCount_18612 = var_translationVector_18351.getter_length (SOURCE_FILE ("sara_parser.galgas", 612)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_18612.objectCompare (var_machineInputVariableCount_18256)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 614)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_18135.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (var_machineInputVariableCount_18256.getter_string (SOURCE_FILE ("sara_parser.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 614)).add_operation (var_inputVariablesCount_18612.getter_string (SOURCE_FILE ("sara_parser.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 615)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 615)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 614)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 618)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_internalVar_19027 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 622)) ;
      GALGAS_uint var_internalVarIndex_19088 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_19027, var_internalVarIndex_19088, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 623)) ;
      var_translationVector_18351.addAssign_operation (var_internalVarIndex_19088  COMMA_SOURCE_FILE ("sara_parser.galgas", 624)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_19218 = var_translationVector_18351.getter_length (SOURCE_FILE ("sara_parser.galgas", 630)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount_19218.objectCompare (var_machineInputAndInternalVariableCount_18298)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 632)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_18135.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (var_machineInputAndInternalVariableCount_18298.getter_string (SOURCE_FILE ("sara_parser.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 632)).add_operation (var_inputAndInternalVariablesCount_19218.getter_string (SOURCE_FILE ("sara_parser.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 633)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 633)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 632)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVar_19688 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
    GALGAS_uint var_outputVarIndex_19743 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_19688, var_outputVarIndex_19743, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 639)) ;
    var_translationVector_18351.addAssign_operation (var_outputVarIndex_19743  COMMA_SOURCE_FILE ("sara_parser.galgas", 640)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 642)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 644)) ;
  GALGAS_uint var_allVariablesCount_19843 = var_translationVector_18351.getter_length (SOURCE_FILE ("sara_parser.galgas", 645)) ;
  GALGAS_uint var_machineAllVariablesCount_19909 = var_machineVariablesMap_18323.getter_count (SOURCE_FILE ("sara_parser.galgas", 646)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_allVariablesCount_19843.objectCompare (var_machineAllVariablesCount_19909)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 648)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_18135.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (var_machineAllVariablesCount_19909.getter_string (SOURCE_FILE ("sara_parser.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 648)).add_operation (var_allVariablesCount_19843.getter_string (SOURCE_FILE ("sara_parser.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 649)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 649)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 648)) ;
    }
  }
  outArgument_outExpression = GALGAS_C_5F_importBoolMachine::constructor_new (var_indexOfImportedMachine_18225, var_machineIdentifier_18135.readProperty_location (), var_translationVector_18351  COMMA_SOURCE_FILE ("sara_parser.galgas", 651)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 599)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 605)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 618)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 622)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 642)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 644)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_io_5F_primary_i20_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 599)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 603)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 605)) ;
    switch (select_sara_5F_parser_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 609)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 611)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 618)) ;
  switch (select_sara_5F_parser_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 622)) ;
      switch (select_sara_5F_parser_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 626)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 629)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 636)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 638)) ;
    switch (select_sara_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 642)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 644)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_20873 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_20975 ;
      nt_definition_5F_expression_5F_term_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_20975, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_orComposition::constructor_new (var_leftOperand_20873, var_rightOperand_20975  COMMA_SOURCE_FILE ("sara_parser.galgas", 671)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_i21_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 668)) ;
      nt_definition_5F_expression_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 684)) ;
      GALGAS_location var_errorLocation_21425 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 685)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_21484 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_21588 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_21588, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_strongModalComposition::constructor_new (var_leftOperand_21484, var_errorLocation_21425, var_rightOperand_21588  COMMA_SOURCE_FILE ("sara_parser.galgas", 688)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 690)) ;
      GALGAS_location var_errorLocation_21733 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 691)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_21792 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_21896 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_21896, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_weakModalComposition::constructor_new (var_leftOperand_21792, var_errorLocation_21733, var_rightOperand_21896  COMMA_SOURCE_FILE ("sara_parser.galgas", 694)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 696)) ;
      GALGAS_AC_5F_machineDefinition var_leftOperand_22049 = outArgument_outDefinition ;
      GALGAS_AC_5F_machineDefinition var_rightOperand_22153 ;
      nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_rightOperand_22153, inCompiler) ;
      outArgument_outDefinition = GALGAS_C_5F_parallelComposition::constructor_new (var_leftOperand_22049, var_rightOperand_22153  COMMA_SOURCE_FILE ("sara_parser.galgas", 699)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 684)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 690)) ;
      nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 696)) ;
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

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_sara_5F_parser_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 684)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2A__2A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 690)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 696)) ;
      nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                  GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GALGAS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GALGAS_ListForModes & outArgument_outInclusionList,
                                                                                  C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outInclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GALGAS_M_5F_modesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 710)) ;
  outArgument_outInclusionList = GALGAS_ListForModes::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_modeName_22610 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
    GALGAS_AC_5F_machineDefinition var_def_22689 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_22689, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_22610, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 716)), var_def_22689, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 716)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
      GALGAS_lstring var_sourceModeName_22843 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      GALGAS_uint var_sourceModeIndex_22906 ;
      GALGAS_AC_5F_machineDefinition joker_22908 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_22843, var_sourceModeIndex_22906, joker_22908, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 724)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 725)) ;
      GALGAS_lstring var_targetModeName_22956 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      GALGAS_uint var_targetModeIndex_23019 ;
      GALGAS_AC_5F_machineDefinition joker_23021 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_22956, var_targetModeIndex_23019, joker_23021, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 727)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 728)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex_22906.objectCompare (var_targetModeIndex_23019)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_22956.readProperty_location (), GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 730)) ;
        }
      }
      if (kBoolFalse == test_2) {
        outArgument_outInclusionList.addAssign_operation (var_sourceModeIndex_22906, var_targetModeIndex_23019  COMMA_SOURCE_FILE ("sara_parser.galgas", 732)) ;
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
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 725)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 728)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 713)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 714)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 717)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_include COMMA_SOURCE_FILE ("sara_parser.galgas", 722)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 723)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 725)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 726)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 728)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                  GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                                  GALGAS_M_5F_modesMap & outArgument_outModeMap,
                                                                                  GALGAS_ListForModes & outArgument_outExclusionList,
                                                                                  C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outModeMap.drop () ; // Release 'out' argument
  outArgument_outExclusionList.drop () ; // Release 'out' argument
  outArgument_outModeMap = GALGAS_M_5F_modesMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 744)) ;
  outArgument_outExclusionList = GALGAS_ListForModes::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 745)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_modeName_23688 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 748)) ;
    GALGAS_AC_5F_machineDefinition var_def_23767 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_23767, inCompiler) ;
    {
    outArgument_outModeMap.setter_insertKey (var_modeName_23688, outArgument_outModeMap.getter_count (SOURCE_FILE ("sara_parser.galgas", 750)), var_def_23767, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 750)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 751)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      GALGAS_lstring var_sourceModeName_23921 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 757)) ;
      GALGAS_uint var_sourceModeIndex_23984 ;
      GALGAS_AC_5F_machineDefinition joker_23986 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_sourceModeName_23921, var_sourceModeIndex_23984, joker_23986, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 758)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
      GALGAS_lstring var_targetModeName_24034 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      GALGAS_uint var_targetModeIndex_24097 ;
      GALGAS_AC_5F_machineDefinition joker_24099 ; // Joker input parameter
      outArgument_outModeMap.method_searchKey (var_targetModeName_24034, var_targetModeIndex_24097, joker_24099, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 761)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 762)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_sourceModeIndex_23984.objectCompare (var_targetModeIndex_24097)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (var_targetModeName_24034.readProperty_location (), GALGAS_string ("unuseful include: 'modalcompadd' operator never adds transitions from terminal states to initial states of the same mode"), fixItArray3  COMMA_SOURCE_FILE ("sara_parser.galgas", 764)) ;
        }
      }
      if (kBoolFalse == test_2) {
        outArgument_outExclusionList.addAssign_operation (var_sourceModeIndex_23984, var_targetModeIndex_24097  COMMA_SOURCE_FILE ("sara_parser.galgas", 766)) ;
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
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 748)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 751)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 757)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 762)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 747)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 748)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 751)) ;
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
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_exclude COMMA_SOURCE_FILE ("sara_parser.galgas", 756)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 757)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 759)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 760)) ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 762)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
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
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 780)) ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, outArgument_outDefinition, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
  } break ;
  case 3: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap_24859 = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount_24910 = var_extendedVariablesMap_24859.getter_count (SOURCE_FILE ("sara_parser.galgas", 785)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_variableName_24997 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 788)) ;
      {
      var_extendedVariablesMap_24859.setter_insertKey (var_variableName_24997, var_extendedVariablesMap_24859.getter_count (SOURCE_FILE ("sara_parser.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 789)) ;
      }
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount_25144 = var_extendedVariablesMap_24859.getter_count (SOURCE_FILE ("sara_parser.galgas", 793)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 794)) ;
    GALGAS_AC_5F_machineDefinition var_def_25262 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_24859, var_def_25262, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
    outArgument_outDefinition = GALGAS_C_5F_existsDefinition::constructor_new (var_previousVariableCount_24910, var_actualVariableCount_25144, var_def_25262  COMMA_SOURCE_FILE ("sara_parser.galgas", 797)) ;
  } break ;
  case 4: {
    GALGAS_M_5F_variablesMap var_extendedVariablesMap_25417 = ioArgument_variablesMap ;
    GALGAS_uint var_previousVariableCount_25468 = var_extendedVariablesMap_25417.getter_count (SOURCE_FILE ("sara_parser.galgas", 800)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 801)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_variableName_25555 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 803)) ;
      {
      var_extendedVariablesMap_25417.setter_insertKey (var_variableName_25555, var_extendedVariablesMap_25417.getter_count (SOURCE_FILE ("sara_parser.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 804)) ;
      }
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 806)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_uint var_actualVariableCount_25702 = var_extendedVariablesMap_25417.getter_count (SOURCE_FILE ("sara_parser.galgas", 808)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 809)) ;
    GALGAS_AC_5F_machineDefinition var_def_25820 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, var_extendedVariablesMap_25417, var_def_25820, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
    outArgument_outDefinition = GALGAS_C_5F_forallDefinition::constructor_new (var_previousVariableCount_25468, var_actualVariableCount_25702, var_def_25820  COMMA_SOURCE_FILE ("sara_parser.galgas", 812)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    GALGAS_AC_5F_boolExpression var_def_26017 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26017, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_boolToSeqExpression::constructor_new (var_def_26017  COMMA_SOURCE_FILE ("sara_parser.galgas", 817)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
    GALGAS_AC_5F_machineDefinition var_def_26173 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26173, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_fullSaturationOperation::constructor_new (var_def_26173  COMMA_SOURCE_FILE ("sara_parser.galgas", 822)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    GALGAS_AC_5F_machineDefinition var_def_26325 ;
    nt_definition_5F_expression_5F_factor_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26325, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_complementationOperation::constructor_new (var_def_26325  COMMA_SOURCE_FILE ("sara_parser.galgas", 826)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 828)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
    GALGAS_AC_5F_machineDefinition var_def_26485 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26485, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressInitialStatesOperation::constructor_new (var_def_26485  COMMA_SOURCE_FILE ("sara_parser.galgas", 831)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 835)) ;
    GALGAS_AC_5F_machineDefinition var_def_26658 ;
    nt_definition_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_def_26658, inCompiler) ;
    outArgument_outDefinition = GALGAS_C_5F_suppressTerminalStatesOperation::constructor_new (var_def_26658  COMMA_SOURCE_FILE ("sara_parser.galgas", 837)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 840)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
    GALGAS_M_5F_modesMap var_modeMap_26861 ;
    GALGAS_ListForModes var_inclusionList_26886 ;
    nt_modalcompadd_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_26861, var_inclusionList_26886, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 847)) ;
    outArgument_outDefinition = GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (var_modeMap_26861, var_inclusionList_26886  COMMA_SOURCE_FILE ("sara_parser.galgas", 848)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    GALGAS_M_5F_modesMap var_modeMap_27110 ;
    GALGAS_ListForModes var_exclusionList_27135 ;
    nt_modalcompsub_5F_definition_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_modeMap_27110, var_exclusionList_27135, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 857)) ;
    outArgument_outDefinition = GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (var_modeMap_27110, var_exclusionList_27135  COMMA_SOURCE_FILE ("sara_parser.galgas", 858)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 861)) ;
    GALGAS_AC_5F_boolExpression var_sourceExpression_27342 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_sourceExpression_27342, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 863)) ;
    GALGAS_AC_5F_boolExpression var_targetExpression_27432 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_targetExpression_27432, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
    outArgument_outDefinition = GALGAS_C_5F_trans::constructor_new (var_sourceExpression_27342, var_targetExpression_27432  COMMA_SOURCE_FILE ("sara_parser.galgas", 866)) ;
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
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 780)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 788)) ;
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 794)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 801)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 803)) ;
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 806)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 809)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    nt_definition_5F_expression_5F_factor_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 828)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 835)) ;
    nt_definition_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 840)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
    nt_modalcompadd_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 847)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    nt_modalcompsub_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 857)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 861)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 863)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i25_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  switch (select_sara_5F_parser_32 (inCompiler)) {
  case 1: {
    nt_explicit_5F_automaton_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 780)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 782)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("sara_parser.galgas", 786)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 788)) ;
      switch (select_sara_5F_parser_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 791)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 794)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 796)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("sara_parser.galgas", 801)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 803)) ;
      switch (select_sara_5F_parser_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 806)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 809)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 811)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_bool COMMA_SOURCE_FILE ("sara_parser.galgas", 814)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 815)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 818)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("sara_parser.galgas", 820)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("sara_parser.galgas", 824)) ;
    nt_definition_5F_expression_5F_factor_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nofirst COMMA_SOURCE_FILE ("sara_parser.galgas", 828)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 829)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 832)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_nolast COMMA_SOURCE_FILE ("sara_parser.galgas", 834)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 835)) ;
    nt_definition_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 838)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompadd COMMA_SOURCE_FILE ("sara_parser.galgas", 840)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 841)) ;
    nt_modalcompadd_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 847)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_modalcompsub COMMA_SOURCE_FILE ("sara_parser.galgas", 850)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 851)) ;
    nt_modalcompsub_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 857)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_trans COMMA_SOURCE_FILE ("sara_parser.galgas", 860)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 861)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_to COMMA_SOURCE_FILE ("sara_parser.galgas", 863)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 865)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                          GALGAS_M_5F_variablesMap & ioArgument_ioVarMap,
                                                                                          GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                                          C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GALGAS_lstring var_machineIdentifier_27787 = inCompiler->synthetizedAttribute_identifierString () ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  GALGAS_uint var_indexOfImportedMachine_27877 ;
  GALGAS_uint var_machineInputVariableCount_27908 ;
  GALGAS_uint var_machineInputAndInternalVariableCount_27950 ;
  GALGAS_M_5F_variablesMap var_machineVariablesMap_27975 ;
  GALGAS_stringlist joker_27977 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_machinesMap ().method_searchKey (var_machineIdentifier_27787, var_indexOfImportedMachine_27877, var_machineInputVariableCount_27908, var_machineInputAndInternalVariableCount_27950, var_machineVariablesMap_27975, joker_27977, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 877)) ;
  GALGAS_L_5F_translationVector var_translationVector_28003 = GALGAS_L_5F_translationVector::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 878)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_inputVar_28110 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 882)) ;
    GALGAS_uint var_inputVarIndex_28163 ;
    ioArgument_ioVarMap.method_searchKey (var_inputVar_28110, var_inputVarIndex_28163, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 883)) ;
    var_translationVector_28003.addAssign_operation (var_inputVarIndex_28163  COMMA_SOURCE_FILE ("sara_parser.galgas", 884)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
  GALGAS_uint var_inputVariablesCount_28264 = var_translationVector_28003.getter_length (SOURCE_FILE ("sara_parser.galgas", 889)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_inputVariablesCount_28264.objectCompare (var_machineInputVariableCount_27908)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 891)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_27787.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (var_machineInputVariableCount_27908.getter_string (SOURCE_FILE ("sara_parser.galgas", 891)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (GALGAS_string (" input variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 891)).add_operation (var_inputVariablesCount_28264.getter_string (SOURCE_FILE ("sara_parser.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 892)).add_operation (GALGAS_string (" input variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 892)), fixItArray2  COMMA_SOURCE_FILE ("sara_parser.galgas", 891)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_internalVar_28686 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 899)) ;
      GALGAS_uint var_internalVarIndex_28747 ;
      ioArgument_ioVarMap.method_searchKey (var_internalVar_28686, var_internalVarIndex_28747, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 900)) ;
      var_translationVector_28003.addAssign_operation (var_internalVarIndex_28747  COMMA_SOURCE_FILE ("sara_parser.galgas", 901)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  GALGAS_uint var_inputAndInternalVariablesCount_28877 = var_translationVector_28003.getter_length (SOURCE_FILE ("sara_parser.galgas", 907)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_inputAndInternalVariablesCount_28877.objectCompare (var_machineInputAndInternalVariableCount_27950)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 909)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_27787.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (var_machineInputAndInternalVariableCount_27950.getter_string (SOURCE_FILE ("sara_parser.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (GALGAS_string (" input and internal variable(s), but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 909)).add_operation (var_inputAndInternalVariablesCount_28877.getter_string (SOURCE_FILE ("sara_parser.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 910)).add_operation (GALGAS_string (" input and internal variable(s)"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 910)), fixItArray5  COMMA_SOURCE_FILE ("sara_parser.galgas", 909)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 913)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_lstring var_outputVar_29347 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
    GALGAS_uint var_outputVarIndex_29402 ;
    ioArgument_ioVarMap.method_searchKey (var_outputVar_29347, var_outputVarIndex_29402, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 916)) ;
    var_translationVector_28003.addAssign_operation (var_outputVarIndex_29402  COMMA_SOURCE_FILE ("sara_parser.galgas", 917)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 921)) ;
  GALGAS_uint var_allVariablesCount_29502 = var_translationVector_28003.getter_length (SOURCE_FILE ("sara_parser.galgas", 922)) ;
  GALGAS_uint var_machineAllVariablesCount_29568 = var_machineVariablesMap_27975.getter_count (SOURCE_FILE ("sara_parser.galgas", 923)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_allVariablesCount_29502.objectCompare (var_machineAllVariablesCount_29568)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 925)), GALGAS_string ("The '$").add_operation (var_machineIdentifier_27787.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (GALGAS_string ("' machine defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (var_machineAllVariablesCount_29568.getter_string (SOURCE_FILE ("sara_parser.galgas", 925)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (GALGAS_string (" variables, but this operand defines "), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 925)).add_operation (var_allVariablesCount_29502.getter_string (SOURCE_FILE ("sara_parser.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 926)).add_operation (GALGAS_string (" variables"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 926)), fixItArray8  COMMA_SOURCE_FILE ("sara_parser.galgas", 925)) ;
    }
  }
  outArgument_outDefinition = GALGAS_C_5F_importMachine::constructor_new (var_indexOfImportedMachine_27877, var_translationVector_28003  COMMA_SOURCE_FILE ("sara_parser.galgas", 928)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 882)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 899)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 913)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 921)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_definition_5F_expression_5F_factor_i26_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_machineIdf COMMA_SOURCE_FILE ("sara_parser.galgas", 876)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 880)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 882)) ;
    switch (select_sara_5F_parser_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 886)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 888)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 895)) ;
  switch (select_sara_5F_parser_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 899)) ;
      switch (select_sara_5F_parser_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 903)) ;
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
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 906)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("sara_parser.galgas", 913)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 915)) ;
    switch (select_sara_5F_parser_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 919)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("sara_parser.galgas", 921)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_ (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                             GALGAS_M_5F_variablesMap & ioArgument_variablesMap,
                                                                             GALGAS_AC_5F_machineDefinition & outArgument_outDefinition,
                                                                             C_Lexique_sara_5F_scanner * inCompiler) {
  outArgument_outDefinition.drop () ; // Release 'out' argument
  GALGAS_M_5F_stateMap var_statesMap_30354 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 939)) ;
  GALGAS_L_5F_stateDefinition var_stateDefinitionList_30404 = GALGAS_L_5F_stateDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 940)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 942)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_stateName_30526 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 946)) ;
    {
    var_statesMap_30354.setter_insertKey (var_stateName_30526, var_statesMap_30354.getter_count (SOURCE_FILE ("sara_parser.galgas", 947)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 947)) ;
    }
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  GALGAS_L_5F_statesDefinitionList var_initialStatesDefinitionList_30666 = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 953)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_initialState_30757 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 956)) ;
    GALGAS_uint var_initialStateIndex_30819 ;
    var_statesMap_30354.method_searchKey (var_initialState_30757, var_initialStateIndex_30819, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 957)) ;
    var_initialStatesDefinitionList_30666.addAssign_operation (var_initialStateIndex_30819, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 958))  COMMA_SOURCE_FILE ("sara_parser.galgas", 958)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 960)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 962)) ;
  GALGAS_L_5F_statesDefinitionList var_terminalStatesDefinitionList_30974 = GALGAS_L_5F_statesDefinitionList::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 964)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_terminalState_31085 = inCompiler->synthetizedAttribute_identifierString () ;
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
      GALGAS_uint var_terminalStateIndex_31151 ;
      var_statesMap_30354.method_searchKey (var_terminalState_31085, var_terminalStateIndex_31151, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 970)) ;
      var_terminalStatesDefinitionList_30974.addAssign_operation (var_terminalStateIndex_31151, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 971))  COMMA_SOURCE_FILE ("sara_parser.galgas", 971)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 973)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 975)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_M_5F_stateMap var_stateDefinitionMap_31323 = GALGAS_M_5F_stateMap::constructor_emptyMap (SOURCE_FILE ("sara_parser.galgas", 978)) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GALGAS_lstring var_stateName_31409 = inCompiler->synthetizedAttribute_identifierString () ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    GALGAS_uint var_stateIndex_31461 ;
    var_statesMap_30354.method_searchKey (var_stateName_31409, var_stateIndex_31461, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 982)) ;
    {
    var_stateDefinitionMap_31323.setter_defineState (var_stateName_31409, var_stateDefinitionMap_31323.getter_count (SOURCE_FILE ("sara_parser.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 983)) ;
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
    GALGAS_AC_5F_boolExpression var_stateExpression_31658 ;
    nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_stateExpression_31658, inCompiler) ;
    GALGAS_location var_endOfStateExpression_31697 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 987)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    GALGAS_L_5F_transitionDefinition var_transitionsList_31776 = GALGAS_L_5F_transitionDefinition::constructor_emptyList (SOURCE_FILE ("sara_parser.galgas", 990)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        GALGAS_AC_5F_boolExpression var_transitionInputExpression_31926 ;
        nt_io_5F_bool_5F_expression_ (constinArgument_inSemanticContext, ioArgument_variablesMap, var_transitionInputExpression_31926, inCompiler) ;
        GALGAS_location var_endOfExpression_31962 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 994)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 995)) ;
        GALGAS_lstring var_targetStateName_32032 = inCompiler->synthetizedAttribute_identifierString () ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 996)) ;
        GALGAS_uint var_targetStateIndex_32098 ;
        var_statesMap_30354.method_searchKey (var_targetStateName_32032, var_targetStateIndex_32098, inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 997)) ;
        var_transitionsList_31776.addAssign_operation (var_transitionInputExpression_31926, var_endOfExpression_31962, var_targetStateIndex_32098  COMMA_SOURCE_FILE ("sara_parser.galgas", 998)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1001)) ;
    var_stateDefinitionList_30404.addAssign_operation (var_stateIndex_31461, var_stateExpression_31658, var_endOfStateExpression_31697, var_transitionsList_31776  COMMA_SOURCE_FILE ("sara_parser.galgas", 1002)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  cEnumerator_M_5F_stateMap enumerator_32396 (var_statesMap_30354, kENUMERATION_UP) ;
  while (enumerator_32396.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_stateDefinitionMap_31323.getter_hasKey (enumerator_32396.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("sara_parser.galgas", 1008)).operator_not (SOURCE_FILE ("sara_parser.galgas", 1008)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)), GALGAS_string ("'").add_operation (enumerator_32396.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)).add_operation (GALGAS_string ("' state is not described"), inCompiler COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)), fixItArray6  COMMA_SOURCE_FILE ("sara_parser.galgas", 1009)) ;
      }
    }
    enumerator_32396.gotoNextObject () ;
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
  outArgument_outDefinition = GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (var_statesMap_30354, var_initialStatesDefinitionList_30666, var_terminalStatesDefinitionList_30974, var_stateDefinitionList_30404, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sara_parser.galgas", 1014))  COMMA_SOURCE_FILE ("sara_parser.galgas", 1014)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_parse (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 942)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 946)) ;
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 956)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 960)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 962)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 973)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 975)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
    nt_io_5F_bool_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        nt_io_5F_bool_5F_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 995)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 996)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1001)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_sara_5F_parser::rule_sara_5F_parser_explicit_5F_automaton_i27_indexing (C_Lexique_sara_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_auto COMMA_SOURCE_FILE ("sara_parser.galgas", 941)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 942)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_state COMMA_SOURCE_FILE ("sara_parser.galgas", 944)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 946)) ;
    switch (select_sara_5F_parser_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 949)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 951)) ;
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_first COMMA_SOURCE_FILE ("sara_parser.galgas", 954)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 956)) ;
    switch (select_sara_5F_parser_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 960)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 962)) ;
  switch (select_sara_5F_parser_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_last COMMA_SOURCE_FILE ("sara_parser.galgas", 967)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 969)) ;
      switch (select_sara_5F_parser_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("sara_parser.galgas", 973)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 975)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 981)) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("sara_parser.galgas", 984)) ;
    nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 988)) ;
    bool repeatFlag_4 = true ;
    while (repeatFlag_4) {
      switch (select_sara_5F_parser_44 (inCompiler)) {
      case 2: {
        nt_io_5F_bool_5F_expression_indexing (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_goto COMMA_SOURCE_FILE ("sara_parser.galgas", 995)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("sara_parser.galgas", 996)) ;
        inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__3B_ COMMA_SOURCE_FILE ("sara_parser.galgas", 999)) ;
      } break ;
      default:
        repeatFlag_4 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1001)) ;
    switch (select_sara_5F_parser_43 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_sara_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("sara_parser.galgas", 1013)) ;
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

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::constructor_new (const GALGAS_uint & in_mTargetSlot 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector_2D_element result ;
  if (in_mTargetSlot.isValid ()) {
    result = GALGAS_L_5F_translationVector_2D_element (in_mTargetSlot) ;
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
//     @L_translationVector-element generic code implementation
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

GALGAS_L_5F_transitionDefinition_2D_element GALGAS_L_5F_transitionDefinition_2D_element::constructor_new (const GALGAS_AC_5F_boolExpression & in_mActionExpression,
                                                                                                          const GALGAS_location & in_mEndOfExpression,
                                                                                                          const GALGAS_uint & in_mTargetStateIndex 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_transitionDefinition_2D_element result ;
  if (in_mActionExpression.isValid () && in_mEndOfExpression.isValid () && in_mTargetStateIndex.isValid ()) {
    result = GALGAS_L_5F_transitionDefinition_2D_element (in_mActionExpression, in_mEndOfExpression, in_mTargetStateIndex) ;
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
//     @L_transitionDefinition-element generic code implementation
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

GALGAS_L_5F_stateDefinition_2D_element GALGAS_L_5F_stateDefinition_2D_element::constructor_new (const GALGAS_uint & in_mStateIndex,
                                                                                                const GALGAS_AC_5F_boolExpression & in_mStateExpression,
                                                                                                const GALGAS_location & in_mEndOfStateExpression,
                                                                                                const GALGAS_L_5F_transitionDefinition & in_mTransitionsList 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_stateDefinition_2D_element result ;
  if (in_mStateIndex.isValid () && in_mStateExpression.isValid () && in_mEndOfStateExpression.isValid () && in_mTransitionsList.isValid ()) {
    result = GALGAS_L_5F_stateDefinition_2D_element (in_mStateIndex, in_mStateExpression, in_mEndOfStateExpression, in_mTransitionsList) ;
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
//     @L_stateDefinition-element generic code implementation
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

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::constructor_new (const GALGAS_uint & in_mStateIndex,
                                                                                                          const GALGAS_location & in_mStateLocation 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList_2D_element result ;
  if (in_mStateIndex.isValid () && in_mStateLocation.isValid ()) {
    result = GALGAS_L_5F_statesDefinitionList_2D_element (in_mStateIndex, in_mStateLocation) ;
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
//     @L_statesDefinitionList-element generic code implementation
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

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::constructor_new (const GALGAS_uint & in_mSourceMode,
                                                                                const GALGAS_uint & in_mTargetMode 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ListForModes_2D_element result ;
  if (in_mSourceMode.isValid () && in_mTargetMode.isValid ()) {
    result = GALGAS_ListForModes_2D_element (in_mSourceMode, in_mTargetMode) ;
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
//     @ListForModes-element generic code implementation
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

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::constructor_new (const GALGAS_luint & in_mInputValue 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario_2D_element result ;
  if (in_mInputValue.isValid ()) {
    result = GALGAS_L_5F_inputConfigurationForScenario_2D_element (in_mInputValue) ;
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
//     @L_inputConfigurationForScenario-element generic code implementation
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

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::constructor_new (const GALGAS_L_5F_inputConfigurationForScenario & in_mInputConfiguration 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario_2D_element result ;
  if (in_mInputConfiguration.isValid ()) {
    result = GALGAS_L_5F_inputScenario_2D_element (in_mInputConfiguration) ;
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
//     @L_inputScenario-element generic code implementation
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

GALGAS_L_5F_jobList_2D_element GALGAS_L_5F_jobList_2D_element::constructor_new (const GALGAS_AC_5F_job & in_mComponent 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_jobList_2D_element result ;
  if (in_mComponent.isValid ()) {
    result = GALGAS_L_5F_jobList_2D_element (in_mComponent) ;
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
//     @L_jobList-element generic code implementation
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_importBoolMachine::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_boolExpression::printNonNullClassInstanceProperties () ;
    mProperty_mIndexOfImportedMachine.printNonNullClassInstanceProperties ("mIndexOfImportedMachine") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mTranslationVector.printNonNullClassInstanceProperties ("mTranslationVector") ;
  }
#endif

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
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
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
//     @C_importBoolMachine generic code implementation
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
// @C_5F_machineCheck reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_C_5F_machineCheck::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
    mProperty_mMachineIndex.printNonNullClassInstanceProperties ("mMachineIndex") ;
    mProperty_mCheckMachineIsBoolean.printNonNullClassInstanceProperties ("mCheckMachineIsBoolean") ;
  }
#endif

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
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
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
//     @C_machineCheck generic code implementation
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
// @C_5F_machineDefinedByAdditiveModalComp reference class
//----------------------------------------------------------------------------------------------------------------------

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
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
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
//     @C_machineDefinedByAdditiveModalComp generic code implementation
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
// @C_5F_machineDefinedBySubstractiveModalComp reference class
//----------------------------------------------------------------------------------------------------------------------

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
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
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
//     @C_machineDefinedBySubstractiveModalComp generic code implementation
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
// At index 8 : <component>, in file 'sara_parser.ggs', line 41
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 13 : <component>, in file 'sara_parser.ggs', line 57
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) // $first$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 19 : <component>, in file 'sara_parser.ggs', line 74
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 25 : <component>, in file 'sara_parser.ggs', line 91
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_check) // $check$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 29 : <component>, in file 'sara_parser.ggs', line 106
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkidentical) // $checkidentical$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 35 : <component>, in file 'sara_parser.ggs', line 125
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkbool) // $checkbool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 39 : <component>, in file 'sara_parser.ggs', line 205
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bdd) // $bdd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 42 : <component>, in file 'sara_parser.ggs', line 215
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
// At index 58 : <component>, in file 'sara_parser.ggs', line 277
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
// At index 75 : <component>, in file 'sara_parser.ggs', line 344
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
// At index 92 : <component>, in file 'sara_parser.ggs', line 409
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
// At index 115 : <io_bool_expression>, in file 'sara_parser.ggs', line 500
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 118 : <io_and_expression>, in file 'sara_parser.ggs', line 527
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 121 : <io_primary>, in file 'sara_parser.ggs', line 542
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 125 : <io_primary>, in file 'sara_parser.ggs', line 553
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 127 : <io_primary>, in file 'sara_parser.ggs', line 564
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (4) // <io_primary>
, END_PRODUCTION
// At index 130 : <io_primary>, in file 'sara_parser.ggs', line 575
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 132 : <io_primary>, in file 'sara_parser.ggs', line 585
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 134 : <io_primary>, in file 'sara_parser.ggs', line 595
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
// At index 147 : <definition_expression>, in file 'sara_parser.ggs', line 661
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 150 : <definition_expression_term>, in file 'sara_parser.ggs', line 677
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 153 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 705
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 160 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 739
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 167 : <definition_expression_factor>, in file 'sara_parser.ggs', line 773
, NONTERMINAL (43) // <select_sara_5F_parser_32>
, END_PRODUCTION
// At index 169 : <definition_expression_factor>, in file 'sara_parser.ggs', line 872
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
// At index 182 : <explicit_automaton>, in file 'sara_parser.ggs', line 935
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
// At index 206 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 223
, END_PRODUCTION
// At index 207 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 223
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_sara_5F_parser_1>
, END_PRODUCTION
// At index 211 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 234
, END_PRODUCTION
// At index 212 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 234
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 215 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 236
, END_PRODUCTION
// At index 216 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 236
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 220 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 248
, END_PRODUCTION
// At index 221 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 248
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <select_sara_5F_parser_4>
, END_PRODUCTION
// At index 225 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 286
, END_PRODUCTION
// At index 226 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 286
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (16) // <select_sara_5F_parser_5>
, END_PRODUCTION
// At index 230 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 297
, END_PRODUCTION
// At index 231 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 297
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 234 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 299
, END_PRODUCTION
// At index 235 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 299
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 239 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 311
, END_PRODUCTION
// At index 240 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 311
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (19) // <select_sara_5F_parser_8>
, END_PRODUCTION
// At index 244 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 353
, END_PRODUCTION
// At index 245 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 353
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (20) // <select_sara_5F_parser_9>
, END_PRODUCTION
// At index 249 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 364
, END_PRODUCTION
// At index 250 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 364
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 253 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 366
, END_PRODUCTION
// At index 254 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 366
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 258 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 378
, END_PRODUCTION
// At index 259 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 378
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (23) // <select_sara_5F_parser_12>
, END_PRODUCTION
// At index 263 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 418
, END_PRODUCTION
// At index 264 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 418
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (24) // <select_sara_5F_parser_13>
, END_PRODUCTION
// At index 268 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 433
, END_PRODUCTION
// At index 269 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 433
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 272 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 435
, END_PRODUCTION
// At index 273 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 435
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 277 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 451
, END_PRODUCTION
// At index 278 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 451
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (27) // <select_sara_5F_parser_16>
, END_PRODUCTION
// At index 282 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 467
, END_PRODUCTION
// At index 283 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 467
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (28) // <select_sara_5F_parser_17>
, END_PRODUCTION
// At index 291 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 470
, END_PRODUCTION
// At index 292 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 470
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, END_PRODUCTION
// At index 297 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 473
, END_PRODUCTION
// At index 298 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 473
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, END_PRODUCTION
// At index 302 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, END_PRODUCTION
// At index 303 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 307 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 311 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2D__3E_) // $->$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 315 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 505
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3D_) // $=$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 319 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 532
, END_PRODUCTION
// At index 320 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 532
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 324 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 604
, END_PRODUCTION
// At index 325 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 604
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (33) // <select_sara_5F_parser_22>
, END_PRODUCTION
// At index 329 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 619
, END_PRODUCTION
// At index 330 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 619
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 333 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 621
, END_PRODUCTION
// At index 334 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 621
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 338 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 637
, END_PRODUCTION
// At index 339 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 637
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (36) // <select_sara_5F_parser_25>
, END_PRODUCTION
// At index 343 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 666
, END_PRODUCTION
// At index 344 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 666
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 348 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, END_PRODUCTION
// At index 349 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 353 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A__2A_) // $**$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 357 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 682
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C__7C_) // $||$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 361 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 712
, END_PRODUCTION
// At index 362 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 712
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, END_PRODUCTION
// At index 368 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 720
, END_PRODUCTION
// At index 369 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 720
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_include) // $include$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 376 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 746
, END_PRODUCTION
// At index 377 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 746
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, END_PRODUCTION
// At index 383 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 754
, END_PRODUCTION
// At index 384 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 754
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_exclude) // $exclude$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 391 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, NONTERMINAL (10) // <explicit_automaton>
, END_PRODUCTION
// At index 393 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 397 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3F_) // $?$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 404 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__21_) // $!$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 411 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bool) // $bool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 416 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__40_) // $@$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 419 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 422 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nofirst) // $nofirst$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 427 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nolast) // $nolast$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 432 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (7) // <modalcompadd_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 437 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (8) // <modalcompsub_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 442 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 777
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 449 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 787
, END_PRODUCTION
// At index 450 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 787
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, END_PRODUCTION
// At index 454 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 802
, END_PRODUCTION
// At index 455 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 802
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, END_PRODUCTION
// At index 459 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 881
, END_PRODUCTION
// At index 460 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 881
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (46) // <select_sara_5F_parser_35>
, END_PRODUCTION
// At index 464 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 896
, END_PRODUCTION
// At index 465 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 896
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 468 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 898
, END_PRODUCTION
// At index 469 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 898
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 473 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 914
, END_PRODUCTION
// At index 474 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 914
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (49) // <select_sara_5F_parser_38>
, END_PRODUCTION
// At index 478 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 945
, END_PRODUCTION
// At index 479 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 945
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (50) // <select_sara_5F_parser_39>
, END_PRODUCTION
// At index 483 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 955
, END_PRODUCTION
// At index 484 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 955
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (51) // <select_sara_5F_parser_40>
, END_PRODUCTION
// At index 488 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 965
, END_PRODUCTION
// At index 489 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 965
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 494 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 968
, END_PRODUCTION
// At index 495 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 968
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, END_PRODUCTION
// At index 499 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 979
, END_PRODUCTION
// At index 500 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 979
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, NONTERMINAL (54) // <select_sara_5F_parser_43>
, END_PRODUCTION
// At index 508 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 991
, END_PRODUCTION
// At index 509 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 991
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

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_start_5F_symbol_ (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_start_5F_symbol_i0_(inLexique) ;
}

void cGrammar_sara_5F_grammar::performIndexing (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_sara_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
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

void cGrammar_sara_5F_grammar::nt_component_indexing (C_Lexique_sara_5F_scanner * inLexique) {
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

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i13_indexing(inLexique) ;
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

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i14_indexing(inLexique) ;
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

void cGrammar_sara_5F_grammar::nt_io_5F_primary_indexing (C_Lexique_sara_5F_scanner * inLexique) {
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

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i21_indexing(inLexique) ;
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

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i22_indexing(inLexique) ;
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

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i23_indexing(inLexique) ;
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

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i24_indexing(inLexique) ;
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

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_indexing (C_Lexique_sara_5F_scanner * inLexique) {
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

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_indexing (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i27_indexing(inLexique) ;
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

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                          const GALGAS_uint & in_mIndex 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid ()) {
    result = GALGAS_M_5F_variablesMap_2D_element (in_lkey, in_mIndex) ;
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
//     @M_variablesMap-element generic code implementation
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

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                  const GALGAS_uint & in_mIndex 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid ()) {
    result = GALGAS_M_5F_stateMap_2D_element (in_lkey, in_mIndex) ;
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
//     @M_stateMap-element generic code implementation
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

GALGAS_M_5F_modesMap_2D_element GALGAS_M_5F_modesMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                  const GALGAS_uint & in_mIndex,
                                                                                  const GALGAS_AC_5F_machineDefinition & in_mModeDefinition 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_modesMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid () && in_mModeDefinition.isValid ()) {
    result = GALGAS_M_5F_modesMap_2D_element (in_lkey, in_mIndex, in_mModeDefinition) ;
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
//     @M_modesMap-element generic code implementation
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

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::constructor_new (const GALGAS_lstring & in_mScenarioTitle,
                                                                                          const GALGAS_L_5F_inputScenario & in_mInputScenario 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList_2D_element result ;
  if (in_mScenarioTitle.isValid () && in_mInputScenario.isValid ()) {
    result = GALGAS_L_5F_scenarioList_2D_element (in_mScenarioTitle, in_mInputScenario) ;
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
//     @L_scenarioList-element generic code implementation
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

GALGAS_M_5F_machinesMap_2D_element GALGAS_M_5F_machinesMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                        const GALGAS_uint & in_mIndex,
                                                                                        const GALGAS_uint & in_mInputVariableCount,
                                                                                        const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                                                        const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                                                        const GALGAS_stringlist & in_mNameList 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_machinesMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid () && in_mInputVariableCount.isValid () && in_mInputAndInternalVariableCount.isValid () && in_mVariablesMap.isValid () && in_mNameList.isValid ()) {
    result = GALGAS_M_5F_machinesMap_2D_element (in_lkey, in_mIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mNameList) ;
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
//     @M_machinesMap-element generic code implementation
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
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
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
//     @C_machineComponent generic code implementation
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

