//---------------------------------------------------------------------------*
//                                                                           *
//  Implementation of overrided methods for SARA                             *
//                                                                           *
//  Copyright (C) 2004 Pierre Molinaro.                                      *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et CybernŽtique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "sara_parser.h"
#include "generic_arraies/TC_grow_array.h"

//---------------------------------------------------------------------------*

C_bdd cPtr_C_VariableExpression::computeBDD (const uint16 inBDDslotOffset) const {
  return C_bdd ((uint16) (mInputVarIndex.getValue () + inBDDslotOffset), true) ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_trueExpression::computeBDD (const uint16 /* inBDDslotOffset */) const {
  return ~ C_bdd () ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_falseExpression::computeBDD (const uint16 /* inBDDslotOffset */) const {
  return C_bdd () ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_notExpression::computeBDD (const uint16 inBDDslotOffset) const {
  return ~ mExpression ()->computeBDD (inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_andExpression::computeBDD (const uint16 inBDDslotOffset) const {
  return mLeftExpression ()->computeBDD (inBDDslotOffset) & mRightExpression ()->computeBDD (inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_orExpression::computeBDD (const uint16 inBDDslotOffset) const {
  return mLeftExpression ()->computeBDD (inBDDslotOffset) | mRightExpression ()->computeBDD (inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_xorExpression::computeBDD (const uint16 inBDDslotOffset) const {
  return mLeftExpression ()->computeBDD (inBDDslotOffset) != mRightExpression ()->computeBDD (inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_impliesExpression::computeBDD (const uint16 inBDDslotOffset) const {
  return mLeftExpression ()->computeBDD (inBDDslotOffset).implies (mRightExpression ()->computeBDD (inBDDslotOffset)) ;
}

//---------------------------------------------------------------------------*

C_bdd cPtr_C_equalExpression::computeBDD (const uint16 inBDDslotOffset) const {
  return mLeftExpression ()->computeBDD (inBDDslotOffset) == mRightExpression ()->computeBDD (inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

class C_saraSystem {
  public : C_saraSystem (void) ;
  public : TC_unique_dyn_array <C_string> mNamesArray ;
  public : C_bdd mInitialStatesBDD ;
  public : C_bdd mAccessibleStatesBDD ;
  public : C_bdd mTransitionRelationBDD ;
} ;

//---------------------------------------------------------------------------*

C_saraSystem::C_saraSystem (void):mNamesArray (0 COMMA_HERE) {
}

//---------------------------------------------------------------------------*

void swap (C_saraSystem & ioOperand1,
           C_saraSystem & ioOperand2) ;

void swap (C_saraSystem & ioOperand1,
           C_saraSystem & ioOperand2) {
  swap (ioOperand1.mNamesArray, ioOperand2.mNamesArray) ;
  swap (ioOperand1.mInitialStatesBDD, ioOperand2.mInitialStatesBDD) ;
  swap (ioOperand1.mTransitionRelationBDD, ioOperand2.mTransitionRelationBDD) ;
  swap (ioOperand1.mAccessibleStatesBDD, ioOperand2.mAccessibleStatesBDD) ;
}

//---------------------------------------------------------------------------*

void
performComputations (C_lexique & inLexique,
                     GGS_M_componentMap & inComponentMap) {
  if (inLexique.getCurrentFileErrorsCount () == 0) {
    TC_grow_array <C_saraSystem> saraSystemArray (0 COMMA_HERE) ;
  //--- Options
    const bool displayBDDvaluesCount = inLexique.getBoolOptionValueFromKeys ("sara_cli_options", "displayBDDvaluesCount", true) ;
    const bool displayBDDvalues = inLexique.getBoolOptionValueFromKeys ("sara_cli_options", "displayBDDvalues", true) ;
//    C_bdd::setHashMapSize (23) ;
//    C_bdd::setITEcacheSize (23) ;
  //--- Loop for each component
    GGS_M_componentMap::element_type * currentComponent = inComponentMap.getFirstItem () ;
    while (currentComponent != NULL) {
      macroValidPointer (currentComponent) ;
      printf ("------------------ Computations for %s component\n", currentComponent->mKey.getStringPtr ()) ;
      C_saraSystem system ;
      currentComponent->mInfo.mComponent ()->compute (inLexique, 
                                                      displayBDDvaluesCount,
                                                      displayBDDvalues,
                                                      system.mNamesArray,
                                                      system.mInitialStatesBDD,
                                                      system.mAccessibleStatesBDD,
                                                      system.mTransitionRelationBDD) ;
      saraSystemArray.appendByExchange (system COMMA_HERE) ;
      currentComponent = currentComponent->getNextItem () ;
    }
    printf ("------------------\n") ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_machineComponent::
compute (C_lexique & inLexique,
         const bool inDisplayBDDvaluesCount,
         const bool inDisplayBDDvalues,
         TC_unique_dyn_array <C_string> & outNamesArray,
         C_bdd & outInitialStatesBDD,
         C_bdd & outAccessibleStatesBDD,
         C_bdd & outAccessibilityRelationBDD) const {
//--- Build input variables array names
  const sint32 variablesCount = mVariablesMap.getCount () ;
  { TC_unique_dyn_array <C_string> variableNamesArray (variablesCount COMMA_HERE) ;
    swap (variableNamesArray, outNamesArray) ;
  }
  GGS_M_variablesMap::element_type * currentVar = mVariablesMap.getFirstItem () ;
  sint32 index = 0 ;
  while (currentVar != NULL) {
    outNamesArray (index COMMA_HERE) = currentVar->mKey ;
    index ++ ;
    currentVar = currentVar->getNextItem () ;
  }
//--- Compute automaton from definition expression
  mDefinition ()->computeFromExpression (inLexique,
                                         variablesCount,
                                         outInitialStatesBDD,
                                         outAccessibleStatesBDD,
                                         outAccessibilityRelationBDD) ;
//---   
  TC_unique_dyn_array <C_string> transitionsVariableNameArray (variablesCount + variablesCount COMMA_HERE) ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = outNamesArray (i COMMA_HERE) ;
    transitionsVariableNameArray (variablesCount + i COMMA_HERE) = outNamesArray (i COMMA_HERE) ;
  }
//--- Print message
  const sint32 inputVariablesCount = mInputVariableCount.getValue () ;
  const sint32 outputVariablesCount = variablesCount - inputVariablesCount ;
  printf ("  %ld input variable%s, %ld output variable%s;\n",
          inputVariablesCount,
          (inputVariablesCount > 1) ? "s" : "",
          outputVariablesCount,
          (outputVariablesCount > 1) ? "s" : "") ;
  uint64 n = outInitialStatesBDD.getBDDvaluesCount (variablesCount) ;
  uint32 nodes = outInitialStatesBDD.getBDDnodesCount () ;
  printf ("  %llu initial state%s (%lu node%s);\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    outInitialStatesBDD.printBDD (outNamesArray) ;
  }
  n = outAccessibleStatesBDD.getBDDvaluesCount (variablesCount) ;
  nodes = outAccessibleStatesBDD.getBDDnodesCount () ;
  printf ("  %llu accessible state%s (%lu node%s);\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    outAccessibleStatesBDD.printBDD (outNamesArray) ;
  }
  n = outAccessibilityRelationBDD.getBDDvaluesCount (variablesCount + variablesCount) ;
  nodes = outAccessibilityRelationBDD.getBDDnodesCount () ;
  printf ("  %llu transition%s (%lu node%s).\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    outAccessibilityRelationBDD.printBDD (transitionsVariableNameArray) ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_explicitAutomatonDefinition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Build state array names
  TC_unique_dyn_array <C_string> stateNameArray (mStatesMap.getCount () COMMA_HERE) ;
  GGS_M_stateMap::element_type * currentState = mStatesMap.getFirstItem () ;
  sint32 index = 0 ;
  while (currentState != NULL) {
    stateNameArray (index COMMA_HERE) = currentState->mKey ;
    index ++ ;
    currentState = currentState->getNextItem () ;
  }
//----------------------------------------------------------------------- States BDD array
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//---- For each state defined in source file, we compute the BDD built from
//     state input configuration and state output configuration
  TC_unique_dyn_array <C_bdd> stateExpressionBDD (mStatesMap.getCount () COMMA_HERE) ;
  index = 0 ;
  GGS_L_stateDefinition::element_type * currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
  //--- Enter state configuration
    stateExpressionBDD (index COMMA_HERE) = currentDefinition->mStateExpression ()->computeBDD (0) ;
  //--- Check state configuration is not empty
    if (stateExpressionBDD (index COMMA_HERE).isFalse ()) {
      C_string errorMessage ;
      errorMessage << "input configuration for state '"
                   << stateNameArray (currentDefinition->mStateIndex.getValue () COMMA_HERE)
                   << "' is empty" ;
      currentDefinition->mEndOfStateExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
    }
  //--- Go to next state definition  
    currentDefinition = currentDefinition->getNextItem () ;
    index ++ ;
  }
//----------------------------------------------------------------------- Check that states are disjoined
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    GGS_L_stateDefinition::element_type * testedState = currentDefinition->getNextItem () ;
    while (testedState != NULL) {
      macroValidPointer (testedState) ;
      if (! (stateExpressionBDD (currentDefinition->mStateIndex.getValue () COMMA_HERE) & stateExpressionBDD (testedState->mStateIndex.getValue () COMMA_HERE)).isFalse ()) {
        C_string errorMessage ;
        errorMessage << "expression for state '"
                   << stateNameArray (testedState->mStateIndex.getValue () COMMA_HERE)
                   << " intersects expression for state '"
                   << stateNameArray (currentDefinition->mStateIndex.getValue () COMMA_HERE)
                   << "'" ;
        testedState->mEndOfStateExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
      }
      testedState = testedState->getNextItem () ;
    }
  //--- Go to next state definition  
    currentDefinition = currentDefinition->getNextItem () ;
  }
//----------------------------------------------------------------------- Initial states BDD
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//--- Compute BDD initial states
  GGS_L_initialStatesDefinitionList::element_type * currentInitialState = mInitialStatesDefinitionList.getFirstItem () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    outInitialStatesBDD |= stateExpressionBDD (currentInitialState->mInitialStateIndex.getValue () COMMA_HERE) ;
    currentInitialState = currentInitialState->getNextItem () ;
  }
//--- Check initial states are disjoined
  currentInitialState = mInitialStatesDefinitionList.getFirstItem () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    GGS_L_initialStatesDefinitionList::element_type * testedInitialState = currentInitialState->getNextItem () ;
    while (testedInitialState != NULL) {
      macroValidPointer (testedInitialState) ;
      const C_bdd intersection = stateExpressionBDD (currentInitialState->mInitialStateIndex.getValue () COMMA_HERE)
        & stateExpressionBDD (testedInitialState->mInitialStateIndex.getValue () COMMA_HERE) ;
      if (! intersection.isFalse ()) {
        C_string errorMessage ;
        errorMessage << "initial state '"
                     << stateNameArray (testedInitialState->mInitialStateIndex.getValue () COMMA_HERE)
                     << "' intersects previous initial state '"
                     << stateNameArray (currentInitialState->mInitialStateIndex.getValue () COMMA_HERE)
                     << "'" ;
        testedInitialState->mInitialStateLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
      }
      testedInitialState = testedInitialState->getNextItem () ;
    }
    currentInitialState = currentInitialState->getNextItem () ;
  }
//----------------------------------------------------------------------- Transitions BDD
//    A transition is a 4-uple (e, s, e', s')
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to e inputs
//    Slots n .. n+p-1 are assigned to s outputs
//    Slots n+p .. 2n+p-1 are assigned to e inputs
//    Slots 2n+p .. 2n+2p-1 are assigned to s outputs
//---- For each state defined in source file, we compute the BDD built from
//     state input configuration and state output configuration
  C_bdd transitionsBDD ;
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  index = 0 ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
  //--- Accumulate transitions targets for each transition
    C_bdd transitionsTargetBDD ;
    GGS_L_transitionDefinition::element_type * currentTransition = currentDefinition->mTransitionsList.getFirstItem () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD (inVariablesCount) ;
      const uint32 targetStateIndex = currentTransition->mTargetStateIndex.getValue () ;
      const C_bdd targetStateBDD = stateExpressionBDD (targetStateIndex COMMA_HERE).translate (inVariablesCount, inVariablesCount) ;
      transitionsTargetBDD |= actionBDD & targetStateBDD ;
      currentTransition = currentTransition->getNextItem () ;
    }
  //--- Combine with state BDD
    transitionsTargetBDD &= stateExpressionBDD (index COMMA_HERE) ;
  //--- Accumulate into transitions BDD
    transitionsBDD |= transitionsTargetBDD ;
  //--- Go to next state definition
    currentDefinition = currentDefinition->getNextItem () ;
    index ++ ;
  }
//--- Check transitions of each state
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    const sint32 stateIndex = (sint32) currentDefinition->mStateIndex.getValue () ;
  //--- Check that action does not intersect with state input expression
    sint32 transitionIndex = 0 ;
    GGS_L_transitionDefinition::element_type * currentTransition = currentDefinition->mTransitionsList.getFirstItem () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
    //--- Compute action BDD
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD (0) ;
    //--- Check action does not intersect with state input expression
      if (! (stateExpressionBDD (stateIndex COMMA_HERE) & actionBDD).isFalse ()) {
        C_string errorMessage ;
        errorMessage << "this action intersects with current state input configuration" ;
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
      }
    //--- Check action does not intersect with other actions
      GGS_L_transitionDefinition::element_type * testedTransition = currentTransition->getNextItem () ;
      while (testedTransition != NULL) {
        macroValidPointer (testedTransition) ;
      //--- Compute action BDD
        const C_bdd testedActionBDD = testedTransition->mActionExpression ()->computeBDD (0) ;
      //--- Check action does not intersect with state input expression
        if (! (testedActionBDD & actionBDD).isFalse ()) {
          C_string errorMessage ;
          errorMessage << "this action intersects with #" << transitionIndex << " previous action" ;
          testedTransition->mEndOfExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
        }
        testedTransition = testedTransition->getNextItem () ;
      }
    //--- Check that action is compatible input configuration of target state
      const C_bdd x = actionBDD & stateExpressionBDD (currentTransition->mTargetStateIndex.getValue () COMMA_HERE) ;
      if (x.isFalse ()) {
        C_string errorMessage ;
        errorMessage << "this transition is not compatible with configuration of target state" ;
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
      }
    //--- Goto next transition
      currentTransition = currentTransition->getNextItem () ;
      transitionIndex ++ ;
    }
  //--- Goto next state
    currentDefinition = currentDefinition->getNextItem () ;
  }
//----------------------------------------------------------------------- Compute accessible states
//--- First, compute transitions set. We add to inter state transitions intra state transitions
  outAccessibilityRelationBDD = transitionsBDD ;
  for (sint32 i=0 ; i<stateExpressionBDD.getCount () ; i++) {
    const C_bdd stateExpression = stateExpressionBDD (i COMMA_HERE) ;
    const C_bdd translatedStateExpression = stateExpression.translate (inVariablesCount, inVariablesCount) ;
    outAccessibilityRelationBDD |= stateExpression & translatedStateExpression ;
  }
//--- Now, compute accessible states from initial states
  uint16 * substitutionArray = new uint16 [inVariablesCount + inVariablesCount] ;
  for (uint16 i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] = (uint16) (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_bdd newlyAccessibleStates ;
  do{
    outAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= outInitialStatesBDD ;
    const C_bdd x = (newlyAccessibleStates & outAccessibilityRelationBDD).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (! outAccessibleStatesBDD.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- At least, check that every state is accessible
  for (sint32 i=0 ; i<stateExpressionBDD.getCount () ; i++) {
    const C_bdd intersection = stateExpressionBDD (i COMMA_HERE) & outAccessibleStatesBDD ;
    if (! stateExpressionBDD (i COMMA_HERE).isEqualToBDD (intersection)) {
      C_string errorMessage ;
      errorMessage << "state '"
                   << stateNameArray (i COMMA_HERE)
                   << "' is not accessible" ;
      mEndOfDefinition.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
    }
  }
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_andComposition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute and composition
  outInitialStatesBDD = leftInitialStatesBDD & rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD & rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD & rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_orComposition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute or composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD | rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD | rightAccessibilityRelationBDD) | (outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount)) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_modalComposition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Check if modal composition is valid
  const C_bdd intersection = leftAccessibleStatesBDD & rightAccessibleStatesBDD ;
  if (! intersection.isFalse ()) {
    C_string errorMessage ;
    errorMessage << "operands transitions intersects, modal composition is not valid" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
  }
//--- Compute modal composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD | rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_xorComposition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute xor composition
  outInitialStatesBDD = leftInitialStatesBDD != rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD != rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD != rightAccessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_impliesComposition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute implies composition
  outInitialStatesBDD = leftInitialStatesBDD.implies (rightInitialStatesBDD) ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD.implies (rightAccessibleStatesBDD) ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD.implies (rightAccessibilityRelationBDD)) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_equalComposition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inVariablesCount,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute implies composition
  outInitialStatesBDD = leftInitialStatesBDD == rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD == rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD == rightAccessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_notComposition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_bdd initialStatesBDD ;
  C_bdd accessibleStatesBDD ;
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      inVariablesCount,
                                      initialStatesBDD,
                                      accessibleStatesBDD,
                                      accessibilityRelationBDD) ;
//--- Compute not composition
  outInitialStatesBDD = ~ initialStatesBDD ;
  outAccessibleStatesBDD = ~ accessibleStatesBDD ;
  outAccessibilityRelationBDD = (~ accessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_variableDefinition::
computeFromExpression (C_lexique & /* inLexique */,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
  const C_bdd bdd ((uint16) (mInputOutputVariableIndex.getValue ()), true) ;
  outInitialStatesBDD = bdd ;
  outAccessibleStatesBDD = bdd ;
  outAccessibilityRelationBDD = bdd & bdd.translate (inVariablesCount, inVariablesCount) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_existsDefinition::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
  const uint16 previousVariableCount = (uint16) mPreviousVariableCount.getValue () ;
  const uint16 totalVariableCount = (uint16) mTotalVariableCount.getValue () ;
//--- Compute operand
  C_bdd initialStatesBDD ;
  C_bdd accessibleStatesBDD ;
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      totalVariableCount,
                                      initialStatesBDD,
                                      accessibleStatesBDD,
                                      accessibilityRelationBDD) ;
  outInitialStatesBDD = initialStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
  outAccessibleStatesBDD = accessibleStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
//--- Compute accessibilty relation (NOT OPTIMIZED)
  outAccessibilityRelationBDD = accessibilityRelationBDD.existsOnBitsAfterNumber (totalVariableCount + previousVariableCount) ;
  for (uint16 i=previousVariableCount ; i<totalVariableCount ; i++) {
    outAccessibilityRelationBDD = outAccessibilityRelationBDD.existsOnBitNumber (i) ;
  }
  outAccessibilityRelationBDD.rollDownVariables (totalVariableCount + previousVariableCount, previousVariableCount) ; 
}

//---------------------------------------------------------------------------*

void cPtr_C_saturationOperation::
computeFromExpression (C_lexique & inLexique,
                       const sint32 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outAccessibleStatesBDD,
                                      accessibilityRelationBDD) ;
//--- Perform substitution on accessibility relation
  uint16 * substitionVector = new uint16 [inVariablesCount + inVariablesCount] ;
//  const C_bdd translatedAccessibilityRelationBDD = outAccessibilityRelationBDD.substitution (



  outAccessibilityRelationBDD = (~ accessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*
