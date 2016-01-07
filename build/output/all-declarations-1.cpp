#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_machineDisplayInitialStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayInitialStates * p = (const cPtr_C_5F_machineDisplayInitialStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex.objectCompare (p->mAttribute_mMachineIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_machineDisplayInitialStates::objectCompare (const GALGAS_C_5F_machineDisplayInitialStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayInitialStates::GALGAS_C_5F_machineDisplayInitialStates (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayInitialStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayInitialStates::GALGAS_C_5F_machineDisplayInitialStates (const cPtr_C_5F_machineDisplayInitialStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayInitialStates) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayInitialStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineDisplayInitialStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayInitialStates * p = (const cPtr_C_5F_machineDisplayInitialStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayInitialStates) ;
    result = p->mAttribute_mMachineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineDisplayInitialStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @C_machineDisplayInitialStates class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_machineDisplayInitialStates::cPtr_C_5F_machineDisplayInitialStates (const GALGAS_uint & in_mMachineIndex
                                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineIndex (in_mMachineIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayInitialStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

void cPtr_C_5F_machineDisplayInitialStates::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayInitialStates:" ;
  mAttribute_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_machineDisplayInitialStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayInitialStates (mAttribute_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @C_machineDisplayInitialStates type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ("C_machineDisplayInitialStates",
                                                         & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayInitialStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayInitialStates ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayInitialStates::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayInitialStates (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayInitialStates GALGAS_C_5F_machineDisplayInitialStates::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayInitialStates result ;
  const GALGAS_C_5F_machineDisplayInitialStates * p = (const GALGAS_C_5F_machineDisplayInitialStates *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayInitialStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayInitialStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_machineDisplayStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayStates * p = (const cPtr_C_5F_machineDisplayStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex.objectCompare (p->mAttribute_mMachineIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_machineDisplayStates::objectCompare (const GALGAS_C_5F_machineDisplayStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayStates::GALGAS_C_5F_machineDisplayStates (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayStates::GALGAS_C_5F_machineDisplayStates (const cPtr_C_5F_machineDisplayStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayStates) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineDisplayStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayStates * p = (const cPtr_C_5F_machineDisplayStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayStates) ;
    result = p->mAttribute_mMachineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineDisplayStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @C_machineDisplayStates class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_machineDisplayStates::cPtr_C_5F_machineDisplayStates (const GALGAS_uint & in_mMachineIndex
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineIndex (in_mMachineIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

void cPtr_C_5F_machineDisplayStates::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayStates:" ;
  mAttribute_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_machineDisplayStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayStates (mAttribute_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_machineDisplayStates type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ("C_machineDisplayStates",
                                                  & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayStates ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayStates::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayStates (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayStates GALGAS_C_5F_machineDisplayStates::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayStates result ;
  const GALGAS_C_5F_machineDisplayStates * p = (const GALGAS_C_5F_machineDisplayStates *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_machineDisplayTerminalStates::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayTerminalStates * p = (const cPtr_C_5F_machineDisplayTerminalStates *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex.objectCompare (p->mAttribute_mMachineIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_machineDisplayTerminalStates::objectCompare (const GALGAS_C_5F_machineDisplayTerminalStates & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTerminalStates::GALGAS_C_5F_machineDisplayTerminalStates (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTerminalStates::GALGAS_C_5F_machineDisplayTerminalStates (const cPtr_C_5F_machineDisplayTerminalStates * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTerminalStates) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTerminalStates (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineDisplayTerminalStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayTerminalStates * p = (const cPtr_C_5F_machineDisplayTerminalStates *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTerminalStates) ;
    result = p->mAttribute_mMachineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineDisplayTerminalStates::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @C_machineDisplayTerminalStates class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_machineDisplayTerminalStates::cPtr_C_5F_machineDisplayTerminalStates (const GALGAS_uint & in_mMachineIndex
                                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineIndex (in_mMachineIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTerminalStates::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

void cPtr_C_5F_machineDisplayTerminalStates::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayTerminalStates:" ;
  mAttribute_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_machineDisplayTerminalStates::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTerminalStates (mAttribute_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @C_machineDisplayTerminalStates type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ("C_machineDisplayTerminalStates",
                                                          & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTerminalStates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTerminalStates ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTerminalStates::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTerminalStates (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTerminalStates GALGAS_C_5F_machineDisplayTerminalStates::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTerminalStates result ;
  const GALGAS_C_5F_machineDisplayTerminalStates * p = (const GALGAS_C_5F_machineDisplayTerminalStates *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayTerminalStates *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTerminalStates", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_machineDisplayTransitions::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_machineDisplayTransitions * p = (const cPtr_C_5F_machineDisplayTransitions *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex.objectCompare (p->mAttribute_mMachineIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_machineDisplayTransitions::objectCompare (const GALGAS_C_5F_machineDisplayTransitions & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTransitions::GALGAS_C_5F_machineDisplayTransitions (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineDisplayTransitions::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTransitions::GALGAS_C_5F_machineDisplayTransitions (const cPtr_C_5F_machineDisplayTransitions * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDisplayTransitions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions result ;
  if (inAttribute_mMachineIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineDisplayTransitions (inAttribute_mMachineIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_machineDisplayTransitions::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDisplayTransitions * p = (const cPtr_C_5F_machineDisplayTransitions *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDisplayTransitions) ;
    result = p->mAttribute_mMachineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_machineDisplayTransitions::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @C_machineDisplayTransitions class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_machineDisplayTransitions::cPtr_C_5F_machineDisplayTransitions (const GALGAS_uint & in_mMachineIndex
                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineIndex (in_mMachineIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_machineDisplayTransitions::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

void cPtr_C_5F_machineDisplayTransitions::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@C_machineDisplayTransitions:" ;
  mAttribute_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_machineDisplayTransitions::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDisplayTransitions (mAttribute_mMachineIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @C_machineDisplayTransitions type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ("C_machineDisplayTransitions",
                                                       & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDisplayTransitions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDisplayTransitions ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_machineDisplayTransitions::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDisplayTransitions (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_machineDisplayTransitions GALGAS_C_5F_machineDisplayTransitions::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineDisplayTransitions result ;
  const GALGAS_C_5F_machineDisplayTransitions * p = (const GALGAS_C_5F_machineDisplayTransitions *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_machineDisplayTransitions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_machineDisplayTransitions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_scenarioComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMachineIndex.objectCompare (p->mAttribute_mMachineIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputVariableCount.objectCompare (p->mAttribute_mInputVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputAndInternalVariableCount.objectCompare (p->mAttribute_mInputAndInternalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariablesMap.objectCompare (p->mAttribute_mVariablesMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mScenarioList.objectCompare (p->mAttribute_mScenarioList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_scenarioComponent::objectCompare (const GALGAS_C_5F_scenarioComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_scenarioComponent GALGAS_C_5F_scenarioComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_scenarioComponent::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                                         GALGAS_L_5F_scenarioList::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_scenarioComponent::GALGAS_C_5F_scenarioComponent (const cPtr_C_5F_scenarioComponent * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_scenarioComponent) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_scenarioComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mAttribute_mMachineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_scenarioComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMachineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_scenarioComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mAttribute_mInputVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_scenarioComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_scenarioComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mAttribute_mInputAndInternalVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_scenarioComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputAndInternalVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap GALGAS_C_5F_scenarioComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mAttribute_mVariablesMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap cPtr_C_5F_scenarioComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariablesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList GALGAS_C_5F_scenarioComponent::getter_mScenarioList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_scenarioList result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_scenarioComponent * p = (const cPtr_C_5F_scenarioComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_scenarioComponent) ;
    result = p->mAttribute_mScenarioList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList cPtr_C_5F_scenarioComponent::getter_mScenarioList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mScenarioList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @C_scenarioComponent class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_scenarioComponent::cPtr_C_5F_scenarioComponent (const GALGAS_uint & in_mMachineIndex,
                                                          const GALGAS_uint & in_mInputVariableCount,
                                                          const GALGAS_uint & in_mInputAndInternalVariableCount,
                                                          const GALGAS_M_5F_variablesMap & in_mVariablesMap,
                                                          const GALGAS_L_5F_scenarioList & in_mScenarioList
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mMachineIndex (in_mMachineIndex),
mAttribute_mInputVariableCount (in_mInputVariableCount),
mAttribute_mInputAndInternalVariableCount (in_mInputAndInternalVariableCount),
mAttribute_mVariablesMap (in_mVariablesMap),
mAttribute_mScenarioList (in_mScenarioList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_scenarioComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

void cPtr_C_5F_scenarioComponent::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@C_scenarioComponent:" ;
  mAttribute_mMachineIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariablesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mScenarioList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_scenarioComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_scenarioComponent (mAttribute_mMachineIndex, mAttribute_mInputVariableCount, mAttribute_mInputAndInternalVariableCount, mAttribute_mVariablesMap, mAttribute_mScenarioList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_scenarioComponent type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_scenarioComponent ("C_scenarioComponent",
                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_scenarioComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_scenarioComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_scenarioComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_scenarioComponent (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeDisplayBDDstats::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeDisplayBDDstats::objectCompare (const GALGAS_typeDisplayBDDstats & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDisplayBDDstats::GALGAS_typeDisplayBDDstats (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeDisplayBDDstats::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDisplayBDDstats::GALGAS_typeDisplayBDDstats (const cPtr_typeDisplayBDDstats * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDisplayBDDstats) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDisplayBDDstats GALGAS_typeDisplayBDDstats::constructor_new (LOCATION_ARGS) {
  GALGAS_typeDisplayBDDstats result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDisplayBDDstats (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @typeDisplayBDDstats class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeDisplayBDDstats::cPtr_typeDisplayBDDstats (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeDisplayBDDstats::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

void cPtr_typeDisplayBDDstats::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "[@typeDisplayBDDstats]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeDisplayBDDstats::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeDisplayBDDstats (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @typeDisplayBDDstats type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDisplayBDDstats ("typeDisplayBDDstats",
                                            & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeDisplayBDDstats::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDisplayBDDstats ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeDisplayBDDstats::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDisplayBDDstats (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeResizeMap::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeResizeMap * p = (const cPtr_typeResizeMap *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeResizeMap) ;
  if (kOperandEqual == result) {
    result = mAttribute_mNewSize.objectCompare (p->mAttribute_mNewSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeResizeMap::objectCompare (const GALGAS_typeResizeMap & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResizeMap::GALGAS_typeResizeMap (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResizeMap GALGAS_typeResizeMap::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeResizeMap::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResizeMap::GALGAS_typeResizeMap (const cPtr_typeResizeMap * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeResizeMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResizeMap GALGAS_typeResizeMap::constructor_new (const GALGAS_luint & inAttribute_mNewSize
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeResizeMap result ;
  if (inAttribute_mNewSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeResizeMap (inAttribute_mNewSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_typeResizeMap::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeResizeMap * p = (const cPtr_typeResizeMap *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeResizeMap) ;
    result = p->mAttribute_mNewSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_typeResizeMap::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNewSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @typeResizeMap class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeResizeMap::cPtr_typeResizeMap (const GALGAS_luint & in_mNewSize
                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mNewSize (in_mNewSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeResizeMap::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResizeMap ;
}

void cPtr_typeResizeMap::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@typeResizeMap:" ;
  mAttribute_mNewSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeResizeMap::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeResizeMap (mAttribute_mNewSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @typeResizeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeResizeMap ("typeResizeMap",
                                      & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeResizeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResizeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeResizeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeResizeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResizeMap GALGAS_typeResizeMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeResizeMap result ;
  const GALGAS_typeResizeMap * p = (const GALGAS_typeResizeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeResizeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeResizeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeResize_5F_AND_5F_cache::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeResize_5F_AND_5F_cache * p = (const cPtr_typeResize_5F_AND_5F_cache *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeResize_5F_AND_5F_cache) ;
  if (kOperandEqual == result) {
    result = mAttribute_mNewSize.objectCompare (p->mAttribute_mNewSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeResize_5F_AND_5F_cache::objectCompare (const GALGAS_typeResize_5F_AND_5F_cache & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_AND_5F_cache::GALGAS_typeResize_5F_AND_5F_cache (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_AND_5F_cache GALGAS_typeResize_5F_AND_5F_cache::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeResize_5F_AND_5F_cache::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_AND_5F_cache::GALGAS_typeResize_5F_AND_5F_cache (const cPtr_typeResize_5F_AND_5F_cache * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeResize_5F_AND_5F_cache) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_AND_5F_cache GALGAS_typeResize_5F_AND_5F_cache::constructor_new (const GALGAS_luint & inAttribute_mNewSize
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_AND_5F_cache result ;
  if (inAttribute_mNewSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeResize_5F_AND_5F_cache (inAttribute_mNewSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_typeResize_5F_AND_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeResize_5F_AND_5F_cache * p = (const cPtr_typeResize_5F_AND_5F_cache *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeResize_5F_AND_5F_cache) ;
    result = p->mAttribute_mNewSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_typeResize_5F_AND_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNewSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @typeResize_AND_cache class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeResize_5F_AND_5F_cache::cPtr_typeResize_5F_AND_5F_cache (const GALGAS_luint & in_mNewSize
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mNewSize (in_mNewSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeResize_5F_AND_5F_cache::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_AND_5F_cache ;
}

void cPtr_typeResize_5F_AND_5F_cache::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@typeResize_AND_cache:" ;
  mAttribute_mNewSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeResize_5F_AND_5F_cache::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeResize_5F_AND_5F_cache (mAttribute_mNewSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeResize_AND_cache type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeResize_5F_AND_5F_cache ("typeResize_AND_cache",
                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeResize_5F_AND_5F_cache::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_AND_5F_cache ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeResize_5F_AND_5F_cache::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeResize_5F_AND_5F_cache (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_AND_5F_cache GALGAS_typeResize_5F_AND_5F_cache::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_AND_5F_cache result ;
  const GALGAS_typeResize_5F_AND_5F_cache * p = (const GALGAS_typeResize_5F_AND_5F_cache *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeResize_5F_AND_5F_cache *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeResize_AND_cache", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeResize_5F_ITE_5F_cache::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeResize_5F_ITE_5F_cache * p = (const cPtr_typeResize_5F_ITE_5F_cache *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeResize_5F_ITE_5F_cache) ;
  if (kOperandEqual == result) {
    result = mAttribute_mNewSize.objectCompare (p->mAttribute_mNewSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeResize_5F_ITE_5F_cache::objectCompare (const GALGAS_typeResize_5F_ITE_5F_cache & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_ITE_5F_cache::GALGAS_typeResize_5F_ITE_5F_cache (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_ITE_5F_cache GALGAS_typeResize_5F_ITE_5F_cache::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeResize_5F_ITE_5F_cache::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_ITE_5F_cache::GALGAS_typeResize_5F_ITE_5F_cache (const cPtr_typeResize_5F_ITE_5F_cache * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeResize_5F_ITE_5F_cache) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_ITE_5F_cache GALGAS_typeResize_5F_ITE_5F_cache::constructor_new (const GALGAS_luint & inAttribute_mNewSize
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_ITE_5F_cache result ;
  if (inAttribute_mNewSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeResize_5F_ITE_5F_cache (inAttribute_mNewSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_typeResize_5F_ITE_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeResize_5F_ITE_5F_cache * p = (const cPtr_typeResize_5F_ITE_5F_cache *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeResize_5F_ITE_5F_cache) ;
    result = p->mAttribute_mNewSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_typeResize_5F_ITE_5F_cache::getter_mNewSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNewSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @typeResize_ITE_cache class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeResize_5F_ITE_5F_cache::cPtr_typeResize_5F_ITE_5F_cache (const GALGAS_luint & in_mNewSize
                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mAttribute_mNewSize (in_mNewSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeResize_5F_ITE_5F_cache::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_ITE_5F_cache ;
}

void cPtr_typeResize_5F_ITE_5F_cache::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@typeResize_ITE_cache:" ;
  mAttribute_mNewSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeResize_5F_ITE_5F_cache::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeResize_5F_ITE_5F_cache (mAttribute_mNewSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeResize_ITE_cache type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeResize_5F_ITE_5F_cache ("typeResize_ITE_cache",
                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeResize_5F_ITE_5F_cache::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeResize_5F_ITE_5F_cache ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeResize_5F_ITE_5F_cache::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeResize_5F_ITE_5F_cache (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeResize_5F_ITE_5F_cache GALGAS_typeResize_5F_ITE_5F_cache::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeResize_5F_ITE_5F_cache result ;
  const GALGAS_typeResize_5F_ITE_5F_cache * p = (const GALGAS_typeResize_5F_ITE_5F_cache *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeResize_5F_ITE_5F_cache *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeResize_ITE_cache", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeUse_5F_AND::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeUse_5F_AND::objectCompare (const GALGAS_typeUse_5F_AND & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND::GALGAS_typeUse_5F_AND (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND GALGAS_typeUse_5F_AND::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeUse_5F_AND::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND::GALGAS_typeUse_5F_AND (const cPtr_typeUse_5F_AND * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeUse_5F_AND) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND GALGAS_typeUse_5F_AND::constructor_new (LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND result ;
  macroMyNew (result.mObjectPtr, cPtr_typeUse_5F_AND (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @typeUse_AND class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeUse_5F_AND::cPtr_typeUse_5F_AND (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeUse_5F_AND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND ;
}

void cPtr_typeUse_5F_AND::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "[@typeUse_AND]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeUse_5F_AND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeUse_5F_AND (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @typeUse_AND type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeUse_5F_AND ("typeUse_AND",
                                       & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeUse_5F_AND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeUse_5F_AND::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeUse_5F_AND (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND GALGAS_typeUse_5F_AND::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND result ;
  const GALGAS_typeUse_5F_AND * p = (const GALGAS_typeUse_5F_AND *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeUse_5F_AND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeUse_AND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeUse_5F_AND_5F_ITE::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeUse_5F_AND_5F_ITE::objectCompare (const GALGAS_typeUse_5F_AND_5F_ITE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND_5F_ITE::GALGAS_typeUse_5F_AND_5F_ITE (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND_5F_ITE GALGAS_typeUse_5F_AND_5F_ITE::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeUse_5F_AND_5F_ITE::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND_5F_ITE::GALGAS_typeUse_5F_AND_5F_ITE (const cPtr_typeUse_5F_AND_5F_ITE * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeUse_5F_AND_5F_ITE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND_5F_ITE GALGAS_typeUse_5F_AND_5F_ITE::constructor_new (LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND_5F_ITE result ;
  macroMyNew (result.mObjectPtr, cPtr_typeUse_5F_AND_5F_ITE (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @typeUse_AND_ITE class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeUse_5F_AND_5F_ITE::cPtr_typeUse_5F_AND_5F_ITE (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeUse_5F_AND_5F_ITE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND_5F_ITE ;
}

void cPtr_typeUse_5F_AND_5F_ITE::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "[@typeUse_AND_ITE]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeUse_5F_AND_5F_ITE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeUse_5F_AND_5F_ITE (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @typeUse_AND_ITE type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeUse_5F_AND_5F_ITE ("typeUse_AND_ITE",
                                              & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeUse_5F_AND_5F_ITE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_AND_5F_ITE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeUse_5F_AND_5F_ITE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeUse_5F_AND_5F_ITE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_AND_5F_ITE GALGAS_typeUse_5F_AND_5F_ITE::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeUse_5F_AND_5F_ITE result ;
  const GALGAS_typeUse_5F_AND_5F_ITE * p = (const GALGAS_typeUse_5F_AND_5F_ITE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeUse_5F_AND_5F_ITE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeUse_AND_ITE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeUse_5F_ITE::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeUse_5F_ITE::objectCompare (const GALGAS_typeUse_5F_ITE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_ITE::GALGAS_typeUse_5F_ITE (void) :
GALGAS_AC_5F_job () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_ITE GALGAS_typeUse_5F_ITE::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeUse_5F_ITE::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_ITE::GALGAS_typeUse_5F_ITE (const cPtr_typeUse_5F_ITE * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeUse_5F_ITE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_ITE GALGAS_typeUse_5F_ITE::constructor_new (LOCATION_ARGS) {
  GALGAS_typeUse_5F_ITE result ;
  macroMyNew (result.mObjectPtr, cPtr_typeUse_5F_ITE (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @typeUse_ITE class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeUse_5F_ITE::cPtr_typeUse_5F_ITE (LOCATION_ARGS) :
cPtr_AC_5F_job (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeUse_5F_ITE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_ITE ;
}

void cPtr_typeUse_5F_ITE::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "[@typeUse_ITE]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeUse_5F_ITE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeUse_5F_ITE (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @typeUse_ITE type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeUse_5F_ITE ("typeUse_ITE",
                                       & kTypeDescriptor_GALGAS_AC_5F_job) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeUse_5F_ITE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeUse_5F_ITE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeUse_5F_ITE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeUse_5F_ITE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeUse_5F_ITE GALGAS_typeUse_5F_ITE::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeUse_5F_ITE result ;
  const GALGAS_typeUse_5F_ITE * p = (const GALGAS_typeUse_5F_ITE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeUse_5F_ITE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeUse_ITE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_AC_5F_machineDefinition::objectCompare (const GALGAS_AC_5F_machineDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition::GALGAS_AC_5F_machineDefinition (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition::GALGAS_AC_5F_machineDefinition (const cPtr_AC_5F_machineDefinition * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_AC_5F_machineDefinition) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @AC_machineDefinition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_AC_5F_machineDefinition::cPtr_AC_5F_machineDefinition (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @AC_machineDefinition type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AC_5F_machineDefinition ("AC_machineDefinition",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_AC_5F_machineDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AC_5F_machineDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_AC_5F_machineDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AC_5F_machineDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_AC_5F_machineDefinition::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_AC_5F_machineDefinition result ;
  const GALGAS_AC_5F_machineDefinition * p = (const GALGAS_AC_5F_machineDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_AC_5F_machineDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AC_machineDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_additiveModalCompositionComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_additiveModalCompositionComponent * p = (const cPtr_C_5F_additiveModalCompositionComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
  if (kOperandEqual == result) {
    result = mAttribute_mModeMap.objectCompare (p->mAttribute_mModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInclusionList.objectCompare (p->mAttribute_mInclusionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_additiveModalCompositionComponent::objectCompare (const GALGAS_C_5F_additiveModalCompositionComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_additiveModalCompositionComponent::GALGAS_C_5F_additiveModalCompositionComponent (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                         GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_additiveModalCompositionComponent::GALGAS_C_5F_additiveModalCompositionComponent (const cPtr_C_5F_additiveModalCompositionComponent * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_additiveModalCompositionComponent) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::constructor_new (const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                              const GALGAS_ListForModes & inAttribute_mInclusionList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent result ;
  if (inAttribute_mModeMap.isValid () && inAttribute_mInclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_additiveModalCompositionComponent (inAttribute_mModeMap, inAttribute_mInclusionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap GALGAS_C_5F_additiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_additiveModalCompositionComponent * p = (const cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    result = p->mAttribute_mModeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap cPtr_C_5F_additiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes GALGAS_C_5F_additiveModalCompositionComponent::getter_mInclusionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_additiveModalCompositionComponent * p = (const cPtr_C_5F_additiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_additiveModalCompositionComponent) ;
    result = p->mAttribute_mInclusionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes cPtr_C_5F_additiveModalCompositionComponent::getter_mInclusionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInclusionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @C_additiveModalCompositionComponent class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_additiveModalCompositionComponent::cPtr_C_5F_additiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                          const GALGAS_ListForModes & in_mInclusionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mModeMap (in_mModeMap),
mAttribute_mInclusionList (in_mInclusionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_additiveModalCompositionComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;
}

void cPtr_C_5F_additiveModalCompositionComponent::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@C_additiveModalCompositionComponent:" ;
  mAttribute_mModeMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInclusionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_additiveModalCompositionComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_additiveModalCompositionComponent (mAttribute_mModeMap, mAttribute_mInclusionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @C_additiveModalCompositionComponent type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ("C_additiveModalCompositionComponent",
                                                               & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_additiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_additiveModalCompositionComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_additiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_additiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_additiveModalCompositionComponent GALGAS_C_5F_additiveModalCompositionComponent::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_additiveModalCompositionComponent result ;
  const GALGAS_C_5F_additiveModalCompositionComponent * p = (const GALGAS_C_5F_additiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_additiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_additiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_boolToSeqExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_boolToSeqExpression * p = (const cPtr_C_5F_boolToSeqExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_boolToSeqExpression::objectCompare (const GALGAS_C_5F_boolToSeqExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_boolToSeqExpression::GALGAS_C_5F_boolToSeqExpression (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_boolToSeqExpression::GALGAS_C_5F_boolToSeqExpression (const cPtr_C_5F_boolToSeqExpression * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_boolToSeqExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_boolToSeqExpression GALGAS_C_5F_boolToSeqExpression::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_boolToSeqExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_boolToSeqExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_boolToSeqExpression * p = (const cPtr_C_5F_boolToSeqExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_boolToSeqExpression) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_boolToSeqExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @C_boolToSeqExpression class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_boolToSeqExpression::cPtr_C_5F_boolToSeqExpression (const GALGAS_AC_5F_boolExpression & in_mExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_boolToSeqExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

void cPtr_C_5F_boolToSeqExpression::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@C_boolToSeqExpression:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_boolToSeqExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_boolToSeqExpression (mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @C_boolToSeqExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ("C_boolToSeqExpression",
                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_boolToSeqExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_boolToSeqExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_boolToSeqExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_boolToSeqExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_boolToSeqExpression GALGAS_C_5F_boolToSeqExpression::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_boolToSeqExpression result ;
  const GALGAS_C_5F_boolToSeqExpression * p = (const GALGAS_C_5F_boolToSeqExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_boolToSeqExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_boolToSeqExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_complementationOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_complementationOperation * p = (const cPtr_C_5F_complementationOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_complementationOperation::objectCompare (const GALGAS_C_5F_complementationOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_complementationOperation::GALGAS_C_5F_complementationOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_complementationOperation::GALGAS_C_5F_complementationOperation (const cPtr_C_5F_complementationOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_complementationOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_complementationOperation GALGAS_C_5F_complementationOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_complementationOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_complementationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_complementationOperation * p = (const cPtr_C_5F_complementationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_complementationOperation) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_complementationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @C_complementationOperation class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_complementationOperation::cPtr_C_5F_complementationOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_complementationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

void cPtr_C_5F_complementationOperation::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@C_complementationOperation:" ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_complementationOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_complementationOperation (mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @C_complementationOperation type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_complementationOperation ("C_complementationOperation",
                                                      & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_complementationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_complementationOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_complementationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_complementationOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_complementationOperation GALGAS_C_5F_complementationOperation::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_complementationOperation result ;
  const GALGAS_C_5F_complementationOperation * p = (const GALGAS_C_5F_complementationOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_complementationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_complementationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_existsDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mPreviousVariableCount.objectCompare (p->mAttribute_mPreviousVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTotalVariableCount.objectCompare (p->mAttribute_mTotalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_existsDefinition::objectCompare (const GALGAS_C_5F_existsDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_existsDefinition::GALGAS_C_5F_existsDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_existsDefinition::GALGAS_C_5F_existsDefinition (const cPtr_C_5F_existsDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_existsDefinition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_existsDefinition GALGAS_C_5F_existsDefinition::constructor_new (const GALGAS_uint & inAttribute_mPreviousVariableCount,
                                                                            const GALGAS_uint & inAttribute_mTotalVariableCount,
                                                                            const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_existsDefinition result ;
  if (inAttribute_mPreviousVariableCount.isValid () && inAttribute_mTotalVariableCount.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_existsDefinition (inAttribute_mPreviousVariableCount, inAttribute_mTotalVariableCount, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_existsDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    result = p->mAttribute_mPreviousVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_existsDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreviousVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_existsDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    result = p->mAttribute_mTotalVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_existsDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTotalVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_existsDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_existsDefinition * p = (const cPtr_C_5F_existsDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_existsDefinition) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_existsDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @C_existsDefinition class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_existsDefinition::cPtr_C_5F_existsDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                                        const GALGAS_uint & in_mTotalVariableCount,
                                                        const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mPreviousVariableCount (in_mPreviousVariableCount),
mAttribute_mTotalVariableCount (in_mTotalVariableCount),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_existsDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition ;
}

void cPtr_C_5F_existsDefinition::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@C_existsDefinition:" ;
  mAttribute_mPreviousVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTotalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_existsDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_existsDefinition (mAttribute_mPreviousVariableCount, mAttribute_mTotalVariableCount, mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_existsDefinition type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_existsDefinition ("C_existsDefinition",
                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_existsDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_existsDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_existsDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_existsDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_existsDefinition GALGAS_C_5F_existsDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_existsDefinition result ;
  const GALGAS_C_5F_existsDefinition * p = (const GALGAS_C_5F_existsDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_existsDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_existsDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_explicitAutomatonDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStatesMap.objectCompare (p->mAttribute_mStatesMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInitialStatesDefinitionList.objectCompare (p->mAttribute_mInitialStatesDefinitionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalStatesDefinitionList.objectCompare (p->mAttribute_mTerminalStatesDefinitionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStateDefinitionList.objectCompare (p->mAttribute_mStateDefinitionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfDefinition.objectCompare (p->mAttribute_mEndOfDefinition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_explicitAutomatonDefinition::objectCompare (const GALGAS_C_5F_explicitAutomatonDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_explicitAutomatonDefinition::GALGAS_C_5F_explicitAutomatonDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (GALGAS_M_5F_stateMap::constructor_emptyMap (HERE),
                                                                   GALGAS_L_5F_statesDefinitionList::constructor_emptyList (HERE),
                                                                   GALGAS_L_5F_statesDefinitionList::constructor_emptyList (HERE),
                                                                   GALGAS_L_5F_stateDefinition::constructor_emptyList (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_explicitAutomatonDefinition::GALGAS_C_5F_explicitAutomatonDefinition (const cPtr_C_5F_explicitAutomatonDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_explicitAutomatonDefinition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::constructor_new (const GALGAS_M_5F_stateMap & inAttribute_mStatesMap,
                                                                                                  const GALGAS_L_5F_statesDefinitionList & inAttribute_mInitialStatesDefinitionList,
                                                                                                  const GALGAS_L_5F_statesDefinitionList & inAttribute_mTerminalStatesDefinitionList,
                                                                                                  const GALGAS_L_5F_stateDefinition & inAttribute_mStateDefinitionList,
                                                                                                  const GALGAS_location & inAttribute_mEndOfDefinition
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_explicitAutomatonDefinition result ;
  if (inAttribute_mStatesMap.isValid () && inAttribute_mInitialStatesDefinitionList.isValid () && inAttribute_mTerminalStatesDefinitionList.isValid () && inAttribute_mStateDefinitionList.isValid () && inAttribute_mEndOfDefinition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_explicitAutomatonDefinition (inAttribute_mStatesMap, inAttribute_mInitialStatesDefinitionList, inAttribute_mTerminalStatesDefinitionList, inAttribute_mStateDefinitionList, inAttribute_mEndOfDefinition COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap GALGAS_C_5F_explicitAutomatonDefinition::getter_mStatesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_stateMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mAttribute_mStatesMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap cPtr_C_5F_explicitAutomatonDefinition::getter_mStatesMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStatesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList GALGAS_C_5F_explicitAutomatonDefinition::getter_mInitialStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mAttribute_mInitialStatesDefinitionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList cPtr_C_5F_explicitAutomatonDefinition::getter_mInitialStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialStatesDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList GALGAS_C_5F_explicitAutomatonDefinition::getter_mTerminalStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_statesDefinitionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mAttribute_mTerminalStatesDefinitionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList cPtr_C_5F_explicitAutomatonDefinition::getter_mTerminalStatesDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalStatesDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition GALGAS_C_5F_explicitAutomatonDefinition::getter_mStateDefinitionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_stateDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mAttribute_mStateDefinitionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition cPtr_C_5F_explicitAutomatonDefinition::getter_mStateDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_C_5F_explicitAutomatonDefinition::getter_mEndOfDefinition (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_explicitAutomatonDefinition * p = (const cPtr_C_5F_explicitAutomatonDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_explicitAutomatonDefinition) ;
    result = p->mAttribute_mEndOfDefinition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_C_5F_explicitAutomatonDefinition::getter_mEndOfDefinition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @C_explicitAutomatonDefinition class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_explicitAutomatonDefinition::cPtr_C_5F_explicitAutomatonDefinition (const GALGAS_M_5F_stateMap & in_mStatesMap,
                                                                              const GALGAS_L_5F_statesDefinitionList & in_mInitialStatesDefinitionList,
                                                                              const GALGAS_L_5F_statesDefinitionList & in_mTerminalStatesDefinitionList,
                                                                              const GALGAS_L_5F_stateDefinition & in_mStateDefinitionList,
                                                                              const GALGAS_location & in_mEndOfDefinition
                                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mStatesMap (in_mStatesMap),
mAttribute_mInitialStatesDefinitionList (in_mInitialStatesDefinitionList),
mAttribute_mTerminalStatesDefinitionList (in_mTerminalStatesDefinitionList),
mAttribute_mStateDefinitionList (in_mStateDefinitionList),
mAttribute_mEndOfDefinition (in_mEndOfDefinition) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_explicitAutomatonDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;
}

void cPtr_C_5F_explicitAutomatonDefinition::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@C_explicitAutomatonDefinition:" ;
  mAttribute_mStatesMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInitialStatesDefinitionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalStatesDefinitionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStateDefinitionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfDefinition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_explicitAutomatonDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_explicitAutomatonDefinition (mAttribute_mStatesMap, mAttribute_mInitialStatesDefinitionList, mAttribute_mTerminalStatesDefinitionList, mAttribute_mStateDefinitionList, mAttribute_mEndOfDefinition COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @C_explicitAutomatonDefinition type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ("C_explicitAutomatonDefinition",
                                                         & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_explicitAutomatonDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_explicitAutomatonDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_explicitAutomatonDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_explicitAutomatonDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_explicitAutomatonDefinition GALGAS_C_5F_explicitAutomatonDefinition::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_explicitAutomatonDefinition result ;
  const GALGAS_C_5F_explicitAutomatonDefinition * p = (const GALGAS_C_5F_explicitAutomatonDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_explicitAutomatonDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_explicitAutomatonDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_forallDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mPreviousVariableCount.objectCompare (p->mAttribute_mPreviousVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTotalVariableCount.objectCompare (p->mAttribute_mTotalVariableCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_forallDefinition::objectCompare (const GALGAS_C_5F_forallDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_forallDefinition::GALGAS_C_5F_forallDefinition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_forallDefinition::GALGAS_C_5F_forallDefinition (const cPtr_C_5F_forallDefinition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_forallDefinition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_forallDefinition GALGAS_C_5F_forallDefinition::constructor_new (const GALGAS_uint & inAttribute_mPreviousVariableCount,
                                                                            const GALGAS_uint & inAttribute_mTotalVariableCount,
                                                                            const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_forallDefinition result ;
  if (inAttribute_mPreviousVariableCount.isValid () && inAttribute_mTotalVariableCount.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_forallDefinition (inAttribute_mPreviousVariableCount, inAttribute_mTotalVariableCount, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_forallDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    result = p->mAttribute_mPreviousVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_forallDefinition::getter_mPreviousVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreviousVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_forallDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    result = p->mAttribute_mTotalVariableCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_forallDefinition::getter_mTotalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTotalVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_forallDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_forallDefinition * p = (const cPtr_C_5F_forallDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_forallDefinition) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_forallDefinition::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @C_forallDefinition class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_forallDefinition::cPtr_C_5F_forallDefinition (const GALGAS_uint & in_mPreviousVariableCount,
                                                        const GALGAS_uint & in_mTotalVariableCount,
                                                        const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mPreviousVariableCount (in_mPreviousVariableCount),
mAttribute_mTotalVariableCount (in_mTotalVariableCount),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_forallDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition ;
}

void cPtr_C_5F_forallDefinition::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@C_forallDefinition:" ;
  mAttribute_mPreviousVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTotalVariableCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_forallDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_forallDefinition (mAttribute_mPreviousVariableCount, mAttribute_mTotalVariableCount, mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @C_forallDefinition type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_forallDefinition ("C_forallDefinition",
                                              & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_forallDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_forallDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_forallDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_forallDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_forallDefinition GALGAS_C_5F_forallDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_forallDefinition result ;
  const GALGAS_C_5F_forallDefinition * p = (const GALGAS_C_5F_forallDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_forallDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_forallDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_fullSaturationOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_fullSaturationOperation * p = (const cPtr_C_5F_fullSaturationOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_fullSaturationOperation::objectCompare (const GALGAS_C_5F_fullSaturationOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_fullSaturationOperation::GALGAS_C_5F_fullSaturationOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_fullSaturationOperation::GALGAS_C_5F_fullSaturationOperation (const cPtr_C_5F_fullSaturationOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_fullSaturationOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_fullSaturationOperation GALGAS_C_5F_fullSaturationOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_fullSaturationOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_fullSaturationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_fullSaturationOperation * p = (const cPtr_C_5F_fullSaturationOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_fullSaturationOperation) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_fullSaturationOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @C_fullSaturationOperation class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_fullSaturationOperation::cPtr_C_5F_fullSaturationOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_fullSaturationOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

void cPtr_C_5F_fullSaturationOperation::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@C_fullSaturationOperation:" ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_fullSaturationOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_fullSaturationOperation (mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @C_fullSaturationOperation type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ("C_fullSaturationOperation",
                                                     & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_fullSaturationOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_fullSaturationOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_fullSaturationOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_fullSaturationOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_fullSaturationOperation GALGAS_C_5F_fullSaturationOperation::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_fullSaturationOperation result ;
  const GALGAS_C_5F_fullSaturationOperation * p = (const GALGAS_C_5F_fullSaturationOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_fullSaturationOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_fullSaturationOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_importMachine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_importMachine * p = (const cPtr_C_5F_importMachine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndexOfImportedMachine.objectCompare (p->mAttribute_mIndexOfImportedMachine) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTranslationVector.objectCompare (p->mAttribute_mTranslationVector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_importMachine::objectCompare (const GALGAS_C_5F_importMachine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importMachine::GALGAS_C_5F_importMachine (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_importMachine::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                     GALGAS_L_5F_translationVector::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importMachine::GALGAS_C_5F_importMachine (const cPtr_C_5F_importMachine * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importMachine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::constructor_new (const GALGAS_uint & inAttribute_mIndexOfImportedMachine,
                                                                      const GALGAS_L_5F_translationVector & inAttribute_mTranslationVector
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importMachine result ;
  if (inAttribute_mIndexOfImportedMachine.isValid () && inAttribute_mTranslationVector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_importMachine (inAttribute_mIndexOfImportedMachine, inAttribute_mTranslationVector COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_C_5F_importMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importMachine * p = (const cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    result = p->mAttribute_mIndexOfImportedMachine ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_C_5F_importMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexOfImportedMachine ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector GALGAS_C_5F_importMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importMachine * p = (const cPtr_C_5F_importMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importMachine) ;
    result = p->mAttribute_mTranslationVector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector cPtr_C_5F_importMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTranslationVector ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @C_importMachine class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_importMachine::cPtr_C_5F_importMachine (const GALGAS_uint & in_mIndexOfImportedMachine,
                                                  const GALGAS_L_5F_translationVector & in_mTranslationVector
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mIndexOfImportedMachine (in_mIndexOfImportedMachine),
mAttribute_mTranslationVector (in_mTranslationVector) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_importMachine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine ;
}

void cPtr_C_5F_importMachine::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_importMachine:" ;
  mAttribute_mIndexOfImportedMachine.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTranslationVector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_importMachine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_importMachine (mAttribute_mIndexOfImportedMachine, mAttribute_mTranslationVector COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @C_importMachine type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importMachine ("C_importMachine",
                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_importMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importMachine ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_importMachine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importMachine (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_importMachine GALGAS_C_5F_importMachine::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_importMachine result ;
  const GALGAS_C_5F_importMachine * p = (const GALGAS_C_5F_importMachine *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_importMachine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_importMachine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_orComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_orComposition * p = (const cPtr_C_5F_orComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftOperand.objectCompare (p->mAttribute_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightOperand.objectCompare (p->mAttribute_mRightOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_orComposition::objectCompare (const GALGAS_C_5F_orComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_orComposition::GALGAS_C_5F_orComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_orComposition::GALGAS_C_5F_orComposition (const cPtr_C_5F_orComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_orComposition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_orComposition GALGAS_C_5F_orComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                      const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_orComposition (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_orComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orComposition * p = (const cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_orComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_orComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_orComposition * p = (const cPtr_C_5F_orComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_orComposition) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_orComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @C_orComposition class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_orComposition::cPtr_C_5F_orComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                  const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mLeftOperand (in_mLeftOperand),
mAttribute_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_orComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition ;
}

void cPtr_C_5F_orComposition::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@C_orComposition:" ;
  mAttribute_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_orComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_orComposition (mAttribute_mLeftOperand, mAttribute_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @C_orComposition type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_orComposition ("C_orComposition",
                                           & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_orComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_orComposition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_orComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_orComposition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_orComposition GALGAS_C_5F_orComposition::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_orComposition result ;
  const GALGAS_C_5F_orComposition * p = (const GALGAS_C_5F_orComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_orComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_orComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_parallelComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_parallelComposition * p = (const cPtr_C_5F_parallelComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftOperand.objectCompare (p->mAttribute_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightOperand.objectCompare (p->mAttribute_mRightOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_parallelComposition::objectCompare (const GALGAS_C_5F_parallelComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_parallelComposition::GALGAS_C_5F_parallelComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_parallelComposition::GALGAS_C_5F_parallelComposition (const cPtr_C_5F_parallelComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_parallelComposition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_parallelComposition GALGAS_C_5F_parallelComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                                  const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_parallelComposition (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_parallelComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_parallelComposition * p = (const cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_parallelComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_parallelComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_parallelComposition * p = (const cPtr_C_5F_parallelComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_parallelComposition) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_parallelComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @C_parallelComposition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_parallelComposition::cPtr_C_5F_parallelComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                              const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                              COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mLeftOperand (in_mLeftOperand),
mAttribute_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_parallelComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition ;
}

void cPtr_C_5F_parallelComposition::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@C_parallelComposition:" ;
  mAttribute_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_parallelComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_parallelComposition (mAttribute_mLeftOperand, mAttribute_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @C_parallelComposition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_parallelComposition ("C_parallelComposition",
                                                 & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_parallelComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_parallelComposition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_parallelComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_parallelComposition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_parallelComposition GALGAS_C_5F_parallelComposition::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_parallelComposition result ;
  const GALGAS_C_5F_parallelComposition * p = (const GALGAS_C_5F_parallelComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_parallelComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_parallelComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_strongModalComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftOperand.objectCompare (p->mAttribute_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorLocation.objectCompare (p->mAttribute_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightOperand.objectCompare (p->mAttribute_mRightOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_strongModalComposition::objectCompare (const GALGAS_C_5F_strongModalComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_strongModalComposition::GALGAS_C_5F_strongModalComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_strongModalComposition::GALGAS_C_5F_strongModalComposition (const cPtr_C_5F_strongModalComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_strongModalComposition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_strongModalComposition GALGAS_C_5F_strongModalComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                                        const GALGAS_location & inAttribute_mErrorLocation,
                                                                                        const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_strongModalComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_strongModalComposition (inAttribute_mLeftOperand, inAttribute_mErrorLocation, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_strongModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_strongModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_C_5F_strongModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    result = p->mAttribute_mErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_C_5F_strongModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_strongModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_strongModalComposition * p = (const cPtr_C_5F_strongModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_strongModalComposition) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_strongModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @C_strongModalComposition class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_strongModalComposition::cPtr_C_5F_strongModalComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                    const GALGAS_location & in_mErrorLocation,
                                                                    const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mLeftOperand (in_mLeftOperand),
mAttribute_mErrorLocation (in_mErrorLocation),
mAttribute_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_strongModalComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;
}

void cPtr_C_5F_strongModalComposition::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@C_strongModalComposition:" ;
  mAttribute_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_strongModalComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_strongModalComposition (mAttribute_mLeftOperand, mAttribute_mErrorLocation, mAttribute_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @C_strongModalComposition type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_strongModalComposition ("C_strongModalComposition",
                                                    & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_strongModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_strongModalComposition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_strongModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_strongModalComposition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_strongModalComposition GALGAS_C_5F_strongModalComposition::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_strongModalComposition result ;
  const GALGAS_C_5F_strongModalComposition * p = (const GALGAS_C_5F_strongModalComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_strongModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_strongModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_substractiveModalCompositionComponent::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_substractiveModalCompositionComponent * p = (const cPtr_C_5F_substractiveModalCompositionComponent *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
  if (kOperandEqual == result) {
    result = mAttribute_mModeMap.objectCompare (p->mAttribute_mModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExclusionList.objectCompare (p->mAttribute_mExclusionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_substractiveModalCompositionComponent::objectCompare (const GALGAS_C_5F_substractiveModalCompositionComponent & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_substractiveModalCompositionComponent::GALGAS_C_5F_substractiveModalCompositionComponent (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (GALGAS_M_5F_modesMap::constructor_emptyMap (HERE),
                                                                             GALGAS_ListForModes::constructor_emptyList (HERE)
                                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_substractiveModalCompositionComponent::GALGAS_C_5F_substractiveModalCompositionComponent (const cPtr_C_5F_substractiveModalCompositionComponent * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_substractiveModalCompositionComponent) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::constructor_new (const GALGAS_M_5F_modesMap & inAttribute_mModeMap,
                                                                                                                      const GALGAS_ListForModes & inAttribute_mExclusionList
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent result ;
  if (inAttribute_mModeMap.isValid () && inAttribute_mExclusionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_substractiveModalCompositionComponent (inAttribute_mModeMap, inAttribute_mExclusionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap GALGAS_C_5F_substractiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_substractiveModalCompositionComponent * p = (const cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    result = p->mAttribute_mModeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap cPtr_C_5F_substractiveModalCompositionComponent::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes GALGAS_C_5F_substractiveModalCompositionComponent::getter_mExclusionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_substractiveModalCompositionComponent * p = (const cPtr_C_5F_substractiveModalCompositionComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_substractiveModalCompositionComponent) ;
    result = p->mAttribute_mExclusionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes cPtr_C_5F_substractiveModalCompositionComponent::getter_mExclusionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExclusionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @C_substractiveModalCompositionComponent class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_substractiveModalCompositionComponent::cPtr_C_5F_substractiveModalCompositionComponent (const GALGAS_M_5F_modesMap & in_mModeMap,
                                                                                                  const GALGAS_ListForModes & in_mExclusionList
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mModeMap (in_mModeMap),
mAttribute_mExclusionList (in_mExclusionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_substractiveModalCompositionComponent::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;
}

void cPtr_C_5F_substractiveModalCompositionComponent::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@C_substractiveModalCompositionComponent:" ;
  mAttribute_mModeMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExclusionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_substractiveModalCompositionComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_substractiveModalCompositionComponent (mAttribute_mModeMap, mAttribute_mExclusionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @C_substractiveModalCompositionComponent type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ("C_substractiveModalCompositionComponent",
                                                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_substractiveModalCompositionComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_substractiveModalCompositionComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_substractiveModalCompositionComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_substractiveModalCompositionComponent (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_substractiveModalCompositionComponent GALGAS_C_5F_substractiveModalCompositionComponent::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_substractiveModalCompositionComponent result ;
  const GALGAS_C_5F_substractiveModalCompositionComponent * p = (const GALGAS_C_5F_substractiveModalCompositionComponent *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_substractiveModalCompositionComponent *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_substractiveModalCompositionComponent", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_suppressInitialStatesOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_suppressInitialStatesOperation * p = (const cPtr_C_5F_suppressInitialStatesOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_suppressInitialStatesOperation::objectCompare (const GALGAS_C_5F_suppressInitialStatesOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressInitialStatesOperation::GALGAS_C_5F_suppressInitialStatesOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressInitialStatesOperation::GALGAS_C_5F_suppressInitialStatesOperation (const cPtr_C_5F_suppressInitialStatesOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressInitialStatesOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressInitialStatesOperation GALGAS_C_5F_suppressInitialStatesOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressInitialStatesOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_suppressInitialStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_suppressInitialStatesOperation * p = (const cPtr_C_5F_suppressInitialStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressInitialStatesOperation) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_suppressInitialStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @C_suppressInitialStatesOperation class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_suppressInitialStatesOperation::cPtr_C_5F_suppressInitialStatesOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_suppressInitialStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

void cPtr_C_5F_suppressInitialStatesOperation::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@C_suppressInitialStatesOperation:" ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_suppressInitialStatesOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_suppressInitialStatesOperation (mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @C_suppressInitialStatesOperation type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ("C_suppressInitialStatesOperation",
                                                            & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_suppressInitialStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressInitialStatesOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_suppressInitialStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressInitialStatesOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressInitialStatesOperation GALGAS_C_5F_suppressInitialStatesOperation::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressInitialStatesOperation result ;
  const GALGAS_C_5F_suppressInitialStatesOperation * p = (const GALGAS_C_5F_suppressInitialStatesOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_suppressInitialStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressInitialStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_suppressTerminalStatesOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_suppressTerminalStatesOperation * p = (const cPtr_C_5F_suppressTerminalStatesOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_suppressTerminalStatesOperation::objectCompare (const GALGAS_C_5F_suppressTerminalStatesOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressTerminalStatesOperation::GALGAS_C_5F_suppressTerminalStatesOperation (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressTerminalStatesOperation::GALGAS_C_5F_suppressTerminalStatesOperation (const cPtr_C_5F_suppressTerminalStatesOperation * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_suppressTerminalStatesOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressTerminalStatesOperation GALGAS_C_5F_suppressTerminalStatesOperation::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mOperand
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation result ;
  if (inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_suppressTerminalStatesOperation (inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_suppressTerminalStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_suppressTerminalStatesOperation * p = (const cPtr_C_5F_suppressTerminalStatesOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_suppressTerminalStatesOperation) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_suppressTerminalStatesOperation::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @C_suppressTerminalStatesOperation class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_suppressTerminalStatesOperation::cPtr_C_5F_suppressTerminalStatesOperation (const GALGAS_AC_5F_machineDefinition & in_mOperand
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_suppressTerminalStatesOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

void cPtr_C_5F_suppressTerminalStatesOperation::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@C_suppressTerminalStatesOperation:" ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_suppressTerminalStatesOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_suppressTerminalStatesOperation (mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @C_suppressTerminalStatesOperation type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ("C_suppressTerminalStatesOperation",
                                                             & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_suppressTerminalStatesOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_suppressTerminalStatesOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_suppressTerminalStatesOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_suppressTerminalStatesOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_suppressTerminalStatesOperation GALGAS_C_5F_suppressTerminalStatesOperation::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_suppressTerminalStatesOperation result ;
  const GALGAS_C_5F_suppressTerminalStatesOperation * p = (const GALGAS_C_5F_suppressTerminalStatesOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_suppressTerminalStatesOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_suppressTerminalStatesOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_trans::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_trans * p = (const cPtr_C_5F_trans *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_trans) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceStateExpression.objectCompare (p->mAttribute_mSourceStateExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetStateExpression.objectCompare (p->mAttribute_mTargetStateExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_trans::objectCompare (const GALGAS_C_5F_trans & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trans::GALGAS_C_5F_trans (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trans::GALGAS_C_5F_trans (const cPtr_C_5F_trans * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_trans) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trans GALGAS_C_5F_trans::constructor_new (const GALGAS_AC_5F_boolExpression & inAttribute_mSourceStateExpression,
                                                      const GALGAS_AC_5F_boolExpression & inAttribute_mTargetStateExpression
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trans result ;
  if (inAttribute_mSourceStateExpression.isValid () && inAttribute_mTargetStateExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_trans (inAttribute_mSourceStateExpression, inAttribute_mTargetStateExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_trans::getter_mSourceStateExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_trans * p = (const cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    result = p->mAttribute_mSourceStateExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_trans::getter_mSourceStateExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceStateExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_C_5F_trans::getter_mTargetStateExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_boolExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_trans * p = (const cPtr_C_5F_trans *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_trans) ;
    result = p->mAttribute_mTargetStateExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression cPtr_C_5F_trans::getter_mTargetStateExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @C_trans class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_trans::cPtr_C_5F_trans (const GALGAS_AC_5F_boolExpression & in_mSourceStateExpression,
                                  const GALGAS_AC_5F_boolExpression & in_mTargetStateExpression
                                  COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mSourceStateExpression (in_mSourceStateExpression),
mAttribute_mTargetStateExpression (in_mTargetStateExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_trans::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans ;
}

void cPtr_C_5F_trans::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "[@C_trans:" ;
  mAttribute_mSourceStateExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetStateExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_trans::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_trans (mAttribute_mSourceStateExpression, mAttribute_mTargetStateExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @C_trans type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_trans ("C_trans",
                                   & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_trans::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_trans ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_trans::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_trans (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_trans GALGAS_C_5F_trans::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_trans result ;
  const GALGAS_C_5F_trans * p = (const GALGAS_C_5F_trans *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_trans *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_trans", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_C_5F_weakModalComposition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftOperand.objectCompare (p->mAttribute_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorLocation.objectCompare (p->mAttribute_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightOperand.objectCompare (p->mAttribute_mRightOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_C_5F_weakModalComposition::objectCompare (const GALGAS_C_5F_weakModalComposition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_weakModalComposition::GALGAS_C_5F_weakModalComposition (void) :
GALGAS_AC_5F_machineDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_weakModalComposition::GALGAS_C_5F_weakModalComposition (const cPtr_C_5F_weakModalComposition * inSourcePtr) :
GALGAS_AC_5F_machineDefinition (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_weakModalComposition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_weakModalComposition GALGAS_C_5F_weakModalComposition::constructor_new (const GALGAS_AC_5F_machineDefinition & inAttribute_mLeftOperand,
                                                                                    const GALGAS_location & inAttribute_mErrorLocation,
                                                                                    const GALGAS_AC_5F_machineDefinition & inAttribute_mRightOperand
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_weakModalComposition result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_weakModalComposition (inAttribute_mLeftOperand, inAttribute_mErrorLocation, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_weakModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_weakModalComposition::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_C_5F_weakModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    result = p->mAttribute_mErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_C_5F_weakModalComposition::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_weakModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_weakModalComposition * p = (const cPtr_C_5F_weakModalComposition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_weakModalComposition) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_weakModalComposition::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @C_weakModalComposition class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_C_5F_weakModalComposition::cPtr_C_5F_weakModalComposition (const GALGAS_AC_5F_machineDefinition & in_mLeftOperand,
                                                                const GALGAS_location & in_mErrorLocation,
                                                                const GALGAS_AC_5F_machineDefinition & in_mRightOperand
                                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_machineDefinition (THERE),
mAttribute_mLeftOperand (in_mLeftOperand),
mAttribute_mErrorLocation (in_mErrorLocation),
mAttribute_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_C_5F_weakModalComposition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;
}

void cPtr_C_5F_weakModalComposition::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@C_weakModalComposition:" ;
  mAttribute_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_C_5F_weakModalComposition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_weakModalComposition (mAttribute_mLeftOperand, mAttribute_mErrorLocation, mAttribute_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @C_weakModalComposition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_weakModalComposition ("C_weakModalComposition",
                                                  & kTypeDescriptor_GALGAS_AC_5F_machineDefinition) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_C_5F_weakModalComposition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_weakModalComposition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_C_5F_weakModalComposition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_weakModalComposition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_C_5F_weakModalComposition GALGAS_C_5F_weakModalComposition::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_weakModalComposition result ;
  const GALGAS_C_5F_weakModalComposition * p = (const GALGAS_C_5F_weakModalComposition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_C_5F_weakModalComposition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("C_weakModalComposition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "sara",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "an '.sara' source file",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_sara_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("sara_main.galgas", 11)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "sara") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_sara_5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_sara_5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_sara_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
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
      routine_after (commonLexique COMMA_HERE) ;
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
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_componentsMap (),
mAttribute_machinesMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_L_5F_jobList & inOperand0,
                                                const GALGAS_M_5F_machinesMap & inOperand1) :
mAttribute_componentsMap (inOperand0),
mAttribute_machinesMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_L_5F_jobList::constructor_emptyList (HERE),
                                 GALGAS_M_5F_machinesMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_L_5F_jobList & inOperand0,
                                                                const GALGAS_M_5F_machinesMap & inOperand1 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_componentsMap.objectCompare (inOperand.mAttribute_componentsMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_machinesMap.objectCompare (inOperand.mAttribute_machinesMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_componentsMap.isValid () && mAttribute_machinesMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_componentsMap.drop () ;
  mAttribute_machinesMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_componentsMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_machinesMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList GALGAS_semanticContext::getter_componentsMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_componentsMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap GALGAS_semanticContext::getter_machinesMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_machinesMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_L_5F_translationVector_2D_element::GALGAS_L_5F_translationVector_2D_element (void) :
mAttribute_mTargetSlot () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector_2D_element::~ GALGAS_L_5F_translationVector_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector_2D_element::GALGAS_L_5F_translationVector_2D_element (const GALGAS_uint & inOperand0) :
mAttribute_mTargetSlot (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_translationVector_2D_element (GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::constructor_new (const GALGAS_uint & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_translationVector_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_translationVector_2D_element::objectCompare (const GALGAS_L_5F_translationVector_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetSlot.objectCompare (inOperand.mAttribute_mTargetSlot) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_translationVector_2D_element::isValid (void) const {
  return mAttribute_mTargetSlot.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector_2D_element::drop (void) {
  mAttribute_mTargetSlot.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_translationVector_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @L_translationVector-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetSlot.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_translationVector_2D_element::getter_mTargetSlot (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetSlot ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @L_translationVector-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ("L_translationVector-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_translationVector_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_translationVector_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_translationVector_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition_2D_element::GALGAS_L_5F_transitionDefinition_2D_element (void) :
mAttribute_mActionExpression (),
mAttribute_mEndOfExpression (),
mAttribute_mTargetStateIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition_2D_element::~ GALGAS_L_5F_transitionDefinition_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition_2D_element::GALGAS_L_5F_transitionDefinition_2D_element (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                          const GALGAS_location & inOperand1,
                                                                                          const GALGAS_uint & inOperand2) :
mAttribute_mActionExpression (inOperand0),
mAttribute_mEndOfExpression (inOperand1),
mAttribute_mTargetStateIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_transitionDefinition_2D_element::objectCompare (const GALGAS_L_5F_transitionDefinition_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActionExpression.objectCompare (inOperand.mAttribute_mActionExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfExpression.objectCompare (inOperand.mAttribute_mEndOfExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetStateIndex.objectCompare (inOperand.mAttribute_mTargetStateIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_transitionDefinition_2D_element::isValid (void) const {
  return mAttribute_mActionExpression.isValid () && mAttribute_mEndOfExpression.isValid () && mAttribute_mTargetStateIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_transitionDefinition_2D_element::drop (void) {
  mAttribute_mActionExpression.drop () ;
  mAttribute_mEndOfExpression.drop () ;
  mAttribute_mTargetStateIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_transitionDefinition_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @L_transitionDefinition-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActionExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetStateIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_transitionDefinition_2D_element::getter_mActionExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_L_5F_transitionDefinition_2D_element::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_transitionDefinition_2D_element::getter_mTargetStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @L_transitionDefinition-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ("L_transitionDefinition-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_transitionDefinition_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_transitionDefinition_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_transitionDefinition_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition_2D_element::GALGAS_L_5F_stateDefinition_2D_element (void) :
mAttribute_mStateIndex (),
mAttribute_mStateExpression (),
mAttribute_mEndOfStateExpression (),
mAttribute_mTransitionsList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition_2D_element::~ GALGAS_L_5F_stateDefinition_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_stateDefinition_2D_element::GALGAS_L_5F_stateDefinition_2D_element (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_AC_5F_boolExpression & inOperand1,
                                                                                const GALGAS_location & inOperand2,
                                                                                const GALGAS_L_5F_transitionDefinition & inOperand3) :
mAttribute_mStateIndex (inOperand0),
mAttribute_mStateExpression (inOperand1),
mAttribute_mEndOfStateExpression (inOperand2),
mAttribute_mTransitionsList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_stateDefinition_2D_element::objectCompare (const GALGAS_L_5F_stateDefinition_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStateIndex.objectCompare (inOperand.mAttribute_mStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateExpression.objectCompare (inOperand.mAttribute_mStateExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfStateExpression.objectCompare (inOperand.mAttribute_mEndOfStateExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionsList.objectCompare (inOperand.mAttribute_mTransitionsList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_stateDefinition_2D_element::isValid (void) const {
  return mAttribute_mStateIndex.isValid () && mAttribute_mStateExpression.isValid () && mAttribute_mEndOfStateExpression.isValid () && mAttribute_mTransitionsList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_stateDefinition_2D_element::drop (void) {
  mAttribute_mStateIndex.drop () ;
  mAttribute_mStateExpression.drop () ;
  mAttribute_mEndOfStateExpression.drop () ;
  mAttribute_mTransitionsList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_stateDefinition_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @L_stateDefinition-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfStateExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionsList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_stateDefinition_2D_element::getter_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_stateDefinition_2D_element::getter_mStateExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_L_5F_stateDefinition_2D_element::getter_mEndOfStateExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfStateExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_stateDefinition_2D_element::getter_mTransitionsList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionsList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @L_stateDefinition-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ("L_stateDefinition-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_stateDefinition_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_stateDefinition_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_stateDefinition_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList_2D_element::GALGAS_L_5F_statesDefinitionList_2D_element (void) :
mAttribute_mStateIndex (),
mAttribute_mStateLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList_2D_element::~ GALGAS_L_5F_statesDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList_2D_element::GALGAS_L_5F_statesDefinitionList_2D_element (const GALGAS_uint & inOperand0,
                                                                                          const GALGAS_location & inOperand1) :
mAttribute_mStateIndex (inOperand0),
mAttribute_mStateLocation (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_statesDefinitionList_2D_element (GALGAS_uint::constructor_default (HERE),
                                                      GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                          const GALGAS_location & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_statesDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_statesDefinitionList_2D_element::objectCompare (const GALGAS_L_5F_statesDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStateIndex.objectCompare (inOperand.mAttribute_mStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateLocation.objectCompare (inOperand.mAttribute_mStateLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_statesDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mStateIndex.isValid () && mAttribute_mStateLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList_2D_element::drop (void) {
  mAttribute_mStateIndex.drop () ;
  mAttribute_mStateLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_statesDefinitionList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @L_statesDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_L_5F_statesDefinitionList_2D_element::getter_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_L_5F_statesDefinitionList_2D_element::getter_mStateLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @L_statesDefinitionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ("L_statesDefinitionList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_statesDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_statesDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_statesDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes_2D_element::GALGAS_ListForModes_2D_element (void) :
mAttribute_mSourceMode (),
mAttribute_mTargetMode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes_2D_element::~ GALGAS_ListForModes_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes_2D_element::GALGAS_ListForModes_2D_element (const GALGAS_uint & inOperand0,
                                                                const GALGAS_uint & inOperand1) :
mAttribute_mSourceMode (inOperand0),
mAttribute_mTargetMode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ListForModes_2D_element (GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_uint & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ListForModes_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ListForModes_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ListForModes_2D_element::objectCompare (const GALGAS_ListForModes_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSourceMode.objectCompare (inOperand.mAttribute_mSourceMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetMode.objectCompare (inOperand.mAttribute_mTargetMode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ListForModes_2D_element::isValid (void) const {
  return mAttribute_mSourceMode.isValid () && mAttribute_mTargetMode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes_2D_element::drop (void) {
  mAttribute_mSourceMode.drop () ;
  mAttribute_mTargetMode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ListForModes_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @ListForModes-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSourceMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetMode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ListForModes_2D_element::getter_mSourceMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ListForModes_2D_element::getter_mTargetMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetMode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @ListForModes-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ListForModes_2D_element ("ListForModes-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ListForModes_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ListForModes_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ListForModes_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario_2D_element::GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) :
mAttribute_mInputValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario_2D_element::~ GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario_2D_element::GALGAS_L_5F_inputConfigurationForScenario_2D_element (const GALGAS_luint & inOperand0) :
mAttribute_mInputValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputConfigurationForScenario_2D_element (GALGAS_luint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::constructor_new (const GALGAS_luint & inOperand0 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputConfigurationForScenario_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_inputConfigurationForScenario_2D_element::objectCompare (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInputValue.objectCompare (inOperand.mAttribute_mInputValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_inputConfigurationForScenario_2D_element::isValid (void) const {
  return mAttribute_mInputValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario_2D_element::drop (void) {
  mAttribute_mInputValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputConfigurationForScenario_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @L_inputConfigurationForScenario-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInputValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_L_5F_inputConfigurationForScenario_2D_element::getter_mInputValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @L_inputConfigurationForScenario-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ("L_inputConfigurationForScenario-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_inputConfigurationForScenario_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_inputConfigurationForScenario_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputConfigurationForScenario_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario_2D_element::GALGAS_L_5F_inputScenario_2D_element (void) :
mAttribute_mInputConfiguration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario_2D_element::~ GALGAS_L_5F_inputScenario_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario_2D_element::GALGAS_L_5F_inputScenario_2D_element (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0) :
mAttribute_mInputConfiguration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputScenario_2D_element (GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::constructor_new (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputScenario_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_inputScenario_2D_element::objectCompare (const GALGAS_L_5F_inputScenario_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInputConfiguration.objectCompare (inOperand.mAttribute_mInputConfiguration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_inputScenario_2D_element::isValid (void) const {
  return mAttribute_mInputConfiguration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario_2D_element::drop (void) {
  mAttribute_mInputConfiguration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_inputScenario_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @L_inputScenario-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInputConfiguration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputScenario_2D_element::getter_mInputConfiguration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputConfiguration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @L_inputScenario-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ("L_inputScenario-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_inputScenario_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_inputScenario_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputScenario_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList_2D_element::GALGAS_L_5F_jobList_2D_element (void) :
mAttribute_mComponent () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList_2D_element::~ GALGAS_L_5F_jobList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList_2D_element::GALGAS_L_5F_jobList_2D_element (const GALGAS_AC_5F_job & inOperand0) :
mAttribute_mComponent (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_jobList_2D_element GALGAS_L_5F_jobList_2D_element::constructor_new (const GALGAS_AC_5F_job & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_jobList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_jobList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_jobList_2D_element::objectCompare (const GALGAS_L_5F_jobList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mComponent.objectCompare (inOperand.mAttribute_mComponent) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_jobList_2D_element::isValid (void) const {
  return mAttribute_mComponent.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList_2D_element::drop (void) {
  mAttribute_mComponent.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_jobList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @L_jobList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mComponent.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_job GALGAS_L_5F_jobList_2D_element::getter_mComponent (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComponent ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @L_jobList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ("L_jobList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_jobList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_jobList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_jobList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap_2D_element::GALGAS_M_5F_variablesMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap_2D_element::~ GALGAS_M_5F_variablesMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap_2D_element::GALGAS_M_5F_variablesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_variablesMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_uint & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_M_5F_variablesMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_M_5F_variablesMap_2D_element::objectCompare (const GALGAS_M_5F_variablesMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_M_5F_variablesMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_variablesMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_variablesMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @M_variablesMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_M_5F_variablesMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_variablesMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @M_variablesMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ("M_variablesMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_variablesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_variablesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_variablesMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap_2D_element::GALGAS_M_5F_stateMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap_2D_element::~ GALGAS_M_5F_stateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap_2D_element::GALGAS_M_5F_stateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_stateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uint & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_M_5F_stateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_M_5F_stateMap_2D_element::objectCompare (const GALGAS_M_5F_stateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_M_5F_stateMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_stateMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_stateMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @M_stateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_M_5F_stateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_stateMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @M_stateMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ("M_stateMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_stateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_stateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_stateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap_2D_element::GALGAS_M_5F_modesMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex (),
mAttribute_mModeDefinition () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap_2D_element::~ GALGAS_M_5F_modesMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_modesMap_2D_element::GALGAS_M_5F_modesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1,
                                                                  const GALGAS_AC_5F_machineDefinition & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1),
mAttribute_mModeDefinition (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_M_5F_modesMap_2D_element::objectCompare (const GALGAS_M_5F_modesMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModeDefinition.objectCompare (inOperand.mAttribute_mModeDefinition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_M_5F_modesMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mModeDefinition.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_modesMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
  mAttribute_mModeDefinition.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_modesMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @M_modesMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModeDefinition.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_M_5F_modesMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_modesMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_AC_5F_machineDefinition GALGAS_M_5F_modesMap_2D_element::getter_mModeDefinition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeDefinition ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @M_modesMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ("M_modesMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_modesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_modesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_modesMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList_2D_element::GALGAS_L_5F_scenarioList_2D_element (void) :
mAttribute_mScenarioTitle (),
mAttribute_mInputScenario () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList_2D_element::~ GALGAS_L_5F_scenarioList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList_2D_element::GALGAS_L_5F_scenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_L_5F_inputScenario & inOperand1) :
mAttribute_mScenarioTitle (inOperand0),
mAttribute_mInputScenario (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_scenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_L_5F_inputScenario::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_L_5F_inputScenario & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_scenarioList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_L_5F_scenarioList_2D_element::objectCompare (const GALGAS_L_5F_scenarioList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mScenarioTitle.objectCompare (inOperand.mAttribute_mScenarioTitle) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInputScenario.objectCompare (inOperand.mAttribute_mInputScenario) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_L_5F_scenarioList_2D_element::isValid (void) const {
  return mAttribute_mScenarioTitle.isValid () && mAttribute_mInputScenario.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList_2D_element::drop (void) {
  mAttribute_mScenarioTitle.drop () ;
  mAttribute_mInputScenario.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_L_5F_scenarioList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @L_scenarioList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mScenarioTitle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInputScenario.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_L_5F_scenarioList_2D_element::getter_mScenarioTitle (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mScenarioTitle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_L_5F_inputScenario GALGAS_L_5F_scenarioList_2D_element::getter_mInputScenario (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputScenario ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @L_scenarioList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ("L_scenarioList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_L_5F_scenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_L_5F_scenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_scenarioList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap_2D_element::GALGAS_M_5F_machinesMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex (),
mAttribute_mInputVariableCount (),
mAttribute_mInputAndInternalVariableCount (),
mAttribute_mVariablesMap (),
mAttribute_mNameList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap_2D_element::~ GALGAS_M_5F_machinesMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap_2D_element::GALGAS_M_5F_machinesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2,
                                                                        const GALGAS_uint & inOperand3,
                                                                        const GALGAS_M_5F_variablesMap & inOperand4,
                                                                        const GALGAS_stringlist & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1),
mAttribute_mInputVariableCount (inOperand2),
mAttribute_mInputAndInternalVariableCount (inOperand3),
mAttribute_mVariablesMap (inOperand4),
mAttribute_mNameList (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_machinesMap_2D_element GALGAS_M_5F_machinesMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_machinesMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                             GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_M_5F_machinesMap_2D_element::objectCompare (const GALGAS_M_5F_machinesMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInputVariableCount.objectCompare (inOperand.mAttribute_mInputVariableCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInputAndInternalVariableCount.objectCompare (inOperand.mAttribute_mInputAndInternalVariableCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVariablesMap.objectCompare (inOperand.mAttribute_mVariablesMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNameList.objectCompare (inOperand.mAttribute_mNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_M_5F_machinesMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mInputVariableCount.isValid () && mAttribute_mInputAndInternalVariableCount.isValid () && mAttribute_mVariablesMap.isValid () && mAttribute_mNameList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
  mAttribute_mInputVariableCount.drop () ;
  mAttribute_mInputAndInternalVariableCount.drop () ;
  mAttribute_mVariablesMap.drop () ;
  mAttribute_mNameList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_M_5F_machinesMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @M_machinesMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInputVariableCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInputAndInternalVariableCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVariablesMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNameList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_M_5F_machinesMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_machinesMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_machinesMap_2D_element::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_M_5F_machinesMap_2D_element::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputAndInternalVariableCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_M_5F_variablesMap GALGAS_M_5F_machinesMap_2D_element::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariablesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_M_5F_machinesMap_2D_element::getter_mNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @M_machinesMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ("M_machinesMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_M_5F_machinesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_M_5F_machinesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_machinesMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

