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

C_saraMachine::C_saraMachine (void):mNamesArray (0 COMMA_HERE) {
}

//---------------------------------------------------------------------------*

void swap (C_saraMachine & ioOperand1,
           C_saraMachine & ioOperand2) ;

void swap (C_saraMachine & ioOperand1,
           C_saraMachine & ioOperand2) {
  swap (ioOperand1.mNamesArray, ioOperand2.mNamesArray) ;
  swap (ioOperand1.mInputVariablesCount, ioOperand2.mInputVariablesCount) ;
  swap (ioOperand1.mInputAndInternalVariablesCount, ioOperand2.mInputAndInternalVariablesCount) ;
  swap (ioOperand1.mMachineName, ioOperand2.mMachineName) ;
  swap (ioOperand1.mInitialStatesBDD, ioOperand2.mInitialStatesBDD) ;
  swap (ioOperand1.mTerminalStatesBDD, ioOperand2.mTerminalStatesBDD) ;
  swap (ioOperand1.mTransitionRelationBDD, ioOperand2.mTransitionRelationBDD) ;
  swap (ioOperand1.mAccessibleStatesBDD, ioOperand2.mAccessibleStatesBDD) ;
}

//---------------------------------------------------------------------------*

void
performComputations (C_lexique & inLexique,
                     GGS_L_jobList & inComponentMap) {
  if (inLexique.getCurrentFileErrorsCount () == 0) {
    TC_grow_array <C_saraMachine> saraSystemArray (0 COMMA_HERE) ;
  //--- Options
    const bool displayBDDvaluesCount = inLexique.getBoolOptionValueFromKeys ("sara_cli_options", "displayBDDvaluesCount", true) ;
    const bool displayBDDvalues = inLexique.getBoolOptionValueFromKeys ("sara_cli_options", "displayBDDvalues", true) ;
//    C_bdd::setHashMapSize (23) ;
//    C_bdd::setITEcacheSize (23) ;
  //--- Loop for each component
    GGS_L_jobList::element_type * currentComponent = inComponentMap.getFirstItem () ;
    while (currentComponent != NULL) {
      macroValidPointer (currentComponent) ;
      C_saraMachine system ;
      currentComponent->mComponent ()->compute (inLexique, 
                                                saraSystemArray,
                                                displayBDDvaluesCount,
                                                displayBDDvalues) ;
      currentComponent = currentComponent->getNextItem () ;
    }
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_machineComponent::
compute (C_lexique & inLexique,
         TC_grow_array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool inDisplayBDDvalues) const {
  printf ("------------------ Computations for '%s' machine\n", mMachineName.getStringPtr ()) ;
  C_saraMachine machine ;
  machine.mMachineName = mMachineName ;
//--- Build input variables array names
  const uint16 inputVariablesCount = (uint16) mInputVariableCount.getValue () ;
  machine.mInputVariablesCount = inputVariablesCount ;
  const uint16 variablesCount = (uint16) mVariablesMap.getCount () ;
  const uint16 inputAndInternalVariablesCount = (uint16) mInputAndInternalVariableCount.getValue () ;
  machine.mInputAndInternalVariablesCount = inputAndInternalVariablesCount ;
  { TC_unique_dyn_array <C_string> variableNamesArray (variablesCount COMMA_HERE) ;
    swap (machine.mNamesArray, variableNamesArray) ;
  }
  GGS_M_variablesMap::element_type * currentVar = mVariablesMap.getFirstItem () ;
  sint32 index = 0 ;
  while (currentVar != NULL) {
    machine.mNamesArray (index COMMA_HERE) = currentVar->mKey ;
    index ++ ;
    currentVar = currentVar->getNextItem () ;
  }
//--- Compute automaton from definition expression
  mDefinition ()->computeFromExpression (inLexique,
                                         ioSaraSystemArray,
                                         variablesCount,
                                         machine.mInitialStatesBDD,
                                         machine.mTerminalStatesBDD,
                                         machine.mAccessibleStatesBDD,
                                         machine.mTransitionRelationBDD) ;
//--- Compute accessible states
  uint16 * substitutionArray = new uint16 [variablesCount + variablesCount] ;
  for (uint16 i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] = (uint16) (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  C_bdd newlyAccessibleStates ;
  do{
    machine.mAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= machine.mInitialStatesBDD ;
    const C_bdd x = (newlyAccessibleStates & machine.mTransitionRelationBDD).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
  }while (! machine.mAccessibleStatesBDD.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- 
  machine.mTransitionRelationBDD &= machine.mAccessibleStatesBDD ;
  machine.mTerminalStatesBDD &= machine.mAccessibleStatesBDD ;

//---   
  TC_unique_dyn_array <C_string> transitionsVariableNameArray (variablesCount + variablesCount COMMA_HERE) ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    transitionsVariableNameArray (variablesCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
  }
//--- Print messages
  const sint32 outputVariablesCount = variablesCount - inputAndInternalVariablesCount ;
  const sint32 internalVariablesCount = inputAndInternalVariablesCount - inputVariablesCount ;
  printf ("  %hu input variable%s, %ld internal variable%s, %ld output variable%s;\n",
          inputVariablesCount, (inputVariablesCount > 1) ? "s" : "",
          internalVariablesCount, (internalVariablesCount > 1) ? "s" : "",
          outputVariablesCount, (outputVariablesCount > 1) ? "s" : "") ;
  uint64 n = machine.mInitialStatesBDD.getBDDvaluesCount (variablesCount) ;
  uint32 nodes = machine.mInitialStatesBDD.getBDDnodesCount () ;
  printf ("  %llu initial state%s (%lu node%s);\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    machine.mInitialStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTerminalStatesBDD.getBDDvaluesCount (variablesCount) ;
  nodes = machine.mTerminalStatesBDD.getBDDnodesCount () ;
  printf ("  %llu terminal state%s (%lu node%s);\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    machine.mTerminalStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mAccessibleStatesBDD.getBDDvaluesCount (variablesCount) ;
  nodes = machine.mAccessibleStatesBDD.getBDDnodesCount () ;
  printf ("  %llu accessible state%s (%lu node%s);\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    machine.mAccessibleStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTransitionRelationBDD.getBDDvaluesCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = machine.mTransitionRelationBDD.getBDDnodesCount () ;
  printf ("  %llu transition%s (%lu node%s).\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
//--- Restrict transitions to target == source
  C_bdd constraint = ~ C_bdd () ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    constraint &= C_bdd ((uint16) i, false) == C_bdd ((uint16) (variablesCount + i), false) ;
  }
  const C_bdd transitionsWithSourceEqualTarget = machine.mTransitionRelationBDD & constraint ; 
  n = transitionsWithSourceEqualTarget.getBDDvaluesCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = transitionsWithSourceEqualTarget.getBDDnodesCount () ;
  printf ("  %llu transition%s with target equals source (%lu node%s).\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
//--- Display transitions from states to different states
  const C_bdd t = machine.mTransitionRelationBDD & ~ transitionsWithSourceEqualTarget ;
  n = t.getBDDvaluesCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = t.getBDDnodesCount () ;
  printf ("  %llu transition%s to other states (%lu node%s).\n",
          n, (n > 1) ? "s" : "",
          nodes, (nodes > 1) ? "s" : "") ;
  if (inDisplayBDDvalues) {
    t.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Enter result in machines array
  ioSaraSystemArray.appendByExchange (machine COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_machineCheck::
compute (C_lexique & /* inLexique */,
         TC_grow_array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const sint32 machineIndex = (sint32) mMachineIndex.getValue () ;
  const C_saraMachine & machine = ioSaraSystemArray (machineIndex COMMA_HERE) ;
  printf ("------------------ Checkings for '%s' machine\n", machine.mMachineName.getStringPtr ()) ;
//--- Checking input configuration is full
  const C_bdd notHandledInputConfigurations = ~ machine.mInitialStatesBDD.existsOnBitsAfterNumber (machine.mInputVariablesCount) ;
  if (notHandledInputConfigurations.isFalse ()) {
    printf ("  All input configurations are handled;\n") ;
  }else{
    const uint64 n = notHandledInputConfigurations.getBDDvaluesCount (machine.mInputVariablesCount) ;
    printf ("  %llu missing input configuration%s:\n", n, (n > 1) ? "s" : "") ;
    notHandledInputConfigurations.printBDD (machine.mNamesArray, machine.mInputVariablesCount, 3) ;
  }
//--- Checking input configuration is not ambiguous
//  Ambiguous set (e, s) := ?s' ((e, s) initial & (e, s') initial et s != s')
  const uint16 variableCount = (uint16) machine.mNamesArray.getCount () ;
  const uint16 outputVariablesCount = (uint16) (variableCount - machine.mInputVariablesCount) ;
  uint16 * substitutionVector = new uint16 [variableCount] ;
  for (uint16 i=0 ; i<machine.mInputVariablesCount ; i++) {
    substitutionVector [i] = i ;
  }
  for (uint16 i=0 ; i<outputVariablesCount ; i++) {
    substitutionVector [i + machine.mInputVariablesCount] = (uint16) (i + variableCount) ;
  }
  const C_bdd sTranslatedInputConfiguration = machine.mInitialStatesBDD.substitution (substitutionVector, variableCount) ;
  delete [] substitutionVector ; substitutionVector = NULL ;
  C_bdd sEqualSprimeConstraint = ~ C_bdd () ;
  for (uint16 i=0 ; i<outputVariablesCount ; i++) {
    sEqualSprimeConstraint &= C_bdd ((uint16) (i + machine.mInputVariablesCount), false) == C_bdd ((uint16) (variableCount + i), false) ;
  }
  const C_bdd ambiguousInput = (machine.mInitialStatesBDD & sTranslatedInputConfiguration & ~ sEqualSprimeConstraint).existsOnBitsAfterNumber (variableCount) ;
  if (ambiguousInput.isFalse ()) {
    printf ("  No ambiguous input configuration;\n") ;
  }else{
    const uint64 n = ambiguousInput.getBDDvaluesCount (variableCount) ;
    printf ("  %llu ambiguous input configuration%s:\n", n, (n > 1) ? "s" : "") ;
    ambiguousInput.printBDD (machine.mNamesArray, 3) ;
  }
//--- Checking transition determinism
// Ambiguous transitions (e, s, e', s') = ? e", s" ((e, s, e', s') transition & (e, s, e", s") transition & (e'=e") et (s'!=s"))
  substitutionVector = new uint16 [variableCount + variableCount] ;
  for (uint16 i=0 ; i<variableCount ; i++) {
    substitutionVector [i] = i ;
    substitutionVector [i+variableCount] = (uint16) (i+variableCount+variableCount) ;
  }
  const C_bdd translatedTransitions = machine.mTransitionRelationBDD.substitution (substitutionVector, (uint16) (variableCount+variableCount)) ;
  delete [] substitutionVector ; substitutionVector = NULL ;
  C_bdd ePrimeEqualsEsecondConstraint = ~ C_bdd () ;
  for (uint16 i=0 ; i<machine.mInputVariablesCount ; i++) {
    ePrimeEqualsEsecondConstraint &= C_bdd ((uint16) (i+variableCount), false) == C_bdd ((uint16) (i + variableCount + variableCount), false) ;
  }
  C_bdd sPrimeEqualsSsecondConstraint = ~ C_bdd () ;
  for (uint16 i=0 ; i<outputVariablesCount ; i++) {
    sPrimeEqualsSsecondConstraint &= C_bdd ((uint16) (i+variableCount+machine.mInputVariablesCount), false) == C_bdd ((uint16) (i+variableCount+variableCount+machine.mInputVariablesCount), false) ;
  }
  const C_bdd ambiguousTransitions = (machine.mTransitionRelationBDD & translatedTransitions & ePrimeEqualsEsecondConstraint & ~ sPrimeEqualsSsecondConstraint).existsOnBitsAfterNumber ((uint16) (variableCount + variableCount)) ;
  if (ambiguousTransitions.isFalse ()) {
    printf ("  No ambiguous transition;\n") ;
  }else{
    const uint64 n = ambiguousTransitions.getBDDvaluesCount ((uint16) (variableCount+variableCount)) ;
    printf ("  %llu ambiguous transition%s:\n", n, (n > 1) ? "s" : "") ;
    TC_unique_dyn_array <C_string> transitionsVariableNameArray ((uint16) (variableCount + variableCount) COMMA_HERE) ;
    for (sint32 i=0 ; i<variableCount ; i++) {
      transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
      transitionsVariableNameArray (variableCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    }
    ambiguousTransitions.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Check that all states accepts all input configurations
//  incomplete states and inputs (e, s, e') = (e, s) is a state & ! s' (e, s, e', s') is not a transition
  const C_bdd incompleteStatesAndInput = machine.mAccessibleStatesBDD & (~ machine.mTransitionRelationBDD).forallOnBitsAfterNumber ((uint16) (variableCount+machine.mInputVariablesCount)) ;
  if (incompleteStatesAndInput.isFalse ()) {
    printf ("  No incomplete state;\n") ;
  }else{
    const uint64 n = incompleteStatesAndInput.getBDDvaluesCount ((uint16) (variableCount+machine.mInputVariablesCount)) ;
    printf ("  %llu incomplete state%s for input:\n", n, (n > 1) ? "s" : "") ;
    TC_unique_dyn_array <C_string> transitionsVariableNameArray ((uint16) (variableCount + variableCount) COMMA_HERE) ;
    for (sint32 i=0 ; i<variableCount ; i++) {
      transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
      transitionsVariableNameArray (variableCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    }
    incompleteStatesAndInput.printBDD (transitionsVariableNameArray, (uint16) (variableCount+machine.mInputVariablesCount), 3) ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_explicitAutomatonDefinition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & /* inSaraSystemArray */,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Build state array names
  TC_unique_dyn_array <C_string> stateNameArray (mStatesMap.getCount () COMMA_HERE) ;
  GGS_M_stateMap::element_type * currentState = mStatesMap.getFirstItem () ;
  { sint32 index = 0 ;
    while (currentState != NULL) {
      stateNameArray (index COMMA_HERE) = currentState->mKey ;
      index ++ ;
      currentState = currentState->getNextItem () ;
    }
  }
//----------------------------------------------------------------------- States BDD array
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//---- For each state defined in source file, we compute the BDD built from
//     state input configuration and state output configuration
  TC_unique_dyn_array <C_bdd> stateExpressionBDD (mStatesMap.getCount () COMMA_HERE) ;
  GGS_L_stateDefinition::element_type * currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
  //--- Get state index
    const sint32 stateIndex = (sint32) currentDefinition->mStateIndex.getValue () ;
  //--- Enter state configuration
    stateExpressionBDD (stateIndex COMMA_HERE) = currentDefinition->mStateExpression ()->computeBDD (0) ;
  //--- Check state configuration is not empty
    if (stateExpressionBDD (stateIndex COMMA_HERE).isFalse ()) {
      C_string errorMessage ;
      errorMessage << "input configuration for state '"
                   << stateNameArray (stateIndex COMMA_HERE)
                   << "' is empty" ;
      currentDefinition->mEndOfStateExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
    }
  //--- Go to next state definition  
    currentDefinition = currentDefinition->getNextItem () ;
  }
//----------------------------------------------------------------------- Check that states are disjoined
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    GGS_L_stateDefinition::element_type * testedState = currentDefinition->getNextItem () ;
    while (testedState != NULL) {
      macroValidPointer (testedState) ;
      if (! (stateExpressionBDD ((sint32) currentDefinition->mStateIndex.getValue () COMMA_HERE)
           & stateExpressionBDD ((sint32) testedState->mStateIndex.getValue () COMMA_HERE)).isFalse ()) {
        C_string errorMessage ;
        errorMessage << "expression for state '"
                   << stateNameArray ((sint32) testedState->mStateIndex.getValue () COMMA_HERE)
                   << "' intersects expression for state '"
                   << stateNameArray ((sint32) currentDefinition->mStateIndex.getValue () COMMA_HERE)
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
  GGS_L_statesDefinitionList::element_type * currentInitialState = mInitialStatesDefinitionList.getFirstItem () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    // printf ("INIT : %ld\n", currentInitialState->mStateIndex.getValue ()) ;
    outInitialStatesBDD |= stateExpressionBDD ((sint32) currentInitialState->mStateIndex.getValue () COMMA_HERE) ;
    currentInitialState = currentInitialState->getNextItem () ;
  }
//--- Check initial states are disjoined
  currentInitialState = mInitialStatesDefinitionList.getFirstItem () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    GGS_L_statesDefinitionList::element_type * testedInitialState = currentInitialState->getNextItem () ;
    while (testedInitialState != NULL) {
      macroValidPointer (testedInitialState) ;
      const C_bdd intersection = stateExpressionBDD ((sint32) currentInitialState->mStateIndex.getValue () COMMA_HERE)
        & stateExpressionBDD ((sint32) testedInitialState->mStateIndex.getValue () COMMA_HERE) ;
      if (! intersection.isFalse ()) {
        C_string errorMessage ;
        errorMessage << "initial state '"
                     << stateNameArray ((sint32) testedInitialState->mStateIndex.getValue () COMMA_HERE)
                     << "' intersects previous initial state '"
                     << stateNameArray ((sint32) currentInitialState->mStateIndex.getValue () COMMA_HERE)
                     << "'" ;
        testedInitialState->mStateLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
      }
      testedInitialState = testedInitialState->getNextItem () ;
    }
    currentInitialState = currentInitialState->getNextItem () ;
  }
//----------------------------------------------------------------------- Terminal states BDD
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//--- Compute BDD initial states
  GGS_L_statesDefinitionList::element_type * currentTerminalState = mTerminalStatesDefinitionList.getFirstItem () ;
  while (currentTerminalState != NULL) {
    macroValidPointer (currentTerminalState) ;
    outTerminalStatesBDD |= stateExpressionBDD ((sint32) currentTerminalState->mStateIndex.getValue () COMMA_HERE) ;
    currentTerminalState = currentTerminalState->getNextItem () ;
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
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
  //--- Get current state index
    const sint32 currentStateIndex = (sint32) currentDefinition->mStateIndex.getValue () ;
  //--- Accumulate transitions targets for each transition
    C_bdd transitionsTargetBDD ;
    GGS_L_transitionDefinition::element_type * currentTransition = currentDefinition->mTransitionsList.getFirstItem () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD (inVariablesCount) ;
      const sint32 targetStateIndex = (sint32) currentTransition->mTargetStateIndex.getValue () ;
      const C_bdd targetStateBDD = stateExpressionBDD (targetStateIndex COMMA_HERE).translate (inVariablesCount, inVariablesCount) ;
      transitionsTargetBDD |= actionBDD & targetStateBDD ;
      currentTransition = currentTransition->getNextItem () ;
    }
  //--- Combine with state BDD
    transitionsTargetBDD &= stateExpressionBDD (currentStateIndex COMMA_HERE) ;
  //--- Accumulate into transitions BDD
    transitionsBDD |= transitionsTargetBDD ;
  //--- Go to next state definition
    currentDefinition = currentDefinition->getNextItem () ;
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
      const C_bdd x = actionBDD & stateExpressionBDD ((sint32) currentTransition->mTargetStateIndex.getValue () COMMA_HERE) ;
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
    const C_bdd allStateToStateTransitions = stateExpression & translatedStateExpression ;
  //--- Restrict transitions to target == source
    C_bdd constraint = ~ C_bdd () ;
    for (sint32 i=0 ; i<inVariablesCount ; i++) {
      constraint &= C_bdd ((uint16) i, false) == C_bdd ((uint16) (inVariablesCount + i), false) ;
    }
    outAccessibilityRelationBDD |= allStateToStateTransitions & constraint ;
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
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftTerminalStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightTerminalStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibleStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Compute and composition
  outInitialStatesBDD = leftInitialStatesBDD & rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD & rightTerminalStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD & rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD & rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_orComposition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftTerminalStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightTerminalStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibleStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Compute or composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD | rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD | rightAccessibilityRelationBDD) | (outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount)) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_strongModalComposition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftTerminalStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightTerminalStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibleStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Check if modal composition is valid
  const C_bdd intersection = leftAccessibleStatesBDD & rightAccessibleStatesBDD ;
  if (! intersection.isFalse ()) {
    C_string errorMessage ;
    errorMessage << "operands transitions intersects, strong modal composition is not valid" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
  }
//--- Compute modal composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD | rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_weakModalComposition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftTerminalStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightTerminalStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibleStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- compute intersection
  const C_bdd intersection = leftAccessibleStatesBDD & rightAccessibleStatesBDD ;
//--- Compute in left operand accessible states from intersection
  C_bdd leftAccessiblesStates ;
  uint16 * substitutionArray = new uint16 [inVariablesCount + inVariablesCount] ;
  for (uint16 i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] = (uint16) (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_bdd newlyAccessibleStates ;
  do{
    leftAccessiblesStates = newlyAccessibleStates ;
    newlyAccessibleStates |= intersection ;
    const C_bdd x = (newlyAccessibleStates & leftAccessibilityRelationBDD).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (! leftAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
//--- Check that only states in intersection are accessible
  if (! intersection.isEqualToBDD (leftAccessiblesStates)) {
    C_string errorMessage ;
    errorMessage << "left operand does not respect weak modam composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
  }
//--- Compute in right operand accessible states from intersection
  C_bdd rightAccessiblesStates ;
  newlyAccessibleStates = C_bdd () ;
  do{
    rightAccessiblesStates = newlyAccessibleStates ;
    newlyAccessibleStates |= intersection ;
    const C_bdd x = (newlyAccessibleStates & rightAccessibilityRelationBDD).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (! rightAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- Check that only states in intersection are accessible
  if (! intersection.isEqualToBDD (rightAccessiblesStates)) {
    C_string errorMessage ;
    errorMessage << "right operand does not respect weak modal composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
  }
//--- Check initial states are compatible
  const bool initialStatesAreCompatible = (intersection & leftInitialStatesBDD).isEqualToBDD (intersection & rightInitialStatesBDD) ;
  if (! initialStatesAreCompatible) {
    C_string errorMessage ;
    errorMessage << "initial states are not compatible with weak modal composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
  }
//--- Check terminal states are compatible
  const bool terminalStatesAreCompatible = (intersection & leftTerminalStatesBDD).isEqualToBDD (intersection & rightTerminalStatesBDD) ;
  if (! terminalStatesAreCompatible) {
    C_string errorMessage ;
    errorMessage << "terminal states are not compatible with weak modal composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
  }
//--- Compute modal composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD | rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_xorComposition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftTerminalStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightTerminalStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibleStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Compute xor composition
  outInitialStatesBDD = leftInitialStatesBDD != rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD != rightTerminalStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD != rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD != rightAccessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_impliesComposition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftTerminalStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightTerminalStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibleStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Compute implies composition
  outInitialStatesBDD = leftInitialStatesBDD.implies (rightInitialStatesBDD) ;
  outTerminalStatesBDD = leftTerminalStatesBDD.implies (rightTerminalStatesBDD) ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD.implies (rightAccessibleStatesBDD) ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD.implies (rightAccessibilityRelationBDD)) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_equalComposition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_bdd leftInitialStatesBDD ;
  C_bdd leftTerminalStatesBDD ;
  C_bdd leftAccessibleStatesBDD ;
  C_bdd leftAccessibilityRelationBDD ;
  mLeftOperand ()->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibleStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_bdd rightInitialStatesBDD ;
  C_bdd rightTerminalStatesBDD ;
  C_bdd rightAccessibleStatesBDD ;
  C_bdd rightAccessibilityRelationBDD ;
  mRightOperand ()->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibleStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Compute implies composition
  outInitialStatesBDD = leftInitialStatesBDD == rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD == rightTerminalStatesBDD ;
  outAccessibleStatesBDD = leftAccessibleStatesBDD == rightAccessibleStatesBDD ;
  outAccessibilityRelationBDD = (leftAccessibilityRelationBDD == rightAccessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_notComposition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_bdd initialStatesBDD ;
  C_bdd terminalStatesBDD ;
  C_bdd accessibleStatesBDD ;
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      initialStatesBDD,
                                      terminalStatesBDD,
                                      accessibleStatesBDD,
                                      accessibilityRelationBDD) ;
//--- Compute not composition
  outInitialStatesBDD = ~ initialStatesBDD ;
  outTerminalStatesBDD = ~ terminalStatesBDD ;
  outAccessibleStatesBDD = ~ accessibleStatesBDD ;
  outAccessibilityRelationBDD = (~ accessibilityRelationBDD) & outAccessibleStatesBDD & outAccessibleStatesBDD.translate (inVariablesCount, inVariablesCount) ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_variableDefinition::
computeFromExpression (C_lexique & /* inLexique */,
                       const TC_grow_array <C_saraMachine> & /* inSaraSystemArray */,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
  const C_bdd bdd ((uint16) (mInputOutputVariableIndex.getValue ()), true) ;
  outInitialStatesBDD = bdd ;
  outTerminalStatesBDD = bdd ;
  outAccessibleStatesBDD = bdd ;
  outAccessibilityRelationBDD = bdd & bdd.translate (inVariablesCount, inVariablesCount) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_existsDefinition::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 /* inVariablesCount */,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
  const uint16 previousVariableCount = (uint16) mPreviousVariableCount.getValue () ;
  const uint16 totalVariableCount = (uint16) mTotalVariableCount.getValue () ;
//--- Compute operand
  C_bdd initialStatesBDD ;
  C_bdd terminalStatesBDD ;
  C_bdd accessibleStatesBDD ;
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      totalVariableCount,
                                      initialStatesBDD,
                                      terminalStatesBDD,
                                      accessibleStatesBDD,
                                      accessibilityRelationBDD) ;
  outInitialStatesBDD = initialStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
  outTerminalStatesBDD = terminalStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
  outAccessibleStatesBDD = accessibleStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
//--- Compute accessibilty relation (NOT OPTIMIZED)
  outAccessibilityRelationBDD = accessibilityRelationBDD.existsOnBitsAfterNumber ((uint16) (totalVariableCount + previousVariableCount)) ;
  for (uint16 i=previousVariableCount ; i<totalVariableCount ; i++) {
    outAccessibilityRelationBDD = outAccessibilityRelationBDD.existsOnBitNumber (i) ;
  }
  uint16 * substitutionVector = new uint16 [totalVariableCount + previousVariableCount] ;
  for (uint16 i=0 ; i<totalVariableCount ; i++) {
    substitutionVector [i] = i ;
  }
  for (uint16 i=totalVariableCount ; i<((uint16) (totalVariableCount + previousVariableCount)) ; i++) {
    substitutionVector [i] = (uint16) (previousVariableCount + i - totalVariableCount) ;
  }
  outAccessibilityRelationBDD = outAccessibilityRelationBDD.substitution (substitutionVector, (uint16) (totalVariableCount + previousVariableCount)) ;
  delete [] substitutionVector ;
}

//---------------------------------------------------------------------------*

void cPtr_C_suppressTerminalStatesOperation::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
  mOperand ()->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibleStatesBDD,
                                      outAccessibilityRelationBDD) ;
  outTerminalStatesBDD = C_bdd () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_fullSaturationOperation::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibleStatesBDD,
                                      accessibilityRelationBDD) ;
//--- translate initial state BDD by inVariablesCount slots
  const C_bdd translatedInitialStates = outInitialStatesBDD.translate (inVariablesCount, inVariablesCount) ;
//--- Add transitions from terminal states to initial states
  outAccessibilityRelationBDD |= outTerminalStatesBDD & translatedInitialStates ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_saturationOperation::
computeFromExpression (C_lexique & inLexique,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_bdd accessibilityRelationBDD ;
  mOperand ()->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibleStatesBDD,
                                      accessibilityRelationBDD) ;
//--- translate initial state BDD by inVariablesCount slots
  const C_bdd translatedInitialStates = outInitialStatesBDD.translate (inVariablesCount, inVariablesCount) ;
//--- All transitions from terminal states to initial states
  const C_bdd allTransitionsFromTerminalToInitial = outTerminalStatesBDD & translatedInitialStates ;
//--- Add transitions from terminal states to initial states
  outAccessibilityRelationBDD |= outTerminalStatesBDD & translatedInitialStates ;
  C_bdd::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_importMachine::
computeFromExpression (C_lexique & /* inLexique */,
                       const TC_grow_array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_bdd & outInitialStatesBDD,
                       C_bdd & outTerminalStatesBDD,
                       C_bdd & outAccessibleStatesBDD,
                       C_bdd & outAccessibilityRelationBDD) const {
//--- Get index of imported machine
  const sint32 indexOfImportedMachine = (sint32) mIndexOfImportedMachine.getValue () ;
//--- Construct substitution arraies
  const uint16 importedMachineVariableCount = (uint16) mTranslationVector.getCount () ;
  uint16 * statesSubstitutionArray = new uint16 [importedMachineVariableCount] ;
  uint16 * transitionsSubstitutionArray = new uint16 [importedMachineVariableCount + importedMachineVariableCount] ;
  GGS_L_translationVector::element_type * p = mTranslationVector.getFirstItem () ;
  sint32 index = 0 ;
  while (p != NULL) {
    macroValidPointer (p) ;
    statesSubstitutionArray [index] = (uint16) p->mTargetSlot.getValue () ;
    transitionsSubstitutionArray [index] = (uint16) p->mTargetSlot.getValue () ;
    transitionsSubstitutionArray [importedMachineVariableCount + index] = (uint16) (inVariablesCount + p->mTargetSlot.getValue ()) ;
    p = p->getNextItem () ;
    index ++ ;
  }
//--- Translate initial state BDD
  outInitialStatesBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mInitialStatesBDD
    .substitution (statesSubstitutionArray, importedMachineVariableCount) ;
//--- Translate terminal state BDD
  outTerminalStatesBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTerminalStatesBDD
   .substitution (statesSubstitutionArray, importedMachineVariableCount) ;
//--- Translate accessible state BDD
  outAccessibleStatesBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mAccessibleStatesBDD
   .substitution (statesSubstitutionArray, importedMachineVariableCount) ;
//--- Translate transitions BDD
  outAccessibilityRelationBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTransitionRelationBDD
    .substitution (transitionsSubstitutionArray, (uint16) (importedMachineVariableCount + importedMachineVariableCount)) ;
//---
  C_bdd::markAndSweepUnusedNodes () ;
  delete [] statesSubstitutionArray ;
  delete [] transitionsSubstitutionArray ;
}

//---------------------------------------------------------------------------*
