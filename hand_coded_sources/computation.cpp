//---------------------------------------------------------------------------*
//                                                                           *
//  Implementation of overrided methods for SARA                             *                                                               *
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

class C_saraSystem {
  public : C_saraSystem (void) ;
  public : TC_unique_dyn_array <C_string> mStateNameArray ;
  public : TC_unique_dyn_array <C_string> mInputNamesArray ;
  public : TC_unique_dyn_array <C_string> mOutputNamesArray ;
  public : C_bdd mOutputApplication ;
  public : C_bdd mNextStateFunction ;
} ;

//---------------------------------------------------------------------------*

C_saraSystem::C_saraSystem (void) :
mStateNameArray (0 COMMA_HERE),
mInputNamesArray (0 COMMA_HERE),
mOutputNamesArray (0 COMMA_HERE) {
}

//---------------------------------------------------------------------------*

void swap (C_saraSystem & ioOperand1,
           C_saraSystem & ioOperand2) ;

void swap (C_saraSystem & ioOperand1,
           C_saraSystem & ioOperand2) {
  swap (ioOperand1.mStateNameArray, ioOperand2.mStateNameArray) ;
  swap (ioOperand1.mInputNamesArray, ioOperand2.mInputNamesArray) ;
  swap (ioOperand1.mOutputNamesArray, ioOperand2.mOutputNamesArray) ;
  swap (ioOperand1.mOutputApplication, ioOperand2.mOutputApplication) ;
  swap (ioOperand1.mNextStateFunction, ioOperand2.mNextStateFunction) ;
}

//---------------------------------------------------------------------------*

void
performComputations (C_lexique & inLexique,
                     GGS_M_componentMap  & inComponentMap) {
  if (inLexique.getCurrentFileErrorsCount () == 0) {
    TC_grow_array <C_saraSystem> saraSystemArray (0 COMMA_HERE) ;
  //--- Options
    const bool displayBDDvaluesCount = inLexique.getBoolOptionValueFromKeys ("sara_cli_options", "displayBDDvaluesCount", true) ;
    const bool displayBDDvalues = inLexique.getBoolOptionValueFromKeys ("sara_cli_options", "displayBDDvalues", true) ;
  //--- Loop for each component
    GGS_M_componentMap::element_type * currentComponent = inComponentMap.getFirstItem () ;
    while (currentComponent != NULL) {
      macroValidPointer (currentComponent) ;
      printf ("------------------ Computations for %s component\n", currentComponent->mKey.getStringPtr ()) ;
      C_saraSystem system ;
      currentComponent->mInfo.mComponent ()->compute (inLexique, 
                                                      displayBDDvaluesCount,
                                                      displayBDDvalues,
                                                      system.mStateNameArray,
                                                      system.mInputNamesArray,
                                                      system.mOutputNamesArray,
                                                      system.mOutputApplication,
                                                      system.mNextStateFunction) ;
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
         TC_unique_dyn_array <C_string> & outStateNameArray,
         TC_unique_dyn_array <C_string> & outInputNamesArray,
         TC_unique_dyn_array <C_string> & outOutputNamesArray,
         C_bdd & outOutputApplication,
         C_bdd & outNextStateFunction) const {
//--- Compute transitions count
  sint32 transitionsCount = 0 ;
  GGS_L_stateDefinition::element_type * currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    transitionsCount += currentDefinition->mTransitionsList.getCount () ;
    currentDefinition = currentDefinition->getNextItem () ;
  }
//--- Build state array names
  { TC_unique_dyn_array <C_string> stateNameArray (mStatesMap.getCount () COMMA_HERE) ;
    swap (stateNameArray, outStateNameArray) ;
  }
  GGS_M_stateMap::element_type * currentState = mStatesMap.getFirstItem () ;
  sint32 index = 0 ;
  while (currentState != NULL) {
    outStateNameArray (index COMMA_HERE) = currentState->mKey ;
    index ++ ;
    currentState = currentState->getNextItem () ;
  }
//--- Build input variables array names
  const sint32 inputVariablesCount = mInputVariableMap.getCount () ;
  { TC_unique_dyn_array <C_string> inputVariableNameArray (inputVariablesCount COMMA_HERE) ;
    swap (inputVariableNameArray, outInputNamesArray) ;
  }
  GGS_M_inputOutputVarMap::element_type * currentInputVar = mInputVariableMap.getFirstItem () ;
  index = 0 ;
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
//--- Print message
  printf ("%ld state%s, %ld transition%s, %ld input variable%s.\n",
          mStateDefinitionList.getCount (),
          (mStateDefinitionList.getCount () > 1) ? "s" : "",
          transitionsCount,
          (transitionsCount > 1) ? "s" : "",
          mInputVariableMap.getCount (),
          (mInputVariableMap.getCount () > 1) ? "s" : "") ;
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
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
  //--- Enter input configuration
    stateInputExpressionBDD (index COMMA_HERE) = currentDefinition->mStateInputExpression ()->computeBDD (0) ;
  //--- Check input configuration is not empty
    if (stateInputExpressionBDD (index COMMA_HERE).isFalse ()) {
      C_string errorMessage ;
      errorMessage << "input configuration for state '"
                   << outStateNameArray (currentDefinition->mStateIndex.getValue () COMMA_HERE)
                   << "' is empty" ;
      currentDefinition->mEndOfStateInputExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
    }
  //--- Enter output configuration
    stateOutputExpressionBDD (index COMMA_HERE) = currentDefinition->mStateOutputExpression ()->computeBDD (inputVariablesCount) ;
  //--- Check ouptut configuration is not empty
    if (stateOutputExpressionBDD (index COMMA_HERE).isFalse ()) {
      C_string errorMessage ;
      errorMessage << "output configuration for state '"
                   << outStateNameArray (currentDefinition->mStateIndex.getValue () COMMA_HERE)
                   << "' is empty" ;
      currentDefinition->mEndOfStateOutputExpression.signalSemanticError (inLexique, errorMessage.getStringPtr ()) ;
    }
  //--- Enter output configuration
    stateExpressionBDD (index COMMA_HERE) = stateInputExpressionBDD (index COMMA_HERE) & stateOutputExpressionBDD (index COMMA_HERE) ;
  //--- Go to next state definition  
    currentDefinition = currentDefinition->getNextItem () ;
    index ++ ;
  }
//----------------------------------------------------------------------- Initial states BDD
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//--- Define initial states BDD bits names
  const uint16 initialStatesBDDbitCount = outputVariablesCount + inputVariablesCount ;
  TC_unique_dyn_array <C_string> initialStatesBitNames (initialStatesBDDbitCount COMMA_HERE) ;
  for (uint16 i=0 ; i<inputVariablesCount ; i++) {
    initialStatesBitNames (i COMMA_HERE) = outInputNamesArray (i COMMA_HERE) ;
  }
  for (uint16 i=inputVariablesCount ; i<initialStatesBDDbitCount ; i++) {
    initialStatesBitNames (i COMMA_HERE) = outOutputNamesArray (i-inputVariablesCount COMMA_HERE) ;
  }
//--- Compute BDD initial states
  C_bdd initialStatesBDD ;
  GGS_L_initialStatesDefinitionList::element_type * currentInitialState = mInitialStatesDefinitionList.getFirstItem () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    initialStatesBDD |= stateExpressionBDD (currentInitialState->mInitialStateIndex.getValue () COMMA_HERE) ;
    currentInitialState = currentInitialState->getNextItem () ;
  }
//--- Display initial states BDD
  if (inDisplayBDDvaluesCount || inDisplayBDDvalues) {
    const uint64 n = initialStatesBDD.getBDDvaluesCount (initialStatesBDDbitCount) ;
    const uint32 nodes = initialStatesBDD.getBDDnodesCount () ;
    printf ("  %llu initial state%s (%lu node%s);\n",
            n, (n > 1) ? "s" : "",
	    		  nodes, (nodes > 1) ? "s" : "") ;
    if (inDisplayBDDvalues) {
      printf ("Initial states BDD :\n") ;
      initialStatesBDD.printBDD (initialStatesBitNames) ;
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
                     << outStateNameArray (testedInitialState->mInitialStateIndex.getValue () COMMA_HERE)
                     << "' intersects previous initial state '"
                     << outStateNameArray (currentInitialState->mInitialStateIndex.getValue () COMMA_HERE)
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
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD (initialStatesBDDbitCount) ;
      const uint32 targetStateIndex = currentTransition->mTargetStateIndex.getValue () ;
      const C_bdd targetStateBDD = stateOutputExpressionBDD (targetStateIndex COMMA_HERE).translate (initialStatesBDDbitCount, initialStatesBDDbitCount) ;
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
  const uint16 transitionsBDDbitCount = initialStatesBDDbitCount + initialStatesBDDbitCount ;
  TC_unique_dyn_array <C_string> transitionBDDbitNames (transitionsBDDbitCount COMMA_HERE) ;
  for (uint16 i=0 ; i<inputVariablesCount ; i++) {
    transitionBDDbitNames (i COMMA_HERE) = outInputNamesArray (i COMMA_HERE) ;
  }
  for (uint16 i=inputVariablesCount ; i<initialStatesBDDbitCount ; i++) {
    transitionBDDbitNames (i COMMA_HERE) = outOutputNamesArray (i-inputVariablesCount COMMA_HERE) ;
  }
  for (uint16 i=0 ; i<inputVariablesCount ; i++) {
    transitionBDDbitNames (i+initialStatesBDDbitCount COMMA_HERE) = outInputNamesArray (i COMMA_HERE) ;
  }
  for (uint16 i=inputVariablesCount ; i<initialStatesBDDbitCount ; i++) {
    transitionBDDbitNames (i+initialStatesBDDbitCount COMMA_HERE) = outOutputNamesArray (i-inputVariablesCount COMMA_HERE) ;
  }
//--- Display transitions BDD
  if (inDisplayBDDvaluesCount || inDisplayBDDvalues) {
    const uint64 n = transitionsBDD.getBDDvaluesCount (transitionsBDDbitCount) ;
    const uint32 nodes = transitionsBDD.getBDDnodesCount () ;
    printf ("  %llu transition%s (%lu node%s);\n",
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
      printf ("For state %s :\n", outStateNameArray (stateIndex COMMA_HERE).getStringPtr ()) ;
    }
  //--- Check that action does not intersect with state input expression
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
    //--- Goto next transition
      currentTransition = currentTransition->getNextItem () ;
    }
  //--- Goto next state
    currentDefinition = currentDefinition->getNextItem () ;
  }
/*      completudeTest |= actionBDD ;
      if (inDisplayBDDvaluesCount || inDisplayBDDvalues) {
		    const uint64 n = actionBDD.getBDDvaluesCount ((uint16) mInputVariableMap.getCount ()) ;
	      const uint32 nodes = actionBDD.getBDDnodesCount () ;
        printf ("  Transition %ld : %llu action%s (%lu node%s);\n",
		        index, n, (n > 1) ? "s" : "",
			    nodes, (nodes > 1) ? "s" : "") ;
        if (inDisplayBDDvalues) {
          actionBDD.printBDD (outInputNamesArray) ;
        }
      }
      if (actionBDD.isTrue ()) {
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, "expression is always true") ;
      }else if (actionBDD.isFalse ()) {
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, "expression is always false") ;
      }else if (! (actionBDD & stateInputBDD).isFalse ()) {
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, "expression intersects with state expression") ;
      }
      actionBDDarray (index COMMA_HERE) = actionBDD ;
      locationArray (index COMMA_HERE) = currentTransition->mEndOfExpression ;
      index ++ ;
    //--- Next transition  
      currentTransition = currentTransition->getNextItem () ;
    }
  //--- Completude check error ?
    if (! completudeTest.isTrue ()) {
      const uint64 v = completudeTest.getBDDvaluesCount ((uint16) inputVariablesCount) ;
      C_string errorMessage ;
      errorMessage << "completude check error for this state ("
                   << v
                   << " values instead of 2**"
                   << inputVariablesCount
                   << " : "
                   << ((v * 100ULL) / (1ULL << inputVariablesCount))
                   << "%)" ;
      currentDefinition->mEndOfExpression.signalSemanticError (inLexique, errorMessage) ;
    }
  //--- Check that action expressions are disjoint
    for (sint32 i=1 ; i<transitionsCount ; i++) {
      for (sint32 j=0 ; j<i ; j++) {
        const C_bdd intersection = actionBDDarray (i COMMA_HERE) & actionBDDarray (j COMMA_HERE) ;
        if (! intersection.isFalse ()) {
          C_string errorMessage ;
          errorMessage << "For this state definition, action intersects with action for transition " << (j+1) ;
          locationArray (i COMMA_HERE).signalSemanticError (inLexique, errorMessage) ;
        }
      }
    }
  //--- Next state definition  
    currentDefinition = currentDefinition->getNextItem () ;
  }
//--- Compute the bit number for representing a state
  sint32 temp = (mStatesMap.getCount () - 1) >> 1 ;
  uint16 bitCountForStateBDD = 1 ;
  while (temp > 0) {
    bitCountForStateBDD ++ ;
    temp >>= 1 ;
  }*/
  // printf ("states need %ld bits.\n", bitCountForStateBDD) ;


//  printf ("Initial state BDD :\bitCountForStateBDD") ;
//  initialStateBDD.printBDD (stateBitNames) ;
//--- Build accessibility relation
/*  C_bdd accessibilityRelation ;
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    const C_bdd sourceStateBDD = C_bdd::varCompareConst (0, bitCountForStateBDD, C_bdd::kEqual, currentDefinition->mStateIndex.getValue ()) ;
    GGS_L_transitionDefinition::element_type * currentTransition = currentDefinition->mTransitionsList.getFirstItem () ;
    C_bdd targetStatesBDD ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
      targetStatesBDD |= C_bdd::varCompareConst (bitCountForStateBDD, bitCountForStateBDD, C_bdd::kEqual, currentTransition->mTargetStateIndex.getValue ()) ;
      currentTransition = currentTransition->getNextItem () ;
    }
    accessibilityRelation |= sourceStateBDD & targetStatesBDD ;
    currentDefinition = currentDefinition->getNextItem () ;
  }
  TC_unique_dyn_array <C_string> accessibilityRelationBitNames (bitCountForStateBDD+bitCountForStateBDD COMMA_HERE) ;
  for (uint16 i=0 ; i<bitCountForStateBDD ; i++) {
    accessibilityRelationBitNames (i COMMA_HERE) << "Source" << i ;
    accessibilityRelationBitNames (bitCountForStateBDD+i COMMA_HERE) << "Target" << i ;
  }*/
//  printf ("Accessibility relation BDD :\bitCountForStateBDD") ;
//  accessibilityRelation.printBDD (accessibilityRelationBitNames) ;
//--- Check accessibility
/*  uint16 * substitutionArray = new uint16 [bitCountForStateBDD + bitCountForStateBDD] ;
  for (uint16 i=0 ; i<bitCountForStateBDD ; i++) {
    substitutionArray [i] = (uint16) (bitCountForStateBDD + i) ;
    substitutionArray [bitCountForStateBDD + i] = i ;
  }
  C_bdd accessibleStates ;
  C_bdd newlyAccessibleStates ;
  do{
    accessibleStates = newlyAccessibleStates ;
    newlyAccessibleStates |= initialStateBDD ;
    C_bdd x = (newlyAccessibleStates & accessibilityRelation).substitution (substitutionArray, (uint16) (bitCountForStateBDD + bitCountForStateBDD)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (bitCountForStateBDD) ;
  }while (! accessibleStates.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//  printf ("Accessible states BDD :\bitCountForStateBDD") ;
//  newlyAccessibleStates.printBDD (stateBitNames) ;
//--- Compute and display non accessible states
  C_bdd nonAccessibleStates = C_bdd::varCompareConst (0, bitCountForStateBDD, C_bdd::kStrictLower, mStateDefinitionList.getCount ()) & ~ newlyAccessibleStates ;
  if (! nonAccessibleStates.isFalse ()) {
    TC_unique_grow_array <uint64> valuesArray ;
    nonAccessibleStates.buildValuesArray (valuesArray, bitCountForStateBDD) ;
    C_string errorMessage ;
    if (valuesArray.getCount () == 1) {
      errorMessage << "Following state is not accessible : " 
                   << outStateNameArray ((sint32) valuesArray (0 COMMA_HERE) COMMA_HERE);
    }else{
      errorMessage << "Following states are not accessible : "
                   << outStateNameArray ((sint32) valuesArray (0 COMMA_HERE) COMMA_HERE);
      for (sint32 i=1 ; i<valuesArray.getCount () ; i++) {
        errorMessage << ", " << outStateNameArray ((sint32) valuesArray (i COMMA_HERE) COMMA_HERE) ;
      }
    }
    mEndOfDefinition.signalSemanticError (inLexique, errorMessage) ;
  }
//--- Check transitions/state stability
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    GGS_L_transitionDefinition::element_type * currentTransition = currentDefinition->mTransitionsList.getFirstItem () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
      const uint32 targetStateIndex = currentTransition->mTargetStateIndex.getValue () ;
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD () ;
      const C_bdd check = actionBDD.implies (stateExpression ((sint32) targetStateIndex COMMA_HERE)) ;
      if (! check.isTrue ()) {
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, "stability condition is not verified for this transition") ;
      }
      currentTransition = currentTransition->getNextItem () ;
    }
    currentDefinition = currentDefinition->getNextItem () ;
  }
//--- Build output application
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    const C_bdd sourceStateBDD = C_bdd::varCompareConst (0, bitCountForStateBDD, C_bdd::kEqual, currentDefinition->mStateIndex.getValue ()) ;
    C_bdd outputConfiguration ; outputConfiguration.setToTrue () ;
    GGS_L_outputValues::element_type * currentOutputDefinition = currentDefinition->mOutputValues.getFirstItem () ;
    while (currentOutputDefinition != NULL) {
      const uint32 outputVariableIndex = currentOutputDefinition->mOutputVariableIndex.getValue () ;
      const uint32 outputValue = currentOutputDefinition->mOutputValue.getValue () ;
      currentOutputDefinition = currentOutputDefinition->getNextItem () ;
      outputConfiguration &= C_bdd::varCompareConst ((uint16) (bitCountForStateBDD + outputVariableIndex), 1, C_bdd::kEqual, outputValue) ;
    }
    outOutputApplication |= sourceStateBDD & outputConfiguration ;
    currentDefinition = currentDefinition->getNextItem () ;
  }
  if (inDisplayBDDvalues) {
    printf ("Output function BDD :\n") ;
    TC_unique_dyn_array <C_string> stateBitNamesAndOutputNames (bitCountForStateBDD + mOutputVariableMap.getCount () COMMA_HERE) ;
     for (sint32 i=0 ; i<bitCountForStateBDD ; i++) {
      stateBitNamesAndOutputNames (i COMMA_HERE) = stateBitNames (i COMMA_HERE) ;
    }
    for (sint32 i=0 ; i<outputVariablesCount ; i++) {
      stateBitNamesAndOutputNames (bitCountForStateBDD + i COMMA_HERE) = outOutputNamesArray (i COMMA_HERE) ;
    }
    outOutputApplication.printBDD (stateBitNamesAndOutputNames) ;
  }
//--- Build next state application
  currentDefinition = mStateDefinitionList.getFirstItem () ;
  while (currentDefinition != NULL) {
    const C_bdd sourceStateBDD = C_bdd::varCompareConst (0, bitCountForStateBDD, C_bdd::kEqual, currentDefinition->mStateIndex.getValue ()) ;
    const C_bdd stateInputBDD = currentDefinition->mExpression ()->computeBDD () ;
    C_bdd actionAndTarget = stateInputBDD.translate ((uint16) inputVariablesCount, bitCountForStateBDD)
            & C_bdd::varCompareConst ((uint16) (inputVariablesCount + bitCountForStateBDD), bitCountForStateBDD, C_bdd::kEqual, currentDefinition->mStateIndex.getValue ()) ;    
    GGS_L_transitionDefinition::element_type * currentTransition = currentDefinition->mTransitionsList.getFirstItem () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
      const uint32 targetStateIndex = currentTransition->mTargetStateIndex.getValue () ;
      const C_bdd actionBDD = currentTransition->mActionExpression ()->computeBDD () ;
      actionAndTarget |= actionBDD.translate ((uint16) inputVariablesCount, bitCountForStateBDD)
            & C_bdd::varCompareConst ((uint16) (inputVariablesCount + bitCountForStateBDD), bitCountForStateBDD, C_bdd::kEqual, targetStateIndex) ;
      currentTransition = currentTransition->getNextItem () ;
    }
    outNextStateFunction |= sourceStateBDD & actionAndTarget ;
    currentDefinition = currentDefinition->getNextItem () ;
  }
  if (inDisplayBDDvalues) {
    printf ("Next state function BDD :\n") ;
    TC_unique_dyn_array <C_string> stateNextStateFunctionBitNames (bitCountForStateBDD + bitCountForStateBDD + inputVariablesCount COMMA_HERE) ;
     for (sint32 i=0 ; i<bitCountForStateBDD ; i++) {
      stateNextStateFunctionBitNames (i COMMA_HERE) = stateBitNames (i COMMA_HERE) ;
      stateNextStateFunctionBitNames (bitCountForStateBDD + inputVariablesCount + i COMMA_HERE) = stateBitNames (i COMMA_HERE) ;
    }
    for (sint32 i=0 ; i<inputVariablesCount ; i++) {
      stateNextStateFunctionBitNames (bitCountForStateBDD + i COMMA_HERE) = outInputNamesArray (i COMMA_HERE) ;
    }
    outNextStateFunction.printBDD (stateNextStateFunctionBitNames) ;
  }*/
}

//---------------------------------------------------------------------------*
