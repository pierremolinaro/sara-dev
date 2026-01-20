#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

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

GGS_C_5F_suppressTerminalStatesOperation GGS_C_5F_suppressTerminalStatesOperation_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_suppressTerminalStatesOperation result ;
  if (isValid ()) {
    const cPtr_C_5F_suppressTerminalStatesOperation * p = (cPtr_C_5F_suppressTerminalStatesOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_suppressTerminalStatesOperation (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation_2E_weak ("C_suppressTerminalStatesOperation.weak",
                                                                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_suppressTerminalStatesOperation_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_C_5F_suppressInitialStatesOperation::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ("C_suppressInitialStatesOperation",
                                                                                        & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_suppressInitialStatesOperation::staticTypeDescriptor (void) const {
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

GGS_C_5F_suppressInitialStatesOperation GGS_C_5F_suppressInitialStatesOperation_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_suppressInitialStatesOperation result ;
  if (isValid ()) {
    const cPtr_C_5F_suppressInitialStatesOperation * p = (cPtr_C_5F_suppressInitialStatesOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_suppressInitialStatesOperation (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation_2E_weak ("C_suppressInitialStatesOperation.weak",
                                                                                                & kTypeDescriptor_GALGAS_AC_5F_machineDefinition_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_suppressInitialStatesOperation_2E_weak::staticTypeDescriptor (void) const {
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


void cPtr_AC_5F_job::
AC_5F_job_init (Compiler * /* inCompiler */) {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_job ("AC_job",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AC_5F_job::staticTypeDescriptor (void) const {
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

GGS_AC_5F_job GGS_AC_5F_job_2E_weak::unwrappedValue (void) const {
  GGS_AC_5F_job result ;
  if (isValid ()) {
    const cPtr_AC_5F_job * p = (cPtr_AC_5F_job *) ptr () ;
    if (nullptr != p) {
      result = GGS_AC_5F_job (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AC_5F_job_2E_weak ("AC_job.weak",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AC_5F_job_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineDisplayStates::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ("C_machineDisplayStates",
                                                                              & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayStates::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineDisplayStates GGS_C_5F_machineDisplayStates_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineDisplayStates result ;
  if (isValid ()) {
    const cPtr_C_5F_machineDisplayStates * p = (cPtr_C_5F_machineDisplayStates *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineDisplayStates (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayStates_2E_weak ("C_machineDisplayStates.weak",
                                                                                      & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayStates_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineDisplayInitialStates::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ("C_machineDisplayInitialStates",
                                                                                     & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayInitialStates::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineDisplayInitialStates GGS_C_5F_machineDisplayInitialStates_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineDisplayInitialStates result ;
  if (isValid ()) {
    const cPtr_C_5F_machineDisplayInitialStates * p = (cPtr_C_5F_machineDisplayInitialStates *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineDisplayInitialStates (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates_2E_weak ("C_machineDisplayInitialStates.weak",
                                                                                             & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayInitialStates_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineDisplayTerminalStates::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ("C_machineDisplayTerminalStates",
                                                                                      & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayTerminalStates::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineDisplayTerminalStates GGS_C_5F_machineDisplayTerminalStates_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineDisplayTerminalStates result ;
  if (isValid ()) {
    const cPtr_C_5F_machineDisplayTerminalStates * p = (cPtr_C_5F_machineDisplayTerminalStates *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineDisplayTerminalStates (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates_2E_weak ("C_machineDisplayTerminalStates.weak",
                                                                                              & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayTerminalStates_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineDisplayTransitions::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ("C_machineDisplayTransitions",
                                                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayTransitions::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineDisplayTransitions GGS_C_5F_machineDisplayTransitions_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineDisplayTransitions result ;
  if (isValid ()) {
    const cPtr_C_5F_machineDisplayTransitions * p = (cPtr_C_5F_machineDisplayTransitions *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineDisplayTransitions (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions_2E_weak ("C_machineDisplayTransitions.weak",
                                                                                           & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDisplayTransitions_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineCheck GGS_C_5F_machineCheck_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineCheck result ;
  if (isValid ()) {
    const cPtr_C_5F_machineCheck * p = (cPtr_C_5F_machineCheck *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineCheck (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheck_2E_weak ("C_machineCheck.weak",
                                                                              & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineCheck_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineCheckIdentical::classDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical ("C_machineCheckIdentical",
                                                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineCheckIdentical::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineCheckIdentical GGS_C_5F_machineCheckIdentical_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineCheckIdentical result ;
  if (isValid ()) {
    const cPtr_C_5F_machineCheckIdentical * p = (cPtr_C_5F_machineCheckIdentical *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineCheckIdentical (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheckIdentical_2E_weak ("C_machineCheckIdentical.weak",
                                                                                       & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineCheckIdentical_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineComponent GGS_C_5F_machineComponent_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineComponent result ;
  if (isValid ()) {
    const cPtr_C_5F_machineComponent * p = (cPtr_C_5F_machineComponent *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineComponent (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineComponent_2E_weak ("C_machineComponent.weak",
                                                                                  & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineComponent_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineDefinedByAdditiveModalComp GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineDefinedByAdditiveModalComp result ;
  if (isValid ()) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (cPtr_C_5F_machineDefinedByAdditiveModalComp *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineDefinedByAdditiveModalComp (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp_2E_weak ("C_machineDefinedByAdditiveModalComp.weak",
                                                                                                   & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDefinedByAdditiveModalComp_2E_weak::staticTypeDescriptor (void) const {
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

GGS_C_5F_machineDefinedBySubstractiveModalComp GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_machineDefinedBySubstractiveModalComp result ;
  if (isValid ()) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (cPtr_C_5F_machineDefinedBySubstractiveModalComp *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_machineDefinedBySubstractiveModalComp (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak ("C_machineDefinedBySubstractiveModalComp.weak",
                                                                                                       & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDefinedBySubstractiveModalComp_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@L_5F_inputConfigurationForScenario' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_inputConfigurationForScenario : public cCollectionElement {
  public: GGS_L_5F_inputConfigurationForScenario_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_inputConfigurationForScenario (const GGS_luint & in_mInputValue
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_inputConfigurationForScenario (const GGS_L_5F_inputConfigurationForScenario_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @L_5F_inputConfigurationForScenario
//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario::GGS_L_5F_inputConfigurationForScenario (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario::GGS_L_5F_inputConfigurationForScenario (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_inputConfigurationForScenario * p = (cCollectionElement_L_5F_inputConfigurationForScenario *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_inputConfigurationForScenario) ;
    const GGS_L_5F_inputConfigurationForScenario_2E_element element (p->mObject.mProperty_mInputValue) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_L_5F_inputConfigurationForScenario::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_inputConfigurationForScenario::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::description (String & ioString,
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
      ioString.appendString ("mInputValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInputValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputConfigurationForScenario result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::plusPlusAssignOperation (const GGS_L_5F_inputConfigurationForScenario_2E_element & inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::class_func_listWithValue (const GGS_luint & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputConfigurationForScenario_2E_element element (inOperand0) ;
  GGS_L_5F_inputConfigurationForScenario result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::addAssignOperation (const GGS_luint & inOperand0
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputConfigurationForScenario_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_append (const GGS_luint inOperand0,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputConfigurationForScenario_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::setter_insertAtIndex (const GGS_luint inOperand0,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputConfigurationForScenario_2E_element newElement (inOperand0) ;
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

void GGS_L_5F_inputConfigurationForScenario::setter_removeAtIndex (GGS_luint & outOperand0,
                                                                   const GGS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInputValue ;
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

void GGS_L_5F_inputConfigurationForScenario::setter_popFirst (GGS_luint & outOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInputValue ;
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

void GGS_L_5F_inputConfigurationForScenario::setter_popLast (GGS_luint & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInputValue ;
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

void GGS_L_5F_inputConfigurationForScenario::method_first (GGS_luint & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInputValue ;
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

void GGS_L_5F_inputConfigurationForScenario::method_last (GGS_luint & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInputValue ;
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

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::add_operation (const GGS_L_5F_inputConfigurationForScenario & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result ;
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

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::subList (const int32_t inStart,
                                                                                        const int32_t inLength,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result ;
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

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputConfigurationForScenario::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputConfigurationForScenario::plusAssignOperation (const GGS_L_5F_inputConfigurationForScenario inList,
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

void GGS_L_5F_inputConfigurationForScenario::setter_setMInputValueAtIndex (GGS_luint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInputValue = inOperand ;
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
  
GGS_luint GGS_L_5F_inputConfigurationForScenario::getter_mInputValueAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInputValue ;
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
// Down Enumerator for @L_5F_inputConfigurationForScenario
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_inputConfigurationForScenario::DownEnumerator_L_5F_inputConfigurationForScenario (const GGS_L_5F_inputConfigurationForScenario & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element DownEnumerator_L_5F_inputConfigurationForScenario::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_L_5F_inputConfigurationForScenario::current_mInputValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_inputConfigurationForScenario
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_inputConfigurationForScenario::UpEnumerator_L_5F_inputConfigurationForScenario (const GGS_L_5F_inputConfigurationForScenario & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element UpEnumerator_L_5F_inputConfigurationForScenario::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_L_5F_inputConfigurationForScenario::current_mInputValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputValue ;
}




//--------------------------------------------------------------------------------------------------
//     @L_inputConfigurationForScenario generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario ("L_inputConfigurationForScenario",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_inputConfigurationForScenario::staticTypeDescriptor (void) const {
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
//Class for element of '@L_5F_inputScenario' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_inputScenario : public cCollectionElement {
  public: GGS_L_5F_inputScenario_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_inputScenario (const GGS_L_5F_inputConfigurationForScenario & in_mInputConfiguration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_inputScenario (const GGS_L_5F_inputScenario_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @L_5F_inputScenario
//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario::GGS_L_5F_inputScenario (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario::GGS_L_5F_inputScenario (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_inputScenario * p = (cCollectionElement_L_5F_inputScenario *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_inputScenario) ;
    const GGS_L_5F_inputScenario_2E_element element (p->mObject.mProperty_mInputConfiguration) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_L_5F_inputScenario::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_inputScenario::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::description (String & ioString,
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
      ioString.appendString ("mInputConfiguration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInputConfiguration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputScenario result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_inputScenario result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::plusPlusAssignOperation (const GGS_L_5F_inputScenario_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::class_func_listWithValue (const GGS_L_5F_inputConfigurationForScenario & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputScenario_2E_element element (inOperand0) ;
  GGS_L_5F_inputScenario result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::addAssignOperation (const GGS_L_5F_inputConfigurationForScenario & inOperand0
                                                 COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputScenario_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_append (const GGS_L_5F_inputConfigurationForScenario inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputScenario_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::setter_insertAtIndex (const GGS_L_5F_inputConfigurationForScenario inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_L_5F_inputScenario_2E_element newElement (inOperand0) ;
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

void GGS_L_5F_inputScenario::setter_removeAtIndex (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInputConfiguration ;
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

void GGS_L_5F_inputScenario::setter_popFirst (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInputConfiguration ;
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

void GGS_L_5F_inputScenario::setter_popLast (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInputConfiguration ;
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

void GGS_L_5F_inputScenario::method_first (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInputConfiguration ;
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

void GGS_L_5F_inputScenario::method_last (GGS_L_5F_inputConfigurationForScenario & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInputConfiguration ;
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

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::add_operation (const GGS_L_5F_inputScenario & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result ;
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

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result ;
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

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario GGS_L_5F_inputScenario::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_inputScenario::plusAssignOperation (const GGS_L_5F_inputScenario inList,
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

void GGS_L_5F_inputScenario::setter_setMInputConfigurationAtIndex (GGS_L_5F_inputConfigurationForScenario inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInputConfiguration = inOperand ;
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
  
GGS_L_5F_inputConfigurationForScenario GGS_L_5F_inputScenario::getter_mInputConfigurationAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputConfigurationForScenario result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInputConfiguration ;
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
// Down Enumerator for @L_5F_inputScenario
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_inputScenario::DownEnumerator_L_5F_inputScenario (const GGS_L_5F_inputScenario & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element DownEnumerator_L_5F_inputScenario::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario DownEnumerator_L_5F_inputScenario::current_mInputConfiguration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputConfiguration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_inputScenario
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_inputScenario::UpEnumerator_L_5F_inputScenario (const GGS_L_5F_inputScenario & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element UpEnumerator_L_5F_inputScenario::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario UpEnumerator_L_5F_inputScenario::current_mInputConfiguration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputConfiguration ;
}




//--------------------------------------------------------------------------------------------------
//     @L_inputScenario generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputScenario ("L_inputScenario",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_inputScenario::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------
//Class for element of '@L_5F_scenarioList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_scenarioList : public cCollectionElement {
  public: GGS_L_5F_scenarioList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_scenarioList (const GGS_lstring & in_mScenarioTitle,
                                                const GGS_L_5F_inputScenario & in_mInputScenario
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_scenarioList (const GGS_L_5F_scenarioList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_scenarioList::cCollectionElement_L_5F_scenarioList (const GGS_lstring & in_mScenarioTitle,
                                                                            const GGS_L_5F_inputScenario & in_mInputScenario
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScenarioTitle, in_mInputScenario) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_L_5F_scenarioList::cCollectionElement_L_5F_scenarioList (const GGS_L_5F_scenarioList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScenarioTitle, inElement.mProperty_mInputScenario) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_L_5F_scenarioList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_L_5F_scenarioList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_L_5F_scenarioList (mObject.mProperty_mScenarioTitle, mObject.mProperty_mInputScenario COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @L_5F_scenarioList
//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList::GGS_L_5F_scenarioList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList::GGS_L_5F_scenarioList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_scenarioList * p = (cCollectionElement_L_5F_scenarioList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_scenarioList) ;
    const GGS_L_5F_scenarioList_2E_element element (p->mObject.mProperty_mScenarioTitle, p->mObject.mProperty_mInputScenario) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mScenarioTitle,
                                                       const GGS_L_5F_inputScenario & in_mInputScenario
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_L_5F_scenarioList * p = nullptr ;
  macroMyNew (p, cCollectionElement_L_5F_scenarioList (in_mScenarioTitle, in_mInputScenario COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_L_5F_scenarioList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_scenarioList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList::description (String & ioString,
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
      ioString.appendString ("mScenarioTitle:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mScenarioTitle.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInputScenario:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInputScenario.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_L_5F_scenarioList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_scenarioList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList::plusPlusAssignOperation (const GGS_L_5F_scenarioList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_L_5F_inputScenario & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_L_5F_scenarioList_2E_element element (inOperand0, inOperand1) ;
  GGS_L_5F_scenarioList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_L_5F_inputScenario & inOperand1
                                                COMMA_LOCATION_ARGS) {
  const GGS_L_5F_scenarioList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_L_5F_inputScenario inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_L_5F_scenarioList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_L_5F_inputScenario inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_L_5F_scenarioList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_L_5F_scenarioList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_L_5F_inputScenario & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mScenarioTitle ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInputScenario ;
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

void GGS_L_5F_scenarioList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_L_5F_inputScenario & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mScenarioTitle ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInputScenario ;
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

void GGS_L_5F_scenarioList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_L_5F_inputScenario & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mScenarioTitle ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInputScenario ;
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

void GGS_L_5F_scenarioList::method_first (GGS_lstring & outOperand0,
                                          GGS_L_5F_inputScenario & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mScenarioTitle ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInputScenario ;
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

void GGS_L_5F_scenarioList::method_last (GGS_lstring & outOperand0,
                                         GGS_L_5F_inputScenario & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mScenarioTitle ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInputScenario ;
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

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::add_operation (const GGS_L_5F_scenarioList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_scenarioList result ;
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

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_scenarioList result ;
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

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_scenarioList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_L_5F_scenarioList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_L_5F_scenarioList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_scenarioList::plusAssignOperation (const GGS_L_5F_scenarioList inList,
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

void GGS_L_5F_scenarioList::setter_setMScenarioTitleAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mScenarioTitle = inOperand ;
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
  
GGS_lstring GGS_L_5F_scenarioList::getter_mScenarioTitleAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mScenarioTitle ;
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

void GGS_L_5F_scenarioList::setter_setMInputScenarioAtIndex (GGS_L_5F_inputScenario inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInputScenario = inOperand ;
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
  
GGS_L_5F_inputScenario GGS_L_5F_scenarioList::getter_mInputScenarioAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_inputScenario result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInputScenario ;
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
// Down Enumerator for @L_5F_scenarioList
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_scenarioList::DownEnumerator_L_5F_scenarioList (const GGS_L_5F_scenarioList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element DownEnumerator_L_5F_scenarioList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_L_5F_scenarioList::current_mScenarioTitle (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mScenarioTitle ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario DownEnumerator_L_5F_scenarioList::current_mInputScenario (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputScenario ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_scenarioList
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_scenarioList::UpEnumerator_L_5F_scenarioList (const GGS_L_5F_scenarioList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element UpEnumerator_L_5F_scenarioList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_L_5F_scenarioList::current_mScenarioTitle (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mScenarioTitle ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario UpEnumerator_L_5F_scenarioList::current_mInputScenario (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputScenario ;
}




//--------------------------------------------------------------------------------------------------
//     @L_scenarioList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_scenarioList ("L_scenarioList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_scenarioList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_L_5F_scenarioList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_L_5F_scenarioList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList GGS_L_5F_scenarioList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_L_5F_scenarioList result ;
  const GGS_L_5F_scenarioList * p = (const GGS_L_5F_scenarioList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_L_5F_scenarioList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("L_scenarioList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @C_5F_scenarioComponent reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_C_5F_scenarioComponent::objectCompare (const GGS_C_5F_scenarioComponent & inOperand) const {
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

GGS_C_5F_scenarioComponent::GGS_C_5F_scenarioComponent (void) :
GGS_AC_5F_job () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_C_5F_scenarioComponent GGS_C_5F_scenarioComponent::
init_21__21__21__21__21_ (const GGS_uint & in_mMachineIndex,
                          const GGS_uint & in_mInputVariableCount,
                          const GGS_uint & in_mInputAndInternalVariableCount,
                          const GGS_M_5F_variablesMap & in_mVariablesMap,
                          const GGS_L_5F_scenarioList & in_mScenarioList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_C_5F_scenarioComponent * object = nullptr ;
  macroMyNew (object, cPtr_C_5F_scenarioComponent (inCompiler COMMA_THERE)) ;
  object->C_5F_scenarioComponent_init_21__21__21__21__21_ (in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mScenarioList, inCompiler) ;
  const GGS_C_5F_scenarioComponent result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_C_5F_scenarioComponent::
C_5F_scenarioComponent_init_21__21__21__21__21_ (const GGS_uint & in_mMachineIndex,
                                                 const GGS_uint & in_mInputVariableCount,
                                                 const GGS_uint & in_mInputAndInternalVariableCount,
                                                 const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                 const GGS_L_5F_scenarioList & in_mScenarioList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mScenarioList = in_mScenarioList ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent::GGS_C_5F_scenarioComponent (const cPtr_C_5F_scenarioComponent * inSourcePtr) :
GGS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_scenarioComponent) ;
}
//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent GGS_C_5F_scenarioComponent::class_func_new (const GGS_uint & in_mMachineIndex,
                                                                       const GGS_uint & in_mInputVariableCount,
                                                                       const GGS_uint & in_mInputAndInternalVariableCount,
                                                                       const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                       const GGS_L_5F_scenarioList & in_mScenarioList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_scenarioComponent result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_scenarioComponent (in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mScenarioList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_scenarioComponent::readProperty_mMachineIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mMachineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_scenarioComponent::setProperty_mMachineIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mMachineIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_scenarioComponent::readProperty_mInputVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mInputVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_scenarioComponent::setProperty_mInputVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mInputVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_C_5F_scenarioComponent::readProperty_mInputAndInternalVariableCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mInputAndInternalVariableCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_scenarioComponent::setProperty_mInputAndInternalVariableCount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mInputAndInternalVariableCount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_C_5F_scenarioComponent::readProperty_mVariablesMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_M_5F_variablesMap () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mVariablesMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_scenarioComponent::setProperty_mVariablesMap (const GGS_M_5F_variablesMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mVariablesMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList GGS_C_5F_scenarioComponent::readProperty_mScenarioList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_L_5F_scenarioList () ;
  }else{
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    return p->mProperty_mScenarioList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_C_5F_scenarioComponent::setProperty_mScenarioList (const GGS_L_5F_scenarioList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    p->mProperty_mScenarioList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @C_scenarioComponent class
//--------------------------------------------------------------------------------------------------

cPtr_C_5F_scenarioComponent::cPtr_C_5F_scenarioComponent (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mScenarioList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_scenarioComponent::cPtr_C_5F_scenarioComponent (const GGS_uint & in_mMachineIndex,
                                                          const GGS_uint & in_mInputVariableCount,
                                                          const GGS_uint & in_mInputAndInternalVariableCount,
                                                          const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                          const GGS_L_5F_scenarioList & in_mScenarioList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mScenarioList () {
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mInputVariableCount = in_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = in_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = in_mVariablesMap ;
  mProperty_mScenarioList = in_mScenarioList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_scenarioComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

void cPtr_C_5F_scenarioComponent::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@C_scenarioComponent:") ;
  mProperty_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mScenarioList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_C_5F_scenarioComponent::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_scenarioComponent (mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mScenarioList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//     @C_scenarioComponent generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent ("C_scenarioComponent",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_scenarioComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_C_5F_scenarioComponent::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_C_5F_scenarioComponent (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_C_5F_scenarioComponent GGS_C_5F_scenarioComponent::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_C_5F_scenarioComponent result ;
  const GGS_C_5F_scenarioComponent * p = (const GGS_C_5F_scenarioComponent *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_C_5F_scenarioComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_scenarioComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GGS_C_5F_scenarioComponent GGS_C_5F_scenarioComponent_2E_weak::unwrappedValue (void) const {
  GGS_C_5F_scenarioComponent result ;
  if (isValid ()) {
    const cPtr_C_5F_scenarioComponent * p = (cPtr_C_5F_scenarioComponent *) ptr () ;
    if (nullptr != p) {
      result = GGS_C_5F_scenarioComponent (p) ;
    }
  }
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
//     @C_scenarioComponent.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_scenarioComponent_2E_weak ("C_scenarioComponent.weak",
                                                                                   & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_scenarioComponent_2E_weak::staticTypeDescriptor (void) const {
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

GGS_typeDisplayBDDstats GGS_typeDisplayBDDstats::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_typeDisplayBDDstats result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDisplayBDDstats (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeDisplayBDDstats class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_typeDisplayBDDstats::cPtr_typeDisplayBDDstats (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_typeDisplayBDDstats::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

void cPtr_typeDisplayBDDstats::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@typeDisplayBDDstats]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeDisplayBDDstats::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeDisplayBDDstats (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeDisplayBDDstats::printNonNullClassInstanceProperties (void) const {
    cPtr_AC_5F_job::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @typeDisplayBDDstats generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats ("typeDisplayBDDstats",
                                                                        & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDisplayBDDstats::staticTypeDescriptor (void) const {
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

GGS_typeDisplayBDDstats GGS_typeDisplayBDDstats_2E_weak::unwrappedValue (void) const {
  GGS_typeDisplayBDDstats result ;
  if (isValid ()) {
    const cPtr_typeDisplayBDDstats * p = (cPtr_typeDisplayBDDstats *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeDisplayBDDstats (p) ;
    }
  }
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
//     @typeDisplayBDDstats.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDisplayBDDstats_2E_weak ("typeDisplayBDDstats.weak",
                                                                                & kTypeDescriptor_GALGAS_AC_5F_job_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDisplayBDDstats_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@L_5F_jobList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_L_5F_jobList : public cCollectionElement {
  public: GGS_L_5F_jobList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_L_5F_jobList (const GGS_AC_5F_job & in_mComponent
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_L_5F_jobList (const GGS_L_5F_jobList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @L_5F_jobList
//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList::GGS_L_5F_jobList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList::GGS_L_5F_jobList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_L_5F_jobList * p = (cCollectionElement_L_5F_jobList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_L_5F_jobList) ;
    const GGS_L_5F_jobList_2E_element element (p->mObject.mProperty_mComponent) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_L_5F_jobList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_L_5F_jobList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::description (String & ioString,
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
      ioString.appendString ("mComponent:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mComponent.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_L_5F_jobList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_5F_jobList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::plusPlusAssignOperation (const GGS_L_5F_jobList_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::class_func_listWithValue (const GGS_AC_5F_job & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  const GGS_L_5F_jobList_2E_element element (inOperand0) ;
  GGS_L_5F_jobList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::addAssignOperation (const GGS_AC_5F_job & inOperand0
                                           COMMA_LOCATION_ARGS) {
  const GGS_L_5F_jobList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_append (const GGS_AC_5F_job inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_L_5F_jobList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::setter_insertAtIndex (const GGS_AC_5F_job inOperand0,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_L_5F_jobList_2E_element newElement (inOperand0) ;
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

void GGS_L_5F_jobList::setter_removeAtIndex (GGS_AC_5F_job & outOperand0,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mComponent ;
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

void GGS_L_5F_jobList::setter_popFirst (GGS_AC_5F_job & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mComponent ;
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

void GGS_L_5F_jobList::setter_popLast (GGS_AC_5F_job & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mComponent ;
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

void GGS_L_5F_jobList::method_first (GGS_AC_5F_job & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mComponent ;
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

void GGS_L_5F_jobList::method_last (GGS_AC_5F_job & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mComponent ;
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

GGS_L_5F_jobList GGS_L_5F_jobList::add_operation (const GGS_L_5F_jobList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_L_5F_jobList result ;
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

GGS_L_5F_jobList GGS_L_5F_jobList::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_jobList result ;
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

GGS_L_5F_jobList GGS_L_5F_jobList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_jobList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_L_5F_jobList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList GGS_L_5F_jobList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_L_5F_jobList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_L_5F_jobList::plusAssignOperation (const GGS_L_5F_jobList inList,
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

void GGS_L_5F_jobList::setter_setMComponentAtIndex (GGS_AC_5F_job inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mComponent = inOperand ;
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
  
GGS_AC_5F_job GGS_L_5F_jobList::getter_mComponentAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_AC_5F_job result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mComponent ;
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
// Down Enumerator for @L_5F_jobList
//--------------------------------------------------------------------------------------------------

DownEnumerator_L_5F_jobList::DownEnumerator_L_5F_jobList (const GGS_L_5F_jobList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element DownEnumerator_L_5F_jobList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job DownEnumerator_L_5F_jobList::current_mComponent (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mComponent ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @L_5F_jobList
//--------------------------------------------------------------------------------------------------

UpEnumerator_L_5F_jobList::UpEnumerator_L_5F_jobList (const GGS_L_5F_jobList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element UpEnumerator_L_5F_jobList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_AC_5F_job UpEnumerator_L_5F_jobList::current_mComponent (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mComponent ;
}




//--------------------------------------------------------------------------------------------------
//     @L_jobList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_jobList ("L_jobList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_jobList::staticTypeDescriptor (void) const {
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
//  Map type @M_5F_machinesMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap::GGS_M_5F_machinesMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap::~ GGS_M_5F_machinesMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap::GGS_M_5F_machinesMap (const GGS_M_5F_machinesMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap & GGS_M_5F_machinesMap::operator = (const GGS_M_5F_machinesMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_M_5F_machinesMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_M_5F_machinesMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_machinesMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_M_5F_machinesMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_machinesMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_machinesMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_M_5F_machinesMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_M_5F_machinesMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_M_5F_machinesMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_machinesMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::performInsert (const GGS_M_5F_machinesMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_M_5F_machinesMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element>
GGS_M_5F_machinesMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_M_5F_machinesMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element>>
GGS_M_5F_machinesMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_M_5F_machinesMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element_3F_ GGS_M_5F_machinesMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_M_5F_machinesMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_M_5F_machinesMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_M_5F_machinesMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      element.mProperty_mInputVariableCount = info->mProperty_mInputVariableCount ;
      element.mProperty_mInputAndInternalVariableCount = info->mProperty_mInputAndInternalVariableCount ;
      element.mProperty_mVariablesMap = info->mProperty_mVariablesMap ;
      element.mProperty_mNameList = info->mProperty_mNameList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::class_func_mapWithMapToOverride (const GGS_M_5F_machinesMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_M_5F_machinesMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_M_5F_machinesMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap GGS_M_5F_machinesMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_M_5F_machinesMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_uint inArgument0,
                                             GGS_uint inArgument1,
                                             GGS_uint inArgument2,
                                             GGS_M_5F_variablesMap inArgument3,
                                             GGS_stringlist inArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_M_5F_machinesMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "the '%K' machine has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_uint & outArgument0,
                                             GGS_uint & outArgument1,
                                             GGS_uint & outArgument2,
                                             GGS_M_5F_variablesMap & outArgument3,
                                             GGS_stringlist & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' machine is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mInputVariableCount ;
    outArgument2 = info->mProperty_mInputAndInternalVariableCount ;
    outArgument3 = info->mProperty_mVariablesMap ;
    outArgument4 = info->mProperty_mNameList ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_removeKey (GGS_lstring inLKey,
                                             GGS_uint & outArgument0,
                                             GGS_uint & outArgument1,
                                             GGS_uint & outArgument2,
                                             GGS_M_5F_variablesMap & outArgument3,
                                             GGS_stringlist & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "the '%K' machine is not defined" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mInputVariableCount ;
    outArgument2 = info->mProperty_mInputAndInternalVariableCount ;
    outArgument3 = info->mProperty_mVariablesMap ;
    outArgument4 = info->mProperty_mNameList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_machinesMap::getter_mIndexForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info = infoForKey (key) ;
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

GGS_uint GGS_M_5F_machinesMap::getter_mInputVariableCountForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInputVariableCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_M_5F_machinesMap::getter_mInputAndInternalVariableCountForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInputAndInternalVariableCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap GGS_M_5F_machinesMap::getter_mVariablesMapForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_M_5F_variablesMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mVariablesMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_M_5F_machinesMap::getter_mNameListForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mNameList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMIndexForKey (GGS_uint inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_machinesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_M_5F_machinesMap::setter_setMInputVariableCountForKey (GGS_uint inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_machinesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInputVariableCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMInputAndInternalVariableCountForKey (GGS_uint inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_machinesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInputAndInternalVariableCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMVariablesMapForKey (GGS_M_5F_variablesMap inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_machinesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mVariablesMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::setter_setMNameListForKey (GGS_stringlist inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_M_5F_machinesMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mNameList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_M_5F_machinesMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element>> & inArray,
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
    ioString.appendString ("mInputVariableCount:") ;
    inArray (i COMMA_HERE)->mProperty_mInputVariableCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInputAndInternalVariableCount:") ;
    inArray (i COMMA_HERE)->mProperty_mInputAndInternalVariableCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mVariablesMap:") ;
    inArray (i COMMA_HERE)->mProperty_mVariablesMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mNameList:") ;
    inArray (i COMMA_HERE)->mProperty_mNameList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_M_5F_machinesMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_M_5F_machinesMap_2E_element>> array = sortedInfoArray () ;
    GGS_M_5F_machinesMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_M_5F_machinesMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_M_5F_machinesMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @M_5F_machinesMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_M_5F_machinesMap::DownEnumerator_M_5F_machinesMap (const GGS_M_5F_machinesMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element DownEnumerator_M_5F_machinesMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_M_5F_machinesMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_machinesMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_machinesMap::current_mInputVariableCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputVariableCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_M_5F_machinesMap::current_mInputAndInternalVariableCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputAndInternalVariableCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap DownEnumerator_M_5F_machinesMap::current_mVariablesMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVariablesMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_M_5F_machinesMap::current_mNameList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNameList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @M_5F_machinesMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_M_5F_machinesMap::UpEnumerator_M_5F_machinesMap (const GGS_M_5F_machinesMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element UpEnumerator_M_5F_machinesMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_M_5F_machinesMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_machinesMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_machinesMap::current_mInputVariableCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputVariableCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_M_5F_machinesMap::current_mInputAndInternalVariableCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputAndInternalVariableCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap UpEnumerator_M_5F_machinesMap::current_mVariablesMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVariablesMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_M_5F_machinesMap::current_mNameList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNameList ;
}


//--------------------------------------------------------------------------------------------------
//     @M_machinesMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_machinesMap ("M_machinesMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_machinesMap::staticTypeDescriptor (void) const {
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

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_componentsMap (inSource.mProperty_componentsMap),
mProperty_machinesMap (inSource.mProperty_machinesMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_componentsMap = inSource.mProperty_componentsMap ;
  mProperty_machinesMap = inSource.mProperty_machinesMap ;
  return *this ;
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
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::GGS_L_5F_translationVector_2E_element (void) :
mProperty_mTargetSlot () {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element::GGS_L_5F_translationVector_2E_element (const GGS_L_5F_translationVector_2E_element & inSource) :
mProperty_mTargetSlot (inSource.mProperty_mTargetSlot) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_translationVector_2E_element & GGS_L_5F_translationVector_2E_element::operator = (const GGS_L_5F_translationVector_2E_element & inSource) {
  mProperty_mTargetSlot = inSource.mProperty_mTargetSlot ;
  return *this ;
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
//     @L_translationVector.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_translationVector_2E_element ("L_translationVector.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_translationVector_2E_element::staticTypeDescriptor (void) const {
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

GGS_L_5F_transitionDefinition_2E_element::GGS_L_5F_transitionDefinition_2E_element (const GGS_L_5F_transitionDefinition_2E_element & inSource) :
mProperty_mActionExpression (inSource.mProperty_mActionExpression),
mProperty_mEndOfExpression (inSource.mProperty_mEndOfExpression),
mProperty_mTargetStateIndex (inSource.mProperty_mTargetStateIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_transitionDefinition_2E_element & GGS_L_5F_transitionDefinition_2E_element::operator = (const GGS_L_5F_transitionDefinition_2E_element & inSource) {
  mProperty_mActionExpression = inSource.mProperty_mActionExpression ;
  mProperty_mEndOfExpression = inSource.mProperty_mEndOfExpression ;
  mProperty_mTargetStateIndex = inSource.mProperty_mTargetStateIndex ;
  return *this ;
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
//     @L_transitionDefinition.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2E_element ("L_transitionDefinition.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_transitionDefinition_2E_element::staticTypeDescriptor (void) const {
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

GGS_L_5F_stateDefinition_2E_element::GGS_L_5F_stateDefinition_2E_element (const GGS_L_5F_stateDefinition_2E_element & inSource) :
mProperty_mStateIndex (inSource.mProperty_mStateIndex),
mProperty_mStateExpression (inSource.mProperty_mStateExpression),
mProperty_mEndOfStateExpression (inSource.mProperty_mEndOfStateExpression),
mProperty_mTransitionsList (inSource.mProperty_mTransitionsList) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_stateDefinition_2E_element & GGS_L_5F_stateDefinition_2E_element::operator = (const GGS_L_5F_stateDefinition_2E_element & inSource) {
  mProperty_mStateIndex = inSource.mProperty_mStateIndex ;
  mProperty_mStateExpression = inSource.mProperty_mStateExpression ;
  mProperty_mEndOfStateExpression = inSource.mProperty_mEndOfStateExpression ;
  mProperty_mTransitionsList = inSource.mProperty_mTransitionsList ;
  return *this ;
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
//     @L_stateDefinition.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_stateDefinition_2E_element ("L_stateDefinition.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_stateDefinition_2E_element::staticTypeDescriptor (void) const {
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

GGS_L_5F_statesDefinitionList_2E_element::GGS_L_5F_statesDefinitionList_2E_element (const GGS_L_5F_statesDefinitionList_2E_element & inSource) :
mProperty_mStateIndex (inSource.mProperty_mStateIndex),
mProperty_mStateLocation (inSource.mProperty_mStateLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_statesDefinitionList_2E_element & GGS_L_5F_statesDefinitionList_2E_element::operator = (const GGS_L_5F_statesDefinitionList_2E_element & inSource) {
  mProperty_mStateIndex = inSource.mProperty_mStateIndex ;
  mProperty_mStateLocation = inSource.mProperty_mStateLocation ;
  return *this ;
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
//     @L_statesDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2E_element ("L_statesDefinitionList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_statesDefinitionList_2E_element::staticTypeDescriptor (void) const {
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

GGS_ListForModes_2E_element::GGS_ListForModes_2E_element (const GGS_ListForModes_2E_element & inSource) :
mProperty_mSourceMode (inSource.mProperty_mSourceMode),
mProperty_mTargetMode (inSource.mProperty_mTargetMode) {
}

//--------------------------------------------------------------------------------------------------

GGS_ListForModes_2E_element & GGS_ListForModes_2E_element::operator = (const GGS_ListForModes_2E_element & inSource) {
  mProperty_mSourceMode = inSource.mProperty_mSourceMode ;
  mProperty_mTargetMode = inSource.mProperty_mTargetMode ;
  return *this ;
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
//     @ListForModes.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ListForModes_2E_element ("ListForModes.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ListForModes_2E_element::staticTypeDescriptor (void) const {
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

GGS_L_5F_inputConfigurationForScenario_2E_element::GGS_L_5F_inputConfigurationForScenario_2E_element (const GGS_L_5F_inputConfigurationForScenario_2E_element & inSource) :
mProperty_mInputValue (inSource.mProperty_mInputValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputConfigurationForScenario_2E_element & GGS_L_5F_inputConfigurationForScenario_2E_element::operator = (const GGS_L_5F_inputConfigurationForScenario_2E_element & inSource) {
  mProperty_mInputValue = inSource.mProperty_mInputValue ;
  return *this ;
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
//     @L_inputConfigurationForScenario.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2E_element ("L_inputConfigurationForScenario.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_inputConfigurationForScenario_2E_element::staticTypeDescriptor (void) const {
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

GGS_L_5F_inputScenario_2E_element::GGS_L_5F_inputScenario_2E_element (const GGS_L_5F_inputScenario_2E_element & inSource) :
mProperty_mInputConfiguration (inSource.mProperty_mInputConfiguration) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_inputScenario_2E_element & GGS_L_5F_inputScenario_2E_element::operator = (const GGS_L_5F_inputScenario_2E_element & inSource) {
  mProperty_mInputConfiguration = inSource.mProperty_mInputConfiguration ;
  return *this ;
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
//     @L_inputScenario.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_inputScenario_2E_element ("L_inputScenario.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_inputScenario_2E_element::staticTypeDescriptor (void) const {
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

GGS_L_5F_jobList_2E_element::GGS_L_5F_jobList_2E_element (const GGS_L_5F_jobList_2E_element & inSource) :
mProperty_mComponent (inSource.mProperty_mComponent) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_jobList_2E_element & GGS_L_5F_jobList_2E_element::operator = (const GGS_L_5F_jobList_2E_element & inSource) {
  mProperty_mComponent = inSource.mProperty_mComponent ;
  return *this ;
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
//     @L_jobList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_jobList_2E_element ("L_jobList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_jobList_2E_element::staticTypeDescriptor (void) const {
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
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
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
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
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
// @C_5F_importBoolMachine reference class
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
                                                                       const GGS_L_5F_translationVector & in_mTranslationVector,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_importBoolMachine result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_importBoolMachine (in_mIndexOfImportedMachine, in_mErrorLocation, in_mTranslationVector,  inCompiler COMMA_THERE)) ;
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

cPtr_C_5F_importBoolMachine::cPtr_C_5F_importBoolMachine (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mIndexOfImportedMachine (),
mProperty_mErrorLocation (),
mProperty_mTranslationVector () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_importBoolMachine::cPtr_C_5F_importBoolMachine (const GGS_uint & in_mIndexOfImportedMachine,
                                                          const GGS_location & in_mErrorLocation,
                                                          const GGS_L_5F_translationVector & in_mTranslationVector,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (inCompiler COMMA_THERE),
mProperty_mIndexOfImportedMachine (),
mProperty_mErrorLocation (),
mProperty_mTranslationVector () {
  mProperty_mIndexOfImportedMachine = in_mIndexOfImportedMachine ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mTranslationVector = in_mTranslationVector ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_importBoolMachine::classDescriptor (void) const {
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

acPtr_class * cPtr_C_5F_importBoolMachine::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_importBoolMachine (mProperty_mIndexOfImportedMachine, mProperty_mErrorLocation, mProperty_mTranslationVector, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @C_importBoolMachine generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_importBoolMachine ("C_importBoolMachine",
                                                                           & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_importBoolMachine::staticTypeDescriptor (void) const {
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
                                                             const GGS_bool & in_mCheckMachineIsBoolean,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineCheck result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheck (in_mMachineIndex, in_mCheckMachineIsBoolean,  inCompiler COMMA_THERE)) ;
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

cPtr_C_5F_machineCheck::cPtr_C_5F_machineCheck (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex (),
mProperty_mCheckMachineIsBoolean () {
}

//--------------------------------------------------------------------------------------------------

cPtr_C_5F_machineCheck::cPtr_C_5F_machineCheck (const GGS_uint & in_mMachineIndex,
                                                const GGS_bool & in_mCheckMachineIsBoolean,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
mProperty_mMachineIndex (),
mProperty_mCheckMachineIsBoolean () {
  mProperty_mMachineIndex = in_mMachineIndex ;
  mProperty_mCheckMachineIsBoolean = in_mCheckMachineIsBoolean ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_C_5F_machineCheck::classDescriptor (void) const {
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

acPtr_class * cPtr_C_5F_machineCheck::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineCheck (mProperty_mMachineIndex, mProperty_mCheckMachineIsBoolean, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @C_machineCheck generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineCheck ("C_machineCheck",
                                                                      & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineCheck::staticTypeDescriptor (void) const {
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
                                                                     const GGS_AC_5F_machineDefinition & in_mDefinition,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineComponent result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineComponent (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mNameList, in_mDefinition,  inCompiler COMMA_THERE)) ;
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

cPtr_C_5F_machineComponent::cPtr_C_5F_machineComponent (const GGS_lstring & in_mMachineName,
                                                        const GGS_uint & in_mMachineIndex,
                                                        const GGS_uint & in_mInputVariableCount,
                                                        const GGS_uint & in_mInputAndInternalVariableCount,
                                                        const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                        const GGS_stringlist & in_mNameList,
                                                        const GGS_AC_5F_machineDefinition & in_mDefinition,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineComponent::classDescriptor (void) const {
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

acPtr_class * cPtr_C_5F_machineComponent::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineComponent (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mNameList, mProperty_mDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @C_machineComponent generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineComponent ("C_machineComponent",
                                                                          & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineComponent::staticTypeDescriptor (void) const {
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
                                                                                                       const GGS_ListForModes & in_mInclusionList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedByAdditiveModalComp result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDefinedByAdditiveModalComp (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mModeMap, in_mInclusionList,  inCompiler COMMA_THERE)) ;
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

cPtr_C_5F_machineDefinedByAdditiveModalComp::cPtr_C_5F_machineDefinedByAdditiveModalComp (const GGS_lstring & in_mMachineName,
                                                                                          const GGS_uint & in_mMachineIndex,
                                                                                          const GGS_uint & in_mInputVariableCount,
                                                                                          const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                          const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                          const GGS_M_5F_modesMap & in_mModeMap,
                                                                                          const GGS_ListForModes & in_mInclusionList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineDefinedByAdditiveModalComp::classDescriptor (void) const {
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

acPtr_class * cPtr_C_5F_machineDefinedByAdditiveModalComp::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedByAdditiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mInclusionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @C_machineDefinedByAdditiveModalComp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ("C_machineDefinedByAdditiveModalComp",
                                                                                           & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDefinedByAdditiveModalComp::staticTypeDescriptor (void) const {
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
                                                                                                               const GGS_ListForModes & in_mExclusionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_C_5F_machineDefinedBySubstractiveModalComp result ;
  macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp (in_mMachineName, in_mMachineIndex, in_mInputVariableCount, in_mInputAndInternalVariableCount, in_mVariablesMap, in_mModeMap, in_mExclusionList,  inCompiler COMMA_THERE)) ;
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

cPtr_C_5F_machineDefinedBySubstractiveModalComp::cPtr_C_5F_machineDefinedBySubstractiveModalComp (const GGS_lstring & in_mMachineName,
                                                                                                  const GGS_uint & in_mMachineIndex,
                                                                                                  const GGS_uint & in_mInputVariableCount,
                                                                                                  const GGS_uint & in_mInputAndInternalVariableCount,
                                                                                                  const GGS_M_5F_variablesMap & in_mVariablesMap,
                                                                                                  const GGS_M_5F_modesMap & in_mModeMap,
                                                                                                  const GGS_ListForModes & in_mExclusionList,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_C_5F_machineDefinedBySubstractiveModalComp::classDescriptor (void) const {
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

acPtr_class * cPtr_C_5F_machineDefinedBySubstractiveModalComp::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedBySubstractiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mExclusionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @C_machineDefinedBySubstractiveModalComp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ("C_machineDefinedBySubstractiveModalComp",
                                                                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_C_5F_machineDefinedBySubstractiveModalComp::staticTypeDescriptor (void) const {
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

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
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
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
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

GGS_M_5F_variablesMap_2E_element::GGS_M_5F_variablesMap_2E_element (const GGS_M_5F_variablesMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_variablesMap_2E_element & GGS_M_5F_variablesMap_2E_element::operator = (const GGS_M_5F_variablesMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
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
//     @M_variablesMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element ("M_variablesMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_variablesMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @M_5F_variablesMap_2E_element_3F_
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
//     @M_variablesMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_variablesMap_2E_element_3F_ ("M_variablesMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_variablesMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_M_5F_stateMap_2E_element::GGS_M_5F_stateMap_2E_element (const GGS_M_5F_stateMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_stateMap_2E_element & GGS_M_5F_stateMap_2E_element::operator = (const GGS_M_5F_stateMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
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
//     @M_stateMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element ("M_stateMap.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_stateMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @M_5F_stateMap_2E_element_3F_
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
//     @M_stateMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_stateMap_2E_element_3F_ ("M_stateMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_stateMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_M_5F_modesMap_2E_element::GGS_M_5F_modesMap_2E_element (const GGS_M_5F_modesMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mModeDefinition (inSource.mProperty_mModeDefinition) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_modesMap_2E_element & GGS_M_5F_modesMap_2E_element::operator = (const GGS_M_5F_modesMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mModeDefinition = inSource.mProperty_mModeDefinition ;
  return *this ;
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
//     @M_modesMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element ("M_modesMap.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_modesMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @M_5F_modesMap_2E_element_3F_
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
//     @M_modesMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_modesMap_2E_element_3F_ ("M_modesMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_modesMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_L_5F_scenarioList_2E_element::GGS_L_5F_scenarioList_2E_element (const GGS_L_5F_scenarioList_2E_element & inSource) :
mProperty_mScenarioTitle (inSource.mProperty_mScenarioTitle),
mProperty_mInputScenario (inSource.mProperty_mInputScenario) {
}

//--------------------------------------------------------------------------------------------------

GGS_L_5F_scenarioList_2E_element & GGS_L_5F_scenarioList_2E_element::operator = (const GGS_L_5F_scenarioList_2E_element & inSource) {
  mProperty_mScenarioTitle = inSource.mProperty_mScenarioTitle ;
  mProperty_mInputScenario = inSource.mProperty_mInputScenario ;
  return *this ;
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
//     @L_scenarioList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_L_5F_scenarioList_2E_element ("L_scenarioList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_L_5F_scenarioList_2E_element::staticTypeDescriptor (void) const {
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

GGS_M_5F_machinesMap_2E_element::GGS_M_5F_machinesMap_2E_element (const GGS_M_5F_machinesMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mInputVariableCount (inSource.mProperty_mInputVariableCount),
mProperty_mInputAndInternalVariableCount (inSource.mProperty_mInputAndInternalVariableCount),
mProperty_mVariablesMap (inSource.mProperty_mVariablesMap),
mProperty_mNameList (inSource.mProperty_mNameList) {
}

//--------------------------------------------------------------------------------------------------

GGS_M_5F_machinesMap_2E_element & GGS_M_5F_machinesMap_2E_element::operator = (const GGS_M_5F_machinesMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mInputVariableCount = inSource.mProperty_mInputVariableCount ;
  mProperty_mInputAndInternalVariableCount = inSource.mProperty_mInputAndInternalVariableCount ;
  mProperty_mVariablesMap = inSource.mProperty_mVariablesMap ;
  mProperty_mNameList = inSource.mProperty_mNameList ;
  return *this ;
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
//     @M_machinesMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element ("M_machinesMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_machinesMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @M_5F_machinesMap_2E_element_3F_
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
//     @M_machinesMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_M_5F_machinesMap_2E_element_3F_ ("M_machinesMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_M_5F_machinesMap_2E_element_3F_::staticTypeDescriptor (void) const {
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
#include "LexiqueIntrospection.h"
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
  GenericUniqueArray <String> sourceFilesArray ;
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
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
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

