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
  public : TC_unique_dyn_array <C_string> mInputNamesArray ;
  public : TC_unique_dyn_array <C_string> mOutputNamesArray ;
  public : C_bdd mInitialStatesBDD ;
  public : C_bdd mAccessibleStatesBDD ;
  public : C_bdd mTransitionRelationBDD ;
} ;

//---------------------------------------------------------------------------*

C_saraSystem::C_saraSystem (void) :
mInputNamesArray (0 COMMA_HERE),
mOutputNamesArray (0 COMMA_HERE) {
}

//---------------------------------------------------------------------------*

void swap (C_saraSystem & ioOperand1,
           C_saraSystem & ioOperand2) ;

void swap (C_saraSystem & ioOperand1,
           C_saraSystem & ioOperand2) {
  swap (ioOperand1.mInputNamesArray, ioOperand2.mInputNamesArray) ;
  swap (ioOperand1.mOutputNamesArray, ioOperand2.mOutputNamesArray) ;
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
                                                      system.mInputNamesArray,
                                                      system.mOutputNamesArray,
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

void cPtr_C_automatonComponent::
compute (C_lexique & inLexique,
         const bool inDisplayBDDvaluesCount,
         const bool inDisplayBDDvalues,
         TC_unique_dyn_array <C_string> & outInputNamesArray,
         TC_unique_dyn_array <C_string> & outOutputNamesArray,
         C_bdd & outInitialStatesBDD,
         C_bdd & outAccessibleStatesBDD,
         C_bdd & outAccessibilityRelationBDD) const {
//--- Build input variables array names
  const sint32 inputVariablesCount = mInputVariableMap.getCount () ;
  { TC_unique_dyn_array <C_string> inputVariableNameArray (inputVariablesCount COMMA_HERE) ;
    swap (inputVariableNameArray, outInputNamesArray) ;
  }
  GGS_M_inputOutputVarMap::element_type * currentInputVar = mInputVariableMap.getFirstItem () ;
  sint32 index = 0 ;
  while (currentInputVar != NULL) {
    outInputNamesArray (index COMMA_HERE) = currentInputVar->mKey ;
    index ++ ;
    currentInputVar = currentInputVar->getNextItem () ;
  }
//--- Build output variables array names
  const sint32 outputVariablesCount = mOutputVariableMap.getCount () ;
  { TC_unique_dyn_array <C_string> outputVariableNameArray (outputVariablesCount COMMA_HERE) ;
    swap (outputVariableNameArray, outOutputNamesArray) ;
  }
  GGS_M_inputOutputVarMap::element_type * currentOutputVar = mOutputVariableMap.getFirstItem () ;
  index = 0 ;
  while (currentOutputVar != NULL) {
    outOutputNamesArray (index COMMA_HERE) = currentOutputVar->mKey ;
    index ++ ;
    currentOutputVar = currentOutputVar->getNextItem () ;
  }
//--- Compute automaton from definition expression
  mDefinition ()->computeFromExpression (inLexique,
                                         inDisplayBDDvaluesCount,
                                         inDisplayBDDvalues,
                                         outInputNamesArray,
                                         outOutputNamesArray,
                                         outInitialStatesBDD,
                                         outAccessibleStatesBDD,
                                         outAccessibilityRelationBDD) ;
//--- 
  const sint32 input_plus_output_count = inputVariablesCount + outputVariablesCount ;
  TC_unique_dyn_array <C_string> inputOutputVariableNameArray (input_plus_output_count COMMA_HERE) ;
  for (sint32 i=0 ; i<inputVariablesCount ; i++) {
    inputOutputVariableNameArray (i COMMA_HERE) = outInputNamesArray (i COMMA_HERE) ;
  }
  for (sint32 i=0 ; i<outputVariablesCount ; i++) {
    inputOutputVariableNameArray (inputVariablesCount+ i COMMA_HERE) = outOutputNamesArray (i COMMA_HERE) ;
  }
//--- 
  
  TC_unique_dyn_array <C_string> transitionsVariableNameArray (input_plus_output_count + input_plus_output_count COMMA_HERE) ;
  for (sint32 i=0 ; i<input_plus_output_count ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = inputOutputVariableNameArray (i COMMA_HERE) ;
    transitionsVariableNameArray (input_plus_output_count + i COMMA_HERE) = inputOutputVariableNameArray (i COMMA_HERE) ;
  }
//--- Print message
  const uint16 statesBDDbitsCount = (uint16) (outInputNamesArray.getCount () + outOutputNamesArray.getCount ()) ;
  printf ("  %ld input variable%s, %ld output variable%s;\n",
          outInputNamesArray.getCount (),
          (outInputNamesArray.getCount () > 1) ? "s" : "",
          outOutputNamesArray.getCount (),
          (outOutputNamesArray.getCount () > 1) ? "s" : "") ;
  uint64 n = outInitialStatesBDD.getBDDvaluesCount (statesBDDbitsCount) ;
  uint32 nodes = outInitialStatesBDD.getBDDnodesCount () ;
  printf ("  %llu initial state%s (%lu node%s);\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    outInitialStatesBDD.printBDD (inputOutputVariableNameArray) ;
  }
  n = outAccessibleStatesBDD.getBDDvaluesCount (statesBDDbitsCount) ;
  nodes = outAccessibleStatesBDD.getBDDnodesCount () ;
  printf ("  %llu accessible state%s (%lu node%s);\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    outAccessibleStatesBDD.printBDD (inputOutputVariableNameArray) ;
  }
  n = outAccessibilityRelationBDD.getBDDvaluesCount (statesBDDbitsCount + statesBDDbitsCount) ;
  nodes = outAccessibilityRelationBDD.getBDDnodesCount () ;
  printf ("  %llu transition%s (%lu node%s).\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    outAccessibilityRelationBDD.printBDD (transitionsVariableNameArray) ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_automatonDefinition::
computeFromExpression (C_lexique & inLexique,
                       const bool inDisplayBDDvaluesCount,
                       const bool inDisplayBDDvalues,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
  const uint16 inputVariablesCount = (uint16) inInputNamesArray.getCount () ;
  const uint16 outputVariablesCount = (uint16) inOutputNamesArray.getCount () ;
  const uint16 n_plus_p_bitsCount = outputVariablesCount + inputVariablesCount ;
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
  TC_unique_dyn_array <C_bdd> stateInputExpressionBDD (mStatesMap.getCount () COMMA_HERE) ;
  TC_unique_dyn_array <C_bdd> stateOutputExpressionBDD (mStatesMap.getCount () COMMA_HERE) ;
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
  //--- Extract input configuration
    stateInputExpressionBDD (index COMMA_HERE) = stateExpressionBDD (index COMMA_HERE).existsOnBitsAfterNumber (inputVariablesCount) ;
  //--- Extract output configuration (NOT OPTIMIZED)
    C_bdd outputConfiguration = stateExpressionBDD (index COMMA_HERE) ;
    for (uint16 i=0 ; i<inputVariablesCount ; i++) {
      outputConfiguration = outputConfiguration.existsOnBitNumber (i) ;
    }
    stateOutputExpressionBDD (index COMMA_HERE) = outputConfiguration ;
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
//--- Define initial states BDD bits names
  TC_unique_dyn_array <C_string> initialStatesBitNames (n_plus_p_bitsCount COMMA_HERE) ;
  for (uint16 i=0 ; i<inputVariablesCount ; i++) {
    initialStatesBitNames (i COMMA_HERE) = inInputNamesArray (i COMMA_HERE) ;
  }
  for (uint16 i=inputVariablesCount ; i<n_plus_p_bitsCount ; i++) {
    initialStatesBitNames (i COMMA_HERE) = inOutputNamesArray (i-inputVariablesCount COMMA_HERE) ;
  }
//--- Compute BDD initial states
  GGS_L_initialStatesDefinitionList::element_type * currentInitialState = mInitialStatesDefinitionList.getFirstItem () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    outInitialStatesBDD |= stateExpressionBDD (currentInitialState->mInitialStateIndex.getValue () COMMA_HERE) ;
    currentInitialState = currentInitialState->getNextItem () ;
  }
//--- Display initial states BDD
  if (inDisplayBDDvaluesCount || inDisplayBDDvalues) {
    const uint64 n = outInitialStatesBDD.getBDDvaluesCount (n_plus_p_bitsCount) ;
    const uint32 nodes = outInitialStatesBDD.getBDDnodesCount () ;
    printf ("  %llu initial state%s (%lu node%s);\n",
            n, (n > 1) ? "s" : "",
	    		  nodes, (nodes > 1) ? "s" : "") ;
    if (inDisplayBDDvalues) {
      printf ("Initial states BDD :\n") ;
      outInitialStatesBDD.printBDD (initialStatesBitNames) ;
    }
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
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD (n_plus_p_bitsCount) ;
      const uint32 targetStateIndex = currentTransition->mTargetStateIndex.getValue () ;
      const C_bdd targetStateBDD = stateOutputExpressionBDD (targetStateIndex COMMA_HERE).translate (n_plus_p_bitsCount, n_plus_p_bitsCount) ;
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
//--- Define transitionBDD bits names
  const uint16 transitionsBDDbitCount = n_plus_p_bitsCount + n_plus_p_bitsCount ;
  TC_unique_dyn_array <C_string> transitionBDDbitNames (transitionsBDDbitCount COMMA_HERE) ;
  for (uint16 i=0 ; i<inputVariablesCount ; i++) {
    transitionBDDbitNames (i COMMA_HERE) = inInputNamesArray (i COMMA_HERE) ;
    transitionBDDbitNames (i+n_plus_p_bitsCount COMMA_HERE) = inInputNamesArray (i COMMA_HERE) ;
  }
  for (uint16 i=inputVariablesCount ; i<n_plus_p_bitsCount ; i++) {
    transitionBDDbitNames (i COMMA_HERE) = inOutputNamesArray (i-inputVariablesCount COMMA_HERE) ;
    transitionBDDbitNames (i+n_plus_p_bitsCount COMMA_HERE) = inOutputNamesArray (i-inputVariablesCount COMMA_HERE) ;
  }
//--- Display transitions BDD
  if (inDisplayBDDvaluesCount || inDisplayBDDvalues) {
    const uint64 n = transitionsBDD.getBDDvaluesCount (transitionsBDDbitCount) ;
    const uint32 nodes = transitionsBDD.getBDDnodesCount () ;
    printf ("  %llu explicit transition%s (%lu node%s);\n",
            n, (n > 1) ? "s" : "",
	    		  nodes, (nodes > 1) ? "s" : "") ;
    if (inDisplayBDDvalues) {
      printf ("Transitions BDD :\n") ;
      transitionsBDD.printBDD (transitionBDDbitNames) ;
    }
  }
//--- Check transitions of each state
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    const sint32 stateIndex = (sint32) currentDefinition->mStateIndex.getValue () ;
    if (inDisplayBDDvaluesCount || inDisplayBDDvalues) {
      printf ("For state %s :\n", stateNameArray (stateIndex COMMA_HERE).getStringPtr ()) ;
    }
  //--- Check that action does not intersect with state input expression
    sint32 transitionIndex = 0 ;
    GGS_L_transitionDefinition::element_type * currentTransition = currentDefinition->mTransitionsList.getFirstItem () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
    //--- Compute action BDD
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD (0) ;
    //--- Check action does not intersect with state input expression
      if (! (stateInputExpressionBDD (stateIndex COMMA_HERE) & actionBDD).isFalse ()) {
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
      const C_bdd x = actionBDD & stateInputExpressionBDD (currentTransition->mTargetStateIndex.getValue () COMMA_HERE) ;
      if (! x.isEqualToBDD (actionBDD)) {
        C_string errorMessage ;
        errorMessage << "this action is not compatible with input configuration of target state" ;
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
    const C_bdd translatedStateExpression = stateExpression.translate (n_plus_p_bitsCount, n_plus_p_bitsCount) ;
    outAccessibilityRelationBDD |= stateExpression & translatedStateExpression ;
  }
//--- Now, compute accessible states from initial states
  uint16 * substitutionArray = new uint16 [n_plus_p_bitsCount + n_plus_p_bitsCount] ;
  for (uint16 i=0 ; i<n_plus_p_bitsCount ; i++) {
    substitutionArray [i] = (uint16) (n_plus_p_bitsCount + i) ;
    substitutionArray [n_plus_p_bitsCount + i] = i ;
  }
  C_bdd newlyAccessibleStates ;
  do{
    outAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= outInitialStatesBDD ;
    const C_bdd x = (newlyAccessibleStates & outAccessibilityRelationBDD).substitution (substitutionArray, (uint16) (n_plus_p_bitsCount + n_plus_p_bitsCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (n_plus_p_bitsCount) ;
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
                       const bool inDisplayBDDvaluesCount,
                       const bool inDisplayBDDvalues,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
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
                       const bool inDisplayBDDvaluesCount,
                       const bool inDisplayBDDvalues,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute or composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD | rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_xorComposition::
computeFromExpression (C_lexique & inLexique,
                       const bool inDisplayBDDvaluesCount,
                       const bool inDisplayBDDvalues,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute xor composition
  outInitialStatesBDD = leftInitialStatesBDD != rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD != rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD != rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_impliesComposition::
computeFromExpression (C_lexique & inLexique,
                       const bool inDisplayBDDvaluesCount,
                       const bool inDisplayBDDvalues,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute implies composition
  outInitialStatesBDD = leftInitialStatesBDD.implies (rightInitialStatesBDD) ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD.implies (rightAccessibleStatesBDD) ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD.implies (rightAccessibilityRelationBDD) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_equalComposition::
computeFromExpression (C_lexique & inLexique,
                       const bool inDisplayBDDvaluesCount,
                       const bool inDisplayBDDvalues,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          leftInitialStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                          inDisplayBDDvaluesCount,
                                          inDisplayBDDvalues,
                                          inInputNamesArray,
                                          inOutputNamesArray,
                                          rightInitialStatesBDD,
                                          rightAccessibleStatesBDD,
                                          rightAccessibilityRelationBDD) ;
//--- Compute implies composition
  outInitialStatesBDD = leftInitialStatesBDD == rightInitialStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD == rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD == rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_notComposition::
computeFromExpression (C_lexique & inLexique,
                       const bool inDisplayBDDvaluesCount,
                       const bool inDisplayBDDvalues,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_bdd initialStatesBDD ;
  C_bdd accessibleStatesBDD ;
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      inDisplayBDDvaluesCount,
                                      inDisplayBDDvalues,
                                      inInputNamesArray,
                                      inOutputNamesArray,
                                      initialStatesBDD,
                                      accessibleStatesBDD,
                                      accessibilityRelationBDD) ;
//--- Compute not composition
  outInitialStatesBDD = ~ initialStatesBDD ;
  outAccessibleStatesBDD = ~ accessibleStatesBDD ;
  const uint16 translationCount = (uint16) (inInputNamesArray.getCount () + inOutputNamesArray.getCount ()) ;
  outAccessibilityRelationBDD = (~ accessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (translationCount, translationCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_variableDefinition::
computeFromExpression (C_lexique & /* inLexique */,
                       const bool /* inDisplayBDDvaluesCount */,
                       const bool /* inDisplayBDDvalues */,
                       const TC_unique_dyn_array <C_string> & inInputNamesArray,
                       const TC_unique_dyn_array <C_string> & inOutputNamesArray,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
  const C_bdd bdd ((uint16) (mInputOutputVariableIndex.getValue ()), true) ;
  outInitialStatesBDD = bdd ;
  outAccessibleStatesBDD = bdd ;
  const uint16 translationCount = (uint16) (inInputNamesArray.getCount () + inOutputNamesArray.getCount ()) ;
  outAccessibilityRelationBDD = bdd & bdd.translate (translationCount, translationCount) ;
}

//---------------------------------------------------------------------------*
