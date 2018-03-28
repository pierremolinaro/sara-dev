#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-1.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector_2D_element::GALGAS_L_5F_translationVector_2D_element (void) :
mProperty_mTargetSlot () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector_2D_element::~ GALGAS_L_5F_translationVector_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector_2D_element::GALGAS_L_5F_translationVector_2D_element (const GALGAS_uint & inOperand0) :
mProperty_mTargetSlot (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_translationVector_2D_element (GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector_2D_element GALGAS_L_5F_translationVector_2D_element::constructor_new (const GALGAS_uint & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_translationVector_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_translationVector_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_L_5F_translationVector_2D_element::objectCompare (const GALGAS_L_5F_translationVector_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetSlot.objectCompare (inOperand.mProperty_mTargetSlot) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_translationVector_2D_element::isValid (void) const {
  return mProperty_mTargetSlot.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_translationVector_2D_element::drop (void) {
  mProperty_mTargetSlot.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_translationVector_2D_element::getter_mTargetSlot (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetSlot ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @L_translationVector-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ("L_translationVector-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_translationVector_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_translationVector_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_translationVector_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_translationVector_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition_2D_element::GALGAS_L_5F_transitionDefinition_2D_element (void) :
mProperty_mActionExpression (),
mProperty_mEndOfExpression (),
mProperty_mTargetStateIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition_2D_element::~ GALGAS_L_5F_transitionDefinition_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition_2D_element::GALGAS_L_5F_transitionDefinition_2D_element (const GALGAS_AC_5F_boolExpression & inOperand0,
                                                                                          const GALGAS_location & inOperand1,
                                                                                          const GALGAS_uint & inOperand2) :
mProperty_mActionExpression (inOperand0),
mProperty_mEndOfExpression (inOperand1),
mProperty_mTargetStateIndex (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_transitionDefinition_2D_element::isValid (void) const {
  return mProperty_mActionExpression.isValid () && mProperty_mEndOfExpression.isValid () && mProperty_mTargetStateIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_transitionDefinition_2D_element::drop (void) {
  mProperty_mActionExpression.drop () ;
  mProperty_mEndOfExpression.drop () ;
  mProperty_mTargetStateIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_transitionDefinition_2D_element::getter_mActionExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_L_5F_transitionDefinition_2D_element::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_transitionDefinition_2D_element::getter_mTargetStateIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetStateIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @L_transitionDefinition-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ("L_transitionDefinition-element",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_transitionDefinition_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_transitionDefinition_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_transitionDefinition_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_transitionDefinition_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition_2D_element::GALGAS_L_5F_stateDefinition_2D_element (void) :
mProperty_mStateIndex (),
mProperty_mStateExpression (),
mProperty_mEndOfStateExpression (),
mProperty_mTransitionsList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition_2D_element::~ GALGAS_L_5F_stateDefinition_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_stateDefinition_2D_element::GALGAS_L_5F_stateDefinition_2D_element (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_AC_5F_boolExpression & inOperand1,
                                                                                const GALGAS_location & inOperand2,
                                                                                const GALGAS_L_5F_transitionDefinition & inOperand3) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateExpression (inOperand1),
mProperty_mEndOfStateExpression (inOperand2),
mProperty_mTransitionsList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_stateDefinition_2D_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateExpression.isValid () && mProperty_mEndOfStateExpression.isValid () && mProperty_mTransitionsList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_stateDefinition_2D_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateExpression.drop () ;
  mProperty_mEndOfStateExpression.drop () ;
  mProperty_mTransitionsList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_stateDefinition_2D_element::getter_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStateIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_boolExpression GALGAS_L_5F_stateDefinition_2D_element::getter_mStateExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStateExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_L_5F_stateDefinition_2D_element::getter_mEndOfStateExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfStateExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_transitionDefinition GALGAS_L_5F_stateDefinition_2D_element::getter_mTransitionsList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransitionsList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @L_stateDefinition-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ("L_stateDefinition-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_stateDefinition_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_stateDefinition_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_stateDefinition_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_stateDefinition_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList_2D_element::GALGAS_L_5F_statesDefinitionList_2D_element (void) :
mProperty_mStateIndex (),
mProperty_mStateLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList_2D_element::~ GALGAS_L_5F_statesDefinitionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList_2D_element::GALGAS_L_5F_statesDefinitionList_2D_element (const GALGAS_uint & inOperand0,
                                                                                          const GALGAS_location & inOperand1) :
mProperty_mStateIndex (inOperand0),
mProperty_mStateLocation (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_statesDefinitionList_2D_element (GALGAS_uint::constructor_default (HERE),
                                                      GALGAS_location::constructor_nowhere (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_statesDefinitionList_2D_element GALGAS_L_5F_statesDefinitionList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                          const GALGAS_location & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_statesDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_statesDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_statesDefinitionList_2D_element::isValid (void) const {
  return mProperty_mStateIndex.isValid () && mProperty_mStateLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_statesDefinitionList_2D_element::drop (void) {
  mProperty_mStateIndex.drop () ;
  mProperty_mStateLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_L_5F_statesDefinitionList_2D_element::getter_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStateIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_L_5F_statesDefinitionList_2D_element::getter_mStateLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStateLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @L_statesDefinitionList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ("L_statesDefinitionList-element",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_statesDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_statesDefinitionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_statesDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_statesDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes_2D_element::GALGAS_ListForModes_2D_element (void) :
mProperty_mSourceMode (),
mProperty_mTargetMode () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes_2D_element::~ GALGAS_ListForModes_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes_2D_element::GALGAS_ListForModes_2D_element (const GALGAS_uint & inOperand0,
                                                                const GALGAS_uint & inOperand1) :
mProperty_mSourceMode (inOperand0),
mProperty_mTargetMode (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ListForModes_2D_element (GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes_2D_element GALGAS_ListForModes_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_uint & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ListForModes_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ListForModes_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ListForModes_2D_element::isValid (void) const {
  return mProperty_mSourceMode.isValid () && mProperty_mTargetMode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ListForModes_2D_element::drop (void) {
  mProperty_mSourceMode.drop () ;
  mProperty_mTargetMode.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_ListForModes_2D_element::getter_mSourceMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_ListForModes_2D_element::getter_mTargetMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetMode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @ListForModes-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ListForModes_2D_element ("ListForModes-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ListForModes_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ListForModes_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ListForModes_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ListForModes_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario_2D_element::GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) :
mProperty_mInputValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario_2D_element::~ GALGAS_L_5F_inputConfigurationForScenario_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario_2D_element::GALGAS_L_5F_inputConfigurationForScenario_2D_element (const GALGAS_luint & inOperand0) :
mProperty_mInputValue (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputConfigurationForScenario_2D_element (GALGAS_luint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario_2D_element GALGAS_L_5F_inputConfigurationForScenario_2D_element::constructor_new (const GALGAS_luint & inOperand0 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputConfigurationForScenario_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputConfigurationForScenario_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_L_5F_inputConfigurationForScenario_2D_element::objectCompare (const GALGAS_L_5F_inputConfigurationForScenario_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInputValue.objectCompare (inOperand.mProperty_mInputValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_inputConfigurationForScenario_2D_element::isValid (void) const {
  return mProperty_mInputValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputConfigurationForScenario_2D_element::drop (void) {
  mProperty_mInputValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_L_5F_inputConfigurationForScenario_2D_element::getter_mInputValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @L_inputConfigurationForScenario-element type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ("L_inputConfigurationForScenario-element",
                                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_inputConfigurationForScenario_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputConfigurationForScenario_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_inputConfigurationForScenario_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputConfigurationForScenario_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario_2D_element::GALGAS_L_5F_inputScenario_2D_element (void) :
mProperty_mInputConfiguration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario_2D_element::~ GALGAS_L_5F_inputScenario_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario_2D_element::GALGAS_L_5F_inputScenario_2D_element (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0) :
mProperty_mInputConfiguration (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_inputScenario_2D_element (GALGAS_L_5F_inputConfigurationForScenario::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario_2D_element GALGAS_L_5F_inputScenario_2D_element::constructor_new (const GALGAS_L_5F_inputConfigurationForScenario & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_inputScenario_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_inputScenario_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_L_5F_inputScenario_2D_element::objectCompare (const GALGAS_L_5F_inputScenario_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInputConfiguration.objectCompare (inOperand.mProperty_mInputConfiguration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_inputScenario_2D_element::isValid (void) const {
  return mProperty_mInputConfiguration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_inputScenario_2D_element::drop (void) {
  mProperty_mInputConfiguration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputConfigurationForScenario GALGAS_L_5F_inputScenario_2D_element::getter_mInputConfiguration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputConfiguration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @L_inputScenario-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ("L_inputScenario-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_inputScenario_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_inputScenario_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_inputScenario_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_inputScenario_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList_2D_element::GALGAS_L_5F_jobList_2D_element (void) :
mProperty_mComponent () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList_2D_element::~ GALGAS_L_5F_jobList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList_2D_element::GALGAS_L_5F_jobList_2D_element (const GALGAS_AC_5F_job & inOperand0) :
mProperty_mComponent (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_jobList_2D_element GALGAS_L_5F_jobList_2D_element::constructor_new (const GALGAS_AC_5F_job & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_jobList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_L_5F_jobList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_L_5F_jobList_2D_element::objectCompare (const GALGAS_L_5F_jobList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mComponent.objectCompare (inOperand.mProperty_mComponent) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_jobList_2D_element::isValid (void) const {
  return mProperty_mComponent.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_jobList_2D_element::drop (void) {
  mProperty_mComponent.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_job GALGAS_L_5F_jobList_2D_element::getter_mComponent (UNUSED_LOCATION_ARGS) const {
  return mProperty_mComponent ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @L_jobList-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ("L_jobList-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_jobList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_jobList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_jobList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_jobList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_importBoolMachine::objectCompare (const GALGAS_C_5F_importBoolMachine & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importBoolMachine::GALGAS_C_5F_importBoolMachine (void) :
GALGAS_AC_5F_boolExpression () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importBoolMachine GALGAS_C_5F_importBoolMachine::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_importBoolMachine::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_L_5F_translationVector::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_importBoolMachine::GALGAS_C_5F_importBoolMachine (const cPtr_C_5F_importBoolMachine * inSourcePtr) :
GALGAS_AC_5F_boolExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_importBoolMachine) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_importBoolMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    result = p->mProperty_mIndexOfImportedMachine ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_importBoolMachine::getter_mIndexOfImportedMachine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexOfImportedMachine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_C_5F_importBoolMachine::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    result = p->mProperty_mErrorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_C_5F_importBoolMachine::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector GALGAS_C_5F_importBoolMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  GALGAS_L_5F_translationVector result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_importBoolMachine * p = (const cPtr_C_5F_importBoolMachine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_importBoolMachine) ;
    result = p->mProperty_mTranslationVector ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_translationVector cPtr_C_5F_importBoolMachine::getter_mTranslationVector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTranslationVector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @C_importBoolMachine class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_importBoolMachine::cPtr_C_5F_importBoolMachine (const GALGAS_uint & in_mIndexOfImportedMachine,
                                                          const GALGAS_location & in_mErrorLocation,
                                                          const GALGAS_L_5F_translationVector & in_mTranslationVector
                                                          COMMA_LOCATION_ARGS) :
cPtr_AC_5F_boolExpression (THERE),
mProperty_mIndexOfImportedMachine (in_mIndexOfImportedMachine),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mTranslationVector (in_mTranslationVector) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_importBoolMachine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_importBoolMachine (mProperty_mIndexOfImportedMachine, mProperty_mErrorLocation, mProperty_mTranslationVector COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @C_importBoolMachine type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_importBoolMachine ("C_importBoolMachine",
                                               & kTypeDescriptor_GALGAS_AC_5F_boolExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_importBoolMachine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_importBoolMachine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_importBoolMachine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_importBoolMachine (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineCheck::objectCompare (const GALGAS_C_5F_machineCheck & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheck::GALGAS_C_5F_machineCheck (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck::constructor_default (LOCATION_ARGS) {
  return GALGAS_C_5F_machineCheck::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheck::GALGAS_C_5F_machineCheck (const cPtr_C_5F_machineCheck * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineCheck) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineCheck GALGAS_C_5F_machineCheck::constructor_new (const GALGAS_uint & inAttribute_mMachineIndex,
                                                                    const GALGAS_bool & inAttribute_mCheckMachineIsBoolean
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_C_5F_machineCheck result ;
  if (inAttribute_mMachineIndex.isValid () && inAttribute_mCheckMachineIsBoolean.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_C_5F_machineCheck (inAttribute_mMachineIndex, inAttribute_mCheckMachineIsBoolean COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineCheck::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheck * p = (const cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineCheck::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_C_5F_machineCheck::getter_mCheckMachineIsBoolean (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineCheck * p = (const cPtr_C_5F_machineCheck *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineCheck) ;
    result = p->mProperty_mCheckMachineIsBoolean ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_C_5F_machineCheck::getter_mCheckMachineIsBoolean (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCheckMachineIsBoolean ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @C_machineCheck class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_C_5F_machineCheck::cPtr_C_5F_machineCheck (const GALGAS_uint & in_mMachineIndex,
                                                const GALGAS_bool & in_mCheckMachineIsBoolean
                                                COMMA_LOCATION_ARGS) :
cPtr_AC_5F_job (THERE),
mProperty_mMachineIndex (in_mMachineIndex),
mProperty_mCheckMachineIsBoolean (in_mCheckMachineIsBoolean) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineCheck::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineCheck (mProperty_mMachineIndex, mProperty_mCheckMachineIsBoolean COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @C_machineCheck type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineCheck ("C_machineCheck",
                                          & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineCheck::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineCheck ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineCheck::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineCheck (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineDefinedByAdditiveModalComp::objectCompare (const GALGAS_C_5F_machineDefinedByAdditiveModalComp & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDefinedByAdditiveModalComp::GALGAS_C_5F_machineDefinedByAdditiveModalComp (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDefinedByAdditiveModalComp::GALGAS_C_5F_machineDefinedByAdditiveModalComp (const cPtr_C_5F_machineDefinedByAdditiveModalComp * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_C_5F_machineDefinedByAdditiveModalComp::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    result = p->mProperty_mMachineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_C_5F_machineDefinedByAdditiveModalComp::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDefinedByAdditiveModalComp::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDefinedByAdditiveModalComp::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDefinedByAdditiveModalComp::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    result = p->mProperty_mInputVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDefinedByAdditiveModalComp::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDefinedByAdditiveModalComp::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    result = p->mProperty_mInputAndInternalVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDefinedByAdditiveModalComp::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputAndInternalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_C_5F_machineDefinedByAdditiveModalComp::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    result = p->mProperty_mVariablesMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap cPtr_C_5F_machineDefinedByAdditiveModalComp::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariablesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_C_5F_machineDefinedByAdditiveModalComp::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    result = p->mProperty_mModeMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap cPtr_C_5F_machineDefinedByAdditiveModalComp::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_C_5F_machineDefinedByAdditiveModalComp::getter_mInclusionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedByAdditiveModalComp * p = (const cPtr_C_5F_machineDefinedByAdditiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedByAdditiveModalComp) ;
    result = p->mProperty_mInclusionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes cPtr_C_5F_machineDefinedByAdditiveModalComp::getter_mInclusionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInclusionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @C_machineDefinedByAdditiveModalComp class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineDefinedByAdditiveModalComp::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedByAdditiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mInclusionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @C_machineDefinedByAdditiveModalComp type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ("C_machineDefinedByAdditiveModalComp",
                                                               & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedByAdditiveModalComp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedByAdditiveModalComp ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineDefinedByAdditiveModalComp::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedByAdditiveModalComp (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineDefinedBySubstractiveModalComp::objectCompare (const GALGAS_C_5F_machineDefinedBySubstractiveModalComp & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDefinedBySubstractiveModalComp::GALGAS_C_5F_machineDefinedBySubstractiveModalComp (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineDefinedBySubstractiveModalComp::GALGAS_C_5F_machineDefinedBySubstractiveModalComp (const cPtr_C_5F_machineDefinedBySubstractiveModalComp * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_C_5F_machineDefinedBySubstractiveModalComp::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    result = p->mProperty_mMachineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_C_5F_machineDefinedBySubstractiveModalComp::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDefinedBySubstractiveModalComp::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDefinedBySubstractiveModalComp::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDefinedBySubstractiveModalComp::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    result = p->mProperty_mInputVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDefinedBySubstractiveModalComp::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineDefinedBySubstractiveModalComp::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    result = p->mProperty_mInputAndInternalVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineDefinedBySubstractiveModalComp::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputAndInternalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_C_5F_machineDefinedBySubstractiveModalComp::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    result = p->mProperty_mVariablesMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap cPtr_C_5F_machineDefinedBySubstractiveModalComp::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariablesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap GALGAS_C_5F_machineDefinedBySubstractiveModalComp::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_modesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    result = p->mProperty_mModeMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap cPtr_C_5F_machineDefinedBySubstractiveModalComp::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes GALGAS_C_5F_machineDefinedBySubstractiveModalComp::getter_mExclusionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ListForModes result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineDefinedBySubstractiveModalComp * p = (const cPtr_C_5F_machineDefinedBySubstractiveModalComp *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineDefinedBySubstractiveModalComp) ;
    result = p->mProperty_mExclusionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ListForModes cPtr_C_5F_machineDefinedBySubstractiveModalComp::getter_mExclusionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExclusionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          Pointer class for @C_machineDefinedBySubstractiveModalComp class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineDefinedBySubstractiveModalComp::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineDefinedBySubstractiveModalComp (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mModeMap, mProperty_mExclusionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @C_machineDefinedBySubstractiveModalComp type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ("C_machineDefinedBySubstractiveModalComp",
                                                                   & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineDefinedBySubstractiveModalComp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineDefinedBySubstractiveModalComp ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineDefinedBySubstractiveModalComp::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineDefinedBySubstractiveModalComp (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
// At index 8 : <component>, in file 'sara_parser.ggs', line 46
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 13 : <component>, in file 'sara_parser.ggs', line 67
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_first) // $first$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 19 : <component>, in file 'sara_parser.ggs', line 89
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_state) // $state$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_display) // $display$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 25 : <component>, in file 'sara_parser.ggs', line 111
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_check) // $check$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 29 : <component>, in file 'sara_parser.ggs', line 131
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkidentical) // $checkidentical$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 35 : <component>, in file 'sara_parser.ggs', line 157
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_checkbool) // $checkbool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_machineIdf) // $machineIdf$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 39 : <component>, in file 'sara_parser.ggs', line 177
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and) // $use_and$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 42 : <component>, in file 'sara_parser.ggs', line 187
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_ite) // $use_ite$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 45 : <component>, in file 'sara_parser.ggs', line 197
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite) // $use_and_ite$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 48 : <component>, in file 'sara_parser.ggs', line 207
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_and_5F_cache) // $and_cache$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 52 : <component>, in file 'sara_parser.ggs', line 218
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_ite_5F_cache) // $ite_cache$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 56 : <component>, in file 'sara_parser.ggs', line 230
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_map) // $map$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 60 : <component>, in file 'sara_parser.ggs', line 242
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bdd) // $bdd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 63 : <component>, in file 'sara_parser.ggs', line 252
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
// At index 79 : <component>, in file 'sara_parser.ggs', line 321
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
// At index 96 : <component>, in file 'sara_parser.ggs', line 396
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
// At index 113 : <component>, in file 'sara_parser.ggs', line 469
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
// At index 136 : <io_bool_expression>, in file 'sara_parser.ggs', line 573
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 139 : <io_and_expression>, in file 'sara_parser.ggs', line 604
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 142 : <io_primary>, in file 'sara_parser.ggs', line 620
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 146 : <io_primary>, in file 'sara_parser.ggs', line 631
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 148 : <io_primary>, in file 'sara_parser.ggs', line 644
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (4) // <io_primary>
, END_PRODUCTION
// At index 151 : <io_primary>, in file 'sara_parser.ggs', line 656
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 153 : <io_primary>, in file 'sara_parser.ggs', line 666
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 155 : <io_primary>, in file 'sara_parser.ggs', line 676
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
// At index 168 : <definition_expression>, in file 'sara_parser.ggs', line 753
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 171 : <definition_expression_term>, in file 'sara_parser.ggs', line 770
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 174 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 801
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 181 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 841
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 188 : <definition_expression_factor>, in file 'sara_parser.ggs', line 881
, NONTERMINAL (43) // <select_sara_5F_parser_32>
, END_PRODUCTION
// At index 190 : <definition_expression_factor>, in file 'sara_parser.ggs', line 995
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
// At index 203 : <explicit_automaton>, in file 'sara_parser.ggs', line 1069
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
// At index 223 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, END_PRODUCTION
// At index 224 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
, NONTERMINAL (1) // <component>
, NONTERMINAL (11) // <select_sara_5F_parser_0>
, END_PRODUCTION
// At index 227 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
, END_PRODUCTION
// At index 228 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_sara_5F_parser_1>
, END_PRODUCTION
// At index 232 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
, END_PRODUCTION
// At index 233 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 236 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
, END_PRODUCTION
// At index 237 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (14) // <select_sara_5F_parser_3>
, END_PRODUCTION
// At index 241 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
, END_PRODUCTION
// At index 242 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <select_sara_5F_parser_4>
, END_PRODUCTION
// At index 246 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
, END_PRODUCTION
// At index 247 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (16) // <select_sara_5F_parser_5>
, END_PRODUCTION
// At index 251 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
, END_PRODUCTION
// At index 252 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 255 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
, END_PRODUCTION
// At index 256 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (18) // <select_sara_5F_parser_7>
, END_PRODUCTION
// At index 260 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
, END_PRODUCTION
// At index 261 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (19) // <select_sara_5F_parser_8>
, END_PRODUCTION
// At index 265 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
, END_PRODUCTION
// At index 266 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (20) // <select_sara_5F_parser_9>
, END_PRODUCTION
// At index 270 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
, END_PRODUCTION
// At index 271 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 274 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
, END_PRODUCTION
// At index 275 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (22) // <select_sara_5F_parser_11>
, END_PRODUCTION
// At index 279 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
, END_PRODUCTION
// At index 280 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (23) // <select_sara_5F_parser_12>
, END_PRODUCTION
// At index 284 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
, END_PRODUCTION
// At index 285 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (24) // <select_sara_5F_parser_13>
, END_PRODUCTION
// At index 289 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
, END_PRODUCTION
// At index 290 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 293 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
, END_PRODUCTION
// At index 294 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (26) // <select_sara_5F_parser_15>
, END_PRODUCTION
// At index 298 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
, END_PRODUCTION
// At index 299 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (27) // <select_sara_5F_parser_16>
, END_PRODUCTION
// At index 303 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
, END_PRODUCTION
// At index 304 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_string) // $literal_string$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (28) // <select_sara_5F_parser_17>
, END_PRODUCTION
// At index 312 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
, END_PRODUCTION
// At index 313 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, NONTERMINAL (29) // <select_sara_5F_parser_18>
, END_PRODUCTION
// At index 318 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
, END_PRODUCTION
// At index 319 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_literal_5F_integer) // $literal_integer$
, NONTERMINAL (30) // <select_sara_5F_parser_19>
, END_PRODUCTION
// At index 323 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, END_PRODUCTION
// At index 324 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 328 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 332 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2D__3E_) // $->$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 336 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3D_) // $=$
, NONTERMINAL (3) // <io_and_expression>
, NONTERMINAL (31) // <select_sara_5F_parser_20>
, END_PRODUCTION
// At index 340 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
, END_PRODUCTION
// At index 341 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (4) // <io_primary>
, NONTERMINAL (32) // <select_sara_5F_parser_21>
, END_PRODUCTION
// At index 345 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
, END_PRODUCTION
// At index 346 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (33) // <select_sara_5F_parser_22>
, END_PRODUCTION
// At index 350 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
, END_PRODUCTION
// At index 351 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 354 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
, END_PRODUCTION
// At index 355 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (35) // <select_sara_5F_parser_24>
, END_PRODUCTION
// At index 359 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
, END_PRODUCTION
// At index 360 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (36) // <select_sara_5F_parser_25>
, END_PRODUCTION
// At index 364 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
, END_PRODUCTION
// At index 365 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (6) // <definition_expression_term>
, NONTERMINAL (37) // <select_sara_5F_parser_26>
, END_PRODUCTION
// At index 369 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, END_PRODUCTION
// At index 370 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 374 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2A__2A_) // $**$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 378 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7C__7C_) // $||$
, NONTERMINAL (9) // <definition_expression_factor>
, NONTERMINAL (38) // <select_sara_5F_parser_27>
, END_PRODUCTION
// At index 382 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
, END_PRODUCTION
// At index 383 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (39) // <select_sara_5F_parser_28>
, END_PRODUCTION
// At index 389 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
, END_PRODUCTION
// At index 390 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_include) // $include$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (40) // <select_sara_5F_parser_29>
, END_PRODUCTION
// At index 397 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
, END_PRODUCTION
// At index 398 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (41) // <select_sara_5F_parser_30>
, END_PRODUCTION
// At index 404 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
, END_PRODUCTION
// At index 405 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_exclude) // $exclude$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (42) // <select_sara_5F_parser_31>
, END_PRODUCTION
// At index 412 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, NONTERMINAL (10) // <explicit_automaton>
, END_PRODUCTION
// At index 414 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 418 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3F_) // $?$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 425 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__21_) // $!$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 432 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_bool) // $bool$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 437 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__40_) // $@$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 440 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (9) // <definition_expression_factor>
, END_PRODUCTION
// At index 443 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nofirst) // $nofirst$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 448 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_nolast) // $nolast$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__28_) // $($
, NONTERMINAL (5) // <definition_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 453 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompadd) // $modalcompadd$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (7) // <modalcompadd_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 458 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_modalcompsub) // $modalcompsub$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (8) // <modalcompsub_definition>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 463 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_trans) // $trans$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_to) // $to$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 470 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
, END_PRODUCTION
// At index 471 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (44) // <select_sara_5F_parser_33>
, END_PRODUCTION
// At index 475 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
, END_PRODUCTION
// At index 476 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_sara_5F_parser_34>
, END_PRODUCTION
// At index 480 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
, END_PRODUCTION
// At index 481 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (46) // <select_sara_5F_parser_35>
, END_PRODUCTION
// At index 485 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
, END_PRODUCTION
// At index 486 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 489 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
, END_PRODUCTION
// At index 490 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_sara_5F_parser_37>
, END_PRODUCTION
// At index 494 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
, END_PRODUCTION
// At index 495 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (49) // <select_sara_5F_parser_38>
, END_PRODUCTION
// At index 499 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
, END_PRODUCTION
// At index 500 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (50) // <select_sara_5F_parser_39>
, END_PRODUCTION
// At index 504 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
, END_PRODUCTION
// At index 505 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (51) // <select_sara_5F_parser_40>
, END_PRODUCTION
// At index 509 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
, END_PRODUCTION
// At index 510 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_last) // $last$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, END_PRODUCTION
// At index 515 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
, END_PRODUCTION
// At index 516 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (53) // <select_sara_5F_parser_42>
, END_PRODUCTION
// At index 520 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
, END_PRODUCTION
// At index 521 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7B_) // ${$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__7D_) // $}$
, NONTERMINAL (54) // <select_sara_5F_parser_43>
, END_PRODUCTION
// At index 529 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
, END_PRODUCTION
// At index 530 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
, NONTERMINAL (2) // <io_bool_expression>
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_goto) // $goto$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_sara_5F_scanner::kToken__3B_) // $;$
, NONTERMINAL (55) // <select_sara_5F_parser_44>
, END_PRODUCTION
// At index 536 : <>, in file '.ggs', line 0
, NONTERMINAL (0) // <start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_sara_grammar [140] = {
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
 {"<component>", "sara_parser", 45}, // at index 10
 {"<component>", "sara_parser", 48}, // at index 11
 {"<component>", "sara_parser", 52}, // at index 12
 {"<component>", "sara_parser", 56}, // at index 13
 {"<component>", "sara_parser", 60}, // at index 14
 {"<component>", "sara_parser", 63}, // at index 15
 {"<component>", "sara_parser", 79}, // at index 16
 {"<component>", "sara_parser", 96}, // at index 17
 {"<component>", "sara_parser", 113}, // at index 18
 {"<io_bool_expression>", "sara_parser", 136}, // at index 19
 {"<io_and_expression>", "sara_parser", 139}, // at index 20
 {"<io_primary>", "sara_parser", 142}, // at index 21
 {"<io_primary>", "sara_parser", 146}, // at index 22
 {"<io_primary>", "sara_parser", 148}, // at index 23
 {"<io_primary>", "sara_parser", 151}, // at index 24
 {"<io_primary>", "sara_parser", 153}, // at index 25
 {"<io_primary>", "sara_parser", 155}, // at index 26
 {"<definition_expression>", "sara_parser", 168}, // at index 27
 {"<definition_expression_term>", "sara_parser", 171}, // at index 28
 {"<modalcompadd_definition>", "sara_parser", 174}, // at index 29
 {"<modalcompsub_definition>", "sara_parser", 181}, // at index 30
 {"<definition_expression_factor>", "sara_parser", 188}, // at index 31
 {"<definition_expression_factor>", "sara_parser", 190}, // at index 32
 {"<explicit_automaton>", "sara_parser", 203}, // at index 33
 {"<select_sara_5F_parser_0>", "sara_parser", 223}, // at index 34
 {"<select_sara_5F_parser_0>", "sara_parser", 224}, // at index 35
 {"<select_sara_5F_parser_1>", "sara_parser", 227}, // at index 36
 {"<select_sara_5F_parser_1>", "sara_parser", 228}, // at index 37
 {"<select_sara_5F_parser_2>", "sara_parser", 232}, // at index 38
 {"<select_sara_5F_parser_2>", "sara_parser", 233}, // at index 39
 {"<select_sara_5F_parser_3>", "sara_parser", 236}, // at index 40
 {"<select_sara_5F_parser_3>", "sara_parser", 237}, // at index 41
 {"<select_sara_5F_parser_4>", "sara_parser", 241}, // at index 42
 {"<select_sara_5F_parser_4>", "sara_parser", 242}, // at index 43
 {"<select_sara_5F_parser_5>", "sara_parser", 246}, // at index 44
 {"<select_sara_5F_parser_5>", "sara_parser", 247}, // at index 45
 {"<select_sara_5F_parser_6>", "sara_parser", 251}, // at index 46
 {"<select_sara_5F_parser_6>", "sara_parser", 252}, // at index 47
 {"<select_sara_5F_parser_7>", "sara_parser", 255}, // at index 48
 {"<select_sara_5F_parser_7>", "sara_parser", 256}, // at index 49
 {"<select_sara_5F_parser_8>", "sara_parser", 260}, // at index 50
 {"<select_sara_5F_parser_8>", "sara_parser", 261}, // at index 51
 {"<select_sara_5F_parser_9>", "sara_parser", 265}, // at index 52
 {"<select_sara_5F_parser_9>", "sara_parser", 266}, // at index 53
 {"<select_sara_5F_parser_10>", "sara_parser", 270}, // at index 54
 {"<select_sara_5F_parser_10>", "sara_parser", 271}, // at index 55
 {"<select_sara_5F_parser_11>", "sara_parser", 274}, // at index 56
 {"<select_sara_5F_parser_11>", "sara_parser", 275}, // at index 57
 {"<select_sara_5F_parser_12>", "sara_parser", 279}, // at index 58
 {"<select_sara_5F_parser_12>", "sara_parser", 280}, // at index 59
 {"<select_sara_5F_parser_13>", "sara_parser", 284}, // at index 60
 {"<select_sara_5F_parser_13>", "sara_parser", 285}, // at index 61
 {"<select_sara_5F_parser_14>", "sara_parser", 289}, // at index 62
 {"<select_sara_5F_parser_14>", "sara_parser", 290}, // at index 63
 {"<select_sara_5F_parser_15>", "sara_parser", 293}, // at index 64
 {"<select_sara_5F_parser_15>", "sara_parser", 294}, // at index 65
 {"<select_sara_5F_parser_16>", "sara_parser", 298}, // at index 66
 {"<select_sara_5F_parser_16>", "sara_parser", 299}, // at index 67
 {"<select_sara_5F_parser_17>", "sara_parser", 303}, // at index 68
 {"<select_sara_5F_parser_17>", "sara_parser", 304}, // at index 69
 {"<select_sara_5F_parser_18>", "sara_parser", 312}, // at index 70
 {"<select_sara_5F_parser_18>", "sara_parser", 313}, // at index 71
 {"<select_sara_5F_parser_19>", "sara_parser", 318}, // at index 72
 {"<select_sara_5F_parser_19>", "sara_parser", 319}, // at index 73
 {"<select_sara_5F_parser_20>", "sara_parser", 323}, // at index 74
 {"<select_sara_5F_parser_20>", "sara_parser", 324}, // at index 75
 {"<select_sara_5F_parser_20>", "sara_parser", 328}, // at index 76
 {"<select_sara_5F_parser_20>", "sara_parser", 332}, // at index 77
 {"<select_sara_5F_parser_20>", "sara_parser", 336}, // at index 78
 {"<select_sara_5F_parser_21>", "sara_parser", 340}, // at index 79
 {"<select_sara_5F_parser_21>", "sara_parser", 341}, // at index 80
 {"<select_sara_5F_parser_22>", "sara_parser", 345}, // at index 81
 {"<select_sara_5F_parser_22>", "sara_parser", 346}, // at index 82
 {"<select_sara_5F_parser_23>", "sara_parser", 350}, // at index 83
 {"<select_sara_5F_parser_23>", "sara_parser", 351}, // at index 84
 {"<select_sara_5F_parser_24>", "sara_parser", 354}, // at index 85
 {"<select_sara_5F_parser_24>", "sara_parser", 355}, // at index 86
 {"<select_sara_5F_parser_25>", "sara_parser", 359}, // at index 87
 {"<select_sara_5F_parser_25>", "sara_parser", 360}, // at index 88
 {"<select_sara_5F_parser_26>", "sara_parser", 364}, // at index 89
 {"<select_sara_5F_parser_26>", "sara_parser", 365}, // at index 90
 {"<select_sara_5F_parser_27>", "sara_parser", 369}, // at index 91
 {"<select_sara_5F_parser_27>", "sara_parser", 370}, // at index 92
 {"<select_sara_5F_parser_27>", "sara_parser", 374}, // at index 93
 {"<select_sara_5F_parser_27>", "sara_parser", 378}, // at index 94
 {"<select_sara_5F_parser_28>", "sara_parser", 382}, // at index 95
 {"<select_sara_5F_parser_28>", "sara_parser", 383}, // at index 96
 {"<select_sara_5F_parser_29>", "sara_parser", 389}, // at index 97
 {"<select_sara_5F_parser_29>", "sara_parser", 390}, // at index 98
 {"<select_sara_5F_parser_30>", "sara_parser", 397}, // at index 99
 {"<select_sara_5F_parser_30>", "sara_parser", 398}, // at index 100
 {"<select_sara_5F_parser_31>", "sara_parser", 404}, // at index 101
 {"<select_sara_5F_parser_31>", "sara_parser", 405}, // at index 102
 {"<select_sara_5F_parser_32>", "sara_parser", 412}, // at index 103
 {"<select_sara_5F_parser_32>", "sara_parser", 414}, // at index 104
 {"<select_sara_5F_parser_32>", "sara_parser", 418}, // at index 105
 {"<select_sara_5F_parser_32>", "sara_parser", 425}, // at index 106
 {"<select_sara_5F_parser_32>", "sara_parser", 432}, // at index 107
 {"<select_sara_5F_parser_32>", "sara_parser", 437}, // at index 108
 {"<select_sara_5F_parser_32>", "sara_parser", 440}, // at index 109
 {"<select_sara_5F_parser_32>", "sara_parser", 443}, // at index 110
 {"<select_sara_5F_parser_32>", "sara_parser", 448}, // at index 111
 {"<select_sara_5F_parser_32>", "sara_parser", 453}, // at index 112
 {"<select_sara_5F_parser_32>", "sara_parser", 458}, // at index 113
 {"<select_sara_5F_parser_32>", "sara_parser", 463}, // at index 114
 {"<select_sara_5F_parser_33>", "sara_parser", 470}, // at index 115
 {"<select_sara_5F_parser_33>", "sara_parser", 471}, // at index 116
 {"<select_sara_5F_parser_34>", "sara_parser", 475}, // at index 117
 {"<select_sara_5F_parser_34>", "sara_parser", 476}, // at index 118
 {"<select_sara_5F_parser_35>", "sara_parser", 480}, // at index 119
 {"<select_sara_5F_parser_35>", "sara_parser", 481}, // at index 120
 {"<select_sara_5F_parser_36>", "sara_parser", 485}, // at index 121
 {"<select_sara_5F_parser_36>", "sara_parser", 486}, // at index 122
 {"<select_sara_5F_parser_37>", "sara_parser", 489}, // at index 123
 {"<select_sara_5F_parser_37>", "sara_parser", 490}, // at index 124
 {"<select_sara_5F_parser_38>", "sara_parser", 494}, // at index 125
 {"<select_sara_5F_parser_38>", "sara_parser", 495}, // at index 126
 {"<select_sara_5F_parser_39>", "sara_parser", 499}, // at index 127
 {"<select_sara_5F_parser_39>", "sara_parser", 500}, // at index 128
 {"<select_sara_5F_parser_40>", "sara_parser", 504}, // at index 129
 {"<select_sara_5F_parser_40>", "sara_parser", 505}, // at index 130
 {"<select_sara_5F_parser_41>", "sara_parser", 509}, // at index 131
 {"<select_sara_5F_parser_41>", "sara_parser", 510}, // at index 132
 {"<select_sara_5F_parser_42>", "sara_parser", 515}, // at index 133
 {"<select_sara_5F_parser_42>", "sara_parser", 516}, // at index 134
 {"<select_sara_5F_parser_43>", "sara_parser", 520}, // at index 135
 {"<select_sara_5F_parser_43>", "sara_parser", 521}, // at index 136
 {"<select_sara_5F_parser_44>", "sara_parser", 529}, // at index 137
 {"<select_sara_5F_parser_44>", "sara_parser", 530}, // at index 138
 {"<>", "", 536} // at index 139
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_sara_grammar [140] = {
0, // index 0 : <start_symbol>, in file 'sara_parser.ggs', line 11
3, // index 1 : <component>, in file 'sara_parser.ggs', line 25
8, // index 2 : <component>, in file 'sara_parser.ggs', line 46
13, // index 3 : <component>, in file 'sara_parser.ggs', line 67
19, // index 4 : <component>, in file 'sara_parser.ggs', line 89
25, // index 5 : <component>, in file 'sara_parser.ggs', line 111
29, // index 6 : <component>, in file 'sara_parser.ggs', line 131
35, // index 7 : <component>, in file 'sara_parser.ggs', line 157
39, // index 8 : <component>, in file 'sara_parser.ggs', line 177
42, // index 9 : <component>, in file 'sara_parser.ggs', line 187
45, // index 10 : <component>, in file 'sara_parser.ggs', line 197
48, // index 11 : <component>, in file 'sara_parser.ggs', line 207
52, // index 12 : <component>, in file 'sara_parser.ggs', line 218
56, // index 13 : <component>, in file 'sara_parser.ggs', line 230
60, // index 14 : <component>, in file 'sara_parser.ggs', line 242
63, // index 15 : <component>, in file 'sara_parser.ggs', line 252
79, // index 16 : <component>, in file 'sara_parser.ggs', line 321
96, // index 17 : <component>, in file 'sara_parser.ggs', line 396
113, // index 18 : <component>, in file 'sara_parser.ggs', line 469
136, // index 19 : <io_bool_expression>, in file 'sara_parser.ggs', line 573
139, // index 20 : <io_and_expression>, in file 'sara_parser.ggs', line 604
142, // index 21 : <io_primary>, in file 'sara_parser.ggs', line 620
146, // index 22 : <io_primary>, in file 'sara_parser.ggs', line 631
148, // index 23 : <io_primary>, in file 'sara_parser.ggs', line 644
151, // index 24 : <io_primary>, in file 'sara_parser.ggs', line 656
153, // index 25 : <io_primary>, in file 'sara_parser.ggs', line 666
155, // index 26 : <io_primary>, in file 'sara_parser.ggs', line 676
168, // index 27 : <definition_expression>, in file 'sara_parser.ggs', line 753
171, // index 28 : <definition_expression_term>, in file 'sara_parser.ggs', line 770
174, // index 29 : <modalcompadd_definition>, in file 'sara_parser.ggs', line 801
181, // index 30 : <modalcompsub_definition>, in file 'sara_parser.ggs', line 841
188, // index 31 : <definition_expression_factor>, in file 'sara_parser.ggs', line 881
190, // index 32 : <definition_expression_factor>, in file 'sara_parser.ggs', line 995
203, // index 33 : <explicit_automaton>, in file 'sara_parser.ggs', line 1069
223, // index 34 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
224, // index 35 : <select_sara_5F_parser_0>, in file 'sara_parser.ggs', line 16
227, // index 36 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
228, // index 37 : <select_sara_5F_parser_1>, in file 'sara_parser.ggs', line 263
232, // index 38 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
233, // index 39 : <select_sara_5F_parser_2>, in file 'sara_parser.ggs', line 275
236, // index 40 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
237, // index 41 : <select_sara_5F_parser_3>, in file 'sara_parser.ggs', line 277
241, // index 42 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
242, // index 43 : <select_sara_5F_parser_4>, in file 'sara_parser.ggs', line 290
246, // index 44 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
247, // index 45 : <select_sara_5F_parser_5>, in file 'sara_parser.ggs', line 333
251, // index 46 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
252, // index 47 : <select_sara_5F_parser_6>, in file 'sara_parser.ggs', line 345
255, // index 48 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
256, // index 49 : <select_sara_5F_parser_7>, in file 'sara_parser.ggs', line 347
260, // index 50 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
261, // index 51 : <select_sara_5F_parser_8>, in file 'sara_parser.ggs', line 360
265, // index 52 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
266, // index 53 : <select_sara_5F_parser_9>, in file 'sara_parser.ggs', line 408
270, // index 54 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
271, // index 55 : <select_sara_5F_parser_10>, in file 'sara_parser.ggs', line 420
274, // index 56 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
275, // index 57 : <select_sara_5F_parser_11>, in file 'sara_parser.ggs', line 422
279, // index 58 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
280, // index 59 : <select_sara_5F_parser_12>, in file 'sara_parser.ggs', line 435
284, // index 60 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
285, // index 61 : <select_sara_5F_parser_13>, in file 'sara_parser.ggs', line 486
289, // index 62 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
290, // index 63 : <select_sara_5F_parser_14>, in file 'sara_parser.ggs', line 502
293, // index 64 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
294, // index 65 : <select_sara_5F_parser_15>, in file 'sara_parser.ggs', line 504
298, // index 66 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
299, // index 67 : <select_sara_5F_parser_16>, in file 'sara_parser.ggs', line 521
303, // index 68 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
304, // index 69 : <select_sara_5F_parser_17>, in file 'sara_parser.ggs', line 538
312, // index 70 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
313, // index 71 : <select_sara_5F_parser_18>, in file 'sara_parser.ggs', line 542
318, // index 72 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
319, // index 73 : <select_sara_5F_parser_19>, in file 'sara_parser.ggs', line 545
323, // index 74 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
324, // index 75 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
328, // index 76 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
332, // index 77 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
336, // index 78 : <select_sara_5F_parser_20>, in file 'sara_parser.ggs', line 578
340, // index 79 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
341, // index 80 : <select_sara_5F_parser_21>, in file 'sara_parser.ggs', line 609
345, // index 81 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
346, // index 82 : <select_sara_5F_parser_22>, in file 'sara_parser.ggs', line 690
350, // index 83 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
351, // index 84 : <select_sara_5F_parser_23>, in file 'sara_parser.ggs', line 707
354, // index 85 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
355, // index 86 : <select_sara_5F_parser_24>, in file 'sara_parser.ggs', line 709
359, // index 87 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
360, // index 88 : <select_sara_5F_parser_25>, in file 'sara_parser.ggs', line 727
364, // index 89 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
365, // index 90 : <select_sara_5F_parser_26>, in file 'sara_parser.ggs', line 758
369, // index 91 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
370, // index 92 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
374, // index 93 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
378, // index 94 : <select_sara_5F_parser_27>, in file 'sara_parser.ggs', line 775
382, // index 95 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
383, // index 96 : <select_sara_5F_parser_28>, in file 'sara_parser.ggs', line 808
389, // index 97 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
390, // index 98 : <select_sara_5F_parser_29>, in file 'sara_parser.ggs', line 818
397, // index 99 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
398, // index 100 : <select_sara_5F_parser_30>, in file 'sara_parser.ggs', line 848
404, // index 101 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
405, // index 102 : <select_sara_5F_parser_31>, in file 'sara_parser.ggs', line 858
412, // index 103 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
414, // index 104 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
418, // index 105 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
425, // index 106 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
432, // index 107 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
437, // index 108 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
440, // index 109 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
443, // index 110 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
448, // index 111 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
453, // index 112 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
458, // index 113 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
463, // index 114 : <select_sara_5F_parser_32>, in file 'sara_parser.ggs', line 885
470, // index 115 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
471, // index 116 : <select_sara_5F_parser_33>, in file 'sara_parser.ggs', line 895
475, // index 117 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
476, // index 118 : <select_sara_5F_parser_34>, in file 'sara_parser.ggs', line 912
480, // index 119 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
481, // index 120 : <select_sara_5F_parser_35>, in file 'sara_parser.ggs', line 1009
485, // index 121 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
486, // index 122 : <select_sara_5F_parser_36>, in file 'sara_parser.ggs', line 1026
489, // index 123 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
490, // index 124 : <select_sara_5F_parser_37>, in file 'sara_parser.ggs', line 1028
494, // index 125 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
495, // index 126 : <select_sara_5F_parser_38>, in file 'sara_parser.ggs', line 1046
499, // index 127 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
500, // index 128 : <select_sara_5F_parser_39>, in file 'sara_parser.ggs', line 1079
504, // index 129 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
505, // index 130 : <select_sara_5F_parser_40>, in file 'sara_parser.ggs', line 1090
509, // index 131 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
510, // index 132 : <select_sara_5F_parser_41>, in file 'sara_parser.ggs', line 1102
515, // index 133 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
516, // index 134 : <select_sara_5F_parser_42>, in file 'sara_parser.ggs', line 1105
520, // index 135 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
521, // index 136 : <select_sara_5F_parser_43>, in file 'sara_parser.ggs', line 1118
529, // index 137 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
530, // index 138 : <select_sara_5F_parser_44>, in file 'sara_parser.ggs', line 1133
536 // index 139 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_sara_grammar [58] = {
0, // at 0 : <start_symbol>
1, // at 1 : <component>
19, // at 2 : <io_bool_expression>
20, // at 3 : <io_and_expression>
21, // at 4 : <io_primary>
27, // at 5 : <definition_expression>
28, // at 6 : <definition_expression_term>
29, // at 7 : <modalcompadd_definition>
30, // at 8 : <modalcompsub_definition>
31, // at 9 : <definition_expression_factor>
33, // at 10 : <explicit_automaton>
34, // at 11 : <select_sara_5F_parser_0>
36, // at 12 : <select_sara_5F_parser_1>
38, // at 13 : <select_sara_5F_parser_2>
40, // at 14 : <select_sara_5F_parser_3>
42, // at 15 : <select_sara_5F_parser_4>
44, // at 16 : <select_sara_5F_parser_5>
46, // at 17 : <select_sara_5F_parser_6>
48, // at 18 : <select_sara_5F_parser_7>
50, // at 19 : <select_sara_5F_parser_8>
52, // at 20 : <select_sara_5F_parser_9>
54, // at 21 : <select_sara_5F_parser_10>
56, // at 22 : <select_sara_5F_parser_11>
58, // at 23 : <select_sara_5F_parser_12>
60, // at 24 : <select_sara_5F_parser_13>
62, // at 25 : <select_sara_5F_parser_14>
64, // at 26 : <select_sara_5F_parser_15>
66, // at 27 : <select_sara_5F_parser_16>
68, // at 28 : <select_sara_5F_parser_17>
70, // at 29 : <select_sara_5F_parser_18>
72, // at 30 : <select_sara_5F_parser_19>
74, // at 31 : <select_sara_5F_parser_20>
79, // at 32 : <select_sara_5F_parser_21>
81, // at 33 : <select_sara_5F_parser_22>
83, // at 34 : <select_sara_5F_parser_23>
85, // at 35 : <select_sara_5F_parser_24>
87, // at 36 : <select_sara_5F_parser_25>
89, // at 37 : <select_sara_5F_parser_26>
91, // at 38 : <select_sara_5F_parser_27>
95, // at 39 : <select_sara_5F_parser_28>
97, // at 40 : <select_sara_5F_parser_29>
99, // at 41 : <select_sara_5F_parser_30>
101, // at 42 : <select_sara_5F_parser_31>
103, // at 43 : <select_sara_5F_parser_32>
115, // at 44 : <select_sara_5F_parser_33>
117, // at 45 : <select_sara_5F_parser_34>
119, // at 46 : <select_sara_5F_parser_35>
121, // at 47 : <select_sara_5F_parser_36>
123, // at 48 : <select_sara_5F_parser_37>
125, // at 49 : <select_sara_5F_parser_38>
127, // at 50 : <select_sara_5F_parser_39>
129, // at 51 : <select_sara_5F_parser_40>
131, // at 52 : <select_sara_5F_parser_41>
133, // at 53 : <select_sara_5F_parser_42>
135, // at 54 : <select_sara_5F_parser_43>
137, // at 55 : <select_sara_5F_parser_44>
139, // at 56 : <>
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
C_Lexique_sara_5F_scanner::kToken_use_5F_and, -1, // Choice 8
C_Lexique_sara_5F_scanner::kToken_use_5F_ite, -1, // Choice 9
C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite, -1, // Choice 10
C_Lexique_sara_5F_scanner::kToken_and_5F_cache, -1, // Choice 11
C_Lexique_sara_5F_scanner::kToken_ite_5F_cache, -1, // Choice 12
C_Lexique_sara_5F_scanner::kToken_map, -1, // Choice 13
C_Lexique_sara_5F_scanner::kToken_bdd, -1, // Choice 14
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 15
C_Lexique_sara_5F_scanner::kToken_modalcompadd, -1, // Choice 16
C_Lexique_sara_5F_scanner::kToken_modalcompsub, -1, // Choice 17
C_Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 18
  -1,
// At index 38 : <io_bool_expression> only one production, no choice
  -1,
// At index 39 : <io_and_expression> only one production, no choice
  -1,
// At index 40 : <io_primary>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__7E_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken_false, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken_true, -1, // Choice 5
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 6
  -1,
// At index 53 : <definition_expression> only one production, no choice
  -1,
// At index 54 : <definition_expression_term> only one production, no choice
  -1,
// At index 55 : <modalcompadd_definition> only one production, no choice
  -1,
// At index 56 : <modalcompsub_definition> only one production, no choice
  -1,
// At index 57 : <definition_expression_factor>
C_Lexique_sara_5F_scanner::kToken_trans, C_Lexique_sara_5F_scanner::kToken__28_, C_Lexique_sara_5F_scanner::kToken_modalcompadd, C_Lexique_sara_5F_scanner::kToken_modalcompsub, C_Lexique_sara_5F_scanner::kToken__7E_, C_Lexique_sara_5F_scanner::kToken__3F_, C_Lexique_sara_5F_scanner::kToken__21_, C_Lexique_sara_5F_scanner::kToken_bool, C_Lexique_sara_5F_scanner::kToken__40_, C_Lexique_sara_5F_scanner::kToken_nofirst, C_Lexique_sara_5F_scanner::kToken_nolast, C_Lexique_sara_5F_scanner::kToken_auto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_machineIdf, -1, // Choice 2
  -1,
// At index 73 : <explicit_automaton> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 74 : <select_sara_5F_parser_0>
C_Lexique_sara_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_state, C_Lexique_sara_5F_scanner::kToken_machineIdf, C_Lexique_sara_5F_scanner::kToken_trans, C_Lexique_sara_5F_scanner::kToken_first, C_Lexique_sara_5F_scanner::kToken_last, C_Lexique_sara_5F_scanner::kToken_check, C_Lexique_sara_5F_scanner::kToken_checkidentical, C_Lexique_sara_5F_scanner::kToken_checkbool, C_Lexique_sara_5F_scanner::kToken_use_5F_and, C_Lexique_sara_5F_scanner::kToken_use_5F_ite, C_Lexique_sara_5F_scanner::kToken_use_5F_and_5F_ite, C_Lexique_sara_5F_scanner::kToken_and_5F_cache, C_Lexique_sara_5F_scanner::kToken_ite_5F_cache, C_Lexique_sara_5F_scanner::kToken_map, C_Lexique_sara_5F_scanner::kToken_bdd, C_Lexique_sara_5F_scanner::kToken_modalcompadd, C_Lexique_sara_5F_scanner::kToken_modalcompsub, C_Lexique_sara_5F_scanner::kToken_scenario, -1, // Choice 2
  -1,
// At index 96 : <select_sara_5F_parser_1>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 101 : <select_sara_5F_parser_2>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 106 : <select_sara_5F_parser_3>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 111 : <select_sara_5F_parser_4>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 116 : <select_sara_5F_parser_5>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 121 : <select_sara_5F_parser_6>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 126 : <select_sara_5F_parser_7>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 131 : <select_sara_5F_parser_8>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 136 : <select_sara_5F_parser_9>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 141 : <select_sara_5F_parser_10>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 146 : <select_sara_5F_parser_11>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 151 : <select_sara_5F_parser_12>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 156 : <select_sara_5F_parser_13>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 161 : <select_sara_5F_parser_14>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 166 : <select_sara_5F_parser_15>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 171 : <select_sara_5F_parser_16>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 176 : <select_sara_5F_parser_17>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_literal_5F_string, -1, // Choice 2
  -1,
// At index 181 : <select_sara_5F_parser_18>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 186 : <select_sara_5F_parser_19>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__3A_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 192 : <select_sara_5F_parser_20>
C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__7B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_to, C_Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__5E_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken__2D__3E_, -1, // Choice 4
C_Lexique_sara_5F_scanner::kToken__3D_, -1, // Choice 5
  -1,
// At index 207 : <select_sara_5F_parser_21>
C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__7B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken__7C_, C_Lexique_sara_5F_scanner::kToken__5E_, C_Lexique_sara_5F_scanner::kToken__2D__3E_, C_Lexique_sara_5F_scanner::kToken__3D_, C_Lexique_sara_5F_scanner::kToken_to, C_Lexique_sara_5F_scanner::kToken_goto, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 220 : <select_sara_5F_parser_22>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 225 : <select_sara_5F_parser_23>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 230 : <select_sara_5F_parser_24>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 235 : <select_sara_5F_parser_25>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 240 : <select_sara_5F_parser_26>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 2
  -1,
// At index 246 : <select_sara_5F_parser_27>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__29_, C_Lexique_sara_5F_scanner::kToken__2B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_sara_5F_scanner::kToken__2A__2A_, -1, // Choice 3
C_Lexique_sara_5F_scanner::kToken__7C__7C_, -1, // Choice 4
  -1,
// At index 257 : <select_sara_5F_parser_28>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_include, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 264 : <select_sara_5F_parser_29>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_include, -1, // Choice 2
  -1,
// At index 270 : <select_sara_5F_parser_30>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, C_Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 277 : <select_sara_5F_parser_31>
C_Lexique_sara_5F_scanner::kToken__3B_, C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_exclude, -1, // Choice 2
  -1,
// At index 283 : <select_sara_5F_parser_32>
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
// At index 308 : <select_sara_5F_parser_33>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 313 : <select_sara_5F_parser_34>
C_Lexique_sara_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 318 : <select_sara_5F_parser_35>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 323 : <select_sara_5F_parser_36>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 328 : <select_sara_5F_parser_37>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 333 : <select_sara_5F_parser_38>
C_Lexique_sara_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 338 : <select_sara_5F_parser_39>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 343 : <select_sara_5F_parser_40>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 348 : <select_sara_5F_parser_41>
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_last, -1, // Choice 2
  -1,
// At index 353 : <select_sara_5F_parser_42>
C_Lexique_sara_5F_scanner::kToken__3B_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 358 : <select_sara_5F_parser_43>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 363 : <select_sara_5F_parser_44>
C_Lexique_sara_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_sara_5F_scanner::kToken_machineIdf, C_Lexique_sara_5F_scanner::kToken__28_, C_Lexique_sara_5F_scanner::kToken_identifier, C_Lexique_sara_5F_scanner::kToken__7E_, C_Lexique_sara_5F_scanner::kToken_false, C_Lexique_sara_5F_scanner::kToken_true, -1, // Choice 2
  -1,
// At index 373 : <> only one production, no choice
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
38, // at 2 : <io_bool_expression>
39, // at 3 : <io_and_expression>
40, // at 4 : <io_primary>
53, // at 5 : <definition_expression>
54, // at 6 : <definition_expression_term>
55, // at 7 : <modalcompadd_definition>
56, // at 8 : <modalcompsub_definition>
57, // at 9 : <definition_expression_factor>
73, // at 10 : <explicit_automaton>
74, // at 11 : <select_sara_5F_parser_0>
96, // at 12 : <select_sara_5F_parser_1>
101, // at 13 : <select_sara_5F_parser_2>
106, // at 14 : <select_sara_5F_parser_3>
111, // at 15 : <select_sara_5F_parser_4>
116, // at 16 : <select_sara_5F_parser_5>
121, // at 17 : <select_sara_5F_parser_6>
126, // at 18 : <select_sara_5F_parser_7>
131, // at 19 : <select_sara_5F_parser_8>
136, // at 20 : <select_sara_5F_parser_9>
141, // at 21 : <select_sara_5F_parser_10>
146, // at 22 : <select_sara_5F_parser_11>
151, // at 23 : <select_sara_5F_parser_12>
156, // at 24 : <select_sara_5F_parser_13>
161, // at 25 : <select_sara_5F_parser_14>
166, // at 26 : <select_sara_5F_parser_15>
171, // at 27 : <select_sara_5F_parser_16>
176, // at 28 : <select_sara_5F_parser_17>
181, // at 29 : <select_sara_5F_parser_18>
186, // at 30 : <select_sara_5F_parser_19>
192, // at 31 : <select_sara_5F_parser_20>
207, // at 32 : <select_sara_5F_parser_21>
220, // at 33 : <select_sara_5F_parser_22>
225, // at 34 : <select_sara_5F_parser_23>
230, // at 35 : <select_sara_5F_parser_24>
235, // at 36 : <select_sara_5F_parser_25>
240, // at 37 : <select_sara_5F_parser_26>
246, // at 38 : <select_sara_5F_parser_27>
257, // at 39 : <select_sara_5F_parser_28>
264, // at 40 : <select_sara_5F_parser_29>
270, // at 41 : <select_sara_5F_parser_30>
277, // at 42 : <select_sara_5F_parser_31>
283, // at 43 : <select_sara_5F_parser_32>
308, // at 44 : <select_sara_5F_parser_33>
313, // at 45 : <select_sara_5F_parser_34>
318, // at 46 : <select_sara_5F_parser_35>
323, // at 47 : <select_sara_5F_parser_36>
328, // at 48 : <select_sara_5F_parser_37>
333, // at 49 : <select_sara_5F_parser_38>
338, // at 50 : <select_sara_5F_parser_39>
343, // at 51 : <select_sara_5F_parser_40>
348, // at 52 : <select_sara_5F_parser_41>
353, // at 53 : <select_sara_5F_parser_42>
358, // at 54 : <select_sara_5F_parser_43>
363, // at 55 : <select_sara_5F_parser_44>
373, // at 56 : <>
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
                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 536) ;
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
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_sara_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_sara_5F_scanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_sara_grammar, gProductionNames_sara_grammar, gProductionIndexes_sara_grammar,
                                                      gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 536) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_sara_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
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
                                                    gFirstProductionIndexes_sara_grammar, gDecision_sara_grammar, gDecisionIndexes_sara_grammar, 536) ;
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
  case 13 :
    rule_sara_5F_parser_component_i13_parse(inLexique) ;
    break ;
  case 14 :
    rule_sara_5F_parser_component_i14_parse(inLexique) ;
    break ;
  case 15 :
    rule_sara_5F_parser_component_i15_parse(inLexique) ;
    break ;
  case 16 :
    rule_sara_5F_parser_component_i16_parse(inLexique) ;
    break ;
  case 17 :
    rule_sara_5F_parser_component_i17_parse(inLexique) ;
    break ;
  case 18 :
    rule_sara_5F_parser_component_i18_parse(inLexique) ;
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
  case 13 :
    rule_sara_5F_parser_component_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
    rule_sara_5F_parser_component_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
    rule_sara_5F_parser_component_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
    rule_sara_5F_parser_component_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
    rule_sara_5F_parser_component_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
    rule_sara_5F_parser_component_i18_(parameter_1, inLexique) ;
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
  rule_sara_5F_parser_io_5F_bool_5F_expression_i19_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_bool_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_boolExpression & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_bool_5F_expression_i19_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'io_and_expression' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i20_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_io_5F_and_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_boolExpression & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_io_5F_and_5F_expression_i20_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'io_primary' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_io_5F_primary_parse (C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_io_5F_primary_i21_parse(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i22_parse(inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i23_parse(inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i24_parse(inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i25_parse(inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i26_parse(inLexique) ;
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
    rule_sara_5F_parser_io_5F_primary_i21_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_io_5F_primary_i22_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 3 :
    rule_sara_5F_parser_io_5F_primary_i23_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 4 :
    rule_sara_5F_parser_io_5F_primary_i24_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 5 :
    rule_sara_5F_parser_io_5F_primary_i25_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 6 :
    rule_sara_5F_parser_io_5F_primary_i26_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  rule_sara_5F_parser_definition_5F_expression_i27_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_i27_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'definition_expression_term' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i28_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_term_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_definition_5F_expression_5F_term_i28_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'modalcompadd_definition' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i29_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompadd_5F_definition_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_M_5F_modesMap & parameter_3,
                                GALGAS_ListForModes & parameter_4,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompadd_5F_definition_i29_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'modalcompsub_definition' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_parse (C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i30_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_modalcompsub_5F_definition_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_M_5F_modesMap & parameter_3,
                                GALGAS_ListForModes & parameter_4,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_modalcompsub_5F_definition_i30_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'definition_expression_factor' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_sara_5F_grammar::nt_definition_5F_expression_5F_factor_parse (C_Lexique_sara_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_parse(inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_parse(inLexique) ;
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
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i31_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 2 :
    rule_sara_5F_parser_definition_5F_expression_5F_factor_i32_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  rule_sara_5F_parser_explicit_5F_automaton_i33_parse(inLexique) ;
}

void cGrammar_sara_5F_grammar::nt_explicit_5F_automaton_ (const GALGAS_semanticContext parameter_1,
                                GALGAS_M_5F_variablesMap & parameter_2,
                                GALGAS_AC_5F_machineDefinition & parameter_3,
                                C_Lexique_sara_5F_scanner * inLexique) {
  rule_sara_5F_parser_explicit_5F_automaton_i33_(parameter_1, parameter_2, parameter_3, inLexique) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap_2D_element::GALGAS_M_5F_variablesMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap_2D_element::~ GALGAS_M_5F_variablesMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap_2D_element::GALGAS_M_5F_variablesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_variablesMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap_2D_element GALGAS_M_5F_variablesMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_uint & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_variablesMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_M_5F_variablesMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_M_5F_variablesMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_variablesMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_M_5F_variablesMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_variablesMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @M_variablesMap-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ("M_variablesMap-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_variablesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_variablesMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_variablesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_variablesMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap_2D_element::GALGAS_M_5F_stateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap_2D_element::~ GALGAS_M_5F_stateMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap_2D_element::GALGAS_M_5F_stateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_stateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_stateMap_2D_element GALGAS_M_5F_stateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uint & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_M_5F_stateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_M_5F_stateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_M_5F_stateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_stateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_M_5F_stateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_stateMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @M_stateMap-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ("M_stateMap-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_stateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_stateMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_stateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_stateMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap_2D_element::GALGAS_M_5F_modesMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mModeDefinition () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap_2D_element::~ GALGAS_M_5F_modesMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_modesMap_2D_element::GALGAS_M_5F_modesMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1,
                                                                  const GALGAS_AC_5F_machineDefinition & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mModeDefinition (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_M_5F_modesMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mModeDefinition.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_modesMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mModeDefinition.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_M_5F_modesMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_modesMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_M_5F_modesMap_2D_element::getter_mModeDefinition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModeDefinition ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @M_modesMap-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ("M_modesMap-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_modesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_modesMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_modesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_modesMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList_2D_element::GALGAS_L_5F_scenarioList_2D_element (void) :
mProperty_mScenarioTitle (),
mProperty_mInputScenario () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList_2D_element::~ GALGAS_L_5F_scenarioList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList_2D_element::GALGAS_L_5F_scenarioList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_L_5F_inputScenario & inOperand1) :
mProperty_mScenarioTitle (inOperand0),
mProperty_mInputScenario (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_L_5F_scenarioList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_L_5F_inputScenario::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_scenarioList_2D_element GALGAS_L_5F_scenarioList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_L_5F_inputScenario & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_L_5F_scenarioList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_L_5F_scenarioList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_L_5F_scenarioList_2D_element::isValid (void) const {
  return mProperty_mScenarioTitle.isValid () && mProperty_mInputScenario.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_L_5F_scenarioList_2D_element::drop (void) {
  mProperty_mScenarioTitle.drop () ;
  mProperty_mInputScenario.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_L_5F_scenarioList_2D_element::getter_mScenarioTitle (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScenarioTitle ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_L_5F_inputScenario GALGAS_L_5F_scenarioList_2D_element::getter_mInputScenario (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputScenario ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @L_scenarioList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ("L_scenarioList-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_L_5F_scenarioList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_L_5F_scenarioList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_L_5F_scenarioList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_L_5F_scenarioList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap_2D_element::GALGAS_M_5F_machinesMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mInputVariableCount (),
mProperty_mInputAndInternalVariableCount (),
mProperty_mVariablesMap (),
mProperty_mNameList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap_2D_element::~ GALGAS_M_5F_machinesMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_machinesMap_2D_element GALGAS_M_5F_machinesMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_M_5F_machinesMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_M_5F_variablesMap::constructor_emptyMap (HERE),
                                             GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_M_5F_machinesMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mInputVariableCount.isValid () && mProperty_mInputAndInternalVariableCount.isValid () && mProperty_mVariablesMap.isValid () && mProperty_mNameList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_M_5F_machinesMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mInputVariableCount.drop () ;
  mProperty_mInputAndInternalVariableCount.drop () ;
  mProperty_mVariablesMap.drop () ;
  mProperty_mNameList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_M_5F_machinesMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_machinesMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_machinesMap_2D_element::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_M_5F_machinesMap_2D_element::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputAndInternalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_M_5F_machinesMap_2D_element::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariablesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_M_5F_machinesMap_2D_element::getter_mNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @M_machinesMap-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ("M_machinesMap-element",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_M_5F_machinesMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_M_5F_machinesMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_M_5F_machinesMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_M_5F_machinesMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_C_5F_machineComponent::objectCompare (const GALGAS_C_5F_machineComponent & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineComponent::GALGAS_C_5F_machineComponent (void) :
GALGAS_AC_5F_job () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_C_5F_machineComponent::GALGAS_C_5F_machineComponent (const cPtr_C_5F_machineComponent * inSourcePtr) :
GALGAS_AC_5F_job (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_C_5F_machineComponent) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_C_5F_machineComponent::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mProperty_mMachineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_C_5F_machineComponent::getter_mMachineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mProperty_mMachineIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineComponent::getter_mMachineIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMachineIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mProperty_mInputVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineComponent::getter_mInputVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_C_5F_machineComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mProperty_mInputAndInternalVariableCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_C_5F_machineComponent::getter_mInputAndInternalVariableCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputAndInternalVariableCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap GALGAS_C_5F_machineComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_M_5F_variablesMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mProperty_mVariablesMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_M_5F_variablesMap cPtr_C_5F_machineComponent::getter_mVariablesMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariablesMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_C_5F_machineComponent::getter_mNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mProperty_mNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cPtr_C_5F_machineComponent::getter_mNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition GALGAS_C_5F_machineComponent::getter_mDefinition (UNUSED_LOCATION_ARGS) const {
  GALGAS_AC_5F_machineDefinition result ;
  if (NULL != mObjectPtr) {
    const cPtr_C_5F_machineComponent * p = (const cPtr_C_5F_machineComponent *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_C_5F_machineComponent) ;
    result = p->mProperty_mDefinition ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_AC_5F_machineDefinition cPtr_C_5F_machineComponent::getter_mDefinition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefinition ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @C_machineComponent class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_C_5F_machineComponent::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_C_5F_machineComponent (mProperty_mMachineName, mProperty_mMachineIndex, mProperty_mInputVariableCount, mProperty_mInputAndInternalVariableCount, mProperty_mVariablesMap, mProperty_mNameList, mProperty_mDefinition COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @C_machineComponent type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_C_5F_machineComponent ("C_machineComponent",
                                              & kTypeDescriptor_GALGAS_AC_5F_job) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_C_5F_machineComponent::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_C_5F_machineComponent ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_C_5F_machineComponent::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_C_5F_machineComponent (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * kSourceFileExtensions [] = {
  "sara",
  NULL
} ;    

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * kSourceFileHelpMessages [] = {
  "an '.sara' source file",
  NULL
} ;    

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_sara_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("sara_main.galgas", 11)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

