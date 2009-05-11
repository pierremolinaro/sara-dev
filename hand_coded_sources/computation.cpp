//---------------------------------------------------------------------------*
//                                                                           *
//  Implementation of specific methods for SARA                              *
//                                                                           *
//  Copyright (C) 2004, ..., 2008 Eva Rakotomalala & Pierre Molinaro.        *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
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
#include "collections/TC_Array.h"
#include "utilities/MF_MemoryControl.h"
#include "time/C_Timer.h"

//---------------------------------------------------------------------------*

C_BDD cPtr_C_VariableExpression::
computeBDD (C_Compiler & /* inLexique */,
            const TC_Array <C_saraMachine> & /* inSaraSystemArray */,
            const uint16 /* inVariablesCount */,
            const uint16 inBDDslotOffset) const {
  return C_BDD ((uint16) (mInputVarIndex.uintValue () + inBDDslotOffset), true) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_trueExpression::
computeBDD (C_Compiler & /* inLexique */,
            const TC_Array <C_saraMachine> & /* inSaraSystemArray */,
            const uint16 /* inVariablesCount */,
            const uint16 /* inBDDslotOffset */) const {
  return ~ C_BDD () ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_falseExpression::
computeBDD (C_Compiler & /* inLexique */,
            const TC_Array <C_saraMachine> & /* inSaraSystemArray */,
            const uint16 /* inVariablesCount */,
            const uint16 /* inBDDslotOffset */) const {
  return C_BDD () ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_notExpression::
computeBDD (C_Compiler & inLexique,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint16 inVariablesCount,
            const uint16 inBDDslotOffset) const {
  return ~ mExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_andExpression::
computeBDD (C_Compiler & inLexique,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint16 inVariablesCount,
            const uint16 inBDDslotOffset) const {
  return mLeftExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
      & mRightExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_orExpression::
computeBDD (C_Compiler & inLexique,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint16 inVariablesCount,
            const uint16 inBDDslotOffset) const {
  return mLeftExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
      | mRightExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_xorExpression::
computeBDD (C_Compiler & inLexique,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint16 inVariablesCount,
            const uint16 inBDDslotOffset) const {
  return mLeftExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
     != mRightExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_impliesExpression::
computeBDD (C_Compiler & inLexique,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint16 inVariablesCount,
            const uint16 inBDDslotOffset) const {
  return mLeftExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
    .implies (mRightExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset)) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_equalExpression::
computeBDD (C_Compiler & inLexique,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint16 inVariablesCount,
            const uint16 inBDDslotOffset) const {
  return mLeftExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset)
     == mRightExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inBDDslotOffset) ;
}

//---------------------------------------------------------------------------*

C_BDD cPtr_C_importBoolMachine::
computeBDD (C_Compiler & inLexique,
            const TC_Array <C_saraMachine> & inSaraSystemArray,
            const uint16 /* inVariablesCount */,
            const uint16 /* inBDDslotOffset */) const {
//--- Get index of imported machine
  const sint32 indexOfImportedMachine = (sint32) mIndexOfImportedMachine.uintValue () ;
//--- Check that imported machine is actually boolean
  const C_BDD initialStatesOfImportedMachine = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mInitialStatesBDD ;
  const C_BDD terminalStatesOfImportedMachine = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTerminalStatesBDD ;
  const C_BDD transitionsOfImportedMachine = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTransitionRelationBDD ;
  if (! initialStatesOfImportedMachine.isEqualToBDD (terminalStatesOfImportedMachine)) {
    C_String errorMessage ("this machine is not combinatory (initial states != terminal states), so it cannot be imported in boolean expression") ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }
  const uint16 importedMachineVariableCount = (uint16) mTranslationVector.count () ;
  const C_BDD boolAccessibilityRelationBDD = initialStatesOfImportedMachine & initialStatesOfImportedMachine.translate (importedMachineVariableCount, importedMachineVariableCount) ;
  if (! boolAccessibilityRelationBDD.isEqualToBDD (transitionsOfImportedMachine)) {
    C_String errorMessage ("this machine is not combinatory (transitions != initial states x initial states), so it cannot be imported in boolean expression") ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }
//--- Construct substitution arraies
  uint16 * statesSubstitutionArray = new uint16 [importedMachineVariableCount] ;
  GGS_L_translationVector::cElement * p = mTranslationVector.firstObject () ;
  sint32 index = 0 ;
  while (p != NULL) {
    macroValidPointer (p) ;
    statesSubstitutionArray [index] = (uint16) p->mTargetSlot.uintValue () ;
    p = p->nextObject () ;
    index ++ ;
  }
//--- Translate initial state BDD
  C_BDD initialStatesBDD = initialStatesOfImportedMachine.substitution (statesSubstitutionArray, importedMachineVariableCount) ;
//---
  delete [] statesSubstitutionArray ;
//--- Return initial states
  return initialStatesBDD ;
}

//---------------------------------------------------------------------------*

C_saraMachine::C_saraMachine (void):
mMachineName (),
mInputVariablesCount (0),
mInputAndInternalVariablesCount (0),
mNamesArray (0 COMMA_HERE),
mInitialStatesBDD (),
mTerminalStatesBDD (),
mTransitionRelationBDD (),
mAccessibleStatesBDD () {
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
routine_performComputations (C_Compiler & inLexique,
                             const GGS_L_jobList inComponentMap
                             COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.totalErrorCount () == 0) {
    TC_Array <C_saraMachine> saraSystemArray (0 COMMA_HERE) ;
  //--- Options
    const bool displayBDDvaluesCount = inLexique.boolOptionValueFromKeys ("sara_cli_options", "displayBDDvaluesCount" COMMA_HERE) ;
    const bool displayBDDvalues = inLexique.boolOptionValueFromKeys ("sara_cli_options", "displayBDDvalues" COMMA_HERE) ;
  //--- Initial cache and map sizes
    co << "Initial size of BDD unique table: "
       << cStringWithSigned (C_BDD::getHashMapEntriesCount ())
       << "; initial size of ITE cache: "
       << cStringWithSigned (C_BDD::getITEcacheEntriesCount ())
       << "; initial size of AND cache: "
       << cStringWithSigned (C_BDD::getANDcacheEntriesCount ())
       << ".\n" ;
    switch (C_BDD::getComputingMode ()) {
    case C_BDD::ITE_COMPUTED_FROM_AND :
      co << "ITE is computed from AND.\n\n" ;
      break ;
    case C_BDD::AND_COMPUTED_FROM_ITE :
      co << "AND is computed from ITE.\n\n" ;
      break ;
    case C_BDD::ITE_and_AND_ARE_INDEPENDANT :
      co << "AND and ITE are computed independantly.\n\n" ;
      break ;
    }  
    fflush (stdout) ;
  //--- Loop for each component
    GGS_L_jobList::cElement * currentComponent = inComponentMap.firstObject () ;
    while (currentComponent != NULL) {
      macroValidPointer (currentComponent) ;
      C_saraMachine system ;
      currentComponent->mComponent (HERE)->compute (inLexique, 
                                                saraSystemArray,
                                                displayBDDvaluesCount,
                                                displayBDDvalues) ;
      fflush (stdout) ;
      currentComponent = currentComponent->nextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_machineComponent::
compute (C_Compiler & inLexique,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool inDisplayBDDvalues) const {
  co << "------------------ Computations for '" << mMachineName << "' machine\n" ;
  C_saraMachine machine ;
  machine.mMachineName = mMachineName ;
//--- Build input variables array names
  const uint16 inputVariablesCount = (uint16) mInputVariableCount.uintValue () ;
  machine.mInputVariablesCount = inputVariablesCount ;
  const uint16 variablesCount = (uint16) mVariablesMap.count () ;
  const uint16 inputAndInternalVariablesCount = (uint16) mInputAndInternalVariableCount.uintValue () ;
  machine.mInputAndInternalVariablesCount = inputAndInternalVariablesCount ;
  { TC_UniqueArray <C_String> variableNamesArray (variablesCount, "" COMMA_HERE) ;
    swap (machine.mNamesArray, variableNamesArray) ;
  }
  GGS_M_variablesMap::cElement * currentVar = mVariablesMap.firstObject () ;
  sint32 index = 0 ;
  while (currentVar != NULL) {
    machine.mNamesArray (index COMMA_HERE) = currentVar->mKey ;
    index ++ ;
    currentVar = currentVar->nextObject () ;
  }
//--- Compute automaton from definition expression
  mDefinition (HERE)->computeFromExpression (inLexique,
                                         ioSaraSystemArray,
                                         variablesCount,
                                         machine.mInitialStatesBDD,
                                         machine.mTerminalStatesBDD,
                                         machine.mTransitionRelationBDD) ;
//--- Compute accessible states
  uint16 * substitutionArray = new uint16 [variablesCount + variablesCount] ;
  for (uint16 i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] = (uint16) (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    machine.mAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= machine.mInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & machine.mTransitionRelationBDD).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
  }while (! machine.mAccessibleStatesBDD.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- 
  machine.mTransitionRelationBDD &= machine.mAccessibleStatesBDD ;
  machine.mTerminalStatesBDD &= machine.mAccessibleStatesBDD ;

//---   
  TC_UniqueArray <C_String> transitionsVariableNameArray (variablesCount + variablesCount, "" COMMA_HERE) ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    transitionsVariableNameArray (variablesCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
  }
//--- Print messages
  const sint32 outputVariablesCount = variablesCount - inputAndInternalVariablesCount ;
  const sint32 internalVariablesCount = inputAndInternalVariablesCount - inputVariablesCount ;
  co << "  " << cStringWithSigned (inputVariablesCount)
     << " input variable" << ((inputVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (internalVariablesCount)
     << " internal variable"
     << ((internalVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (outputVariablesCount)
     << " output variable" << ((outputVariablesCount > 1) ? "s" : "") << ";\n" ;
  uint64 n = machine.mInitialStatesBDD.valueCount (variablesCount) ;
  uint32 nodes = machine.mInitialStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n)
     << " initial state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mInitialStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTerminalStatesBDD.valueCount (variablesCount) ;
  nodes = machine.mTerminalStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n)
     << " terminal state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mTerminalStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mAccessibleStatesBDD.valueCount (variablesCount) ;
  nodes = machine.mAccessibleStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n)
     << " accessible state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mAccessibleStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTransitionRelationBDD.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = machine.mTransitionRelationBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n)
     << " transition" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    machine.mTransitionRelationBDD.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Restrict transitions to target == source
  C_BDD constraint = ~ C_BDD () ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    constraint &= C_BDD ((uint16) i, false) == C_BDD ((uint16) (variablesCount + i), false) ;
  }
  const C_BDD transitionsWithSourceEqualTarget = machine.mTransitionRelationBDD & constraint ; 
  n = transitionsWithSourceEqualTarget.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = transitionsWithSourceEqualTarget.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n)
     << " transition" << ((n > 1) ? "s" : "")
     << " with target equals source (" << cStringWithUnsigned (nodes)
     << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    transitionsWithSourceEqualTarget.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Display transitions from states to different states
  const C_BDD t = machine.mTransitionRelationBDD & ~ transitionsWithSourceEqualTarget ;
  n = t.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = t.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n)
     << " transition" << ((n > 1) ? "s" : "")
     << " to other states (" << cStringWithUnsigned (nodes)
     << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    t.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Enter result in machines array
  ioSaraSystemArray.addObjectUsingSwap (machine) ;
//--- Mark and sweep unused BDD nodes
  C_BDD::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_machineCheckIdentical::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const sint32 machineIndex1 = (sint32) mMachineIndex1.uintValue () ;
  const sint32 machineIndex2 = (sint32) mMachineIndex2.uintValue () ;
  const C_saraMachine & machine1 = ioSaraSystemArray (machineIndex1 COMMA_HERE) ;
  const C_saraMachine & machine2 = ioSaraSystemArray (machineIndex2 COMMA_HERE) ;
  co << "------------------ Checking '"
     << machine1.mMachineName
     << "' and '"
     << machine2.mMachineName
     << "' machines identical\n" ;
  bool ok = true ;
//--- Check that input variable count are the same
  if (machine1.mInputVariablesCount == machine2.mInputVariablesCount) {
    co << "  Same input variable count (" << cStringWithUnsigned (machine1.mInputVariablesCount) << ") ;\n" ;
  }else{
    ok = false ;
    co << "  Error: first machine has "
       << cStringWithUnsigned (machine1.mInputVariablesCount)
       << " input variable"
       << ((machine1.mInputVariablesCount > 1) ? "s" : "")
       << ", second one "
       << cStringWithSigned (machine2.mInputVariablesCount)
       << " ;\n" ;
  }
//--- Check that all variable count are the same
  const sint32 internalAndOutputVariableCount1 = machine1.mNamesArray.count () - machine1.mInputVariablesCount ;
  const sint32 internalAndOutputVariableCount2 = machine2.mNamesArray.count () - machine2.mInputVariablesCount ;
  if (internalAndOutputVariableCount1 == internalAndOutputVariableCount2) {
    co << "  Same internal and output variable count (" << cStringWithSigned (internalAndOutputVariableCount1) << ");\n" ;
  }else{
    ok = false ;
    co << "  Error: first machine has "
       << cStringWithSigned (internalAndOutputVariableCount1)
       << " internal and output variable"
       << ((internalAndOutputVariableCount1 > 1) ? "s" : "")
       << ", second one " << cStringWithSigned (internalAndOutputVariableCount2) << " ;\n" ;
  }
//--- Check initial states are identical
  bool identical = ok ;
  if (ok) {
    if (machine2.mInitialStatesBDD.isEqualToBDD (machine1.mInitialStatesBDD)) {
      co << "  Same initial states;\n" ;
    }else{
      identical = false ;
      co << "  Error: initial states are different;\n" ;
    }
  }
//--- Check terminal states are identical
  if (ok) {
    if (machine2.mTerminalStatesBDD.isEqualToBDD (machine1.mTerminalStatesBDD)) {
      co << "  Same terminal states;\n" ;
    }else{
      identical = false ;
      co << "  Error: terminal states are different;\n" ;
    }
  }
//--- Check transitions are identical
  if (ok) {
    if (machine2.mTransitionRelationBDD.isEqualToBDD (machine1.mTransitionRelationBDD)) {
      co << "  Same transitions;\n" ;
    }else{
      identical = false ;
      co << "  Error: transitions are different;\n" ;
    }
  }
//--- Check accessible states are identical
  if (ok) {
    if (machine2.mAccessibleStatesBDD.isEqualToBDD (machine1.mAccessibleStatesBDD)) {
      co << "  Same accessible states;\n" ;
    }else{
      identical = false ;
      co << "  Error: accessible states are different;\n" ;
    }
  }
//--- Conclusion
  if (identical) {
    co << "  Machines are identical.\n" ;
  }else{
    co << "  Machines are different.\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_machineCheck::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
//--- Get machine index
  const sint32 machineIndex = (sint32) mMachineIndex.uintValue () ;
  const C_saraMachine & machine = ioSaraSystemArray (machineIndex COMMA_HERE) ;
  co << "------------------ Checkings for '" << machine.mMachineName << "' machine\n" ;
//--- Checking input configuration is full
  const C_BDD notHandledInputConfigurations = ~ machine.mInitialStatesBDD.existsOnBitsAfterNumber (machine.mInputVariablesCount) ;
  if (notHandledInputConfigurations.isFalse ()) {
    co << "  All input configurations are handled;\n" ;
  }else{
    const uint64 n = notHandledInputConfigurations.valueCount (machine.mInputVariablesCount) ;
    co << "  " << cStringWithUnsigned64 (n)
       << " missing input configuration" << ((n > 1) ? "s" : "") << ":\n" ;
    notHandledInputConfigurations.printBDD (machine.mNamesArray, machine.mInputVariablesCount, 3) ;
  }
//--- Checking input configuration is not ambiguous
//  Ambiguous set (e, s) := ?s' ((e, s) initial & (e, s') initial et s != s')
  const uint16 variableCount = (uint16) machine.mNamesArray.count () ;
  const uint16 outputVariablesCount = (uint16) (variableCount - machine.mInputVariablesCount) ;
  uint16 * substitutionVector = new uint16 [variableCount] ;
  for (uint16 i=0 ; i<machine.mInputVariablesCount ; i++) {
    substitutionVector [i] = i ;
  }
  for (uint16 i=0 ; i<outputVariablesCount ; i++) {
    substitutionVector [i + machine.mInputVariablesCount] = (uint16) (i + variableCount) ;
  }
  const C_BDD sTranslatedInputConfiguration = machine.mInitialStatesBDD.substitution (substitutionVector, variableCount) ;
  delete [] substitutionVector ; substitutionVector = NULL ;
  C_BDD sEqualSprimeConstraint = ~ C_BDD () ;
  for (uint16 i=0 ; i<outputVariablesCount ; i++) {
    sEqualSprimeConstraint &= C_BDD ((uint16) (i + machine.mInputVariablesCount), false) == C_BDD ((uint16) (variableCount + i), false) ;
  }
  const C_BDD ambiguousInput = (machine.mInitialStatesBDD & sTranslatedInputConfiguration & ~ sEqualSprimeConstraint).existsOnBitsAfterNumber (variableCount) ;
  if (ambiguousInput.isFalse ()) {
    co << "  No ambiguous input configuration;\n" ;
  }else{
    const uint64 n = ambiguousInput.valueCount (variableCount) ;
    co << "  " << cStringWithUnsigned64 (n)
       << " ambiguous input configuration" << ((n > 1) ? "s" : "") << ":\n" ;
    ambiguousInput.printBDD (machine.mNamesArray, 3) ;
  }
//--- Checking transition determinism
// Ambiguous transitions (e, s, e', s') = ? e", s" ((e, s, e', s') transition & (e, s, e", s") transition & (e'=e") et (s'!=s"))
  substitutionVector = new uint16 [variableCount + variableCount] ;
  for (uint16 i=0 ; i<variableCount ; i++) {
    substitutionVector [i] = i ;
    substitutionVector [i+variableCount] = (uint16) (i+variableCount+variableCount) ;
  }
  const C_BDD translatedTransitions = machine.mTransitionRelationBDD.substitution (substitutionVector, (uint16) (variableCount+variableCount)) ;
  delete [] substitutionVector ; substitutionVector = NULL ;
  C_BDD ePrimeEqualsEsecondConstraint = ~ C_BDD () ;
  for (uint16 i=0 ; i<machine.mInputVariablesCount ; i++) {
    ePrimeEqualsEsecondConstraint &= C_BDD ((uint16) (i+variableCount), false) == C_BDD ((uint16) (i + variableCount + variableCount), false) ;
  }
  C_BDD sPrimeEqualsSsecondConstraint = ~ C_BDD () ;
  for (uint16 i=0 ; i<outputVariablesCount ; i++) {
    sPrimeEqualsSsecondConstraint &= C_BDD ((uint16) (i+variableCount+machine.mInputVariablesCount), false) == C_BDD ((uint16) (i+variableCount+variableCount+machine.mInputVariablesCount), false) ;
  }
  const C_BDD ambiguousTransitions = (machine.mTransitionRelationBDD & translatedTransitions & ePrimeEqualsEsecondConstraint & ~ sPrimeEqualsSsecondConstraint).existsOnBitsAfterNumber ((uint16) (variableCount + variableCount)) ;
  if (ambiguousTransitions.isFalse ()) {
    co << "  No ambiguous transition;\n" ;
  }else{
    const uint64 n = ambiguousTransitions.valueCount ((uint16) (variableCount+variableCount)) ;
    co << "  " << cStringWithUnsigned64 (n)
       << " ambiguous transition" << ((n > 1) ? "s" : "") << ":\n" ;
    TC_UniqueArray <C_String> transitionsVariableNameArray ((uint16) (variableCount + variableCount), "" COMMA_HERE) ;
    for (sint32 i=0 ; i<variableCount ; i++) {
      transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
      transitionsVariableNameArray (variableCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    }
    ambiguousTransitions.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Check that all states accepts all input configurations
//  incomplete states and inputs (e, s, e') = (e, s) is a state & ! s' (e, s, e', s') is not a transition
  const C_BDD incompleteStatesAndInput = machine.mAccessibleStatesBDD & (~ machine.mTransitionRelationBDD).forallOnBitsAfterNumber ((uint16) (variableCount+machine.mInputVariablesCount)) ;
  if (incompleteStatesAndInput.isFalse ()) {
    co << "  No incomplete state;\n" ;
  }else{
    const uint64 n = incompleteStatesAndInput.valueCount ((uint16) (variableCount+machine.mInputVariablesCount)) ;
    co << "  " << cStringWithUnsigned64 (n)
       << " incomplete state" << ((n > 1) ? "s" : "") << ":\n" ;
    TC_UniqueArray <C_String> transitionsVariableNameArray ((uint16) (variableCount + variableCount), "" COMMA_HERE) ;
    for (sint32 i=0 ; i<variableCount ; i++) {
      transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
      transitionsVariableNameArray (variableCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    }
    incompleteStatesAndInput.printBDD (transitionsVariableNameArray, (uint16) (variableCount+machine.mInputVariablesCount), 3) ;
  }
//--- Check all states are stable (added by PM on june 27, 2005, for version 0.1.3)
  const C_BDD equalInputConstraint = C_BDD::varCompareVar (0, variableCount, C_BDD::kEqual, variableCount) ;
  const C_BDD stableTransitions = machine.mTransitionRelationBDD & equalInputConstraint ;
  const C_BDD stableStates = stableTransitions.existsOnBitsAfterNumber (variableCount) ;
  const C_BDD notStableStates = machine.mAccessibleStatesBDD & ~ stableStates ;
//--- End of added by PM on june 27, 2005 (for version 0.1.3)
  if (notStableStates.isFalse ()) {
    co << "  All states are stable;\n" ;
  }else{
    const uint64 n = notStableStates.valueCount (variableCount) ;
    co << "  " << cStringWithUnsigned64 (n)
       << " instable state" << ((n > 1) ? "s" : "") << ":\n" ;
    notStableStates.printBDD (machine.mNamesArray, variableCount, 3) ;
  }
//--- Check machine is combinatory ? (added by PM on october 13th, 2005)
  if (mCheckMachineIsBoolean.boolValue ()) {
    bool ok = true ;
    if (!  machine.mInitialStatesBDD.isEqualToBDD ( machine.mTerminalStatesBDD)) {
      co << "  checkbool error: this machine is not combinatory (initial states != terminal states).\n" ;
      ok = false ;
    }
    const C_BDD boolAccessibilityRelationBDD =  machine.mInitialStatesBDD & machine.mInitialStatesBDD.translate (variableCount, variableCount) ;
    if (! boolAccessibilityRelationBDD.isEqualToBDD (machine.mTransitionRelationBDD)) {
      co << "  checkbool error: this machine is not combinatory (transitions != initial states x initial states).\n" ;
      ok = false ;
    }
    if (ok) {
      co << "  Machine is combinatory.\n" ;
    }
  }
}

//----------------------------------------------------------------------------*

void cPtr_typeDisplayBDDstats::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  co << "------------------ bdd: print BDD package statitistics.\n" ;
  C_BDD::printBDDpackageOperationsSummary (co) ;
}

//----------------------------------------------------------------------------*

void cPtr_typeResizeMap::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  C_Timer duree ;
  C_BDD::setHashMapSize ((uint16) mNewSize.uintValue ()) ;
  duree.stopTimer () ;
  co << "------------------ map "
     << cStringWithUnsigned (mNewSize.uintValue ())
     << ": BDD unique table resized to "
     << cStringWithSigned (C_BDD::getHashMapEntriesCount ())
     << " (done in "
     << duree
     << ").\n\n" ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeResize_AND_cache::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  C_Timer duree ;
  C_BDD::setANDcacheSize ((sint32) mNewSize.uintValue ()) ;
  duree.stopTimer () ;
  co << "------------------ and_cache "
     << cStringWithUnsigned (mNewSize.uintValue ())
     << ": AND cache resized to "
     << cStringWithSigned (C_BDD::getANDcacheEntriesCount ())
     << " (done in "
     << duree
     << ").\n\n" ;  
}

//----------------------------------------------------------------------------*

void cPtr_typeResize_ITE_cache::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  C_Timer duree ;
  C_BDD::setITEcacheSize ((sint32) mNewSize.uintValue ()) ;
  duree.stopTimer () ;
  co << "------------------ ite_cache "
     << cStringWithUnsigned (mNewSize.uintValue ())
     << ": ITE cache resized to "
     << cStringWithSigned (C_BDD::getITEcacheEntriesCount ())
     << " (done in "
     << duree
     << ").\n\n" ;  
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_AND::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  C_BDD::setComputingMode (C_BDD::ITE_COMPUTED_FROM_AND) ;
  co << "------------------ use_and: ITE is now computed from AND.\n\n" ;
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_ITE::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  C_BDD::setComputingMode (C_BDD::AND_COMPUTED_FROM_ITE) ;
  co << "------------------ use_ite: AND is now computed from ITE.\n\n" ;
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_AND_ITE::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & /* ioSaraSystemArray */,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
  C_BDD::setComputingMode (C_BDD::ITE_and_AND_ARE_INDEPENDANT) ;
  co << "------------------ use_and_ite: AND and ITE are now computed independantly.\n\n" ;
}

//----------------------------------------------------------------------------*

void cPtr_C_scenarioComponent::
compute (C_Compiler & /* inLexique */,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool /* inDisplayBDDvalues */) const {
 co << "------------------ Scenarios for '"
    << ioSaraSystemArray ( (sint32) mMachineIndex.uintValue () COMMA_HERE).mMachineName
    << "' machine\n" ;
//--- Initial state BDD
  const C_BDD initialStateBDD = ioSaraSystemArray ((sint32) mMachineIndex.uintValue () COMMA_HERE).mInitialStatesBDD ;
//--- transitions BDD
  const C_BDD transitionsBDD = ioSaraSystemArray ((sint32) mMachineIndex.uintValue () COMMA_HERE).mTransitionRelationBDD ;
//--- variables count
  const uint16 variableCount = (uint16) ioSaraSystemArray ((sint32) mMachineIndex.uintValue () COMMA_HERE).mNamesArray.count () ;
//--- Loop throuhgt all scenarios
  GGS_L_scenarioList::cElement * scenario = mScenarioList.firstObject () ;
  while (scenario != NULL) {
    macroValidPointer (scenario) ;
  //--- Print scenario title
    co << "Scenario '" << scenario->mScenarioTitle << "':\n" ;
  //--- Build initial configuration
    GGS_L_inputScenario::cElement * currentInput = scenario->mInputScenario.firstObject () ;
    macroValidPointer (currentInput) ;
    uint64 initialConfiguration = 0 ;
    uint16 shift = 0 ;
    GGS_L_inputConfigurationForScenario::cElement * v = currentInput->mInputConfiguration.firstObject () ;
    while (v != NULL) {
      macroValidPointer (v) ;
      initialConfiguration += ((uint64) v->mInputValue.uintValue ()) << shift ;
      shift ++ ;
      v = v->nextObject () ;
    }
    const C_BDD initialInputConfigurationBDD = C_BDD::varCompareConst (0, shift, C_BDD::kEqual, initialConfiguration) ;
    C_BDD currentState = initialInputConfigurationBDD & initialStateBDD ;
  //--- Build substitution vector
    uint16 * substitutionVector = new uint16 [variableCount + variableCount] ;
    for (uint16 i=0 ; i<variableCount ; i++) {
      substitutionVector [i] = (uint16) (i + variableCount) ;
      substitutionVector [i + variableCount] = i ;
    }
  //--- Display initial configuration
    currentState.printBDD (ioSaraSystemArray ((sint32) mMachineIndex.uintValue () COMMA_HERE).mNamesArray, 3) ;
    uint64 valuesCount = currentState.valueCount (shift) ;
  //--- Loop throught input sequence
    currentInput = currentInput->nextObject () ;
    while ((currentInput != NULL) && (valuesCount == 1ULL)) {
      macroValidPointer (currentInput) ;
    //--- Parse new input configuration
      uint64 inputConfiguration = 0 ;
      shift = 0 ;
      GGS_L_inputConfigurationForScenario::cElement * v = currentInput->mInputConfiguration.firstObject () ;
      while (v != NULL) {
        macroValidPointer (v) ;
        inputConfiguration += ((uint64) v->mInputValue.uintValue ()) << shift ;
        shift ++ ;
        v = v->nextObject () ;
      }
      const C_BDD inputConfigurationBDD = C_BDD::varCompareConst (variableCount, shift, C_BDD::kEqual, inputConfiguration) ;
      const C_BDD newState = currentState & transitionsBDD & inputConfigurationBDD ;
      currentState = newState.substitution (substitutionVector, (uint16) (variableCount + variableCount)) ;
      currentState = currentState.existsOnBitsAfterNumber (variableCount) ;
    //--- Display current configuration
      currentState.printBDDwithoutHeader (ioSaraSystemArray ((sint32) mMachineIndex.uintValue () COMMA_HERE).mNamesArray, variableCount, 3) ;
      valuesCount = currentState.valueCount (shift) ;
    //--- Goto next input
      currentInput = currentInput->nextObject () ;
    }
    delete [] substitutionVector ; substitutionVector = NULL ;
    if (valuesCount == 0ULL) {
      co << "*** ERROR: dead state.\n" ;
    }else if (valuesCount > 1ULL) {
      co << "*** ERROR: ambiguous transition ("
         << cStringWithUnsigned64 (valuesCount)
         << " states).\n" ;
    }
    scenario = scenario->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_explicitAutomatonDefinition::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Build state array names
  TC_UniqueArray <C_String> stateNameArray (mStatesMap.count () COMMA_HERE) ;
  GGS_M_stateMap::cElement * currentState = mStatesMap.firstObject () ;
  while (currentState != NULL) {
    stateNameArray.addObject (currentState->mKey) ;
    currentState = currentState->nextObject () ;
  }
//----------------------------------------------------------------------- States BDD array
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//---- For each state defined in source file, we compute the BDD built from
//     state input configuration and state output configuration
  TC_UniqueArray <C_BDD> stateExpressionBDD (mStatesMap.count (), C_BDD () COMMA_HERE) ;
  GGS_L_stateDefinition::cElement * currentDefinition = mStateDefinitionList.firstObject () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
  //--- Get state index
    const sint32 stateIndex = (sint32) currentDefinition->mStateIndex.uintValue () ;
  //--- Enter state configuration
    stateExpressionBDD (stateIndex COMMA_HERE) = currentDefinition->mStateExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, 0) ;
  //--- Check state configuration is not empty
    if (stateExpressionBDD (stateIndex COMMA_HERE).isFalse ()) {
      C_String errorMessage ;
      errorMessage << "input configuration for state '"
                   << stateNameArray (stateIndex COMMA_HERE)
                   << "' is empty" ;
      currentDefinition->mEndOfStateExpression.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
    }
  //--- Go to next state definition  
    currentDefinition = currentDefinition->nextObject () ;
  }
//----------------------------------------------------------------------- Check that states are disjoined
  currentDefinition = mStateDefinitionList.firstObject () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    GGS_L_stateDefinition::cElement * testedState = currentDefinition->nextObject () ;
    while (testedState != NULL) {
      macroValidPointer (testedState) ;
      if (! (stateExpressionBDD ((sint32) currentDefinition->mStateIndex.uintValue () COMMA_HERE)
           & stateExpressionBDD ((sint32) testedState->mStateIndex.uintValue () COMMA_HERE)).isFalse ()) {
        C_String errorMessage ;
        errorMessage << "expression for state '"
                   << stateNameArray ((sint32) testedState->mStateIndex.uintValue () COMMA_HERE)
                   << "' intersects expression for state '"
                   << stateNameArray ((sint32) currentDefinition->mStateIndex.uintValue () COMMA_HERE)
                   << "'" ;
        testedState->mEndOfStateExpression.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
      testedState = testedState->nextObject () ;
    }
  //--- Go to next state definition  
    currentDefinition = currentDefinition->nextObject () ;
  }
//----------------------------------------------------------------------- Initial states BDD
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//--- Compute BDD initial states
  GGS_L_statesDefinitionList::cElement * currentInitialState = mInitialStatesDefinitionList.firstObject () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    // printf ("INIT : %ld\n", currentInitialState->mStateIndex.uintValue ()) ;
    outInitialStatesBDD |= stateExpressionBDD ((sint32) currentInitialState->mStateIndex.uintValue () COMMA_HERE) ;
    currentInitialState = currentInitialState->nextObject () ;
  }
//--- Check initial states are disjoined
  currentInitialState = mInitialStatesDefinitionList.firstObject () ;
  while (currentInitialState != NULL) {
    macroValidPointer (currentInitialState) ;
    GGS_L_statesDefinitionList::cElement * testedInitialState = currentInitialState->nextObject () ;
    while (testedInitialState != NULL) {
      macroValidPointer (testedInitialState) ;
      const C_BDD intersection = stateExpressionBDD ((sint32) currentInitialState->mStateIndex.uintValue () COMMA_HERE)
        & stateExpressionBDD ((sint32) testedInitialState->mStateIndex.uintValue () COMMA_HERE) ;
      if (! intersection.isFalse ()) {
        C_String errorMessage ;
        errorMessage << "initial state '"
                     << stateNameArray ((sint32) testedInitialState->mStateIndex.uintValue () COMMA_HERE)
                     << "' intersects previous initial state '"
                     << stateNameArray ((sint32) currentInitialState->mStateIndex.uintValue () COMMA_HERE)
                     << "'" ;
        testedInitialState->mStateLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
      testedInitialState = testedInitialState->nextObject () ;
    }
    currentInitialState = currentInitialState->nextObject () ;
  }
//----------------------------------------------------------------------- Terminal states BDD
//    BDD slots assignments
//    Each automaton has n inputs, p outputs
//    Slots 0 .. n-1 are assigned to inputs
//    Slots n .. n+p-1 are assigned to outputs
//--- Compute BDD initial states
  GGS_L_statesDefinitionList::cElement * currentTerminalState = mTerminalStatesDefinitionList.firstObject () ;
  while (currentTerminalState != NULL) {
    macroValidPointer (currentTerminalState) ;
    outTerminalStatesBDD |= stateExpressionBDD ((sint32) currentTerminalState->mStateIndex.uintValue () COMMA_HERE) ;
    currentTerminalState = currentTerminalState->nextObject () ;
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
  outAccessibilityRelationBDD = C_BDD () ;
  currentDefinition = mStateDefinitionList.firstObject () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
  //--- Get current state index
    const sint32 currentStateIndex = (sint32) currentDefinition->mStateIndex.uintValue () ;
  //--- Accumulate transitions targets for each transition
    C_BDD transitionsTargetBDD ;
    GGS_L_transitionDefinition::cElement * currentTransition = currentDefinition->mTransitionsList.firstObject () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
      const C_BDD actionBDD = currentTransition->mActionExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inVariablesCount) ;
      const sint32 targetStateIndex = (sint32) currentTransition->mTargetStateIndex.uintValue () ;
      const C_BDD targetStateBDD = stateExpressionBDD (targetStateIndex COMMA_HERE).translate (inVariablesCount, inVariablesCount) ;
      transitionsTargetBDD |= actionBDD & targetStateBDD ;
      currentTransition = currentTransition->nextObject () ;
    }
  //--- Combine with state BDD
    transitionsTargetBDD &= stateExpressionBDD (currentStateIndex COMMA_HERE) ;
  //--- Accumulate into transitions BDD
    outAccessibilityRelationBDD |= transitionsTargetBDD ;
  //--- Go to next state definition
    currentDefinition = currentDefinition->nextObject () ;
  }
//--- Check transitions of each state
  currentDefinition = mStateDefinitionList.firstObject () ;
  while (currentDefinition != NULL) {
    macroValidPointer (currentDefinition) ;
    const sint32 stateIndex = (sint32) currentDefinition->mStateIndex.uintValue () ;
  //--- Check that action does not intersect with state input expression
    sint32 transitionIndex = 0 ;
    GGS_L_transitionDefinition::cElement * currentTransition = currentDefinition->mTransitionsList.firstObject () ;
    while (currentTransition != NULL) {
      macroValidPointer (currentTransition) ;
    //--- Compute action BDD
      const C_BDD actionBDD = currentTransition->mActionExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, 0) ;
    //--- Check action does not intersect with state input expression
      if (! (stateExpressionBDD (stateIndex COMMA_HERE) & actionBDD).isFalse ()) {
        C_String errorMessage ;
        errorMessage << "this action intersects with current state input configuration" ;
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check action does not intersect with other actions
      GGS_L_transitionDefinition::cElement * testedTransition = currentTransition->nextObject () ;
      while (testedTransition != NULL) {
        macroValidPointer (testedTransition) ;
      //--- Compute action BDD
        const C_BDD testedActionBDD = testedTransition->mActionExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, 0) ;
      //--- Check action does not intersect with state input expression
        if (! (testedActionBDD & actionBDD).isFalse ()) {
          C_String errorMessage ;
          errorMessage << "this action intersects with #" << cStringWithSigned (transitionIndex) << " previous action" ;
          testedTransition->mEndOfExpression.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
        }
        testedTransition = testedTransition->nextObject () ;
      }
    //--- Check that action is compatible input configuration of target state
      const C_BDD x = actionBDD & stateExpressionBDD ((sint32) currentTransition->mTargetStateIndex.uintValue () COMMA_HERE) ;
      if (x.isFalse ()) {
        C_String errorMessage ;
        errorMessage << "this transition is not compatible with configuration of target state" ;
        currentTransition->mEndOfExpression.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Goto next transition
      currentTransition = currentTransition->nextObject () ;
      transitionIndex ++ ;
    }
  //--- Goto next state
    currentDefinition = currentDefinition->nextObject () ;
  }
//----------------------------------------------------------------------- Compute accessible states
  uint16 * substitutionArray = new uint16 [inVariablesCount + inVariablesCount] ;
  for (uint16 i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] = (uint16) (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_BDD accessibleStatesBDD ;
  C_BDD newlyAccessibleStates ;
  do{
    accessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= outInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & outAccessibilityRelationBDD).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (! accessibleStatesBDD.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;

//--- At least, check that every state is accessible
  for (sint32 i=0 ; i<stateExpressionBDD.count () ; i++) {
    const C_BDD intersection = stateExpressionBDD (i COMMA_HERE) & accessibleStatesBDD ;
    if (! stateExpressionBDD (i COMMA_HERE).isEqualToBDD (intersection)) {
      C_String errorMessage ;
      errorMessage << "state '"
                   << stateNameArray (i COMMA_HERE)
                   << "' is not accessible" ;
      mEndOfDefinition.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
    }
  }
//--- Add stable transitions. We add them now because they do not change accessible states computation
  for (sint32 i=0 ; i<stateExpressionBDD.count () ; i++) {
    const C_BDD stateExpression = stateExpressionBDD (i COMMA_HERE) ;
    const C_BDD translatedStateExpression = stateExpression.translate (inVariablesCount, inVariablesCount) ;
    const C_BDD allStateToStateTransitions = stateExpression & translatedStateExpression ;
    outAccessibilityRelationBDD |= allStateToStateTransitions ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_parallelComposition::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mLeftOperand (HERE)->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mRightOperand (HERE)->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Compute and composition
  outInitialStatesBDD = leftInitialStatesBDD & rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD & rightTerminalStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD & rightAccessibilityRelationBDD ;
}

//---------------------------------------------------------------------------*

void cPtr_C_orComposition::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mLeftOperand (HERE)->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mRightOperand (HERE)->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Compute and composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
}

//---------------------------------------------------------------------------*

static C_BDD
accessibleStates (const C_BDD & inInitialState,
                  const C_BDD & inAccessibilityRelation,
                  const uint16 inVariablesCount) {
  uint16 * substitutionArray = new uint16 [inVariablesCount + inVariablesCount] ;
  for (uint16 i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] = (uint16) (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_BDD accessibleStates ;
  C_BDD newlyAccessibleStates ;
  do{
    accessibleStates = newlyAccessibleStates ;
    newlyAccessibleStates |= inInitialState ;
    const C_BDD x = (newlyAccessibleStates & inAccessibilityRelation).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (! accessibleStates.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ;
  return accessibleStates ;
}

//---------------------------------------------------------------------------*

void cPtr_C_strongModalComposition::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mLeftOperand (HERE)->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mRightOperand (HERE)->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- Check if modal composition is valid
  const C_BDD leftAccessibleStatesBDD = accessibleStates (leftInitialStatesBDD, leftAccessibilityRelationBDD, inVariablesCount) ;
  const C_BDD rightAccessibleStatesBDD = accessibleStates (rightInitialStatesBDD, rightAccessibilityRelationBDD, inVariablesCount) ;
  const C_BDD intersection = leftAccessibleStatesBDD & rightAccessibleStatesBDD ;
  if (! intersection.isFalse ()) {
    C_String errorMessage ;
    errorMessage << "operands transitions intersects, strong modal composition is not valid" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }
//--- Compute modal composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
}

//---------------------------------------------------------------------------*

void cPtr_C_weakModalComposition::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute left operand
  C_BDD leftInitialStatesBDD ;
  C_BDD leftTerminalStatesBDD ;
  C_BDD leftAccessibilityRelationBDD ;
  mLeftOperand (HERE)->computeFromExpression (inLexique,
                                          inSaraSystemArray,
                                          inVariablesCount,
                                          leftInitialStatesBDD,
                                          leftTerminalStatesBDD,
                                          leftAccessibilityRelationBDD) ;
//--- Compute right operand
  C_BDD rightInitialStatesBDD ;
  C_BDD rightTerminalStatesBDD ;
  C_BDD rightAccessibilityRelationBDD ;
  mRightOperand (HERE)->computeFromExpression (inLexique,
                                           inSaraSystemArray,
                                           inVariablesCount,
                                           rightInitialStatesBDD,
                                           rightTerminalStatesBDD,
                                           rightAccessibilityRelationBDD) ;
//--- compute intersection
  const C_BDD leftAccessibleStatesBDD = accessibleStates (leftInitialStatesBDD, leftAccessibilityRelationBDD, inVariablesCount) ;
  const C_BDD rightAccessibleStatesBDD = accessibleStates (rightInitialStatesBDD, rightAccessibilityRelationBDD, inVariablesCount) ;
  const C_BDD intersection = leftAccessibleStatesBDD & rightAccessibleStatesBDD ;
//--- Compute in left operand accessible states from intersection
  C_BDD leftAccessiblesStates ;
  uint16 * substitutionArray = new uint16 [inVariablesCount + inVariablesCount] ;
  for (uint16 i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] = (uint16) (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    leftAccessiblesStates = newlyAccessibleStates ;
    newlyAccessibleStates |= intersection ;
    const C_BDD x = (newlyAccessibleStates & leftAccessibilityRelationBDD).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (! leftAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
//--- Check that only states in intersection are accessible
  if (! intersection.isEqualToBDD (leftAccessiblesStates)) {
    C_String errorMessage ;
    errorMessage << "left operand does not respect weak modal composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }
//--- Compute in right operand accessible states from intersection
  C_BDD rightAccessiblesStates ;
  newlyAccessibleStates = C_BDD () ;
  do{
    rightAccessiblesStates = newlyAccessibleStates ;
    newlyAccessibleStates |= intersection ;
    const C_BDD x = (newlyAccessibleStates & rightAccessibilityRelationBDD).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
  }while (! rightAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- Check that only states in intersection are accessible
  if (! intersection.isEqualToBDD (rightAccessiblesStates)) {
    C_String errorMessage ;
    errorMessage << "right operand does not respect weak modal composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }
//--- Check initial states are compatible
  const bool initialStatesAreCompatible = (intersection & leftInitialStatesBDD).isEqualToBDD (intersection & rightInitialStatesBDD) ;
  if (! initialStatesAreCompatible) {
    C_String errorMessage ;
    errorMessage << "initial states are not compatible with weak modal composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }
//--- Check terminal states are compatible
  const bool terminalStatesAreCompatible = (intersection & leftTerminalStatesBDD).isEqualToBDD (intersection & rightTerminalStatesBDD) ;
  if (! terminalStatesAreCompatible) {
    C_String errorMessage ;
    errorMessage << "terminal states are not compatible with weak modal composition" ;
    mErrorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }
//--- Compute modal composition
  outInitialStatesBDD = leftInitialStatesBDD | rightInitialStatesBDD ;
  outTerminalStatesBDD = leftTerminalStatesBDD | rightTerminalStatesBDD ;
  outAccessibilityRelationBDD = leftAccessibilityRelationBDD | rightAccessibilityRelationBDD ;
}

//---------------------------------------------------------------------------*

void cPtr_C_boolToSeqExpression::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  outInitialStatesBDD = mExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, 0) ;
  outTerminalStatesBDD = outInitialStatesBDD ;
  outAccessibilityRelationBDD = outInitialStatesBDD & outInitialStatesBDD.translate (inVariablesCount, inVariablesCount) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_existsDefinition::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 /* inVariablesCount */,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  const uint16 previousVariableCount = (uint16) mPreviousVariableCount.uintValue () ;
  const uint16 totalVariableCount = (uint16) mTotalVariableCount.uintValue () ;
//--- Compute operand
  C_BDD initialStatesBDD ;
  C_BDD terminalStatesBDD ;
  C_BDD accessibilityRelationBDD ;
  mOperand (HERE)->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      totalVariableCount,
                                      initialStatesBDD,
                                      terminalStatesBDD,
                                      accessibilityRelationBDD) ;
  outInitialStatesBDD = initialStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
  outTerminalStatesBDD = terminalStatesBDD.existsOnBitsAfterNumber (previousVariableCount) ;
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

void cPtr_C_forallDefinition::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 /* inVariablesCount */,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  const uint16 previousVariableCount = (uint16) mPreviousVariableCount.uintValue () ;
  const uint16 totalVariableCount = (uint16) mTotalVariableCount.uintValue () ;
//--- Compute operand
  C_BDD initialStatesBDD ;
  C_BDD terminalStatesBDD ;
  C_BDD accessibilityRelationBDD ;
  mOperand (HERE)->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      totalVariableCount,
                                      initialStatesBDD,
                                      terminalStatesBDD,
                                      accessibilityRelationBDD) ;
  outInitialStatesBDD = initialStatesBDD.forallOnBitsAfterNumber (previousVariableCount) ;
  outTerminalStatesBDD = terminalStatesBDD.forallOnBitsAfterNumber (previousVariableCount) ;
//--- Compute accessibilty relation (NOT OPTIMIZED)
  outAccessibilityRelationBDD = accessibilityRelationBDD.forallOnBitsAfterNumber ((uint16) (totalVariableCount + previousVariableCount)) ;
  for (uint16 i=previousVariableCount ; i<totalVariableCount ; i++) {
    outAccessibilityRelationBDD = outAccessibilityRelationBDD.forallOnBitNumber (i) ;
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

void cPtr_C_suppressInitialStatesOperation::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  mOperand (HERE)->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibilityRelationBDD) ;
  outInitialStatesBDD = C_BDD () ;
}
//---------------------------------------------------------------------------*

void cPtr_C_suppressTerminalStatesOperation::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  mOperand (HERE)->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibilityRelationBDD) ;
  outTerminalStatesBDD = C_BDD () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_fullSaturationOperation::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute operand
  mOperand (HERE)->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      outInitialStatesBDD,
                                      outTerminalStatesBDD,
                                      outAccessibilityRelationBDD) ;
//--- translate initial state BDD by inVariablesCount slots
  const C_BDD translatedInitialStates = outInitialStatesBDD.translate (inVariablesCount, inVariablesCount) ;
//--- Add transitions from terminal states to initial states
  outAccessibilityRelationBDD |= outTerminalStatesBDD & translatedInitialStates ;
}

//---------------------------------------------------------------------------*

void cPtr_C_complementationOperation::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute operand
  C_BDD initialStatesBDD ;
  C_BDD terminalStatesBDD ;
  C_BDD accessibilityRelationBDD ;
  mOperand (HERE)->computeFromExpression (inLexique,
                                      inSaraSystemArray,
                                      inVariablesCount,
                                      initialStatesBDD,
                                      terminalStatesBDD,
                                      accessibilityRelationBDD) ;
//--- Complement
  outInitialStatesBDD = ~ initialStatesBDD ;
  outTerminalStatesBDD = ~ terminalStatesBDD ;
  outAccessibilityRelationBDD = ~ accessibilityRelationBDD ;
}

//---------------------------------------------------------------------------*

void cPtr_C_importMachine::
computeFromExpression (C_Compiler & /* inLexique */,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Get index of imported machine
  const sint32 indexOfImportedMachine = (sint32) mIndexOfImportedMachine.uintValue () ;
//--- Construct substitution arraies
  const uint16 importedMachineVariableCount = (uint16) mTranslationVector.count () ;
  uint16 * statesSubstitutionArray = new uint16 [importedMachineVariableCount] ;
  uint16 * transitionsSubstitutionArray = new uint16 [importedMachineVariableCount + importedMachineVariableCount] ;
  GGS_L_translationVector::cElement * p = mTranslationVector.firstObject () ;
  sint32 index = 0 ;
  while (p != NULL) {
    macroValidPointer (p) ;
    statesSubstitutionArray [index] = (uint16) p->mTargetSlot.uintValue () ;
    transitionsSubstitutionArray [index] = (uint16) p->mTargetSlot.uintValue () ;
    transitionsSubstitutionArray [importedMachineVariableCount + index] = (uint16) (inVariablesCount + p->mTargetSlot.uintValue ()) ;
    p = p->nextObject () ;
    index ++ ;
  }
//--- Translate initial state BDD
  outInitialStatesBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mInitialStatesBDD
    .substitution (statesSubstitutionArray, importedMachineVariableCount) ;
//--- Translate terminal state BDD
  outTerminalStatesBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTerminalStatesBDD
   .substitution (statesSubstitutionArray, importedMachineVariableCount) ;
//--- Translate transitions BDD
  outAccessibilityRelationBDD = inSaraSystemArray (indexOfImportedMachine COMMA_HERE).mTransitionRelationBDD
    .substitution (transitionsSubstitutionArray, (uint16) (importedMachineVariableCount + importedMachineVariableCount)) ;
//---
  delete [] statesSubstitutionArray ;
  delete [] transitionsSubstitutionArray ;
}

//---------------------------------------------------------------------------*

void cPtr_C_additiveModalCompositionComponent::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute BDDs for each mode
  const sint32 modeCount = (sint32) mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GGS_lstring> modeNamesArray (modeCount, GGS_lstring () COMMA_HERE) ;
  GGS_M_modesMap::cElement * currentMode = mModeMap.firstObject () ;
  {sint32 index = 0 ;
    while (currentMode != NULL) {
      macroValidPointer (currentMode) ;
      modeNamesArray (index COMMA_HERE) = currentMode->mKey ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode->mInfo.mModeDefinition (HERE)->computeFromExpression (inLexique,
                                                              inSaraSystemArray,
                                                              inVariablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode = currentMode->nextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), inVariablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint16 * substitutionArray = new uint16 [inVariablesCount + inVariablesCount] ;
  for (uint16 i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] = (uint16) (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    for (sint32 testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
    //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (! leftAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (! intersection.isEqualToBDD (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (! rightAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (! intersection.isEqualToBDD (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    }
  }
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  outInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  outTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  outAccessibilityRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (sint32 mode=1 ; mode < modeCount ; mode++) {
    outInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    outTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    outAccessibilityRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  GGS_ListForModes::cElement * currentInclusion = mInclusionList.firstObject () ;
  while (currentInclusion != NULL) {
    const sint32 sourceMode = (sint32) currentInclusion->mSourceMode.uintValue () ;
    const sint32 targetMode = (sint32) currentInclusion->mTargetMode.uintValue () ;
  //--- translate initial state BDD by inVariablesCount slots
    const C_BDD translatedInitialStates = initialStatesArray (targetMode COMMA_HERE).translate (inVariablesCount, inVariablesCount) ;
  //--- Transitions to from terminal states to initial states
    const C_BDD transitions = terminalStatesArray (sourceMode COMMA_HERE) & translatedInitialStates ;
  //--- Add transitions from terminal states to initial states
    outAccessibilityRelationBDD |= transitions ;
  //--- Next inclusion
    currentInclusion = currentInclusion->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_substractiveModalCompositionComponent::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
//--- Compute BDDs for each mode
  const sint32 modeCount = (sint32) mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GGS_lstring> modeNamesArray (modeCount, GGS_lstring () COMMA_HERE) ;
  GGS_M_modesMap::cElement * currentMode = mModeMap.firstObject () ;
  {sint32 index = 0 ;
    while (currentMode != NULL) {
      macroValidPointer (currentMode) ;
      modeNamesArray (index COMMA_HERE) = currentMode->mKey ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode->mInfo.mModeDefinition (HERE)->computeFromExpression (inLexique,
                                                              inSaraSystemArray,
                                                              inVariablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode = currentMode->nextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), inVariablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint16 * substitutionArray = new uint16 [inVariablesCount + inVariablesCount] ;
  for (uint16 i=0 ; i<inVariablesCount ; i++) {
    substitutionArray [i] = (uint16) (inVariablesCount + i) ;
    substitutionArray [inVariablesCount + i] = i ;
  }
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    for (sint32 testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
    //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (! leftAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (! intersection.isEqualToBDD (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray, (uint16) (inVariablesCount + inVariablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (inVariablesCount) ;
      }while (! rightAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (! intersection.isEqualToBDD (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    }
  }
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  outInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  outTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  outAccessibilityRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (sint32 mode=1 ; mode < modeCount ; mode++) {
    outInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    outTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    outAccessibilityRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  for (sint32 sourceMode=0 ; sourceMode < modeCount ; sourceMode++) {
    for (sint32 targetMode=0 ; targetMode < modeCount ; targetMode++) {
      if (sourceMode != targetMode) {
      //--- Is theses transitions accepted ?
        bool isAccepted = true ;
        GGS_ListForModes::cElement * currentExclusion = mExclusionList.firstObject () ;
        while ((currentExclusion != NULL) && isAccepted) {
          isAccepted = (sourceMode != (sint32) currentExclusion->mSourceMode.uintValue ()) || (targetMode != (sint32) currentExclusion->mTargetMode.uintValue ()) ;
          currentExclusion = currentExclusion->nextObject () ;
        }
      //--- If accepted, add transition
        if (isAccepted) {
        //--- translate initial state BDD by inVariablesCount slots
          const C_BDD translatedInitialStates = initialStatesArray (targetMode COMMA_HERE).translate (inVariablesCount, inVariablesCount) ;
        //--- Transitions to from terminal states to initial states
          const C_BDD transitions = terminalStatesArray (sourceMode COMMA_HERE) & translatedInitialStates ;
        //--- Add transitions from terminal states to initial states
          outAccessibilityRelationBDD |= transitions ;
        }
      }
    }
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_trans::
computeFromExpression (C_Compiler & inLexique,
                       const TC_Array <C_saraMachine> & inSaraSystemArray,
                       const uint16 inVariablesCount,
                       C_BDD & outInitialStatesBDD,
                       C_BDD & outTerminalStatesBDD,
                       C_BDD & outAccessibilityRelationBDD) const {
  outInitialStatesBDD = C_BDD () ;
  outTerminalStatesBDD = C_BDD () ;
  outAccessibilityRelationBDD = mSourceStateExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, 0)
        & mTargetStateExpression (HERE)->computeBDD (inLexique, inSaraSystemArray, inVariablesCount, inVariablesCount) ;
}

//---------------------------------------------------------------------------*

static void
addFilteredTransitions (C_BDD & ioAcculmulatedTransitions,
                        const C_BDD & inSourceAccessibilityRelation,
                        const C_BDD & inSourceTerminalStates,
                        const sint32 inVariablesCount,
                        const sint32 inInputVariablesCount,
                        const C_BDD & inTargetInitialStates) {
//--- Transitions from terminal states
   const C_BDD transitionsFromTerminalStates = inSourceAccessibilityRelation & inSourceTerminalStates ;
//--- Filter theses transitions by eliminating target internal and output variables
   const C_BDD filteredTransitionsFromTerminalStates = transitionsFromTerminalStates.existsOnBitsAfterNumber ((uint16) (inVariablesCount + inInputVariablesCount)) ;
//--- translate initial state BDD by variablesCount slots
   const C_BDD translatedInitialStates = inTargetInitialStates.translate ((uint16) inVariablesCount, (uint16)inVariablesCount) ;
//--- Transitions to from terminal states to initial states
   const C_BDD transitions = inSourceTerminalStates & translatedInitialStates ;
//--- Eliminate from theses transitions all the transitions that raise an ambiguity
   const C_BDD transitionsToAdd = transitions & ~ filteredTransitionsFromTerminalStates ;
//--- Add transitions from terminal states to initial states
   ioAcculmulatedTransitions |= transitionsToAdd ;
}

//---------------------------------------------------------------------------*

void cPtr_C_machineDefinedByAdditiveModalComp::
compute (C_Compiler & inLexique,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool inDisplayBDDvalues) const {
  co << "------------------ Computations for '" << mMachineName << "' machine\n" ;
  C_saraMachine machine ;
  machine.mMachineName = mMachineName ;
//--- Build input variables array names
  const uint16 inputVariablesCount = (uint16) mInputVariableCount.uintValue () ;
  machine.mInputVariablesCount = inputVariablesCount ;
  const uint16 variablesCount = (uint16) mVariablesMap.count () ;
  const uint16 inputAndInternalVariablesCount = (uint16) mInputAndInternalVariableCount.uintValue () ;
  machine.mInputAndInternalVariablesCount = inputAndInternalVariablesCount ;
  { TC_UniqueArray <C_String> variableNamesArray (variablesCount, "" COMMA_HERE) ;
    swap (machine.mNamesArray, variableNamesArray) ;
  }
  GGS_M_variablesMap::cElement * currentVar = mVariablesMap.firstObject () ;
  sint32 index = 0 ;
  while (currentVar != NULL) {
    machine.mNamesArray (index COMMA_HERE) = currentVar->mKey ;
    index ++ ;
    currentVar = currentVar->nextObject () ;
  }
//--- Compute BDDs for each mode
  const sint32 modeCount = (sint32) mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GGS_lstring> modeNamesArray (modeCount, GGS_lstring () COMMA_HERE) ;
  GGS_M_modesMap::cElement * currentMode = mModeMap.firstObject () ;
  {sint32 index = 0 ;
    while (currentMode != NULL) {
      macroValidPointer (currentMode) ;
      modeNamesArray (index COMMA_HERE) = currentMode->mKey ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode->mInfo.mModeDefinition (HERE)->computeFromExpression (inLexique,
                                                              ioSaraSystemArray,
                                                              variablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode = currentMode->nextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), variablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint16 * substitutionArray = new uint16 [variablesCount + variablesCount] ;
  for (uint16 i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] = (uint16) (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    for (sint32 testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
    //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (! leftAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (! intersection.isEqualToBDD (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (! rightAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (! intersection.isEqualToBDD (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    }
  }
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  machine.mInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  machine.mTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  machine.mTransitionRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (sint32 mode=1 ; mode < modeCount ; mode++) {
    machine.mInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    machine.mTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    machine.mTransitionRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  GGS_ListForModes::cElement * currentInclusion = mInclusionList.firstObject () ;
  while (currentInclusion != NULL) {
    const sint32 sourceMode = (sint32) currentInclusion->mSourceMode.uintValue () ;
    const sint32 targetMode = (sint32) currentInclusion->mTargetMode.uintValue () ;
  //--- Add filtered transitions from terminal states to initial states
    addFilteredTransitions (machine.mTransitionRelationBDD,
                            accessibilityRelationStatesArray (sourceMode COMMA_HERE),
                            terminalStatesArray (sourceMode COMMA_HERE),
                            variablesCount,
                            inputVariablesCount,
                            initialStatesArray (targetMode COMMA_HERE)) ;
  //--- Next inclusion
    currentInclusion = currentInclusion->nextObject () ;
  }
//---------- Compute accessible states
  substitutionArray = new uint16 [variablesCount + variablesCount] ;
  for (uint16 i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] = (uint16) (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    machine.mAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= machine.mInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & machine.mTransitionRelationBDD).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
  }while (! machine.mAccessibleStatesBDD.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- 
  machine.mTransitionRelationBDD &= machine.mAccessibleStatesBDD ;
  machine.mTerminalStatesBDD &= machine.mAccessibleStatesBDD ;

//---   
  TC_UniqueArray <C_String> transitionsVariableNameArray (variablesCount + variablesCount, "" COMMA_HERE) ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    transitionsVariableNameArray (variablesCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
  }
//--- Print messages
  const sint32 outputVariablesCount = variablesCount - inputAndInternalVariablesCount ;
  const sint32 internalVariablesCount = inputAndInternalVariablesCount - inputVariablesCount ;
  uint64 n = machine.mInitialStatesBDD.valueCount (variablesCount) ;
  uint32 nodes = machine.mInitialStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithSigned (inputVariablesCount)
     << " input variable" << ((inputVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (internalVariablesCount)
     << " internal variable" << ((internalVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (outputVariablesCount) << " output variable" << ((outputVariablesCount > 1) ? "s" : "") << ";\n"
        "  " << cStringWithUnsigned64 (n) << " initial state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mInitialStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTerminalStatesBDD.valueCount (variablesCount) ;
  nodes = machine.mTerminalStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n)
     << " terminal state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mTerminalStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mAccessibleStatesBDD.valueCount (variablesCount) ;
  nodes = machine.mAccessibleStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " accessible state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ";\n" ;
  if (inDisplayBDDvalues) {
    machine.mAccessibleStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTransitionRelationBDD.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = machine.mTransitionRelationBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " transition" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Restrict transitions to target == source
  C_BDD constraint = ~ C_BDD () ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    constraint &= C_BDD ((uint16) i, false) == C_BDD ((uint16) (variablesCount + i), false) ;
  }
  const C_BDD transitionsWithSourceEqualTarget = machine.mTransitionRelationBDD & constraint ; 
  n = transitionsWithSourceEqualTarget.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = transitionsWithSourceEqualTarget.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " transition" << ((n > 1) ? "s" : "")
     << " with target equals source ("
     << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Display transitions from states to different states
  const C_BDD t = machine.mTransitionRelationBDD & ~ transitionsWithSourceEqualTarget ;
  n = t.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = t.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " transition" << ((n > 1) ? "s" : "")
     << " to other states (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    t.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Enter result in machines array
  ioSaraSystemArray.addObjectUsingSwap (machine) ;
//--- Mark and sweep unused BDD nodes
  C_BDD::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*

void cPtr_C_machineDefinedBySubstractiveModalComp::
compute (C_Compiler & inLexique,
         TC_Array <C_saraMachine> & ioSaraSystemArray,
         const bool /* inDisplayBDDvaluesCount */,
         const bool inDisplayBDDvalues) const {
  co << "------------------ Computations for '" << mMachineName << "' machine\n" ;
  C_saraMachine machine ;
  machine.mMachineName = mMachineName ;
//--- Build input variables array names
  const uint16 inputVariablesCount = (uint16) mInputVariableCount.uintValue () ;
  machine.mInputVariablesCount = inputVariablesCount ;
  const uint16 variablesCount = (uint16) mVariablesMap.count () ;
  const uint16 inputAndInternalVariablesCount = (uint16) mInputAndInternalVariableCount.uintValue () ;
  machine.mInputAndInternalVariablesCount = inputAndInternalVariablesCount ;
  { TC_UniqueArray <C_String> variableNamesArray (variablesCount, "" COMMA_HERE) ;
    swap (machine.mNamesArray, variableNamesArray) ;
  }
  GGS_M_variablesMap::cElement * currentVar = mVariablesMap.firstObject () ;
  sint32 index = 0 ;
  while (currentVar != NULL) {
    machine.mNamesArray (index COMMA_HERE) = currentVar->mKey ;
    index ++ ;
    currentVar = currentVar->nextObject () ;
  }
//----------- Compute automaton from definition expression
//--- Compute BDDs for each mode
  const sint32 modeCount = (sint32) mModeMap.count () ;
  TC_UniqueArray <C_BDD> initialStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> terminalStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibleStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <C_BDD> accessibilityRelationStatesArray (modeCount, C_BDD () COMMA_HERE) ;
  TC_UniqueArray <GGS_lstring> modeNamesArray (modeCount, GGS_lstring () COMMA_HERE) ;
  GGS_M_modesMap::cElement * currentMode = mModeMap.firstObject () ;
  {sint32 index = 0 ;
    while (currentMode != NULL) {
      macroValidPointer (currentMode) ;
      modeNamesArray (index COMMA_HERE) = currentMode->mKey ;
      // printf ("INDEX %ld\n", index) ; fflush (stdout) ;
      currentMode->mInfo.mModeDefinition (HERE)->computeFromExpression (inLexique,
                                                              ioSaraSystemArray,
                                                              variablesCount,
                                                              initialStatesArray (index COMMA_HERE),
                                                              terminalStatesArray (index COMMA_HERE),
                                                              accessibilityRelationStatesArray (index COMMA_HERE)) ;
      currentMode = currentMode->nextObject () ;
      index ++ ;
    }
  }
//--- Compute accessible states
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    accessibleStatesArray (mode COMMA_HERE) = accessibleStates (initialStatesArray (mode COMMA_HERE), accessibilityRelationStatesArray (mode COMMA_HERE), variablesCount) ;
  }
//--- Check that modes are weakly disjoints
  // printf ("Check that modes are weakly disjoints\n") ; fflush (stdout) ;
  uint16 * substitutionArray = new uint16 [variablesCount + variablesCount] ;
  for (uint16 i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] = (uint16) (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  for (sint32 mode=0 ; mode<modeCount ; mode++) {
    for (sint32 testedMode=mode+1 ; testedMode<modeCount ; testedMode++) {
      // printf ("mode %ld testedMode %ld\n", mode, testedMode) ; fflush (stdout) ;
     //--- compute intersection
      const C_BDD intersection = accessibleStatesArray (mode COMMA_HERE) & accessibleStatesArray (testedMode COMMA_HERE) ;
    //--- Compute in left operand accessible states from intersection
      C_BDD leftAccessiblesStates ;
      C_BDD newlyAccessibleStates ;
      do{
        leftAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (mode COMMA_HERE)).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (! leftAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
      // printf ("fin intersection\n") ; fflush (stdout) ;
    //--- Check that only states in intersection are accessible
      if (! intersection.isEqualToBDD (leftAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (mode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Compute in right operand accessible states from intersection
      // printf ("right\n") ; fflush (stdout) ;
      C_BDD rightAccessiblesStates ;
      newlyAccessibleStates = C_BDD () ;
      do{
        // printf ("calcul...\n") ; fflush (stdout) ;
        rightAccessiblesStates = newlyAccessibleStates ;
        newlyAccessibleStates |= intersection ;
        const C_BDD x = (newlyAccessibleStates & accessibilityRelationStatesArray (testedMode COMMA_HERE)).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
        newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
      }while (! rightAccessiblesStates.isEqualToBDD (newlyAccessibleStates)) ;
    //--- Check that only states in intersection are accessible
      //printf ("Check that only states in intersection are accessible\n") ; fflush (stdout) ;
      if (! intersection.isEqualToBDD (rightAccessiblesStates)) {
        C_String errorMessage ;
        errorMessage << "accessibility of '" << modeNamesArray (testedMode COMMA_HERE)
                     << "' mode does not respect weak modal composition with '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' mode" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check initial states are compatible
      const bool initialStatesAreCompatible = (intersection & initialStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & initialStatesArray (testedMode COMMA_HERE)) ;
      if (! initialStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "initial states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    //--- Check terminal states are compatible
      //printf ("Check terminal states are compatible\n") ; fflush (stdout) ;
      const bool terminalStatesAreCompatible = (intersection & terminalStatesArray (mode COMMA_HERE)).isEqualToBDD (intersection & terminalStatesArray (testedMode COMMA_HERE)) ;
      if (! terminalStatesAreCompatible) {
        C_String errorMessage ;
        errorMessage << "terminal states of '"
                     << modeNamesArray (mode COMMA_HERE)
                     << "' and '"
                     << modeNamesArray (testedMode COMMA_HERE)
                     << "' modes are not compatible with weak modal composition" ;
        modeNamesArray (testedMode COMMA_HERE).signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      }
    }
  }
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- Compute modal composition
  // printf (" Compute modal composition\n") ; fflush (stdout) ;
  machine.mInitialStatesBDD = initialStatesArray (0 COMMA_HERE) ;
  machine.mTerminalStatesBDD = terminalStatesArray (0 COMMA_HERE) ;
  machine.mTransitionRelationBDD = accessibilityRelationStatesArray (0 COMMA_HERE) ;
  for (sint32 mode=1 ; mode < modeCount ; mode++) {
    machine.mInitialStatesBDD |= initialStatesArray (mode COMMA_HERE) ;
    machine.mTerminalStatesBDD |= terminalStatesArray (mode COMMA_HERE) ;
    machine.mTransitionRelationBDD |= accessibilityRelationStatesArray (mode COMMA_HERE) ;
  }
//--- Add to accessibility relation transition from terminal states to initial state (if accepted)
  for (sint32 sourceMode=0 ; sourceMode < modeCount ; sourceMode++) {
    for (sint32 targetMode=0 ; targetMode < modeCount ; targetMode++) {
      if (sourceMode != targetMode) {
      //--- Is theses transitions accepted ?
        bool isAccepted = true ;
        GGS_ListForModes::cElement * currentExclusion = mExclusionList.firstObject () ;
        while ((currentExclusion != NULL) && isAccepted) {
          isAccepted = (sourceMode != (sint32) currentExclusion->mSourceMode.uintValue ()) || (targetMode != (sint32) currentExclusion->mTargetMode.uintValue ()) ;
          currentExclusion = currentExclusion->nextObject () ;
        }
      //--- If accepted, add transition
        if (isAccepted) {
        //--- Add filtered transitions from terminal states to initial states
          addFilteredTransitions (machine.mTransitionRelationBDD,
                                  accessibilityRelationStatesArray (sourceMode COMMA_HERE),
                                  terminalStatesArray (sourceMode COMMA_HERE),
                                  variablesCount,
                                  inputVariablesCount,
                                  initialStatesArray (targetMode COMMA_HERE)) ;
        }
      }
    }
  }
//---------- Compute accessible states
  substitutionArray = new uint16 [variablesCount + variablesCount] ;
  for (uint16 i=0 ; i<variablesCount ; i++) {
    substitutionArray [i] = (uint16) (variablesCount + i) ;
    substitutionArray [variablesCount + i] = i ;
  }
  C_BDD newlyAccessibleStates ;
  do{
    machine.mAccessibleStatesBDD = newlyAccessibleStates ;
    newlyAccessibleStates |= machine.mInitialStatesBDD ;
    const C_BDD x = (newlyAccessibleStates & machine.mTransitionRelationBDD).substitution (substitutionArray, (uint16) (variablesCount + variablesCount)) ;
    newlyAccessibleStates |= x.existsOnBitsAfterNumber (variablesCount) ;
  }while (! machine.mAccessibleStatesBDD.isEqualToBDD (newlyAccessibleStates)) ;
  delete [] substitutionArray ; substitutionArray = NULL ;
//--- 
  machine.mTransitionRelationBDD &= machine.mAccessibleStatesBDD ;
  machine.mTerminalStatesBDD &= machine.mAccessibleStatesBDD ;

//---   
  TC_UniqueArray <C_String> transitionsVariableNameArray (variablesCount + variablesCount, "" COMMA_HERE) ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    transitionsVariableNameArray (i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
    transitionsVariableNameArray (variablesCount + i COMMA_HERE) = machine.mNamesArray (i COMMA_HERE) ;
  }
//--- Print messages
  const sint32 outputVariablesCount = variablesCount - inputAndInternalVariablesCount ;
  const sint32 internalVariablesCount = inputAndInternalVariablesCount - inputVariablesCount ;
  co << "  "
     << cStringWithSigned (inputVariablesCount) << " input variable" << ((inputVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (internalVariablesCount) << " internal variable" << ((internalVariablesCount > 1) ? "s" : "")
     << ", " << cStringWithSigned (outputVariablesCount) << " output variable" << ((outputVariablesCount > 1) ? "s" : "") << ";\n" ;
  uint64 n = machine.mInitialStatesBDD.valueCount (variablesCount) ;
  uint32 nodes = machine.mInitialStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " initial state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mInitialStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTerminalStatesBDD.valueCount (variablesCount) ;
  nodes = machine.mTerminalStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " terminal state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mTerminalStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mAccessibleStatesBDD.valueCount (variablesCount) ;
  nodes = machine.mAccessibleStatesBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " accessible state" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ");\n" ;
  if (inDisplayBDDvalues) {
    machine.mAccessibleStatesBDD.printBDD (machine.mNamesArray, 3) ;
  }
  n = machine.mTransitionRelationBDD.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = machine.mTransitionRelationBDD.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " transition" << ((n > 1) ? "s" : "")
     << " (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Restrict transitions to target == source
  C_BDD constraint = ~ C_BDD () ;
  for (sint32 i=0 ; i<variablesCount ; i++) {
    constraint &= C_BDD ((uint16) i, false) == C_BDD ((uint16) (variablesCount + i), false) ;
  }
  const C_BDD transitionsWithSourceEqualTarget = machine.mTransitionRelationBDD & constraint ; 
  n = transitionsWithSourceEqualTarget.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = transitionsWithSourceEqualTarget.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " transition" << ((n > 1) ? "s" : "")
     << " with target equals source ("
     << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
//--- Display transitions from states to different states
  const C_BDD t = machine.mTransitionRelationBDD & ~ transitionsWithSourceEqualTarget ;
  n = t.valueCount ((uint16) (variablesCount + variablesCount)) ;
  nodes = t.getBDDnodesCount () ;
  co << "  " << cStringWithUnsigned64 (n) << " transition" << ((n > 1) ? "s" : "")
     << " to other states (" << cStringWithUnsigned (nodes) << " node" << ((nodes > 1) ? "s" : "") << ").\n" ;
  if (inDisplayBDDvalues) {
    t.printBDD (transitionsVariableNameArray, 3) ;
  }
//--- Enter result in machines array
  ioSaraSystemArray.addObjectUsingSwap (machine) ;
//--- Mark and sweep unused BDD nodes
  C_BDD::markAndSweepUnusedNodes () ;
}

//---------------------------------------------------------------------------*
